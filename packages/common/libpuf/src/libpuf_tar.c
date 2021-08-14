/**
 * Copyright (c) 2017 Parrot Drones SAS
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *   * Neither the name of the Parrot Drones SAS Company nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE PARROT DRONES SAS COMPANY BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "libpuf_private.h"

#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <zlib.h>


#define TAR_HEADER_FILE "header"

static intptr_t gzopen_frontend(char *pathname, int oflags, int mode)
{
	const char *gzoflags;
	gzFile gzf;
	int fd;

	switch (oflags & O_ACCMODE) {
	case O_WRONLY:
		gzoflags = "wb";
		break;
	case O_RDONLY:
		gzoflags = "rb";
		break;
	default:
	case O_RDWR:
		errno = EINVAL;
		return -1;
	}

	fd = open(pathname, oflags, mode);
	if (fd == -1)
		return -1;

	if ((oflags & O_CREAT) && fchmod(fd, mode)) {
		close(fd);
		return -1;
	}

	gzf = gzdopen(fd, gzoflags);
	if (!gzf) {
		close(fd);
		errno = ENOMEM;
		return -1;
	}

	return (intptr_t)gzf;
}

static int gzclose_frontend(intptr_t fd)
{
	return gzclose((gzFile)fd);
}

static ssize_t gzread_frontend(intptr_t fd, void *ptr, size_t len)
{
	return gzread((gzFile)fd, ptr, len);
}

static ssize_t gzwrite_frontend(intptr_t fd, const void *ptr, size_t len)
{
	return gzwrite((gzFile)fd, ptr, len);
}

/* Can't be const because libtar expects a non-const tartype_t, but will not
   modify it */
static tartype_t gztype = {(openfunc_t)gzopen_frontend,
			   gzclose_frontend,
			   gzread_frontend,
			   gzwrite_frontend};

struct puf_tar *puf_tar_new(const char *path, int is_gzip)
{
	int res;
	struct puf_tar *puf_tar = NULL;
	if (!path)
		return NULL;

	puf_tar = calloc(1, sizeof(*puf_tar));
	if (!puf_tar)
		return NULL;

	puf_tar->path = strdup(path);
	if (!puf_tar->path)
		goto error;
	puf_tar->tartype = is_gzip ? &gztype : NULL;

	res = puf_tar_extract_to_buf(puf_tar,
				     TAR_HEADER_FILE,
				     (uint8_t *)&puf_tar->header,
				     sizeof(puf_tar->header));
	if (res < 0)
		goto error;

	return puf_tar;

error:
	puf_tar_destroy(puf_tar);
	return NULL;
}

void puf_tar_destroy(struct puf_tar *puf_tar)
{
	if (!puf_tar)
		return;
	if (puf_tar->path)
		free(puf_tar->path);
	free(puf_tar);
}

int puf_tar_get_version_from_plf(struct puf_tar *puf_tar,
				 struct puf_version *version)
{
	if (!puf_tar || !version)
		return -EINVAL;

	return puf_plf_get_version_from_buffer(
		(uint8_t *)&puf_tar->header, sizeof(puf_tar->header), version);
}

int puf_tar_get_version_from_prop(struct puf_tar *puf_tar,
				  struct puf_version *version)
{
	int ret = -EINVAL;
	char *prop;
	char *eol; /* string to contain build version property */
	uint8_t *buf; /* buffer to hold build.prop content */

	if (!puf_tar || !version)
		return -EINVAL;
	buf = calloc(MAX_BUILD_PROP_SIZE, sizeof(uint8_t));
	if (buf == NULL)
		goto end;

	ret = puf_tar_extract_to_buf(
		puf_tar, PROP_SOURCE_PATH, buf, MAX_BUILD_PROP_SIZE);
	if (ret < 0)
		goto end;

	/* Get version name string */
	prop = strstr((const char *)buf, PROP_BUILD_VERSION);
	if (prop == NULL)
		goto end;
	prop = prop + strlen(PROP_BUILD_VERSION);

	eol = strchr(prop, '\n');
	if (eol == NULL)
		goto end;
	*eol = '\0';
	ret = puf_version_fromstring(prop, version);
	if (ret != 0)
		goto end;

end:
	free(buf);
	return ret;
}


int puf_tar_get_app_id(struct puf_tar *puf_tar, uint32_t *app_id)
{
	if (!puf_tar || !app_id)
		return -EINVAL;

	*app_id = puf_tar->header.p_app;
	return 0;
}

int puf_tar_get_target_id(struct puf_tar *puf_tar, uint32_t *target_id)
{
	if (!puf_tar || !target_id)
		return -EINVAL;

	*target_id = puf_tar->header.p_targ;
	return 0;
}

int puf_tar_check(struct puf_tar *puf_tar)
{
	int ret = -ENOENT;
	TAR *t;
	const char *msg = NULL;

	if (!puf_tar)
		return -EINVAL;

	if (tar_open(&t, puf_tar->path, puf_tar->tartype, O_RDONLY, 0, 0) == -1)
		return -EIO;

	/* We parse the whole archive to check its integrity. */
	while ((ret = th_read(t)) == 0) {
		if (TH_ISREG(t) && tar_skip_regfile(t) != 0) {
			ret = -EIO;
			goto out;
		}
	}

	/* In case of success, final result is 1 otherwise -1 */
	if (ret < 0) {
		ret = -EIO;
	} else if (puf_tar->tartype == &gztype) {
		/* Check gzip error, to detect early EOF */
		msg = gzerror((gzFile)t->fd, &ret);
		if (ret != Z_OK) {
			ULOGE("gzerror: %s", msg);
			ret = -EIO;
		} else {
			ret = 0;
		}
	} else {
		ret = 0;
	}

out:
	tar_close(t);
	return ret;
}

struct get_file_size_ctx {
	const char *fname;
	size_t size;
	int found;
};

static int get_file_size_begin_cb(const struct puf_walk_member *member,
				  void *userdata)
{
	struct get_file_size_ctx *ctx = userdata;

	/* If this is the member we search, get info and stop enumeration */
	if (strcmp(member->name, ctx->fname) == 0) {
		ctx->size = member->size;
		ctx->found = 1;
		return 0;
	}

	/* Continue enumeration */
	return 1;
}

int puf_tar_get_file_size(struct puf_tar *puf_tar, const char *fname)
{
	int ret = 0;
	struct get_file_size_ctx ctx = {
		.fname = fname,
		.size = 0,
		.found = 0,
	};
	struct puf_walk_cbs cbs = {
		.userdata = &ctx,
		.member_begin = &get_file_size_begin_cb,
		.member_data = NULL,
		.member_end = NULL,
	};

	ret = puf_tar_walk(puf_tar, &cbs);

	return ret < 0 ? ret : ctx.found ? (int)ctx.size : -ENOENT;
}

struct extract_to_buf_ctx {
	const char *fname;
	uint8_t *buf;
	size_t len;
	size_t off;
	int found;
};

static int extract_to_buf_begin_cb(const struct puf_walk_member *member,
				   void *userdata)
{
	/* Set flag if we found our member,
	 * check if provided buffer is big enough */
	struct extract_to_buf_ctx *ctx = userdata;
	if (strcmp(member->name, ctx->fname) == 0) {
		ctx->found = 1;
		if (member->size > ctx->len)
			return -EINVAL;
	}
	return 1;
}

static int extract_to_buf_data_cb(const struct puf_walk_member *member,
				  const uint8_t *buf,
				  size_t len,
				  void *userdata)
{
	/* Copy data if we found our member */
	struct extract_to_buf_ctx *ctx = userdata;
	if (ctx->found && ctx->off + len <= ctx->len) {
		memcpy(ctx->buf + ctx->off, buf, len);
		ctx->off += len;
	}
	return 1;
}

static int extract_to_buf_end_cb(const struct puf_walk_member *member,
				 void *userdata)
{
	/* Stop enumeration if we found our member */
	struct extract_to_buf_ctx *ctx = userdata;
	return !ctx->found;
}


int puf_tar_extract_to_buf(struct puf_tar *puf_tar,
			   const char *fname,
			   uint8_t *buf,
			   size_t len)
{
	int ret = 0;
	struct extract_to_buf_ctx ctx = {
		.fname = fname,
		.buf = buf,
		.len = len,
		.off = 0,
		.found = 0,
	};
	struct puf_walk_cbs cbs = {
		.userdata = &ctx,
		.member_begin = &extract_to_buf_begin_cb,
		.member_data = &extract_to_buf_data_cb,
		.member_end = &extract_to_buf_end_cb,
	};

	ret = puf_tar_walk(puf_tar, &cbs);

	return ret < 0 ? ret : ctx.found ? 0 : -ENOENT;
}

int puf_tar_extract_to_file(struct puf_tar *puf_tar,
			    const char *fname,
			    const char *oname)
{
	int ret = -ENOENT;
	TAR *t;

	if (!puf_tar || !fname || !oname)
		return -EINVAL;

	if (tar_open(&t, puf_tar->path, puf_tar->tartype, O_RDONLY, 0, 0) == -1)
		return -EIO;

	while (th_read(t) == 0) {
		char *pathname = th_get_pathname(t);
		/* strip the leading ./ in pathname if present */
		if (strlen(pathname) > 2 && pathname[0] == '.' &&
		    pathname[1] == '/')
			pathname = &pathname[2];
		if (strcmp(pathname, fname) == 0) {
			if (tar_extract_file(t, (char *)oname) < 0)
				ret = -EIO;
			else
				ret = 0;
			break;
		}

		if (TH_ISREG(t) && tar_skip_regfile(t) != 0) {
			ret = -EIO;
			break;
		}
	}

	tar_close(t);

	return ret;
}

/**
 *
 * @return 1 if member was completely read.
 * @return 0 if callback asks to stop.
 * @return -EIO in case of error during read.
 */
static int walk_read_member(TAR *t,
			    const struct puf_walk_member *member,
			    const struct puf_walk_cbs *cbs)
{
	int ret = 0;
	uint8_t buf[T_BLOCKSIZE];
	size_t remaining = member->size, len = 0;

	while (remaining > 0) {
		len = remaining > T_BLOCKSIZE ? T_BLOCKSIZE : remaining;
		if (tar_block_read(t, buf) < 0)
			return -EIO;

		ret = (*cbs->member_data)(member, buf, len, cbs->userdata);
		if (ret <= 0)
			return ret;
		remaining -= len;
	}

	return 1;
}

int puf_tar_walk(struct puf_tar *puf_tar, const struct puf_walk_cbs *cbs)
{
	int ret = 0;
	TAR *t;
	if (!puf_tar || !cbs)
		return -EINVAL;

	if (tar_open(&t, puf_tar->path, puf_tar->tartype, O_RDONLY, 0, 0) < 0)
		return -EIO;

	while (th_read(t) == 0) {
		char *pathname = th_get_pathname(t);
		/* Strip the leading ./ in pathname if present */
		if (strlen(pathname) > 2 && pathname[0] == '.' &&
		    pathname[1] == '/') {
			pathname = &pathname[2];
		}

		/* Setup member info */
		struct puf_walk_member member;
		memset(&member, 0, sizeof(member));
		member.name = pathname;
		member.size = th_get_size(t);
		member.mode = th_get_mode(t);

		if (cbs->member_begin) {
			ret = (*cbs->member_begin)(&member, cbs->userdata);
			if (ret <= 0)
				break;
		}

		/* For regular files, Walk data or skip */
		if (TH_ISREG(t)) {
			if (cbs->member_data) {
				ret = walk_read_member(t, &member, cbs);
				if (ret <= 0)
					break;
			} else if (tar_skip_regfile(t) < 0) {
				ret = -EIO;
				break;
			}
		}

		if (cbs->member_end) {
			ret = (*cbs->member_end)(&member, cbs->userdata);
			if (ret <= 0)
				break;
		}
	}

	tar_close(t);
	return ret;
}

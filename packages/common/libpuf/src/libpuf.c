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

#if defined(BUILD_LIBULOG)
ULOG_DECLARE_TAG(ULOG_TAG);
#endif

#include <ctype.h>
#include <inttypes.h>
#include <stdlib.h>
#include <string.h>

static enum puf_file_type puf_get_file_type(const char *fname)
{
	const char *ext;
	if (!fname || (strlen(fname) < 5))
		return FILE_TYPE_UNKNOWN;
	ext = fname + strlen(fname) - 4;

	/* If the file ends with .tmp, read the previous 4 chars */
	if (strcmp(ext, ".tmp") == 0) {
		if (strlen(fname) < 9)
			return FILE_TYPE_UNKNOWN;
		ext = fname + strlen(fname) - 8;
	}

	if (strncmp(ext, ".plf", 4) == 0)
		return FILE_TYPE_PLF;
	if (strncmp(ext, ".tar", 4) == 0)
		return FILE_TYPE_TAR;
	if (strncmp(ext, "r.gz", 4) == 0)
		return FILE_TYPE_GZIP;
	return FILE_TYPE_UNKNOWN;
}

EXPORT_SYMBOL
struct puf *puf_new(const char *path)
{
	struct puf *puf = NULL;
	enum puf_file_type ftype = puf_get_file_type(path);

	puf = calloc(1, sizeof(*puf));
	if (!puf)
		return NULL;

	switch (ftype) {
	case FILE_TYPE_PLF:
		puf->plf = puf_plf_new(path);
		if (!puf->plf)
			goto error;
		break;
	case FILE_TYPE_TAR:
	case FILE_TYPE_GZIP:
		puf->tar = puf_tar_new(path, ftype == FILE_TYPE_GZIP);
		if (!puf->tar)
			goto error;
		break;
	case FILE_TYPE_UNKNOWN:
	default:
		goto error;
	}

	return puf;

error:
	puf_destroy(puf);
	return NULL;
}

EXPORT_SYMBOL
void puf_destroy(struct puf *puf)
{
	if (!puf)
		return;
	if (puf->plf)
		puf_plf_destroy(puf->plf);
	if (puf->tar)
		puf_tar_destroy(puf->tar);
	free(puf);
}

EXPORT_SYMBOL
int puf_get_version(struct puf *puf, struct puf_version *version)
{
	int ret;
	int ret_tmp;
	struct puf_version version_tmp;

	if (!puf || !version || (!puf->plf && !puf->tar))
		return -EINVAL;
	memset(version, 0, sizeof(*version));
	if (puf->plf) {
		ret = puf_plf_get_version(puf->plf, version);
	} else {
		ret = puf_tar_get_version_from_plf(puf->tar, version);
		if (ret == 0 && version->has_custom) {
			/* Get remote custom name from build.propp file */
			ret_tmp = puf_tar_get_version_from_prop(puf->tar,
								&version_tmp);
			if (ret_tmp != 0)
				goto end;
			if (puf_compare_version(&version_tmp, version) != 0)
				goto end;
			strcpy(version->custom_name, version_tmp.custom_name);
			version->custom_number = version_tmp.custom_number;
		}
	}

end:
	return ret;
}

EXPORT_SYMBOL
int puf_get_app_id(struct puf *puf, uint32_t *app_id)
{
	if (!puf || !app_id || (!puf->plf && !puf->tar))
		return -EINVAL;
	if (puf->plf)
		return puf_plf_get_app_id(puf->plf, app_id);
	else
		return puf_tar_get_app_id(puf->tar, app_id);
}

EXPORT_SYMBOL
int puf_get_target_id(struct puf *puf, uint32_t *target_id)
{
	if (!puf || !target_id || (!puf->plf && !puf->tar))
		return -EINVAL;
	if (puf->plf)
		return puf_plf_get_target_id(puf->plf, target_id);
	else
		return puf_tar_get_target_id(puf->tar, target_id);
}

EXPORT_SYMBOL
int puf_get_file_size(struct puf *puf, const char *fname)
{
	if (!puf || !fname || (!puf->plf && !puf->tar))
		return -EINVAL;
	if (puf->plf)
		return puf_plf_get_file_size(puf->plf, fname);
	else
		return puf_tar_get_file_size(puf->tar, fname);
}

EXPORT_SYMBOL
int puf_check(struct puf *puf)
{
	if (!puf || (!puf->plf && !puf->tar))
		return -EINVAL;
	if (puf->plf)
		return puf_plf_check(puf->plf);
	else
		return puf_tar_check(puf->tar);
}

EXPORT_SYMBOL
int puf_extract_to_buf(struct puf *puf,
		       const char *fname,
		       uint8_t *buf,
		       size_t len)
{
	if (!puf || !fname || !buf || (!puf->plf && !puf->tar))
		return -EINVAL;
	if (puf->plf)
		return puf_plf_extract_to_buf(puf->plf, fname, buf, len);
	else
		return puf_tar_extract_to_buf(puf->tar, fname, buf, len);
}

EXPORT_SYMBOL
int puf_extract_to_file(struct puf *puf, const char *fname, const char *oname)
{
	if (!puf || !fname || !oname || (!puf->plf && !puf->tar))
		return -EINVAL;
	if (puf->plf)
		return puf_plf_extract_to_file(puf->plf, fname, oname);
	else
		return puf_tar_extract_to_file(puf->tar, fname, oname);
}

EXPORT_SYMBOL
int puf_walk(struct puf *puf, const struct puf_walk_cbs *cbs)
{
	if (!puf || !cbs)
		return -EINVAL;
	if (puf->plf)
		return puf_plf_walk(puf->plf, cbs);
	else
		return puf_tar_walk(puf->tar, cbs);
}

EXPORT_SYMBOL
int puf_check_version(const struct puf_version *v)
{
	/* A NULL version is invalid */
	if (!v)
		return -EINVAL;

	/* 0.0.0 versions should always be type DEV */
	if (v->major == 0 && v->minor == 0 && v->patch == 0) {
		if (v->type != PUF_VERSION_TYPE_DEV)
			return -EINVAL;
	}
	/* DEV version should always be 0.0.0 */
	if (v->type == PUF_VERSION_TYPE_DEV) {
		if (v->major != 0 || v->minor != 0 || v->patch != 0)
			return -EINVAL;
	}

	/* DEV / RELEASE version should have a zero build number */
	if (v->type == PUF_VERSION_TYPE_DEV ||
	    v->type == PUF_VERSION_TYPE_RELEASE) {
		if (v->build != 0)
			return -EINVAL;
	} else {
		/* others should not have build 0 */
		if (v->build == 0)
			return -EINVAL;
	}

	/* custom version shoud have a non-empty name and a non-zero number,
	 * and has_custom should only be 0 or 1 */
	if (v->has_custom) {
		if (v->has_custom != 1)
			return -EINVAL;
		if (v->custom_name[0] == '\0')
			return -EINVAL;
		if (v->custom_number == 0)
			return -EINVAL;
	}

	return 0;
}

EXPORT_SYMBOL
int puf_compare_version(const struct puf_version *v1,
			const struct puf_version *v2)
{
	int e1, e2;

	e1 = puf_check_version(v1);
	e2 = puf_check_version(v2);
	/* Two invalid version compares as equals */
	if (e1 && e2)
		return 0;
	/* Any "valid" version is newer than an invalid version */
	if (e1 && !e2)
		return -1;
	if (!e1 && e2)
		return 1;

	/* compare, in order, major, minor, patch, type, build */
	if (v1->major != v2->major)
		return (v1->major > v2->major) ? 1 : -1;
	if (v1->minor != v2->minor)
		return (v1->minor > v2->minor) ? 1 : -1;
	if (v1->patch != v2->patch)
		return (v1->patch > v2->patch) ? 1 : -1;
	/* type enum is in order for comparaison */
	if (v1->type != v2->type)
		return (v1->type > v2->type) ? 1 : -1;
	if (v1->build != v2->build)
		return (v1->build > v2->build) ? 1 : -1;

	/* if still the same version, a custom one is
	 * newer than a non-custom one */
	if (v1->has_custom != v2->has_custom)
		return v1->has_custom - v2->has_custom;

	return 0;
}

EXPORT_SYMBOL
int puf_version_tostring(const struct puf_version *version,
			 char *buf,
			 size_t len)
{
	int p_len;
	if (!version || !buf)
		return -EINVAL;
	p_len = puf_check_version(version);
	if (p_len < 0)
		return p_len;

	switch (version->type) {
	case PUF_VERSION_TYPE_DEV:
		p_len = snprintf(buf,
				 len,
				 "%" PRIu32 ".%" PRIu32 ".%" PRIu32,
				 version->major,
				 version->minor,
				 version->patch);
		break;
	case PUF_VERSION_TYPE_ALPHA:
		p_len = snprintf(buf,
				 len,
				 "%" PRIu32 ".%" PRIu32 ".%" PRIu32
				 "-alpha%" PRIu32,
				 version->major,
				 version->minor,
				 version->patch,
				 version->build);
		break;
	case PUF_VERSION_TYPE_BETA:
		p_len = snprintf(buf,
				 len,
				 "%" PRIu32 ".%" PRIu32 ".%" PRIu32
				 "-beta%" PRIu32,
				 version->major,
				 version->minor,
				 version->patch,
				 version->build);
		break;
	case PUF_VERSION_TYPE_RC:
		p_len = snprintf(buf,
				 len,
				 "%" PRIu32 ".%" PRIu32 ".%" PRIu32
				 "-rc%" PRIu32,
				 version->major,
				 version->minor,
				 version->patch,
				 version->build);
		break;
	case PUF_VERSION_TYPE_RELEASE:
		p_len = snprintf(buf,
				 len,
				 "%" PRIu32 ".%" PRIu32 ".%" PRIu32,
				 version->major,
				 version->minor,
				 version->patch);
		break;
	default:
		return -EINVAL;
	}

	if (p_len >= (int)len)
		return -EINVAL;

	/* Append custom */
	if (version->has_custom) {
		buf += p_len;
		len -= p_len;
		p_len = snprintf(buf,
				 len,
				 "+%s%" PRIu32,
				 version->custom_name,
				 version->custom_number);
		if (p_len >= (int)len)
			return -EINVAL;
	}

	return 0;
}

EXPORT_SYMBOL
int puf_version_fromstring(const char *version_str, struct puf_version *version)
{
	char buf[256];
	char *custom;
	int ret;

	if (!version || !version_str)
		return -EINVAL;

	memset(version, 0, sizeof(*version));

	/* copy string in buffer */
	memset(buf, 0, sizeof(buf));
	strncpy(buf, version_str, sizeof(buf) - 1);

	/* parse the custom part first, if present */
	custom = strchr(buf, '+');
	if (custom) {
		/* change the '+' into a null, so the standard version parsing
		 * can be used below */
		*custom = '\0';

		custom++;
		version->has_custom = 1;
		ret = sscanf(custom,
			     "%32[a-z_-]%" SCNu32,
			     version->custom_name,
			     &version->custom_number);
		if (ret != 2) {
			/* if the custom part can not be parsed properly,
			 * stop the parsing here and return an error */
			return -EINVAL;
		}
	}

	/* try alpha format */
	ret = sscanf(buf,
		     "%" SCNu32 ".%" SCNu32 ".%" SCNu32 "-alpha%" SCNu32,
		     &version->major,
		     &version->minor,
		     &version->patch,
		     &version->build);
	if (ret == 4) {
		version->type = PUF_VERSION_TYPE_ALPHA;
		goto check;
	}

	/* try beta format */
	ret = sscanf(buf,
		     "%" SCNu32 ".%" SCNu32 ".%" SCNu32 "-beta%" SCNu32,
		     &version->major,
		     &version->minor,
		     &version->patch,
		     &version->build);
	if (ret == 4) {
		version->type = PUF_VERSION_TYPE_BETA;
		goto check;
	}

	/* try rc format */
	ret = sscanf(buf,
		     "%" SCNu32 ".%" SCNu32 ".%" SCNu32 "-rc%" SCNu32,
		     &version->major,
		     &version->minor,
		     &version->patch,
		     &version->build);
	if (ret == 4) {
		version->type = PUF_VERSION_TYPE_RC;
		goto check;
	}

	/* try production format */
	ret = sscanf(buf,
		     "%" SCNu32 ".%" SCNu32 ".%" SCNu32,
		     &version->major,
		     &version->minor,
		     &version->patch);
	if (ret == 3) {
		if (version->major == 0 && version->minor == 0 &&
		    version->patch == 0) {
			version->type = PUF_VERSION_TYPE_DEV;
			version->build = 0;
			goto check;
		}
		version->type = PUF_VERSION_TYPE_RELEASE;
		version->build = 0;
		goto check;
	}

	/* strange version : mark as invalid */
	version->type = PUF_VERSION_TYPE_DEV;
	version->build = 1;

check:
	/* for non-dev versions, check that len(version_str) is the same as
	 * len(puf_version_tostring(version)) */
	if (version->type != PUF_VERSION_TYPE_DEV) {
		ret = puf_version_tostring(version, buf, sizeof(buf));
		if (ret != 0)
			return ret;
		if (strlen(buf) != strlen(version_str))
			return -EINVAL;
	}
	return puf_check_version(version);
}

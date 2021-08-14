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

#ifndef _LIBPUF_H
#define _LIBPUF_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/**
 * Type of versions.
 * The order of the values is relevant for version sorting.
 */
enum puf_version_type {
	PUF_VERSION_TYPE_DEV,
	PUF_VERSION_TYPE_ALPHA,
	PUF_VERSION_TYPE_BETA,
	PUF_VERSION_TYPE_RC,
	PUF_VERSION_TYPE_RELEASE,
};

struct puf_version {
	uint32_t major;
	uint32_t minor;
	uint32_t patch;
	enum puf_version_type type;
	uint32_t build; /* Always 0 if type is DEV or RELEASE */
	int has_custom; /* 1 if the version has a custom part, 0 otherwise */
	char custom_name[33]; /* custom feature name */
	uint32_t custom_number; /* custom feature number (non-zero) */
};

struct puf_walk_member {
	const char *name; /* Name of member */
	size_t size; /* Size for regular files */
	uint32_t mode; /* File type and mode */
};

/** puf_walk callbaks. They are all optional */
struct puf_walk_cbs {
	/** User data to pass to callbacks. */
	void *userdata;

	/**
	 * Begining of member
	 * @return 1 to continue, 0 to stop, negative errno for error.
	 */
	int (*member_begin)(const struct puf_walk_member *member,
			    void *userdata);

	/**
	 * Data of member can be called several times.
	 * @return 1 to continue, 0 to stop, negative errno for error.
	 */
	int (*member_data)(const struct puf_walk_member *member,
			   const uint8_t *buf,
			   size_t len,
			   void *userdata);

	/**
	 * End of member.
	 * @return 1 to continue, 0 to stop, negative errno for error.
	 */
	int (*member_end)(const struct puf_walk_member *member, void *userdata);
};

/**
 * Puf context, an opaque structure.
 */
struct puf;

/**
 * Create a new puf context from the given path
 *
 * @param path: path to a parrot firmware file
 * @return      a puf context if successful, NULL if an error occurred
 */
struct puf *puf_new(const char *path);

/**
 * Destroy a puf context
 *
 * @param puf: puf context
 */
void puf_destroy(struct puf *puf);

/**
 * Get the version of a puf context
 *
 * @param puf:     puf context
 * @param version: a pointer to a puf_version struct
 * @return         0 if successful, -errno if an error occurred
 */
int puf_get_version(struct puf *puf, struct puf_version *version);

/**
 * Get the app_id of a puf_context
 * The app_id is an opaque int value which describes the product targeted by the
 * puf_context. Two puf_context with the same app_id represent updates for the
 * same product.
 *
 * @param puf:    puf context
 * @param app_id: a pointer which will hold the app_id value
 * @return        0 if successful, -errno if an error occurred
 */
int puf_get_app_id(struct puf *puf, uint32_t *app_id);

/**
 * Get the target_id of a puf_context
 * The target_id is an opaque int value which describes the cpu targeted by the
 * puf_context. Two puf_context with the same target_id represent updates for
 * the same cpu.
 *
 * @param puf:       puf context
 * @param target_id: a pointer which will hold the target_id value
 * @return           0 if successful, -errno if an error occurred
 */
int puf_get_target_id(struct puf *puf, uint32_t *target_id);

/**
 * Get the size of a file in a puf context
 *
 * @param puf:   puf context
 * @param fname: file name in puf context
 * @return       file size if present in puf, -errno if an error occurred
 */
int puf_get_file_size(struct puf *puf, const char *fname);

/**
 * Check integrity of update file.
 * @param puf:       puf context
 * @return           0 if successful, -errno if an error occurred
 */
int puf_check(struct puf *puf);

/**
 * Extract a file from the puf context to a buffer
 *
 * @param puf:   puf context
 * @param fname: file name to extract
 * @param buf:   buffer for the file contents
 * @param len:   size of the buffer
 * @return       0 if successful, -errno if an error occurred
 */
int puf_extract_to_buf(struct puf *puf,
		       const char *fname,
		       uint8_t *buf,
		       size_t len);

/**
 * Extract a file from the puf context to a file on mass storage
 *
 * @param puf:   puf context
 * @param fname: file name to extract
 * @param oname: name of the extracted file
 * @return       0 if successful, -errno if an error occurred
 */
int puf_extract_to_file(struct puf *puf, const char *fname, const char *oname);

/**
 * Walk the file and call functions for each member.
 *
 * @param puf:   puf context
 * @param cbs:   structure with functions to be called for each member.
 * @return       >= 0 if successful, -errno if an error occurred
 *               The returned value is either a negative errno from libpuf
 *               itself, or the last value returned from one of the callback
 *               functions in cbs.
 */
int puf_walk(struct puf *puf, const struct puf_walk_cbs *cbs);

/**
 * Check if a puf_version represent a valid version.
 * @param v: version to check
 * @return 0 if the version is valid, -EINVAL otherwise
 */
int puf_check_version(const struct puf_version *v);

/**
 * Compare two puf_versions
 *
 * @param v1: first version to compare
 * @param v2: second version to compare
 * @return    -1, 0 or 1 respectively if v1 is older, same or newer than v2.
 */
int puf_compare_version(const struct puf_version *v1,
			const struct puf_version *v2);

/**
 * Convert a puf_version to a string
 *
 * @param version: puf_version to convert
 * @param buf:     buffer for the resulting string
 * @param len:     length of the buffer
 * @return         0 if successful, -errno if an error occurred
 */
int puf_version_tostring(const struct puf_version *version,
			 char *buf,
			 size_t len);

/**
 * Convert a string to a puf_version
 *
 * @param str_version: version string to convert
 * @param version:     puf_version to fill
 * @return             0 if successful, -errno if an error occurred
 */
int puf_version_fromstring(const char *version_str,
			   struct puf_version *version);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _LIBPUF_H */

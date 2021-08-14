/**
 * Copyright (c) 2018 Parrot Drones SAS
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

#include "puf_test.h"

#define TARGET_ID 0x6
#define APP_ID 0x79

static const struct puf_version g_version = {
	.major = 1,
	.minor = 2,
	.patch = 3,
	.type = PUF_VERSION_TYPE_ALPHA,
	.build = 1,
};

static const struct puf_version g_zero_custom_version = {
	.major = 0,
	.minor = 0,
	.patch = 0,
	.type = PUF_VERSION_TYPE_DEV,
	.build = 0,
	.has_custom = 1,
	.custom_name = "custom",
	.custom_number = 2,
};

static void test_tar_load(void)
{
	int ret = 0;
	struct puf *puf = NULL;

	/* Normal archive */
	puf = puf_new(puf_test_get_fullpath("archive1.tar"));
	CU_ASSERT_PTR_NOT_NULL_FATAL(puf);
	puf_test_check_header(puf, TARGET_ID, APP_ID, &g_version);
	ret = puf_check(puf);
	CU_ASSERT_EQUAL(ret, 0);
	puf_destroy(puf);

	/* Compressed archive */
	puf = puf_new(puf_test_get_fullpath("archive2.tar.gz"));
	CU_ASSERT_PTR_NOT_NULL_FATAL(puf);
	puf_test_check_header(puf, TARGET_ID, APP_ID, &g_version);
	ret = puf_check(puf);
	CU_ASSERT_EQUAL(ret, 0);
	puf_destroy(puf);

	/* Truncated archive not detected during load */
	puf = puf_new(puf_test_get_fullpath("archive1-truncated.tar"));
	CU_ASSERT_PTR_NOT_NULL_FATAL(puf);
	puf_test_check_header(puf, TARGET_ID, APP_ID, &g_version);
	ret = puf_check(puf);
	CU_ASSERT_EQUAL(ret, -EIO);
	puf_destroy(puf);

	/* Truncated archive not detected during load */
	puf = puf_new(puf_test_get_fullpath("archive2-truncated.tar.gz"));
	CU_ASSERT_PTR_NOT_NULL_FATAL(puf);
	puf_test_check_header(puf, TARGET_ID, APP_ID, &g_version);
	ret = puf_check(puf);
	CU_ASSERT_EQUAL(ret, -EIO);
	puf_destroy(puf);

	/* tar.bz2 not supported */
	puf = puf_new(puf_test_get_fullpath("archive3.tar.bz2"));
	CU_ASSERT_PTR_NULL(puf);

	/* Archive without special header file */
	puf = puf_new(puf_test_get_fullpath("archive4.tar"));
	CU_ASSERT_PTR_NULL(puf);
	puf = puf_new(puf_test_get_fullpath("archive5.tar.gz"));
	CU_ASSERT_PTR_NULL(puf);

	/* Empty files */
	puf = puf_new(puf_test_get_fullpath("empty.tar"));
	CU_ASSERT_PTR_NULL(puf);
	puf = puf_new(puf_test_get_fullpath("empty.tar.gz"));
	CU_ASSERT_PTR_NULL(puf);

	/* Normal 0.0.0 archive with custom part */
	puf = puf_new(puf_test_get_fullpath("archive_custom.tar.gz"));
	CU_ASSERT_PTR_NOT_NULL_FATAL(puf);
	puf_test_check_header(puf, TARGET_ID, APP_ID, &g_zero_custom_version);
	ret = puf_check(puf);
	CU_ASSERT_EQUAL(ret, 0);
	puf_destroy(puf);

	puf = puf_new(NULL);
	CU_ASSERT_PTR_NULL(puf);
	ret = puf_check(puf);
	CU_ASSERT_EQUAL(ret, -EINVAL);
	puf_destroy(NULL);
}

static void test_tar_extract(void)
{
	puf_test_check_extract(puf_test_get_fullpath("archive1.tar"));
	puf_test_check_extract(puf_test_get_fullpath("archive2.tar.gz"));
}

CU_TestInfo g_puf_test_tar[] = {
	{(char *)"load", &test_tar_load},
	{(char *)"extract", &test_tar_extract},
	CU_TEST_INFO_NULL,
};

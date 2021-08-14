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

#include <tests/puf_test.h>

extern CU_TestInfo g_puf_test_tar[];
extern CU_TestInfo g_puf_test_version[];

static CU_SuiteInfo s_suites[] = {
	{(char *)"version", NULL, NULL, g_puf_test_version},
	{(char *)"api", NULL, NULL, g_puf_test_tar},
	CU_SUITE_INFO_NULL,
};

int main()
{
	CU_initialize_registry();
	CU_register_suites(s_suites);
	if (getenv("CUNIT_OUT_NAME") != NULL)
		CU_set_output_filename(getenv("CUNIT_OUT_NAME"));
	if (getenv("CUNIT_AUTOMATED") != NULL) {
		CU_automated_run_tests();
		CU_list_tests_to_file();
	} else {
		CU_basic_set_mode(CU_BRM_VERBOSE);
		CU_basic_run_tests();
	}
	CU_cleanup_registry();
	return 0;
}

void puf_test_check_header(struct puf *puf,
			   uint32_t target_id,
			   uint32_t app_id,
			   const struct puf_version *version)
{
	int ret = 0;
	uint32_t _target_id = 0, _app_id = 0;

	struct puf_version _version;
	/* Initialize _version with bad values */
	memset(&_version, 0xff, sizeof(_version));


	ret = puf_get_target_id(puf, &_target_id);
	CU_ASSERT_EQUAL(ret, 0);
	ret = puf_get_app_id(puf, &_app_id);
	CU_ASSERT_EQUAL(ret, 0);
	ret = puf_get_version(puf, &_version);
	CU_ASSERT_EQUAL(ret, 0);

	CU_ASSERT_EQUAL(_target_id, target_id);
	CU_ASSERT_EQUAL(_app_id, app_id);
	CU_ASSERT_EQUAL(_version.major, version->major);
	CU_ASSERT_EQUAL(_version.minor, version->minor);
	CU_ASSERT_EQUAL(_version.patch, version->patch);
	CU_ASSERT_EQUAL(_version.type, version->type);
	CU_ASSERT_EQUAL(_version.build, version->build);
	CU_ASSERT_EQUAL(_version.has_custom, version->has_custom);
	CU_ASSERT_STRING_EQUAL(_version.custom_name, version->custom_name);
	CU_ASSERT_EQUAL(_version.custom_number, version->custom_number);
}

void puf_test_check_extract(const char *filepath)
{
	int ret = 0;
	struct puf *puf = NULL;
	uint8_t buf[16];
	uint8_t buf2[1000];

	puf = puf_new(filepath);
	CU_ASSERT_PTR_NOT_NULL_FATAL(puf);

	ret = puf_get_file_size(puf, "header");
	CU_ASSERT_EQUAL(ret, 56);
	ret = puf_get_file_size(puf, "file1");
	CU_ASSERT_EQUAL(ret, 5);
	ret = puf_get_file_size(puf, "file2");
	CU_ASSERT_EQUAL(ret, 5);
	ret = puf_get_file_size(puf, "file3");
	CU_ASSERT_EQUAL(ret, 1000);

	ret = puf_extract_to_buf(puf, "file1", buf, sizeof(buf));
	CU_ASSERT_EQUAL(ret, 0);
	CU_ASSERT_EQUAL(memcmp(buf, "data1", 5), 0);

	ret = puf_extract_to_buf(puf, "file2", buf, sizeof(buf));
	CU_ASSERT_EQUAL(ret, 0);
	CU_ASSERT_EQUAL(memcmp(buf, "data2", 5), 0);

	ret = puf_extract_to_buf(puf, "file3", buf, sizeof(buf));
	CU_ASSERT_EQUAL(ret, -EINVAL);
	ret = puf_extract_to_buf(puf, "file3", buf2, sizeof(buf2));
	CU_ASSERT_EQUAL(ret, 0);
	int ok = 1;
	for (int i = 0; i < 1000; i++)
		ok = ok && buf2[i] == 'A';
	CU_ASSERT(ok);

	const char *tmpfilename = "/tmp/tst-libpuf.file";
	ret = puf_extract_to_file(puf, "file2", tmpfilename);
	CU_ASSERT_EQUAL(ret, 0);
	int tmpfd = open(tmpfilename, O_RDONLY);
	CU_ASSERT_FATAL(tmpfd >= 0);
	ssize_t n = read(tmpfd, buf, sizeof(buf));
	CU_ASSERT_EQUAL(n, 5);
	CU_ASSERT_EQUAL(memcmp(buf, "data2", 5), 0);
	close(tmpfd);
	unlink(tmpfilename);

	/* Invalid arguments */
	ret = puf_extract_to_buf(NULL, "file1", buf, sizeof(buf));
	CU_ASSERT_EQUAL(ret, -EINVAL);
	ret = puf_extract_to_buf(puf, NULL, buf, sizeof(buf));
	CU_ASSERT_EQUAL(ret, -EINVAL);
	ret = puf_extract_to_buf(puf, "file1", NULL, 0);
	CU_ASSERT_EQUAL(ret, -EINVAL);

	/* Invalid arguments */
	ret = puf_extract_to_file(NULL, "file2", tmpfilename);
	CU_ASSERT_EQUAL(ret, -EINVAL);
	ret = puf_extract_to_file(puf, NULL, tmpfilename);
	CU_ASSERT_EQUAL(ret, -EINVAL);
	ret = puf_extract_to_file(puf, "file2", NULL);
	CU_ASSERT_EQUAL(ret, -EINVAL);

	/* Non existing member */
	ret = puf_get_file_size(puf, "missing");
	CU_ASSERT_EQUAL(ret, -ENOENT);
	ret = puf_extract_to_buf(puf, "missing", buf, sizeof(buf));
	CU_ASSERT_EQUAL(ret, -ENOENT);
	ret = puf_extract_to_file(puf, "missing", tmpfilename);
	CU_ASSERT_EQUAL(ret, -ENOENT);

	puf_destroy(puf);
}

const char *puf_test_get_fullpath(const char *filename)
{
	static char buf[PATH_MAX];

	/* Absolutely unsafe code, just for tests */
	buf[0] = '\0';
	char *fullpath = realpath("/proc/self/exe", buf);
	char *p = strrchr(fullpath, '/');
	if (p != NULL)
		*(p + 1) = '\0';
	strcat(fullpath + 1, filename);
	return fullpath;
}

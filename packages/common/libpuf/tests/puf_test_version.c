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

/* libpuf tests should be kept in sync with dragon_build/version.py tests */

static void check_version(uint32_t major,
			  uint32_t minor,
			  uint32_t patch,
			  enum puf_version_type type,
			  uint32_t build,
			  const char *custom_name,
			  uint32_t custom_number,
			  int ok)
{
	struct puf_version v = {
		.major = major,
		.minor = minor,
		.patch = patch,
		.type = type,
		.build = build,
	};
	if (custom_name) {
		if (strlen(custom_name) > 32) {
			CU_FAIL("custom_name is too long");
		} else {
			strncpy(v.custom_name, custom_name, 32);
			v.has_custom = 1;
			v.custom_number = custom_number;
		}
	}
	int err = puf_check_version(&v);
	if (ok) {
		CU_ASSERT_EQUAL(err, 0);
	} else {
		CU_ASSERT_EQUAL(err, -EINVAL);
	}
}

static void check_version_good(uint32_t major,
			       uint32_t minor,
			       uint32_t patch,
			       enum puf_version_type type,
			       uint32_t build)
{
	check_version(major, minor, patch, type, build, NULL, 0, 1);
}

static void check_version_bad(uint32_t major,
			      uint32_t minor,
			      uint32_t patch,
			      enum puf_version_type type,
			      uint32_t build)
{
	check_version(major, minor, patch, type, build, NULL, 0, 0);
}

static void check_custom_version_good(uint32_t major,
				      uint32_t minor,
				      uint32_t patch,
				      enum puf_version_type type,
				      uint32_t build,
				      const char *custom_name,
				      uint32_t custom_number)
{
	check_version(major,
		      minor,
		      patch,
		      type,
		      build,
		      custom_name,
		      custom_number,
		      1);
}

static void check_custom_version_bad(uint32_t major,
				     uint32_t minor,
				     uint32_t patch,
				     enum puf_version_type type,
				     uint32_t build,
				     const char *custom_name,
				     uint32_t custom_number)
{
	check_version(major,
		      minor,
		      patch,
		      type,
		      build,
		      custom_name,
		      custom_number,
		      0);
}

static void test_version_check(void)
{
	/* good versions */
	check_version_good(0, 0, 0, PUF_VERSION_TYPE_DEV, 0);
	check_version_good(1, 2, 3, PUF_VERSION_TYPE_ALPHA, 1);
	check_version_good(1, 2, 3, PUF_VERSION_TYPE_BETA, 2);
	check_version_good(1, 2, 3, PUF_VERSION_TYPE_RC, 3);
	check_version_good(1, 2, 3, PUF_VERSION_TYPE_RELEASE, 0);
	check_custom_version_good(
		0, 0, 0, PUF_VERSION_TYPE_DEV, 0, "custom", 1);
	check_custom_version_good(
		1, 2, 3, PUF_VERSION_TYPE_ALPHA, 1, "custom", 2);
	check_custom_version_good(
		1, 2, 3, PUF_VERSION_TYPE_BETA, 2, "custom", 3);
	check_custom_version_good(1, 2, 3, PUF_VERSION_TYPE_RC, 3, "custom", 4);
	check_custom_version_good(
		1, 2, 3, PUF_VERSION_TYPE_RELEASE, 0, "custom", 5);

	/* bad versions */
	/* NULL version */
	int err = puf_check_version(NULL);
	CU_ASSERT_EQUAL(err, -EINVAL);
	/* 0.0.0 non-dev version */
	check_version_bad(0, 0, 0, PUF_VERSION_TYPE_ALPHA, 1);
	check_version_bad(0, 0, 0, PUF_VERSION_TYPE_BETA, 2);
	check_version_bad(0, 0, 0, PUF_VERSION_TYPE_RC, 3);
	check_version_bad(0, 0, 0, PUF_VERSION_TYPE_RELEASE, 0);
	/* non-0.0.0 DEV version */
	check_version_bad(1, 2, 3, PUF_VERSION_TYPE_DEV, 0);
	/* DEV/RELEASE version with non-zero build */
	check_version_bad(0, 0, 0, PUF_VERSION_TYPE_DEV, 1);
	check_version_bad(1, 2, 3, PUF_VERSION_TYPE_RELEASE, 1);
	/* non-DEV/RELEASE versions with zero build */
	check_version_bad(1, 2, 3, PUF_VERSION_TYPE_ALPHA, 0);
	check_version_bad(1, 2, 3, PUF_VERSION_TYPE_BETA, 0);
	check_version_bad(1, 2, 3, PUF_VERSION_TYPE_RC, 0);
	/* empty custom string */
	check_custom_version_bad(1, 2, 3, PUF_VERSION_TYPE_RC, 1, "", 1);
	/* zero custom number */
	check_custom_version_bad(1, 2, 3, PUF_VERSION_TYPE_RC, 1, "custom", 0);
}

enum which {
	NEWER = 1,
	SAME = 0,
	OLDER = -1,
};

static void
check_compare(struct puf_version *v1, enum which order, struct puf_version *v2)
{
	int res = puf_compare_version(v1, v2);
	CU_ASSERT_EQUAL(res, order);
}

static void check_compare_str(const char *v1, enum which order, const char *v2)
{
	struct puf_version pv1, pv2;
	int err = puf_version_fromstring(v1, &pv1);
	CU_ASSERT_EQUAL(err, 0);
	err = puf_version_fromstring(v2, &pv2);
	CU_ASSERT_EQUAL(err, 0);
	check_compare(&pv1, order, &pv2);
	/* A < B must imply that B > A */
	if (order != SAME) {
		order = -order;
		check_compare(&pv2, order, &pv1);
	}
}

static void test_version_compare(void)
{
	/* Same versions */
	check_compare_str("0.0.0", SAME, "0.0.0");
	check_compare_str("1.2.3-alpha1", SAME, "1.2.3-alpha1");
	check_compare_str("1.2.3-beta2", SAME, "1.2.3-beta2");
	check_compare_str("1.2.3-rc3", SAME, "1.2.3-rc3");
	check_compare_str("1.2.3", SAME, "1.2.3");

	/* Change major */
	check_compare_str("2.2.3", NEWER, "0.0.0");
	check_compare_str("2.2.3", NEWER, "1.2.3");
	check_compare_str("2.2.3-alpha1", NEWER, "1.2.3");
	check_compare_str("2.2.3", NEWER, "1.2.3-rc3");
	check_compare_str("1.2.3", OLDER, "2.2.3");

	/* Change minor */
	check_compare_str("1.3.3", NEWER, "1.2.3");
	check_compare_str("1.3.3-alpha1", NEWER, "1.2.3");
	check_compare_str("1.3.3", NEWER, "1.2.3-rc3");
	check_compare_str("1.2.3", OLDER, "1.3.3");

	/* Change patch */
	check_compare_str("1.2.4", NEWER, "1.2.3");
	check_compare_str("1.2.4-alpha1", NEWER, "1.2.3");
	check_compare_str("1.2.4", NEWER, "1.2.3-rc3");
	check_compare_str("1.2.3", OLDER, "1.2.4");

	/* Change type */
	check_compare_str("1.2.3", NEWER, "1.2.3-rc1");
	check_compare_str("1.2.3-rc1", NEWER, "1.2.3-beta1");
	check_compare_str("1.2.3-beta1", NEWER, "1.2.3-alpha1");
	check_compare_str("1.2.3-alpha1", OLDER, "1.2.3-rc1");

	/* Change build */
	check_compare_str("1.2.3-alpha1", OLDER, "1.2.3-alpha2");
	check_compare_str("1.2.3-beta1", OLDER, "1.2.3-beta2");
	check_compare_str("1.2.3-rc1", OLDER, "1.2.3-rc2");

	/* Add custom */
	check_compare_str("0.0.0", OLDER, "0.0.0+custom1");
	check_compare_str("1.2.3-alpha1", OLDER, "1.2.3-alpha1+custom1");
	check_compare_str("1.2.3-beta1", OLDER, "1.2.3-beta1+custom1");
	check_compare_str("1.2.3-rc1", OLDER, "1.2.3-rc1+custom1");
	check_compare_str("1.2.3", OLDER, "1.2.3+custom1");

	/* Custom + newer */
	check_compare_str("0.0.0+custom1", OLDER, "1.0.0");
	check_compare_str("1.2.3-alpha1+custom1", OLDER, "1.2.3-alpha2");
	check_compare_str("1.2.3-beta1+custom1", OLDER, "1.2.3-rc1");
	check_compare_str("1.2.3-rc1+custom1", OLDER, "1.2.4-alpha1");
	check_compare_str("1.2.3+custom1", OLDER, "1.2.4+custom1");

	/* Custom versions equality */
	check_compare_str("1.2.3+custom1", SAME, "1.2.3+custom1");
	check_compare_str("0.0.0+custom1", SAME, "0.0.0+other2");
	check_compare_str("1.2.3-alpha1+custom1", SAME, "1.2.3-alpha1+other2");
	check_compare_str("1.2.3-beta1+custom1", SAME, "1.2.3-beta1+other2");
	check_compare_str("1.2.3-rc1+custom1", SAME, "1.2.3-rc1+other2");
	check_compare_str("1.2.3+custom1", SAME, "1.2.3+other2");
	/* Even if custom_name is the same */
	check_compare_str("1.2.3+custom1", SAME, "1.2.3+custom2");

	/* Compare with NULL version */
	struct puf_version v = {
		.major = 1,
		.minor = 2,
		.patch = 3,
		.type = PUF_VERSION_TYPE_RC,
		.build = 4,
	};
	check_compare(&v, NEWER, NULL);
	check_compare(NULL, SAME, NULL);

	/* Compare with bad version */
	struct puf_version inval = {
		.major = 1,
		.minor = 2,
		.patch = 3,
		.type = PUF_VERSION_TYPE_RELEASE,
		.build = 4,
	};
	struct puf_version inval2 = {
		.major = 0,
		.minor = 0,
		.patch = 0,
		.type = PUF_VERSION_TYPE_ALPHA,
		.build = 0,
	};
	check_compare(&v, NEWER, &inval);
	check_compare(&inval, SAME, &inval);
	check_compare(&inval, SAME, &inval2);
	check_compare(&inval, SAME, NULL);
}


static void check_custom_to_string(uint32_t major,
				   uint32_t minor,
				   uint32_t patch,
				   enum puf_version_type type,
				   uint32_t build,
				   const char *custom_name,
				   uint32_t custom_number,
				   const char *res)
{
	char str[128];
	struct puf_version v = {
		.major = major,
		.minor = minor,
		.patch = patch,
		.type = type,
		.build = build,
	};
	if (custom_name) {
		if (strlen(custom_name) > 32) {
			CU_FAIL("custom_name is too long");
		} else {
			strncpy(v.custom_name, custom_name, 32);
			v.has_custom = 1;
			v.custom_number = custom_number;
		}
	}
	int err = puf_version_tostring(&v, str, sizeof(str));
	if (res) {
		CU_ASSERT_EQUAL(err, 0);
		CU_ASSERT_EQUAL(strlen(res), strlen(str));
		CU_ASSERT_STRING_EQUAL(res, str);
	} else {
		CU_ASSERT_EQUAL(err, -EINVAL);
	}
}

static void check_to_string(uint32_t major,
			    uint32_t minor,
			    uint32_t patch,
			    enum puf_version_type type,
			    uint32_t build,
			    const char *res)
{
	check_custom_to_string(major, minor, patch, type, build, NULL, 0, res);
}

static void test_version_tostring(void)
{
	/* 0.0.0 versions : valid tests (DEV-0) */
	check_to_string(0, 0, 0, PUF_VERSION_TYPE_DEV, 0, "0.0.0");
	check_custom_to_string(
		0, 0, 0, PUF_VERSION_TYPE_DEV, 0, "custom", 1, "0.0.0+custom1");
	/* 0.0.0 versions : invalid tests (any other) */
	check_to_string(0, 0, 0, PUF_VERSION_TYPE_DEV, 1, NULL);
	check_to_string(0, 0, 0, PUF_VERSION_TYPE_ALPHA, 1, NULL);
	check_to_string(0, 0, 0, PUF_VERSION_TYPE_BETA, 2, NULL);
	check_to_string(0, 0, 0, PUF_VERSION_TYPE_RC, 3, NULL);
	check_to_string(0, 0, 0, PUF_VERSION_TYPE_RELEASE, 4, NULL);
	check_custom_to_string(0, 0, 0, PUF_VERSION_TYPE_DEV, 0, "", 1, NULL);
	check_custom_to_string(
		0, 0, 0, PUF_VERSION_TYPE_DEV, 0, "custom", 0, NULL);

	/* non 0.0.0 versions : valid tests (non-DEV) */
	check_to_string(1, 2, 3, PUF_VERSION_TYPE_ALPHA, 1, "1.2.3-alpha1");
	check_to_string(1, 2, 3, PUF_VERSION_TYPE_BETA, 2, "1.2.3-beta2");
	check_to_string(1, 2, 3, PUF_VERSION_TYPE_RC, 3, "1.2.3-rc3");
	check_to_string(1, 2, 3, PUF_VERSION_TYPE_RELEASE, 0, "1.2.3");
	check_custom_to_string(1,
			       2,
			       3,
			       PUF_VERSION_TYPE_ALPHA,
			       1,
			       "custom",
			       1,
			       "1.2.3-alpha1+custom1");
	check_custom_to_string(1,
			       2,
			       3,
			       PUF_VERSION_TYPE_BETA,
			       2,
			       "custom",
			       1,
			       "1.2.3-beta2+custom1");
	check_custom_to_string(1,
			       2,
			       3,
			       PUF_VERSION_TYPE_RC,
			       3,
			       "custom",
			       1,
			       "1.2.3-rc3+custom1");
	check_custom_to_string(1,
			       2,
			       3,
			       PUF_VERSION_TYPE_RELEASE,
			       0,
			       "custom",
			       1,
			       "1.2.3+custom1");
	/* non 0.0.0 versions : invalid tests (DEV or bad build) */
	check_to_string(1, 2, 3, PUF_VERSION_TYPE_DEV, 0, NULL);
	check_to_string(1, 2, 3, PUF_VERSION_TYPE_ALPHA, 0, NULL);
	check_to_string(1, 2, 3, PUF_VERSION_TYPE_BETA, 0, NULL);
	check_to_string(1, 2, 3, PUF_VERSION_TYPE_RC, 0, NULL);
	check_to_string(1, 2, 3, PUF_VERSION_TYPE_RELEASE, 4, NULL);
	check_custom_to_string(
		1, 2, 3, PUF_VERSION_TYPE_RELEASE, 0, "", 1, NULL);
	check_custom_to_string(
		1, 2, 3, PUF_VERSION_TYPE_RELEASE, 0, "custom", 0, NULL);
}


static void check_custom_from_string(const char *src,
				     uint32_t major,
				     uint32_t minor,
				     uint32_t patch,
				     enum puf_version_type type,
				     uint32_t build,
				     const char *custom_name,
				     uint32_t custom_number)
{
	struct puf_version v = {
		.major = major,
		.minor = minor,
		.patch = patch,
		.type = type,
		.build = build,
	};
	if (custom_name) {
		if (strlen(custom_name) > 32) {
			CU_FAIL("custom_name is too long");
		} else {
			strncpy(v.custom_name, custom_name, 32);
			v.has_custom = 1;
			v.custom_number = custom_number;
		}
	}
	struct puf_version res = {0};
	int err = puf_version_fromstring(src, &res);
	CU_ASSERT_EQUAL(err, 0);
	CU_ASSERT_EQUAL(puf_compare_version(&v, &res), 0);
	CU_ASSERT_EQUAL(memcmp(&v, &res, sizeof(v)), 0);
	if (err != 0) {
		printf("failed to parse version '%s'\n", src);
	}
	err = puf_compare_version(&v, &res);
	if (err != 0) {
		printf("comparaison of parsed '%s' returned %d\n", src, err);
	}
	err = memcmp(&v, &res, sizeof(v));
	if (err != 0) {
		printf("memcmp of parsed '%s' returned %d\n", src, err);
	}
}

static void check_from_string(const char *src,
			      uint32_t major,
			      uint32_t minor,
			      uint32_t patch,
			      enum puf_version_type type,
			      uint32_t build)
{
	check_custom_from_string(
		src, major, minor, patch, type, build, NULL, 0);
}

static void check_from_string_err(const char *src)
{
	struct puf_version res = {0};
	int err = puf_version_fromstring(src, &res);
	CU_ASSERT_EQUAL(err, -EINVAL);
}

static void test_version_fromstring(void)
{
	/* valid 0.0.0 strings */
	check_from_string("0.0.0", 0, 0, 0, PUF_VERSION_TYPE_DEV, 0);
	check_from_string("0.0.0-anything", 0, 0, 0, PUF_VERSION_TYPE_DEV, 0);
	check_from_string("0.0.0-with space", 0, 0, 0, PUF_VERSION_TYPE_DEV, 0);
	check_custom_from_string(
		"0.0.0+custom1", 0, 0, 0, PUF_VERSION_TYPE_DEV, 0, "custom", 1);
	check_custom_from_string("0.0.0-anything+custom1",
				 0,
				 0,
				 0,
				 PUF_VERSION_TYPE_DEV,
				 0,
				 "custom",
				 1);
	/* invalid 0.0.0 strings */
	check_from_string_err("0.0.0-alpha1");
	check_from_string_err("0.0.0-beta2");
	check_from_string_err("0.0.0-rc3");

	/* valid non-0.0.0 strings */
	check_from_string("1.2.3-alpha1", 1, 2, 3, PUF_VERSION_TYPE_ALPHA, 1);
	check_from_string("1.2.3-beta2", 1, 2, 3, PUF_VERSION_TYPE_BETA, 2);
	check_from_string("1.2.3-rc3", 1, 2, 3, PUF_VERSION_TYPE_RC, 3);
	check_from_string("1.2.3", 1, 2, 3, PUF_VERSION_TYPE_RELEASE, 0);
	check_custom_from_string("1.2.3-alpha1+custom1",
				 1,
				 2,
				 3,
				 PUF_VERSION_TYPE_ALPHA,
				 1,
				 "custom",
				 1);
	check_custom_from_string("1.2.3-beta2+custom1",
				 1,
				 2,
				 3,
				 PUF_VERSION_TYPE_BETA,
				 2,
				 "custom",
				 1);
	check_custom_from_string("1.2.3-rc3+custom1",
				 1,
				 2,
				 3,
				 PUF_VERSION_TYPE_RC,
				 3,
				 "custom",
				 1);
	check_custom_from_string("1.2.3+custom1",
				 1,
				 2,
				 3,
				 PUF_VERSION_TYPE_RELEASE,
				 0,
				 "custom",
				 1);
	/* invalid non-0.0.0 strings */
	check_from_string_err("1.2.3-anything");
	check_from_string_err("1.2.3-alpha0");
	check_from_string_err("1.2.3-beta0");
	check_from_string_err("1.2.3-rc0");

	/* invalid strings */
	check_from_string_err(NULL);
	check_from_string_err("1.2");
	check_from_string_err("not_a_version");
	check_from_string_err("1.2.3-ALPHA4");
	check_from_string_err("1.2.3.4");
	check_from_string_err("1.2.3-alpha2 with spaces");
	check_from_string_err(" 1.2.3");
	check_from_string_err("1.2.3 ");
	check_from_string_err("1.2.3+no_number");
	check_from_string_err("1.2.3+with space1");
	check_from_string_err("1.2.3+1");
	check_from_string_err("1.2.3+with1number2");
	/* over 32 chars suffix */
	check_from_string_err(
		"0.0.0+longlonglonglonglonglonglonglonglonglong1");
}

static void check_custom_convert(uint32_t major,
				 uint32_t minor,
				 uint32_t patch,
				 enum puf_version_type type,
				 uint32_t build,
				 const char *custom_name,
				 uint32_t custom_number)
{
	char str[128];
	struct puf_version v = {
		.major = major,
		.minor = minor,
		.patch = patch,
		.type = type,
		.build = build,
	};
	if (custom_name) {
		if (strlen(custom_name) > 32) {
			CU_FAIL("custom_name is too long");
		} else {
			strncpy(v.custom_name, custom_name, 32);
			v.has_custom = 1;
			v.custom_number = custom_number;
		}
	}
	struct puf_version v2 = {0};
	int err = puf_version_tostring(&v, str, sizeof(str));
	CU_ASSERT_EQUAL(err, 0);
	err = puf_version_fromstring(str, &v2);
	CU_ASSERT_EQUAL(err, 0);
	CU_ASSERT_EQUAL(puf_compare_version(&v, &v2), 0);
	CU_ASSERT_EQUAL(memcmp(&v, &v2, sizeof(v)), 0);
}

static void check_convert(uint32_t major,
			  uint32_t minor,
			  uint32_t patch,
			  enum puf_version_type type,
			  uint32_t build)
{
	check_custom_convert(major, minor, patch, type, build, NULL, 0);
}

static void test_version_convert(void)
{
	/* 0.0.0 conversion */
	check_convert(0, 0, 0, PUF_VERSION_TYPE_DEV, 0);
	check_custom_convert(0, 0, 0, PUF_VERSION_TYPE_DEV, 0, "custom", 1);

	/* non-0.0.0 conversion */
	check_convert(1, 2, 3, PUF_VERSION_TYPE_ALPHA, 1);
	check_convert(1, 2, 3, PUF_VERSION_TYPE_BETA, 2);
	check_convert(1, 2, 3, PUF_VERSION_TYPE_RC, 3);
	check_convert(1, 2, 3, PUF_VERSION_TYPE_RELEASE, 0);
	check_custom_convert(1, 2, 3, PUF_VERSION_TYPE_ALPHA, 1, "custom", 1);
	check_custom_convert(1, 2, 3, PUF_VERSION_TYPE_BETA, 2, "custom", 1);
	check_custom_convert(1, 2, 3, PUF_VERSION_TYPE_RC, 3, "custom", 1);
	check_custom_convert(1, 2, 3, PUF_VERSION_TYPE_RELEASE, 0, "custom", 1);
}

static void check_string_to_string_with_ref(const char *str, const char *ref)
{
	char res[128];
	struct puf_version v = {0};
	int err = puf_version_fromstring(str, &v);
	CU_ASSERT_EQUAL(err, 0);
	err = puf_version_tostring(&v, res, sizeof(res));
	CU_ASSERT_EQUAL(err, 0);
	CU_ASSERT_STRING_EQUAL(ref, res);
}

static void check_string_to_string(const char *str)
{
	check_string_to_string_with_ref(str, str);
}

static void test_version_string_to_string(void)
{
	/* 0.0.0 conversion */
	check_string_to_string("0.0.0");
	check_string_to_string_with_ref("0.0.0-anything", "0.0.0");
	check_string_to_string("0.0.0+custom1");
	check_string_to_string_with_ref("0.0.0-anything+custom1",
					"0.0.0+custom1");

	/* non-0.0.0 conversion */
	check_string_to_string("1.2.3-alpha1");
	check_string_to_string("1.2.3-beta2");
	check_string_to_string("1.2.3-rc3");
	check_string_to_string("1.2.3");
	check_string_to_string("1.2.3-alpha1+custom1");
	check_string_to_string("1.2.3-beta2+custom1");
	check_string_to_string("1.2.3-rc3+custom1");
	check_string_to_string("1.2.3+custom1");
}

CU_TestInfo g_puf_test_version[] = {
	{(char *)"check", &test_version_check},
	{(char *)"compare", &test_version_compare},
	{(char *)"to string", &test_version_tostring},
	{(char *)"from string", &test_version_fromstring},
	{(char *)"to->from string", &test_version_convert},
	{(char *)"from->to string", &test_version_string_to_string},
	CU_TEST_INFO_NULL,
};

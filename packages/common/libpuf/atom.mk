LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libpuf
LOCAL_CATEGORY_PATH := libs
LOCAL_DESCRIPTION := Helper library for accessing parrot firmware files
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_CFLAGS := -fvisibility=hidden -std=gnu99
LOCAL_SRC_FILES := src/libpuf.c \
	src/libpuf_plf.c \
	src/libpuf_tar.c

LOCAL_LIBRARIES := zlib libtar
LOCAL_CONDITIONAL_LIBRARIES := \
	OPTIONAL:libplfng \
	OPTIONAL:libulog

include $(BUILD_LIBRARY)

ifdef TARGET_TEST

include $(CLEAR_VARS)

LOCAL_MODULE := tst-libpuf
LOCAL_LIBRARIES := libcunit libpuf
LOCAL_CFLAGS := -std=gnu99
LOCAL_SRC_FILES := \
	tests/puf_test.c \
	tests/puf_test_tar.c \
	tests/puf_test_version.c

LOCAL_COPY_FILES := \
	tests/tar/archive1.tar:$(TARGET_DEFAULT_BIN_DESTDIR)/ \
	tests/tar/archive1-truncated.tar:$(TARGET_DEFAULT_BIN_DESTDIR)/ \
	tests/tar/archive2.tar.gz:$(TARGET_DEFAULT_BIN_DESTDIR)/ \
	tests/tar/archive2-truncated.tar.gz:$(TARGET_DEFAULT_BIN_DESTDIR)/ \
	tests/tar/archive3.tar.bz2:$(TARGET_DEFAULT_BIN_DESTDIR)/ \
	tests/tar/empty.tar:$(TARGET_DEFAULT_BIN_DESTDIR)/ \
	tests/tar/empty.tar.gz:$(TARGET_DEFAULT_BIN_DESTDIR)/ \
	tests/tar/archive_custom.tar.gz:$(TARGET_DEFAULT_BIN_DESTDIR)/ \

include $(BUILD_EXECUTABLE)

endif

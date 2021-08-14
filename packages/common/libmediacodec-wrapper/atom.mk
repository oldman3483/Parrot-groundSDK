
LOCAL_PATH := $(call my-dir)

ifeq ("$(TARGET_OS)-$(TARGET_OS_FLAVOUR)","linux-android")

include $(CLEAR_VARS)
LOCAL_MODULE := libmediacodec-wrapper
LOCAL_CATEGORY_PATH := libs
LOCAL_DESCRIPTION := Android MediaCodec API wrapper library
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_CFLAGS := -DMCW_API_EXPORTS -fvisibility=hidden -std=gnu99
LOCAL_SRC_FILES := \
	src/mcw.c \
	src/mcw_jni.c \
	src/mcw_ndk.c
LOCAL_LIBRARIES := \
	libulog

include $(BUILD_LIBRARY)

endif


LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := libpdraw-gles2hud
LOCAL_CATEGORY_PATH := libs
LOCAL_DESCRIPTION := Parrot Drones Awesome Video Viewer OpenGL ES 2.0 HUD rendering library
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_CFLAGS := \
	-DPDRAW_GLES2HUD_API_EXPORTS \
	-fvisibility=hidden \
	-std=gnu99 \
	-D_USE_MATH_DEFINES
LOCAL_SRC_FILES := \
	src/pdraw_gles2hud.cpp \
	src/pdraw_gles2hud_icons.cpp \
	src/pdraw_gles2hud_icons_data.cpp \
	src/pdraw_gles2hud_instruments.cpp \
	src/pdraw_gles2hud_shaders.cpp \
	src/pdraw_gles2hud_shapes.cpp \
	src/pdraw_gles2hud_text.cpp \
	src/pdraw_gles2hud_text_profont36.cpp
LOCAL_LIBRARIES := \
	eigen \
	libpdraw \
	libulog \
	libvideo-metadata

ifeq ("$(TARGET_OS)-$(TARGET_OS_FLAVOUR)","linux-native")
  LOCAL_LIBRARIES += \
	glfw3 \
	opengl
else ifeq ("$(TARGET_OS)-$(TARGET_OS_FLAVOUR)","linux-android")
  LOCAL_LDLIBS += -lGLESv2
else ifeq ("$(TARGET_OS)-$(TARGET_OS_FLAVOUR)","darwin-native")
  LOCAL_LDLIBS += \
	-framework OpenGL
  LOCAL_LIBRARIES += \
	glfw3
else ifeq ("$(TARGET_OS)-$(TARGET_OS_FLAVOUR)","darwin-iphoneos")
  LOCAL_LDLIBS += \
	-framework OpenGLES
else ifeq ("$(TARGET_OS)","windows")
  LOCAL_LDLIBS += -lepoxy
endif

include $(BUILD_LIBRARY)

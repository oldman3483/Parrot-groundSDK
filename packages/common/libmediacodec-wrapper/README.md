# libmediacodec-wrapper - Android MediaCodec API wrapper library

libmediacodec-wrapper (MCW) is a C library to wrap Android's NDK C
AMediaCodec API and Android's SDK Java MediaCodec API through JNI.

See https://developer.android.com/reference/android/media/MediaCodec and
https://developer.android.com/ndk/reference/group/media for Android's official
NDK and SDK MediaCodec API documentation

## Dependencies

The library depends on the following Alchemy modules:

* libulog

## Building

Building is activated by enabling _libmediacodec-wrapper_ in the Alchemy build
configuration.

## Operation

The library automatically detects at runtime if the NDK API is available
(Android 5.0+, API level 21) and if the Java API is available (Android 4.1+,
API level 16).

The user can either force the use of the NDK or JNI implementations or let
the library choose automatically. In auto mode the NDK implementation is
used in priority if available.

The API functions are not thread safe and should always be called from the
same thread, or it is the caller's resposibility to synchronize calls if
multiple threads are used.

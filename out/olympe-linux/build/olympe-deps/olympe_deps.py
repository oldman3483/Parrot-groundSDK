# -*- coding: utf-8 -*-
#
# TARGET arch is: ['-target', 'x86_64', '', '-I/usr/lib/gcc/x86_64-linux-gnu/7/include', '-I/usr/local/include', '-I/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed', '-I/usr/include/x86_64-linux-gnu', '-I/usr/include', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/build/libpomp', '-I/home/zxli/code/parrot-groundsdk/packages/common/libpomp', '-I/home/zxli/code/parrot-groundsdk/packages/common/ulog/libulog/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libpomp/include', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/build/libpdraw', '-I/home/zxli/code/parrot-groundsdk/packages/pdraw/libpdraw', '-I/home/zxli/code/parrot-groundsdk/packages/common/libmp4/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/librtsp/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libsdp/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libvideo-decode/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libvideo-streaming/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libmux/include/', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/staging/usr/include/eigen3', '-I/home/zxli/code/parrot-groundsdk/packages/common/libvideo-buffers/implem/generic/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libvideo-buffers/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libh264/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/librtp/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libvideo-metadata/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libpomp/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libfutils/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/ulog/libulog/include', '-I/home/zxli/code/parrot-groundsdk/packages/pdraw/libpdraw/include', '-I/usr/include/libdrm', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/build/libvideo-buffers', '-I/home/zxli/code/parrot-groundsdk/packages/common/libvideo-buffers', '-I/home/zxli/code/parrot-groundsdk/packages/common/libfutils/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libpomp/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/ulog/libulog/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libvideo-buffers/include', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/build/libvideo-buffers-generic', '-I/home/zxli/code/parrot-groundsdk/packages/common/libvideo-buffers', '-I/home/zxli/code/parrot-groundsdk/packages/common/libvideo-buffers/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libfutils/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libpomp/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/ulog/libulog/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libvideo-buffers/implem/generic/include', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/build/libvideo-metadata', '-I/home/zxli/code/parrot-groundsdk/packages/common/libvideo-metadata', '-I/home/zxli/code/parrot-groundsdk/packages/common/libfutils/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/ulog/libulog/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libvideo-metadata/include', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/build/libarsdk', '-I/home/zxli/code/parrot-groundsdk/packages/common/arsdk-ng', '-I/home/zxli/code/parrot-groundsdk/packages/common/arsdk-ng/libarsdk/src', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/build/libarsdkgen/gen', '-I/home/zxli/code/parrot-groundsdk/packages/common/libmux/include/', '-I/home/zxli/code/parrot-groundsdk/packages/common/libpomp/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libfutils/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/ulog/libulog/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/arsdk-ng/libarsdk/include', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/build/libarsdkctrl', '-I/home/zxli/code/parrot-groundsdk/packages/common/arsdk-ng', '-I/home/zxli/code/parrot-groundsdk/packages/common/arsdk-ng/libarsdk/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/arsdk-ng/libarsdk/src', '-I/home/zxli/code/parrot-groundsdk/packages/common/arsdk-ng/libarsdkctrl/src', '-I/home/zxli/code/parrot-groundsdk/packages/common/libpuf/include', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/build/libarsdkgen/gen', '-I/home/zxli/code/parrot-groundsdk/packages/common/libmux/include/', '-I/home/zxli/code/parrot-groundsdk/packages/common/libpomp/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/libfutils/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/ulog/libulog/include', '-I/home/zxli/code/parrot-groundsdk/packages/common/arsdk-ng/libarsdkctrl/include', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/staging/usr/include/x86_64-linux-gnu', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/staging/usr/include', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/staging/usr/include/x86_64-linux-gnu', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/staging/usr/include', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/staging/usr/include/x86_64-linux-gnu', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/staging/usr/include', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/staging/usr/include/x86_64-linux-gnu', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/staging/usr/include', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/staging/usr/include/x86_64-linux-gnu', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/staging/usr/include', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/staging/usr/include/x86_64-linux-gnu', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/staging/usr/include', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/staging/usr/include/x86_64-linux-gnu', '-I/home/zxli/code/parrot-groundsdk/out/olympe-linux/staging/usr/include', '-std=gnu99', '-pipe', '-O2', '-g', '-ffunction-sections', '-DALCHEMY_BUILD', '-m64', '-fPIC', '-msse', '-msse2', '-mssse3', '-std=gnu99', '-pipe', '-O2', '-g', '-ffunction-sections', '-DALCHEMY_BUILD', '-m64', '-fPIC', '-msse', '-msse2', '-mssse3', '-std=gnu99', '-pipe', '-O2', '-g', '-ffunction-sections', '-DALCHEMY_BUILD', '-m64', '-fPIC', '-msse', '-msse2', '-mssse3', '-std=gnu99', '-pipe', '-O2', '-g', '-ffunction-sections', '-DALCHEMY_BUILD', '-m64', '-fPIC', '-msse', '-msse2', '-mssse3', '-std=gnu99', '-pipe', '-O2', '-g', '-ffunction-sections', '-DALCHEMY_BUILD', '-m64', '-fPIC', '-msse', '-msse2', '-mssse3', '-std=gnu99', '-pipe', '-O2', '-g', '-ffunction-sections', '-DALCHEMY_BUILD', '-m64', '-fPIC', '-msse', '-msse2', '-mssse3', '-std=gnu99', '-pipe', '-O2', '-g', '-ffunction-sections', '-DALCHEMY_BUILD', '-m64', '-fPIC', '-msse', '-msse2', '-mssse3', '-fvisibility=hidden', '-DPOMP_API_EXPORTS', '-DBUILD_LIBULOG', '-DEIGEN_MPL2_ONLY', '-DEIGEN_QUATERNIONBASE_PLUGIN=\\"QuaternionBaseAddons.hpp\\"', '-DPDRAW_API_EXPORTS', '-fvisibility=hidden', '-D_USE_MATH_DEFINES', '-DUSE_GLES2', '-include', '/home/zxli/code/parrot-groundsdk/out/olympe-linux/build/ffmpeg-libav/autoconf-ffmpeg-libav.h', '-DBUILD_LIBMP4', '-DBUILD_LIBRTSP', '-DBUILD_LIBSDP', '-DBUILD_LIBVIDEO_DECODE', '-DBUILD_LIBVIDEO_STREAMING', '-DBUILD_LIBMUX', '-DBUILD_GLFW3', '-DBUILD_OPENGL', '-DBUILD_EIGEN', '-DBUILD_LIBVIDEO_BUFFERS_GENERIC', '-DBUILD_FFMPEG_LIBAV', '-DBUILD_LIBVIDEO_BUFFERS', '-DBUILD_ZLIB', '-DBUILD_LIBH264', '-DBUILD_LIBRTP', '-DBUILD_LIBVIDEO_METADATA', '-DBUILD_JSON', '-DBUILD_LIBPOMP', '-DBUILD_LIBFUTILS', '-DBUILD_LIBULOG', '-DVBUF_API_EXPORTS', '-fvisibility=hidden', '-std=gnu99', '-DBUILD_LIBFUTILS', '-DBUILD_LIBPOMP', '-DBUILD_LIBULOG', '-DVBUF_API_EXPORTS', '-fvisibility=hidden', '-std=gnu99', '-DBUILD_LIBVIDEO_BUFFERS', '-DBUILD_LIBFUTILS', '-DBUILD_LIBPOMP', '-DBUILD_LIBULOG', '-DVMETA_API_EXPORTS', '-fvisibility=hidden', '-std=gnu99', '-DBUILD_LIBFUTILS', '-DBUILD_JSON', '-DBUILD_LIBULOG', '-DARSDK_API_EXPORTS', '-fvisibility=hidden', '-DBUILD_LIBARSDKGEN', '-DBUILD_LIBMUX', '-DBUILD_JSON', '-DBUILD_LIBPOMP', '-DBUILD_LIBFUTILS', '-DBUILD_LIBULOG', '-D_REENTRANT', '-DARSDK_API_EXPORTS', '-fvisibility=hidden', '-DBUILD_LIBARSDK', '-DBUILD_LIBPUF', '-DBUILD_AVAHI_CLIENT', '-DBUILD_LIBARSDKGEN', '-DBUILD_LIBMUX', '-DBUILD_JSON', '-DBUILD_LIBPOMP', '-DBUILD_LIBFUTILS', '-DBUILD_LIBULOG', '-DBUILD_ZLIB', '-DBUILD_LIBTAR', '-D__PYBINDING_MACRO__=1', '-fno-unsigned-char', '']
# WORD_SIZE is: 8
# POINTER_SIZE is: 8
# LONGDOUBLE_SIZE is: 16
#
import ctypes


class AsDictMixin:
    @classmethod
    def as_dict(cls, self):
        result = {}
        if not isinstance(self, AsDictMixin):
            # not a structure, assume it's already a python object
            return self
        if not hasattr(cls, "_fields_"):
            return result
        for (field, *_) in cls._fields_:  # noqa
            if field.startswith('PADDING_'):
                continue
            value = getattr(self, field)
            type_ = type(value)
            if hasattr(value, "_length_") and hasattr(value, "_type_"):
                # array
                if not hasattr(type_, "as_dict"):
                    value = [v for v in value]
                else:
                    type_ = type_._type_
                    value = [type_.as_dict(v) for v in value]
            elif hasattr(value, "contents") and hasattr(value, "_type_"):
                # pointer
                try:
                    if not hasattr(type_, "as_dict"):
                        value = value.contents
                    else:
                        type_ = type_._type_
                        value = type_.as_dict(value.contents)
                except ValueError:
                    # nullptr
                    value = None
            elif isinstance(value, AsDictMixin):
                # other structure
                value = type_.as_dict(value)
            result[field] = value
        return result


class Structure(ctypes.Structure, AsDictMixin):

    def __init__(self, *args, **kwds):
        # We don't want to use positional arguments fill PADDING_* fields

        args = dict(zip(self.__class__._field_names_(), args))
        args.update(kwds)
        super(Structure, self).__init__(**args)

    @classmethod
    def _field_names_(cls):
        if hasattr(cls, '_fields_'):
            return (f[0] for f in cls._fields_ if not f[0].startswith('PADDING'))
        else:
            return ()

    @classmethod
    def get_type(cls, field):
        for f in cls._fields_:
            if f[0] == field:
                return f[1]
        return None

    @classmethod
    def bind(cls, bound_fields):
        fields = {}
        for name, type_ in cls._fields_:
            if hasattr(type_, "restype"):
                if name in bound_fields:
                    # use a closure to capture the callback from the loop scope
                    fields[name] = (
                        type_((lambda callback: lambda *args: callback(*args))(
                            bound_fields[name]))
                    )
                    del bound_fields[name]
                else:
                    # default callback implementation (does nothing)
                    try:
                        default_ = type_(0).restype().value
                    except TypeError:
                        default_ = None
                    fields[name] = type_((
                        lambda default_: lambda *args: default_)(default_))
            else:
                # not a callback function, use default initialization
                if name in bound_fields:
                    fields[name] = bound_fields[name]
                    del bound_fields[name]
                else:
                    fields[name] = type_()
        if len(bound_fields) != 0:
            raise ValueError(
                "Cannot bind the following unknown callback(s) {}.{}".format(
                    cls.__name__, bound_fields.keys()
            ))
        return cls(**fields)


class Union(ctypes.Union, AsDictMixin):
    pass



_libraries = {}
_libraries['libarsdk.so'] = ctypes.CDLL('libarsdk.so')
# if local wordsize is same as target, keep ctypes pointer function.
if ctypes.sizeof(ctypes.c_void_p) == 8:
    POINTER_T = ctypes.POINTER
else:
    # required to access _ctypes
    import _ctypes
    # Emulate a pointer class using the approriate c_int32/c_int64 type
    # The new class should have :
    # ['__module__', 'from_param', '_type_', '__dict__', '__weakref__', '__doc__']
    # but the class should be submitted to a unique instance for each base type
    # to that if A == B, POINTER_T(A) == POINTER_T(B)
    ctypes._pointer_t_type_cache = {}
    def POINTER_T(pointee):
        # a pointer should have the same length as LONG
        fake_ptr_base_type = ctypes.c_uint64 
        # specific case for c_void_p
        if pointee is None: # VOID pointer type. c_void_p.
            pointee = type(None) # ctypes.c_void_p # ctypes.c_ulong
            clsname = 'c_void'
        else:
            clsname = pointee.__name__
        if clsname in ctypes._pointer_t_type_cache:
            return ctypes._pointer_t_type_cache[clsname]
        # make template
        class _T(_ctypes._SimpleCData,):
            _type_ = 'L'
            _subtype_ = pointee
            def _sub_addr_(self):
                return self.value
            def __repr__(self):
                return '%s(%d)'%(clsname, self.value)
            def contents(self):
                raise TypeError('This is not a ctypes pointer.')
            def __init__(self, **args):
                raise TypeError('This is not a ctypes pointer. It is not instanciable.')
        _class = type('LP_%d_%s'%(8, clsname), (_T,),{}) 
        ctypes._pointer_t_type_cache[clsname] = _class
        return _class

def string_cast(char_pointer, encoding='utf-8', errors='strict'):
    value = ctypes.cast(char_pointer, ctypes.c_char_p).value
    if value is not None and encoding is not None:
        value = value.decode(encoding, errors=errors)
    return value


def char_pointer_cast(string, encoding='utf-8'):
    if encoding is not None:
        try:
            string = string.encode(encoding)
        except AttributeError:
            # In Python3, bytes has no encode attribute
            pass
    string = ctypes.c_char_p(string)
    return ctypes.cast(string, POINTER_T(ctypes.c_char))



c_int128 = ctypes.c_ubyte*16
c_uint128 = c_int128
void = None
if ctypes.sizeof(ctypes.c_longdouble) == 16:
    c_long_double_t = ctypes.c_longdouble
else:
    c_long_double_t = ctypes.c_ubyte*16

_libraries['libarsdkctrl.so'] = ctypes.CDLL('libarsdkctrl.so')
_libraries['libpomp.so'] = ctypes.CDLL('libpomp.so')
_libraries['libvideo-buffers-generic.so'] = ctypes.CDLL('libvideo-buffers-generic.so')
_libraries['libvideo-buffers.so'] = ctypes.CDLL('libvideo-buffers.so')
_libraries['libvideo-metadata.so'] = ctypes.CDLL('libvideo-metadata.so')
_libraries['libpdraw.so'] = ctypes.CDLL('libpdraw.so')


class struct_arsdk_mngr(Structure):
    pass

class struct_arsdk_backend(Structure):
    pass

class struct_arsdk_cmd_itf(Structure):
    pass

class struct_arsdk_peer(Structure):
    pass

class struct_arsdk_cmd_desc(Structure):
    pass

arsdk_get_cmd_table = _libraries['libarsdk.so'].arsdk_get_cmd_table
arsdk_get_cmd_table.restype = POINTER_T(POINTER_T(POINTER_T(POINTER_T(struct_arsdk_cmd_desc))))
arsdk_get_cmd_table.argtypes = []

# values for enumeration 'arsdk_socket_kind'
arsdk_socket_kind__enumvalues = {
    0: 'ARSDK_SOCKET_KIND_DISCOVERY',
    1: 'ARSDK_SOCKET_KIND_CONNECTION',
    2: 'ARSDK_SOCKET_KIND_COMMAND',
    3: 'ARSDK_SOCKET_KIND_FTP',
    4: 'ARSDK_SOCKET_KIND_VIDEO',
}
ARSDK_SOCKET_KIND_DISCOVERY = 0
ARSDK_SOCKET_KIND_CONNECTION = 1
ARSDK_SOCKET_KIND_COMMAND = 2
ARSDK_SOCKET_KIND_FTP = 3
ARSDK_SOCKET_KIND_VIDEO = 4
arsdk_socket_kind = ctypes.c_int # enum

# values for enumeration 'arsdk_device_type'
arsdk_device_type__enumvalues = {
    -1: 'ARSDK_DEVICE_TYPE_UNKNOWN',
    2305: 'ARSDK_DEVICE_TYPE_BEBOP',
    2316: 'ARSDK_DEVICE_TYPE_BEBOP_2',
    2321: 'ARSDK_DEVICE_TYPE_PAROS',
    2324: 'ARSDK_DEVICE_TYPE_ANAFI4K',
    2329: 'ARSDK_DEVICE_TYPE_ANAFI_THERMAL',
    2326: 'ARSDK_DEVICE_TYPE_CHIMERA',
    2330: 'ARSDK_DEVICE_TYPE_ANAFI_2',
    2331: 'ARSDK_DEVICE_TYPE_ANAFI_UA',
    2334: 'ARSDK_DEVICE_TYPE_ANAFI_USA',
    2307: 'ARSDK_DEVICE_TYPE_SKYCTRL',
    2323: 'ARSDK_DEVICE_TYPE_SKYCTRL_NG',
    2319: 'ARSDK_DEVICE_TYPE_SKYCTRL_2',
    2325: 'ARSDK_DEVICE_TYPE_SKYCTRL_2P',
    2328: 'ARSDK_DEVICE_TYPE_SKYCTRL_3',
    2332: 'ARSDK_DEVICE_TYPE_SKYCTRL_UA',
    2333: 'ARSDK_DEVICE_TYPE_SKYCTRL_4',
    2306: 'ARSDK_DEVICE_TYPE_JS',
    2309: 'ARSDK_DEVICE_TYPE_JS_EVO_LIGHT',
    2310: 'ARSDK_DEVICE_TYPE_JS_EVO_RACE',
    2304: 'ARSDK_DEVICE_TYPE_RS',
    2311: 'ARSDK_DEVICE_TYPE_RS_EVO_LIGHT',
    2313: 'ARSDK_DEVICE_TYPE_RS_EVO_BRICK',
    2314: 'ARSDK_DEVICE_TYPE_RS_EVO_HYDROFOIL',
    2315: 'ARSDK_DEVICE_TYPE_RS3',
    2317: 'ARSDK_DEVICE_TYPE_POWERUP',
    2318: 'ARSDK_DEVICE_TYPE_EVINRUDE',
    2320: 'ARSDK_DEVICE_TYPE_WINGX',
}
ARSDK_DEVICE_TYPE_UNKNOWN = -1
ARSDK_DEVICE_TYPE_BEBOP = 2305
ARSDK_DEVICE_TYPE_BEBOP_2 = 2316
ARSDK_DEVICE_TYPE_PAROS = 2321
ARSDK_DEVICE_TYPE_ANAFI4K = 2324
ARSDK_DEVICE_TYPE_ANAFI_THERMAL = 2329
ARSDK_DEVICE_TYPE_CHIMERA = 2326
ARSDK_DEVICE_TYPE_ANAFI_2 = 2330
ARSDK_DEVICE_TYPE_ANAFI_UA = 2331
ARSDK_DEVICE_TYPE_ANAFI_USA = 2334
ARSDK_DEVICE_TYPE_SKYCTRL = 2307
ARSDK_DEVICE_TYPE_SKYCTRL_NG = 2323
ARSDK_DEVICE_TYPE_SKYCTRL_2 = 2319
ARSDK_DEVICE_TYPE_SKYCTRL_2P = 2325
ARSDK_DEVICE_TYPE_SKYCTRL_3 = 2328
ARSDK_DEVICE_TYPE_SKYCTRL_UA = 2332
ARSDK_DEVICE_TYPE_SKYCTRL_4 = 2333
ARSDK_DEVICE_TYPE_JS = 2306
ARSDK_DEVICE_TYPE_JS_EVO_LIGHT = 2309
ARSDK_DEVICE_TYPE_JS_EVO_RACE = 2310
ARSDK_DEVICE_TYPE_RS = 2304
ARSDK_DEVICE_TYPE_RS_EVO_LIGHT = 2311
ARSDK_DEVICE_TYPE_RS_EVO_BRICK = 2313
ARSDK_DEVICE_TYPE_RS_EVO_HYDROFOIL = 2314
ARSDK_DEVICE_TYPE_RS3 = 2315
ARSDK_DEVICE_TYPE_POWERUP = 2317
ARSDK_DEVICE_TYPE_EVINRUDE = 2318
ARSDK_DEVICE_TYPE_WINGX = 2320
arsdk_device_type = ctypes.c_int # enum

# values for enumeration 'arsdk_conn_cancel_reason'
arsdk_conn_cancel_reason__enumvalues = {
    0: 'ARSDK_CONN_CANCEL_REASON_LOCAL',
    1: 'ARSDK_CONN_CANCEL_REASON_REMOTE',
    2: 'ARSDK_CONN_CANCEL_REASON_REJECTED',
}
ARSDK_CONN_CANCEL_REASON_LOCAL = 0
ARSDK_CONN_CANCEL_REASON_REMOTE = 1
ARSDK_CONN_CANCEL_REASON_REJECTED = 2
arsdk_conn_cancel_reason = ctypes.c_int # enum

# values for enumeration 'arsdk_link_status'
arsdk_link_status__enumvalues = {
    0: 'ARSDK_LINK_STATUS_KO',
    1: 'ARSDK_LINK_STATUS_OK',
}
ARSDK_LINK_STATUS_KO = 0
ARSDK_LINK_STATUS_OK = 1
arsdk_link_status = ctypes.c_int # enum

# values for enumeration 'arsdk_backend_type'
arsdk_backend_type__enumvalues = {
    -1: 'ARSDK_BACKEND_TYPE_UNKNOWN',
    0: 'ARSDK_BACKEND_TYPE_NET',
    1: 'ARSDK_BACKEND_TYPE_BLE',
    2: 'ARSDK_BACKEND_TYPE_MUX',
}
ARSDK_BACKEND_TYPE_UNKNOWN = -1
ARSDK_BACKEND_TYPE_NET = 0
ARSDK_BACKEND_TYPE_BLE = 1
ARSDK_BACKEND_TYPE_MUX = 2
arsdk_backend_type = ctypes.c_int # enum
class struct_arsdk_publisher_cfg(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('name', POINTER_T(ctypes.c_char)),
    ('type', arsdk_device_type),
    ('PADDING_0', ctypes.c_ubyte * 4),
    ('id', POINTER_T(ctypes.c_char)),
     ]

class struct_arsdk_backend_listen_cbs(Structure):
    pass

class struct_arsdk_peer_info(Structure):
    pass

struct_arsdk_backend_listen_cbs._pack_ = True # source:False
struct_arsdk_backend_listen_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('conn_req', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_peer), POINTER_T(struct_arsdk_peer_info), POINTER_T(None))),
]

arsdk_socket_kind_str = _libraries['libarsdk.so'].arsdk_socket_kind_str
arsdk_socket_kind_str.restype = POINTER_T(ctypes.c_char)
arsdk_socket_kind_str.argtypes = [arsdk_socket_kind]
arsdk_device_type_str = _libraries['libarsdk.so'].arsdk_device_type_str
arsdk_device_type_str.restype = POINTER_T(ctypes.c_char)
arsdk_device_type_str.argtypes = [arsdk_device_type]
arsdk_conn_cancel_reason_str = _libraries['libarsdk.so'].arsdk_conn_cancel_reason_str
arsdk_conn_cancel_reason_str.restype = POINTER_T(ctypes.c_char)
arsdk_conn_cancel_reason_str.argtypes = [arsdk_conn_cancel_reason]
arsdk_link_status_str = _libraries['libarsdk.so'].arsdk_link_status_str
arsdk_link_status_str.restype = POINTER_T(ctypes.c_char)
arsdk_link_status_str.argtypes = [arsdk_link_status]
arsdk_backend_type_str = _libraries['libarsdk.so'].arsdk_backend_type_str
arsdk_backend_type_str.restype = POINTER_T(ctypes.c_char)
arsdk_backend_type_str.argtypes = [arsdk_backend_type]
class struct_arsdk_backend_mux(Structure):
    pass

class struct_arsdk_backend_mux_cfg(Structure):
    pass

class struct_mux_ctx(Structure):
    pass

struct_arsdk_backend_mux_cfg._pack_ = True # source:False
struct_arsdk_backend_mux_cfg._fields_ = [
    ('mux', POINTER_T(struct_mux_ctx)),
    ('stream_supported', ctypes.c_int32),
    ('proto_v_min', ctypes.c_uint32),
    ('proto_v_max', ctypes.c_uint32),
    ('proto_v', ctypes.c_uint32),
]

arsdk_backend_mux_new = _libraries['libarsdk.so'].arsdk_backend_mux_new
arsdk_backend_mux_new.restype = ctypes.c_int32
arsdk_backend_mux_new.argtypes = [POINTER_T(struct_arsdk_mngr), POINTER_T(struct_arsdk_backend_mux_cfg), POINTER_T(POINTER_T(struct_arsdk_backend_mux))]
arsdk_backend_mux_destroy = _libraries['libarsdk.so'].arsdk_backend_mux_destroy
arsdk_backend_mux_destroy.restype = ctypes.c_int32
arsdk_backend_mux_destroy.argtypes = [POINTER_T(struct_arsdk_backend_mux)]
arsdk_backend_mux_get_parent = _libraries['libarsdk.so'].arsdk_backend_mux_get_parent
arsdk_backend_mux_get_parent.restype = POINTER_T(struct_arsdk_backend)
arsdk_backend_mux_get_parent.argtypes = [POINTER_T(struct_arsdk_backend_mux)]
arsdk_backend_mux_get_mux_ctx = _libraries['libarsdk.so'].arsdk_backend_mux_get_mux_ctx
arsdk_backend_mux_get_mux_ctx.restype = POINTER_T(struct_mux_ctx)
arsdk_backend_mux_get_mux_ctx.argtypes = [POINTER_T(struct_arsdk_backend_mux)]
arsdk_backend_mux_start_listen = _libraries['libarsdk.so'].arsdk_backend_mux_start_listen
arsdk_backend_mux_start_listen.restype = ctypes.c_int32
arsdk_backend_mux_start_listen.argtypes = [POINTER_T(struct_arsdk_backend_mux), POINTER_T(struct_arsdk_backend_listen_cbs)]
arsdk_backend_mux_stop_listen = _libraries['libarsdk.so'].arsdk_backend_mux_stop_listen
arsdk_backend_mux_stop_listen.restype = ctypes.c_int32
arsdk_backend_mux_stop_listen.argtypes = [POINTER_T(struct_arsdk_backend_mux)]
class struct_arsdk_backend_net(Structure):
    pass

class struct_arsdk_backend_net_cfg(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('iface', POINTER_T(ctypes.c_char)),
    ('qos_mode_supported', ctypes.c_int32),
    ('stream_supported', ctypes.c_int32),
    ('proto_v_min', ctypes.c_uint32),
    ('proto_v_max', ctypes.c_uint32),
     ]

arsdk_backend_net_socket_cb_t = ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_backend_net), ctypes.c_int32, arsdk_socket_kind, POINTER_T(None))
arsdk_backend_net_new = _libraries['libarsdk.so'].arsdk_backend_net_new
arsdk_backend_net_new.restype = ctypes.c_int32
arsdk_backend_net_new.argtypes = [POINTER_T(struct_arsdk_mngr), POINTER_T(struct_arsdk_backend_net_cfg), POINTER_T(POINTER_T(struct_arsdk_backend_net))]
arsdk_backend_net_destroy = _libraries['libarsdk.so'].arsdk_backend_net_destroy
arsdk_backend_net_destroy.restype = ctypes.c_int32
arsdk_backend_net_destroy.argtypes = [POINTER_T(struct_arsdk_backend_net)]
arsdk_backend_net_get_parent = _libraries['libarsdk.so'].arsdk_backend_net_get_parent
arsdk_backend_net_get_parent.restype = POINTER_T(struct_arsdk_backend)
arsdk_backend_net_get_parent.argtypes = [POINTER_T(struct_arsdk_backend_net)]
uint16_t = ctypes.c_uint16
arsdk_backend_net_start_listen = _libraries['libarsdk.so'].arsdk_backend_net_start_listen
arsdk_backend_net_start_listen.restype = ctypes.c_int32
arsdk_backend_net_start_listen.argtypes = [POINTER_T(struct_arsdk_backend_net), POINTER_T(struct_arsdk_backend_listen_cbs), uint16_t]
arsdk_backend_net_stop_listen = _libraries['libarsdk.so'].arsdk_backend_net_stop_listen
arsdk_backend_net_stop_listen.restype = ctypes.c_int32
arsdk_backend_net_stop_listen.argtypes = [POINTER_T(struct_arsdk_backend_net)]
arsdk_backend_net_set_socket_cb = _libraries['libarsdk.so'].arsdk_backend_net_set_socket_cb
arsdk_backend_net_set_socket_cb.restype = ctypes.c_int32
arsdk_backend_net_set_socket_cb.argtypes = [POINTER_T(struct_arsdk_backend_net), arsdk_backend_net_socket_cb_t, POINTER_T(None)]
class struct_arsdk_binary(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('cdata', POINTER_T(None)),
    ('len', ctypes.c_uint32),
    ('PADDING_0', ctypes.c_ubyte * 4),
     ]

class struct_arsdk_value(Structure):
    pass


# values for enumeration 'arsdk_arg_type'
arsdk_arg_type__enumvalues = {
    0: 'ARSDK_ARG_TYPE_I8',
    1: 'ARSDK_ARG_TYPE_U8',
    2: 'ARSDK_ARG_TYPE_I16',
    3: 'ARSDK_ARG_TYPE_U16',
    4: 'ARSDK_ARG_TYPE_I32',
    5: 'ARSDK_ARG_TYPE_U32',
    6: 'ARSDK_ARG_TYPE_I64',
    7: 'ARSDK_ARG_TYPE_U64',
    8: 'ARSDK_ARG_TYPE_FLOAT',
    9: 'ARSDK_ARG_TYPE_DOUBLE',
    10: 'ARSDK_ARG_TYPE_STRING',
    11: 'ARSDK_ARG_TYPE_ENUM',
    12: 'ARSDK_ARG_TYPE_BINARY',
}
ARSDK_ARG_TYPE_I8 = 0
ARSDK_ARG_TYPE_U8 = 1
ARSDK_ARG_TYPE_I16 = 2
ARSDK_ARG_TYPE_U16 = 3
ARSDK_ARG_TYPE_I32 = 4
ARSDK_ARG_TYPE_U32 = 5
ARSDK_ARG_TYPE_I64 = 6
ARSDK_ARG_TYPE_U64 = 7
ARSDK_ARG_TYPE_FLOAT = 8
ARSDK_ARG_TYPE_DOUBLE = 9
ARSDK_ARG_TYPE_STRING = 10
ARSDK_ARG_TYPE_ENUM = 11
ARSDK_ARG_TYPE_BINARY = 12
arsdk_arg_type = ctypes.c_int # enum
class union_arsdk_value_0(Union):
    _pack_ = True # source:False
    _fields_ = [
    ('i8', ctypes.c_byte),
    ('u8', ctypes.c_ubyte),
    ('i16', ctypes.c_int16),
    ('u16', ctypes.c_uint16),
    ('i32', ctypes.c_int32),
    ('u32', ctypes.c_uint32),
    ('u64', ctypes.c_uint64),
    ('i64', ctypes.c_int64),
    ('f32', ctypes.c_float),
    ('f64', ctypes.c_double),
    ('str', POINTER_T(ctypes.c_char)),
    ('cstr', POINTER_T(ctypes.c_char)),
    ('binary', struct_arsdk_binary),
     ]

struct_arsdk_value._pack_ = True # source:False
struct_arsdk_value._fields_ = [
    ('type', arsdk_arg_type),
    ('PADDING_0', ctypes.c_ubyte * 4),
    ('data', union_arsdk_value_0),
]


# values for enumeration 'arsdk_cmd_dir'
arsdk_cmd_dir__enumvalues = {
    0: 'ARSDK_CMD_DIR_RX',
    1: 'ARSDK_CMD_DIR_TX',
}
ARSDK_CMD_DIR_RX = 0
ARSDK_CMD_DIR_TX = 1
arsdk_cmd_dir = ctypes.c_int # enum

# values for enumeration 'arsdk_cmd_itf_send_status'
arsdk_cmd_itf_send_status__enumvalues = {
    0: 'ARSDK_CMD_ITF_SEND_STATUS_SENT',
    1: 'ARSDK_CMD_ITF_SEND_STATUS_ACK_RECEIVED',
    2: 'ARSDK_CMD_ITF_SEND_STATUS_TIMEOUT',
    3: 'ARSDK_CMD_ITF_SEND_STATUS_CANCELED',
}
ARSDK_CMD_ITF_SEND_STATUS_SENT = 0
ARSDK_CMD_ITF_SEND_STATUS_ACK_RECEIVED = 1
ARSDK_CMD_ITF_SEND_STATUS_TIMEOUT = 2
ARSDK_CMD_ITF_SEND_STATUS_CANCELED = 3
arsdk_cmd_itf_send_status = ctypes.c_int # enum
class struct_arsdk_cmd(Structure):
    pass

arsdk_cmd_itf_send_status_cb_t = ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_cmd_itf), POINTER_T(struct_arsdk_cmd), arsdk_cmd_itf_send_status, ctypes.c_int32, POINTER_T(None))
class struct_arsdk_cmd_itf_cbs(Structure):
    pass

struct_arsdk_cmd_itf_cbs._pack_ = True # source:False
struct_arsdk_cmd_itf_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('dispose', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_cmd_itf), POINTER_T(None))),
    ('recv_cmd', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_cmd_itf), POINTER_T(struct_arsdk_cmd), POINTER_T(None))),
    ('cmd_log', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_cmd_itf), arsdk_cmd_dir, POINTER_T(struct_arsdk_cmd), POINTER_T(None))),
    ('transport_log', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_cmd_itf), arsdk_cmd_dir, POINTER_T(None), ctypes.c_uint64, POINTER_T(None), ctypes.c_uint64, POINTER_T(None))),
    ('send_status', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_cmd_itf), POINTER_T(struct_arsdk_cmd), arsdk_cmd_itf_send_status, ctypes.c_int32, POINTER_T(None))),
    ('link_quality', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_cmd_itf), ctypes.c_int32, ctypes.c_int32, ctypes.c_int32, POINTER_T(None))),
]

arsdk_cmd_itf_send_status_str = _libraries['libarsdk.so'].arsdk_cmd_itf_send_status_str
arsdk_cmd_itf_send_status_str.restype = POINTER_T(ctypes.c_char)
arsdk_cmd_itf_send_status_str.argtypes = [arsdk_cmd_itf_send_status]
arsdk_cmd_itf_set_osdata = _libraries['libarsdk.so'].arsdk_cmd_itf_set_osdata
arsdk_cmd_itf_set_osdata.restype = ctypes.c_int32
arsdk_cmd_itf_set_osdata.argtypes = [POINTER_T(struct_arsdk_cmd_itf), POINTER_T(None)]
arsdk_cmd_itf_get_osdata = _libraries['libarsdk.so'].arsdk_cmd_itf_get_osdata
arsdk_cmd_itf_get_osdata.restype = POINTER_T(None)
arsdk_cmd_itf_get_osdata.argtypes = [POINTER_T(struct_arsdk_cmd_itf)]
arsdk_cmd_itf_send = _libraries['libarsdk.so'].arsdk_cmd_itf_send
arsdk_cmd_itf_send.restype = ctypes.c_int32
arsdk_cmd_itf_send.argtypes = [POINTER_T(struct_arsdk_cmd_itf), POINTER_T(struct_arsdk_cmd), arsdk_cmd_itf_send_status_cb_t, POINTER_T(None)]
arsdk_cmd_enc = _libraries['libarsdk.so'].arsdk_cmd_enc
arsdk_cmd_enc.restype = ctypes.c_int32
arsdk_cmd_enc.argtypes = [POINTER_T(struct_arsdk_cmd), POINTER_T(struct_arsdk_cmd_desc)]
size_t = ctypes.c_uint64
arsdk_cmd_enc_argv = _libraries['libarsdk.so'].arsdk_cmd_enc_argv
arsdk_cmd_enc_argv.restype = ctypes.c_int32
arsdk_cmd_enc_argv.argtypes = [POINTER_T(struct_arsdk_cmd), POINTER_T(struct_arsdk_cmd_desc), size_t, POINTER_T(struct_arsdk_value)]
arsdk_cmd_dec = _libraries['libarsdk.so'].arsdk_cmd_dec
arsdk_cmd_dec.restype = ctypes.c_int32
arsdk_cmd_dec.argtypes = [POINTER_T(struct_arsdk_cmd), POINTER_T(struct_arsdk_cmd_desc)]
arsdk_cmd_dec_header = _libraries['libarsdk.so'].arsdk_cmd_dec_header
arsdk_cmd_dec_header.restype = ctypes.c_int32
arsdk_cmd_dec_header.argtypes = [POINTER_T(struct_arsdk_cmd)]
arsdk_cmd_find_desc = _libraries['libarsdk.so'].arsdk_cmd_find_desc
arsdk_cmd_find_desc.restype = POINTER_T(struct_arsdk_cmd_desc)
arsdk_cmd_find_desc.argtypes = [POINTER_T(struct_arsdk_cmd)]
arsdk_cmd_fmt = _libraries['libarsdk.so'].arsdk_cmd_fmt
arsdk_cmd_fmt.restype = ctypes.c_int32
arsdk_cmd_fmt.argtypes = [POINTER_T(struct_arsdk_cmd), POINTER_T(ctypes.c_char), size_t]
arsdk_cmd_get_values = _libraries['libarsdk.so'].arsdk_cmd_get_values
arsdk_cmd_get_values.restype = ctypes.c_int32
arsdk_cmd_get_values.argtypes = [POINTER_T(struct_arsdk_cmd), POINTER_T(struct_arsdk_value), size_t, POINTER_T(ctypes.c_uint64)]
arsdk_arg_type_str = _libraries['libarsdk.so'].arsdk_arg_type_str
arsdk_arg_type_str.restype = POINTER_T(ctypes.c_char)
arsdk_arg_type_str.argtypes = [arsdk_arg_type]

# values for enumeration 'arsdk_cmd_list_type'
arsdk_cmd_list_type__enumvalues = {
    0: 'ARSDK_CMD_LIST_TYPE_NONE',
    1: 'ARSDK_CMD_LIST_TYPE_LIST_ITEM',
    2: 'ARSDK_CMD_LIST_TYPE_MAP_ITEM',
}
ARSDK_CMD_LIST_TYPE_NONE = 0
ARSDK_CMD_LIST_TYPE_LIST_ITEM = 1
ARSDK_CMD_LIST_TYPE_MAP_ITEM = 2
arsdk_cmd_list_type = ctypes.c_int # enum

# values for enumeration 'arsdk_cmd_buffer_type'
arsdk_cmd_buffer_type__enumvalues = {
    0: 'ARSDK_CMD_BUFFER_TYPE_INVALID',
    1: 'ARSDK_CMD_BUFFER_TYPE_NON_ACK',
    2: 'ARSDK_CMD_BUFFER_TYPE_ACK',
    3: 'ARSDK_CMD_BUFFER_TYPE_HIGH_PRIO',
}
ARSDK_CMD_BUFFER_TYPE_INVALID = 0
ARSDK_CMD_BUFFER_TYPE_NON_ACK = 1
ARSDK_CMD_BUFFER_TYPE_ACK = 2
ARSDK_CMD_BUFFER_TYPE_HIGH_PRIO = 3
arsdk_cmd_buffer_type = ctypes.c_int # enum

# values for enumeration 'arsdk_cmd_timeout_policy'
arsdk_cmd_timeout_policy__enumvalues = {
    0: 'ARSDK_CMD_TIMEOUT_POLICY_POP',
    1: 'ARSDK_CMD_TIMEOUT_POLICY_RETRY',
    2: 'ARSDK_CMD_TIMEOUT_POLICY_FLUSH',
}
ARSDK_CMD_TIMEOUT_POLICY_POP = 0
ARSDK_CMD_TIMEOUT_POLICY_RETRY = 1
ARSDK_CMD_TIMEOUT_POLICY_FLUSH = 2
arsdk_cmd_timeout_policy = ctypes.c_int # enum
class struct_arsdk_enum_desc(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('name', POINTER_T(ctypes.c_char)),
    ('value', ctypes.c_int32),
    ('PADDING_0', ctypes.c_ubyte * 4),
     ]

class struct_arsdk_arg_desc(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('name', POINTER_T(ctypes.c_char)),
    ('type', arsdk_arg_type),
    ('PADDING_0', ctypes.c_ubyte * 4),
    ('enum_desc_table', POINTER_T(struct_arsdk_enum_desc)),
    ('enum_desc_count', ctypes.c_uint32),
    ('PADDING_1', ctypes.c_ubyte * 4),
     ]

class struct_arsdk_mngr_peer_cbs(Structure):
    pass

struct_arsdk_mngr_peer_cbs._pack_ = True # source:False
struct_arsdk_mngr_peer_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('added', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_peer), POINTER_T(None))),
    ('removed', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_peer), POINTER_T(None))),
]

class struct_pomp_loop(Structure):
    pass

arsdk_mngr_new = _libraries['libarsdk.so'].arsdk_mngr_new
arsdk_mngr_new.restype = ctypes.c_int32
arsdk_mngr_new.argtypes = [POINTER_T(struct_pomp_loop), POINTER_T(POINTER_T(struct_arsdk_mngr))]
arsdk_mngr_set_peer_cbs = _libraries['libarsdk.so'].arsdk_mngr_set_peer_cbs
arsdk_mngr_set_peer_cbs.restype = ctypes.c_int32
arsdk_mngr_set_peer_cbs.argtypes = [POINTER_T(struct_arsdk_mngr), POINTER_T(struct_arsdk_mngr_peer_cbs)]
arsdk_mngr_get_loop = _libraries['libarsdk.so'].arsdk_mngr_get_loop
arsdk_mngr_get_loop.restype = POINTER_T(struct_pomp_loop)
arsdk_mngr_get_loop.argtypes = [POINTER_T(struct_arsdk_mngr)]
arsdk_mngr_destroy = _libraries['libarsdk.so'].arsdk_mngr_destroy
arsdk_mngr_destroy.restype = ctypes.c_int32
arsdk_mngr_destroy.argtypes = [POINTER_T(struct_arsdk_mngr)]
arsdk_mngr_next_peer = _libraries['libarsdk.so'].arsdk_mngr_next_peer
arsdk_mngr_next_peer.restype = POINTER_T(struct_arsdk_peer)
arsdk_mngr_next_peer.argtypes = [POINTER_T(struct_arsdk_mngr), POINTER_T(struct_arsdk_peer)]
arsdk_mngr_get_peer = _libraries['libarsdk.so'].arsdk_mngr_get_peer
arsdk_mngr_get_peer.restype = POINTER_T(struct_arsdk_peer)
arsdk_mngr_get_peer.argtypes = [POINTER_T(struct_arsdk_mngr), uint16_t]
class struct_arsdk_peer_conn_cfg(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('json', POINTER_T(ctypes.c_char)),
     ]

class struct_arsdk_peer_conn_cbs(Structure):
    pass

struct_arsdk_peer_conn_cbs._pack_ = True # source:False
struct_arsdk_peer_conn_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('connected', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_peer), POINTER_T(struct_arsdk_peer_info), POINTER_T(None))),
    ('disconnected', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_peer), POINTER_T(struct_arsdk_peer_info), POINTER_T(None))),
    ('canceled', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_peer), POINTER_T(struct_arsdk_peer_info), arsdk_conn_cancel_reason, POINTER_T(None))),
    ('link_status', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_peer), POINTER_T(struct_arsdk_peer_info), arsdk_link_status, POINTER_T(None))),
]

arsdk_peer_get_handle = _libraries['libarsdk.so'].arsdk_peer_get_handle
arsdk_peer_get_handle.restype = uint16_t
arsdk_peer_get_handle.argtypes = [POINTER_T(struct_arsdk_peer)]
arsdk_peer_get_info = _libraries['libarsdk.so'].arsdk_peer_get_info
arsdk_peer_get_info.restype = ctypes.c_int32
arsdk_peer_get_info.argtypes = [POINTER_T(struct_arsdk_peer), POINTER_T(POINTER_T(struct_arsdk_peer_info))]
arsdk_peer_get_backend = _libraries['libarsdk.so'].arsdk_peer_get_backend
arsdk_peer_get_backend.restype = POINTER_T(struct_arsdk_backend)
arsdk_peer_get_backend.argtypes = [POINTER_T(struct_arsdk_peer)]
arsdk_peer_accept = _libraries['libarsdk.so'].arsdk_peer_accept
arsdk_peer_accept.restype = ctypes.c_int32
arsdk_peer_accept.argtypes = [POINTER_T(struct_arsdk_peer), POINTER_T(struct_arsdk_peer_conn_cfg), POINTER_T(struct_arsdk_peer_conn_cbs), POINTER_T(struct_pomp_loop)]
arsdk_peer_reject = _libraries['libarsdk.so'].arsdk_peer_reject
arsdk_peer_reject.restype = ctypes.c_int32
arsdk_peer_reject.argtypes = [POINTER_T(struct_arsdk_peer)]
arsdk_peer_disconnect = _libraries['libarsdk.so'].arsdk_peer_disconnect
arsdk_peer_disconnect.restype = ctypes.c_int32
arsdk_peer_disconnect.argtypes = [POINTER_T(struct_arsdk_peer)]
arsdk_peer_create_cmd_itf = _libraries['libarsdk.so'].arsdk_peer_create_cmd_itf
arsdk_peer_create_cmd_itf.restype = ctypes.c_int32
arsdk_peer_create_cmd_itf.argtypes = [POINTER_T(struct_arsdk_peer), POINTER_T(struct_arsdk_cmd_itf_cbs), POINTER_T(POINTER_T(struct_arsdk_cmd_itf))]
arsdk_peer_get_cmd_itf = _libraries['libarsdk.so'].arsdk_peer_get_cmd_itf
arsdk_peer_get_cmd_itf.restype = POINTER_T(struct_arsdk_cmd_itf)
arsdk_peer_get_cmd_itf.argtypes = [POINTER_T(struct_arsdk_peer)]
class struct_arsdk_publisher_avahi(Structure):
    pass

class struct_arsdk_publisher_avahi_cfg(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('base', struct_arsdk_publisher_cfg),
    ('port', ctypes.c_uint16),
    ('PADDING_0', ctypes.c_ubyte * 6),
     ]

arsdk_publisher_avahi_new = _libraries['libarsdk.so'].arsdk_publisher_avahi_new
arsdk_publisher_avahi_new.restype = ctypes.c_int32
arsdk_publisher_avahi_new.argtypes = [POINTER_T(struct_arsdk_backend_net), POINTER_T(struct_pomp_loop), POINTER_T(POINTER_T(struct_arsdk_publisher_avahi))]
arsdk_publisher_avahi_destroy = _libraries['libarsdk.so'].arsdk_publisher_avahi_destroy
arsdk_publisher_avahi_destroy.restype = ctypes.c_int32
arsdk_publisher_avahi_destroy.argtypes = [POINTER_T(struct_arsdk_publisher_avahi)]
arsdk_publisher_avahi_start = _libraries['libarsdk.so'].arsdk_publisher_avahi_start
arsdk_publisher_avahi_start.restype = ctypes.c_int32
arsdk_publisher_avahi_start.argtypes = [POINTER_T(struct_arsdk_publisher_avahi), POINTER_T(struct_arsdk_publisher_avahi_cfg)]
arsdk_publisher_avahi_stop = _libraries['libarsdk.so'].arsdk_publisher_avahi_stop
arsdk_publisher_avahi_stop.restype = ctypes.c_int32
arsdk_publisher_avahi_stop.argtypes = [POINTER_T(struct_arsdk_publisher_avahi)]
class struct_arsdk_publisher_mux(Structure):
    pass

arsdk_publisher_mux_new = _libraries['libarsdk.so'].arsdk_publisher_mux_new
arsdk_publisher_mux_new.restype = ctypes.c_int32
arsdk_publisher_mux_new.argtypes = [POINTER_T(struct_arsdk_backend_mux), POINTER_T(struct_mux_ctx), POINTER_T(POINTER_T(struct_arsdk_publisher_mux))]
arsdk_publisher_mux_destroy = _libraries['libarsdk.so'].arsdk_publisher_mux_destroy
arsdk_publisher_mux_destroy.restype = ctypes.c_int32
arsdk_publisher_mux_destroy.argtypes = [POINTER_T(struct_arsdk_publisher_mux)]
arsdk_publisher_mux_start = _libraries['libarsdk.so'].arsdk_publisher_mux_start
arsdk_publisher_mux_start.restype = ctypes.c_int32
arsdk_publisher_mux_start.argtypes = [POINTER_T(struct_arsdk_publisher_mux), POINTER_T(struct_arsdk_publisher_cfg)]
arsdk_publisher_mux_stop = _libraries['libarsdk.so'].arsdk_publisher_mux_stop
arsdk_publisher_mux_stop.restype = ctypes.c_int32
arsdk_publisher_mux_stop.argtypes = [POINTER_T(struct_arsdk_publisher_mux)]
class struct_arsdk_publisher_net(Structure):
    pass

class struct_arsdk_publisher_net_cfg(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('base', struct_arsdk_publisher_cfg),
    ('port', ctypes.c_uint16),
    ('PADDING_0', ctypes.c_ubyte * 6),
     ]

arsdk_publisher_net_new = _libraries['libarsdk.so'].arsdk_publisher_net_new
arsdk_publisher_net_new.restype = ctypes.c_int32
arsdk_publisher_net_new.argtypes = [POINTER_T(struct_arsdk_backend_net), POINTER_T(struct_pomp_loop), POINTER_T(ctypes.c_char), POINTER_T(POINTER_T(struct_arsdk_publisher_net))]
arsdk_publisher_net_destroy = _libraries['libarsdk.so'].arsdk_publisher_net_destroy
arsdk_publisher_net_destroy.restype = ctypes.c_int32
arsdk_publisher_net_destroy.argtypes = [POINTER_T(struct_arsdk_publisher_net)]
arsdk_publisher_net_start = _libraries['libarsdk.so'].arsdk_publisher_net_start
arsdk_publisher_net_start.restype = ctypes.c_int32
arsdk_publisher_net_start.argtypes = [POINTER_T(struct_arsdk_publisher_net), POINTER_T(struct_arsdk_publisher_net_cfg)]
arsdk_publisher_net_stop = _libraries['libarsdk.so'].arsdk_publisher_net_stop
arsdk_publisher_net_stop.restype = ctypes.c_int32
arsdk_publisher_net_stop.argtypes = [POINTER_T(struct_arsdk_publisher_net)]
class struct_arsdk_blackbox_listener(Structure):
    pass

class struct_arsdk_blackbox_rc_piloting_info(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('pitch', ctypes.c_byte),
    ('roll', ctypes.c_byte),
    ('yaw', ctypes.c_byte),
    ('gaz', ctypes.c_byte),
    ('source', ctypes.c_byte),
     ]

class struct_arsdk_blackbox_listener_cbs(Structure):
    pass

class struct_arsdk_blackbox_itf(Structure):
    pass

struct_arsdk_blackbox_listener_cbs._pack_ = True # source:False
struct_arsdk_blackbox_listener_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('rc_button_action', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_blackbox_itf), POINTER_T(struct_arsdk_blackbox_listener), ctypes.c_int32, POINTER_T(None))),
    ('rc_piloting_info', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_blackbox_itf), POINTER_T(struct_arsdk_blackbox_listener), POINTER_T(struct_arsdk_blackbox_rc_piloting_info), POINTER_T(None))),
    ('unregister', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_blackbox_itf), POINTER_T(struct_arsdk_blackbox_listener), POINTER_T(None))),
]

arsdk_blackbox_itf_create_listener = _libraries['libarsdkctrl.so'].arsdk_blackbox_itf_create_listener
arsdk_blackbox_itf_create_listener.restype = ctypes.c_int32
arsdk_blackbox_itf_create_listener.argtypes = [POINTER_T(struct_arsdk_blackbox_itf), POINTER_T(struct_arsdk_blackbox_listener_cbs), POINTER_T(POINTER_T(struct_arsdk_blackbox_listener))]
arsdk_blackbox_listener_unregister = _libraries['libarsdkctrl.so'].arsdk_blackbox_listener_unregister
arsdk_blackbox_listener_unregister.restype = ctypes.c_int32
arsdk_blackbox_listener_unregister.argtypes = [POINTER_T(struct_arsdk_blackbox_listener)]
class struct_arsdk_crashml_req(Structure):
    pass


# values for enumeration 'arsdk_crashml_type'
arsdk_crashml_type__enumvalues = {
    1: 'ARSDK_CRASHML_TYPE_DIR',
    2: 'ARSDK_CRASHML_TYPE_TARGZ',
}
ARSDK_CRASHML_TYPE_DIR = 1
ARSDK_CRASHML_TYPE_TARGZ = 2
arsdk_crashml_type = ctypes.c_int # enum

# values for enumeration 'arsdk_crashml_req_status'
arsdk_crashml_req_status__enumvalues = {
    0: 'ARSDK_CRASHML_REQ_STATUS_OK',
    1: 'ARSDK_CRASHML_REQ_STATUS_CANCELED',
    2: 'ARSDK_CRASHML_REQ_STATUS_FAILED',
    3: 'ARSDK_CRASHML_REQ_STATUS_ABORTED',
}
ARSDK_CRASHML_REQ_STATUS_OK = 0
ARSDK_CRASHML_REQ_STATUS_CANCELED = 1
ARSDK_CRASHML_REQ_STATUS_FAILED = 2
ARSDK_CRASHML_REQ_STATUS_ABORTED = 3
arsdk_crashml_req_status = ctypes.c_int # enum
class struct_arsdk_crashml_req_cbs(Structure):
    pass

class struct_arsdk_crashml_itf(Structure):
    pass

struct_arsdk_crashml_req_cbs._pack_ = True # source:False
struct_arsdk_crashml_req_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('progress', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_crashml_itf), POINTER_T(struct_arsdk_crashml_req), POINTER_T(ctypes.c_char), ctypes.c_int32, ctypes.c_int32, arsdk_crashml_req_status, POINTER_T(None))),
    ('complete', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_crashml_itf), POINTER_T(struct_arsdk_crashml_req), arsdk_crashml_req_status, ctypes.c_int32, POINTER_T(None))),
]

arsdk_crashml_itf_cancel_all = _libraries['libarsdkctrl.so'].arsdk_crashml_itf_cancel_all
arsdk_crashml_itf_cancel_all.restype = ctypes.c_int32
arsdk_crashml_itf_cancel_all.argtypes = [POINTER_T(struct_arsdk_crashml_itf)]
uint32_t = ctypes.c_uint32
arsdk_crashml_itf_create_req = _libraries['libarsdkctrl.so'].arsdk_crashml_itf_create_req
arsdk_crashml_itf_create_req.restype = ctypes.c_int32
arsdk_crashml_itf_create_req.argtypes = [POINTER_T(struct_arsdk_crashml_itf), POINTER_T(ctypes.c_char), arsdk_device_type, POINTER_T(struct_arsdk_crashml_req_cbs), uint32_t, POINTER_T(POINTER_T(struct_arsdk_crashml_req))]
arsdk_crashml_req_cancel = _libraries['libarsdkctrl.so'].arsdk_crashml_req_cancel
arsdk_crashml_req_cancel.restype = ctypes.c_int32
arsdk_crashml_req_cancel.argtypes = [POINTER_T(struct_arsdk_crashml_req)]
arsdk_crashml_req_get_dev_type = _libraries['libarsdkctrl.so'].arsdk_crashml_req_get_dev_type
arsdk_crashml_req_get_dev_type.restype = ctypes.c_int
arsdk_crashml_req_get_dev_type.argtypes = [POINTER_T(struct_arsdk_crashml_req)]
class struct_arsdk_ctrl_device_cbs(Structure):
    pass

class struct_arsdk_device(Structure):
    pass

struct_arsdk_ctrl_device_cbs._pack_ = True # source:False
struct_arsdk_ctrl_device_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('added', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_device), POINTER_T(None))),
    ('removed', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_device), POINTER_T(None))),
]

class struct_arsdk_ctrl(Structure):
    pass

arsdk_ctrl_new = _libraries['libarsdkctrl.so'].arsdk_ctrl_new
arsdk_ctrl_new.restype = ctypes.c_int32
arsdk_ctrl_new.argtypes = [POINTER_T(struct_pomp_loop), POINTER_T(POINTER_T(struct_arsdk_ctrl))]
arsdk_ctrl_set_device_cbs = _libraries['libarsdkctrl.so'].arsdk_ctrl_set_device_cbs
arsdk_ctrl_set_device_cbs.restype = ctypes.c_int32
arsdk_ctrl_set_device_cbs.argtypes = [POINTER_T(struct_arsdk_ctrl), POINTER_T(struct_arsdk_ctrl_device_cbs)]
arsdk_ctrl_get_loop = _libraries['libarsdkctrl.so'].arsdk_ctrl_get_loop
arsdk_ctrl_get_loop.restype = POINTER_T(struct_pomp_loop)
arsdk_ctrl_get_loop.argtypes = [POINTER_T(struct_arsdk_ctrl)]
arsdk_ctrl_destroy = _libraries['libarsdkctrl.so'].arsdk_ctrl_destroy
arsdk_ctrl_destroy.restype = ctypes.c_int32
arsdk_ctrl_destroy.argtypes = [POINTER_T(struct_arsdk_ctrl)]
arsdk_ctrl_next_device = _libraries['libarsdkctrl.so'].arsdk_ctrl_next_device
arsdk_ctrl_next_device.restype = POINTER_T(struct_arsdk_device)
arsdk_ctrl_next_device.argtypes = [POINTER_T(struct_arsdk_ctrl), POINTER_T(struct_arsdk_device)]
arsdk_ctrl_get_device = _libraries['libarsdkctrl.so'].arsdk_ctrl_get_device
arsdk_ctrl_get_device.restype = POINTER_T(struct_arsdk_device)
arsdk_ctrl_get_device.argtypes = [POINTER_T(struct_arsdk_ctrl), uint16_t]

# values for enumeration 'arsdk_device_state'
arsdk_device_state__enumvalues = {
    0: 'ARSDK_DEVICE_STATE_IDLE',
    1: 'ARSDK_DEVICE_STATE_CONNECTING',
    2: 'ARSDK_DEVICE_STATE_CONNECTED',
    3: 'ARSDK_DEVICE_STATE_REMOVING',
}
ARSDK_DEVICE_STATE_IDLE = 0
ARSDK_DEVICE_STATE_CONNECTING = 1
ARSDK_DEVICE_STATE_CONNECTED = 2
ARSDK_DEVICE_STATE_REMOVING = 3
arsdk_device_state = ctypes.c_int # enum

# values for enumeration 'arsdk_device_api'
arsdk_device_api__enumvalues = {
    0: 'ARSDK_DEVICE_API_UNKNOWN',
    1: 'ARSDK_DEVICE_API_FULL',
    2: 'ARSDK_DEVICE_API_UPDATE_ONLY',
}
ARSDK_DEVICE_API_UNKNOWN = 0
ARSDK_DEVICE_API_FULL = 1
ARSDK_DEVICE_API_UPDATE_ONLY = 2
arsdk_device_api = ctypes.c_int # enum
class struct_arsdk_device_conn_cfg(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('ctrl_name', POINTER_T(ctypes.c_char)),
    ('ctrl_type', POINTER_T(ctypes.c_char)),
    ('device_id', POINTER_T(ctypes.c_char)),
    ('json', POINTER_T(ctypes.c_char)),
     ]

class struct_arsdk_device_conn_cbs(Structure):
    pass

class struct_arsdk_device_info(Structure):
    pass

struct_arsdk_device_conn_cbs._pack_ = True # source:False
struct_arsdk_device_conn_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('connecting', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_device), POINTER_T(struct_arsdk_device_info), POINTER_T(None))),
    ('connected', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_device), POINTER_T(struct_arsdk_device_info), POINTER_T(None))),
    ('disconnected', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_device), POINTER_T(struct_arsdk_device_info), POINTER_T(None))),
    ('canceled', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_device), POINTER_T(struct_arsdk_device_info), arsdk_conn_cancel_reason, POINTER_T(None))),
    ('link_status', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_device), POINTER_T(struct_arsdk_device_info), arsdk_link_status, POINTER_T(None))),
]

arsdk_device_state_str = _libraries['libarsdkctrl.so'].arsdk_device_state_str
arsdk_device_state_str.restype = POINTER_T(ctypes.c_char)
arsdk_device_state_str.argtypes = [arsdk_device_state]
arsdk_device_get_handle = _libraries['libarsdkctrl.so'].arsdk_device_get_handle
arsdk_device_get_handle.restype = uint16_t
arsdk_device_get_handle.argtypes = [POINTER_T(struct_arsdk_device)]
arsdk_device_get_info = _libraries['libarsdkctrl.so'].arsdk_device_get_info
arsdk_device_get_info.restype = ctypes.c_int32
arsdk_device_get_info.argtypes = [POINTER_T(struct_arsdk_device), POINTER_T(POINTER_T(struct_arsdk_device_info))]
class struct_arsdkctrl_backend(Structure):
    pass

arsdk_device_get_backend = _libraries['libarsdkctrl.so'].arsdk_device_get_backend
arsdk_device_get_backend.restype = POINTER_T(struct_arsdkctrl_backend)
arsdk_device_get_backend.argtypes = [POINTER_T(struct_arsdk_device)]
arsdk_device_connect = _libraries['libarsdkctrl.so'].arsdk_device_connect
arsdk_device_connect.restype = ctypes.c_int32
arsdk_device_connect.argtypes = [POINTER_T(struct_arsdk_device), POINTER_T(struct_arsdk_device_conn_cfg), POINTER_T(struct_arsdk_device_conn_cbs), POINTER_T(struct_pomp_loop)]
arsdk_device_disconnect = _libraries['libarsdkctrl.so'].arsdk_device_disconnect
arsdk_device_disconnect.restype = ctypes.c_int32
arsdk_device_disconnect.argtypes = [POINTER_T(struct_arsdk_device)]
arsdk_device_create_cmd_itf = _libraries['libarsdkctrl.so'].arsdk_device_create_cmd_itf
arsdk_device_create_cmd_itf.restype = ctypes.c_int32
arsdk_device_create_cmd_itf.argtypes = [POINTER_T(struct_arsdk_device), POINTER_T(struct_arsdk_cmd_itf_cbs), POINTER_T(POINTER_T(struct_arsdk_cmd_itf))]
arsdk_device_get_cmd_itf = _libraries['libarsdkctrl.so'].arsdk_device_get_cmd_itf
arsdk_device_get_cmd_itf.restype = POINTER_T(struct_arsdk_cmd_itf)
arsdk_device_get_cmd_itf.argtypes = [POINTER_T(struct_arsdk_device)]
class struct_arsdk_ftp_itf(Structure):
    pass

arsdk_device_get_ftp_itf = _libraries['libarsdkctrl.so'].arsdk_device_get_ftp_itf
arsdk_device_get_ftp_itf.restype = ctypes.c_int32
arsdk_device_get_ftp_itf.argtypes = [POINTER_T(struct_arsdk_device), POINTER_T(POINTER_T(struct_arsdk_ftp_itf))]
class struct_arsdk_media_itf(Structure):
    pass

arsdk_device_get_media_itf = _libraries['libarsdkctrl.so'].arsdk_device_get_media_itf
arsdk_device_get_media_itf.restype = ctypes.c_int32
arsdk_device_get_media_itf.argtypes = [POINTER_T(struct_arsdk_device), POINTER_T(POINTER_T(struct_arsdk_media_itf))]
class struct_arsdk_updater_itf(Structure):
    pass

arsdk_device_get_updater_itf = _libraries['libarsdkctrl.so'].arsdk_device_get_updater_itf
arsdk_device_get_updater_itf.restype = ctypes.c_int32
arsdk_device_get_updater_itf.argtypes = [POINTER_T(struct_arsdk_device), POINTER_T(POINTER_T(struct_arsdk_updater_itf))]
arsdk_device_get_blackbox_itf = _libraries['libarsdkctrl.so'].arsdk_device_get_blackbox_itf
arsdk_device_get_blackbox_itf.restype = ctypes.c_int32
arsdk_device_get_blackbox_itf.argtypes = [POINTER_T(struct_arsdk_device), POINTER_T(POINTER_T(struct_arsdk_blackbox_itf))]
arsdk_device_get_crashml_itf = _libraries['libarsdkctrl.so'].arsdk_device_get_crashml_itf
arsdk_device_get_crashml_itf.restype = ctypes.c_int32
arsdk_device_get_crashml_itf.argtypes = [POINTER_T(struct_arsdk_device), POINTER_T(POINTER_T(struct_arsdk_crashml_itf))]
class struct_arsdk_flight_log_itf(Structure):
    pass

arsdk_device_get_flight_log_itf = _libraries['libarsdkctrl.so'].arsdk_device_get_flight_log_itf
arsdk_device_get_flight_log_itf.restype = ctypes.c_int32
arsdk_device_get_flight_log_itf.argtypes = [POINTER_T(struct_arsdk_device), POINTER_T(POINTER_T(struct_arsdk_flight_log_itf))]
class struct_arsdk_pud_itf(Structure):
    pass

arsdk_device_get_pud_itf = _libraries['libarsdkctrl.so'].arsdk_device_get_pud_itf
arsdk_device_get_pud_itf.restype = ctypes.c_int32
arsdk_device_get_pud_itf.argtypes = [POINTER_T(struct_arsdk_device), POINTER_T(POINTER_T(struct_arsdk_pud_itf))]
class struct_arsdk_ephemeris_itf(Structure):
    pass

arsdk_device_get_ephemeris_itf = _libraries['libarsdkctrl.so'].arsdk_device_get_ephemeris_itf
arsdk_device_get_ephemeris_itf.restype = ctypes.c_int32
arsdk_device_get_ephemeris_itf.argtypes = [POINTER_T(struct_arsdk_device), POINTER_T(POINTER_T(struct_arsdk_ephemeris_itf))]
class struct_arsdk_device_tcp_proxy_cbs(Structure):
    pass

class struct_arsdk_device_tcp_proxy(Structure):
    pass

struct_arsdk_device_tcp_proxy_cbs._pack_ = True # source:False
struct_arsdk_device_tcp_proxy_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('open', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_device_tcp_proxy), ctypes.c_uint16, POINTER_T(None))),
    ('close', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_device_tcp_proxy), POINTER_T(None))),
]

arsdk_device_create_tcp_proxy = _libraries['libarsdkctrl.so'].arsdk_device_create_tcp_proxy
arsdk_device_create_tcp_proxy.restype = ctypes.c_int32
arsdk_device_create_tcp_proxy.argtypes = [POINTER_T(struct_arsdk_device), arsdk_device_type, uint16_t, POINTER_T(struct_arsdk_device_tcp_proxy_cbs), POINTER_T(POINTER_T(struct_arsdk_device_tcp_proxy))]
arsdk_device_destroy_tcp_proxy = _libraries['libarsdkctrl.so'].arsdk_device_destroy_tcp_proxy
arsdk_device_destroy_tcp_proxy.restype = ctypes.c_int32
arsdk_device_destroy_tcp_proxy.argtypes = [POINTER_T(struct_arsdk_device_tcp_proxy)]
arsdk_device_tcp_proxy_get_addr = _libraries['libarsdkctrl.so'].arsdk_device_tcp_proxy_get_addr
arsdk_device_tcp_proxy_get_addr.restype = POINTER_T(ctypes.c_char)
arsdk_device_tcp_proxy_get_addr.argtypes = [POINTER_T(struct_arsdk_device_tcp_proxy)]
arsdk_device_tcp_proxy_get_port = _libraries['libarsdkctrl.so'].arsdk_device_tcp_proxy_get_port
arsdk_device_tcp_proxy_get_port.restype = ctypes.c_int32
arsdk_device_tcp_proxy_get_port.argtypes = [POINTER_T(struct_arsdk_device_tcp_proxy)]
class struct_arsdk_discovery_avahi(Structure):
    pass

class struct_arsdkctrl_backend_net(Structure):
    pass

class struct_arsdk_discovery_cfg(Structure):
    pass

arsdk_discovery_avahi_new = _libraries['libarsdkctrl.so'].arsdk_discovery_avahi_new
arsdk_discovery_avahi_new.restype = ctypes.c_int32
arsdk_discovery_avahi_new.argtypes = [POINTER_T(struct_arsdk_ctrl), POINTER_T(struct_arsdkctrl_backend_net), POINTER_T(struct_arsdk_discovery_cfg), POINTER_T(POINTER_T(struct_arsdk_discovery_avahi))]
arsdk_discovery_avahi_destroy = _libraries['libarsdkctrl.so'].arsdk_discovery_avahi_destroy
arsdk_discovery_avahi_destroy.restype = ctypes.c_int32
arsdk_discovery_avahi_destroy.argtypes = [POINTER_T(struct_arsdk_discovery_avahi)]
arsdk_discovery_avahi_start = _libraries['libarsdkctrl.so'].arsdk_discovery_avahi_start
arsdk_discovery_avahi_start.restype = ctypes.c_int32
arsdk_discovery_avahi_start.argtypes = [POINTER_T(struct_arsdk_discovery_avahi)]
arsdk_discovery_avahi_stop = _libraries['libarsdkctrl.so'].arsdk_discovery_avahi_stop
arsdk_discovery_avahi_stop.restype = ctypes.c_int32
arsdk_discovery_avahi_stop.argtypes = [POINTER_T(struct_arsdk_discovery_avahi)]
class struct_arsdk_discovery_mux(Structure):
    pass

class struct_arsdkctrl_backend_mux(Structure):
    pass

arsdk_discovery_mux_new = _libraries['libarsdkctrl.so'].arsdk_discovery_mux_new
arsdk_discovery_mux_new.restype = ctypes.c_int32
arsdk_discovery_mux_new.argtypes = [POINTER_T(struct_arsdk_ctrl), POINTER_T(struct_arsdkctrl_backend_mux), POINTER_T(struct_arsdk_discovery_cfg), POINTER_T(struct_mux_ctx), POINTER_T(POINTER_T(struct_arsdk_discovery_mux))]
arsdk_discovery_mux_destroy = _libraries['libarsdkctrl.so'].arsdk_discovery_mux_destroy
arsdk_discovery_mux_destroy.restype = ctypes.c_int32
arsdk_discovery_mux_destroy.argtypes = [POINTER_T(struct_arsdk_discovery_mux)]
arsdk_discovery_mux_start = _libraries['libarsdkctrl.so'].arsdk_discovery_mux_start
arsdk_discovery_mux_start.restype = ctypes.c_int32
arsdk_discovery_mux_start.argtypes = [POINTER_T(struct_arsdk_discovery_mux)]
arsdk_discovery_mux_stop = _libraries['libarsdkctrl.so'].arsdk_discovery_mux_stop
arsdk_discovery_mux_stop.restype = ctypes.c_int32
arsdk_discovery_mux_stop.argtypes = [POINTER_T(struct_arsdk_discovery_mux)]
class struct_arsdk_discovery_net(Structure):
    pass

arsdk_discovery_net_new = _libraries['libarsdkctrl.so'].arsdk_discovery_net_new
arsdk_discovery_net_new.restype = ctypes.c_int32
arsdk_discovery_net_new.argtypes = [POINTER_T(struct_arsdk_ctrl), POINTER_T(struct_arsdkctrl_backend_net), POINTER_T(struct_arsdk_discovery_cfg), POINTER_T(ctypes.c_char), POINTER_T(POINTER_T(struct_arsdk_discovery_net))]
arsdk_discovery_net_new_with_port = _libraries['libarsdkctrl.so'].arsdk_discovery_net_new_with_port
arsdk_discovery_net_new_with_port.restype = ctypes.c_int32
arsdk_discovery_net_new_with_port.argtypes = [POINTER_T(struct_arsdk_ctrl), POINTER_T(struct_arsdkctrl_backend_net), POINTER_T(struct_arsdk_discovery_cfg), POINTER_T(ctypes.c_char), uint16_t, POINTER_T(POINTER_T(struct_arsdk_discovery_net))]
arsdk_discovery_net_destroy = _libraries['libarsdkctrl.so'].arsdk_discovery_net_destroy
arsdk_discovery_net_destroy.restype = ctypes.c_int32
arsdk_discovery_net_destroy.argtypes = [POINTER_T(struct_arsdk_discovery_net)]
arsdk_discovery_net_start = _libraries['libarsdkctrl.so'].arsdk_discovery_net_start
arsdk_discovery_net_start.restype = ctypes.c_int32
arsdk_discovery_net_start.argtypes = [POINTER_T(struct_arsdk_discovery_net)]
arsdk_discovery_net_stop = _libraries['libarsdkctrl.so'].arsdk_discovery_net_stop
arsdk_discovery_net_stop.restype = ctypes.c_int32
arsdk_discovery_net_stop.argtypes = [POINTER_T(struct_arsdk_discovery_net)]
class struct_arsdk_ephemeris_req_upload(Structure):
    pass


# values for enumeration 'arsdk_ephemeris_req_status'
arsdk_ephemeris_req_status__enumvalues = {
    0: 'ARSDK_EPHEMERIS_REQ_STATUS_OK',
    1: 'ARSDK_EPHEMERIS_REQ_STATUS_CANCELED',
    2: 'ARSDK_EPHEMERIS_REQ_STATUS_FAILED',
    3: 'ARSDK_EPHEMERIS_REQ_STATUS_ABORTED',
}
ARSDK_EPHEMERIS_REQ_STATUS_OK = 0
ARSDK_EPHEMERIS_REQ_STATUS_CANCELED = 1
ARSDK_EPHEMERIS_REQ_STATUS_FAILED = 2
ARSDK_EPHEMERIS_REQ_STATUS_ABORTED = 3
arsdk_ephemeris_req_status = ctypes.c_int # enum
class struct_arsdk_ephemeris_req_upload_cbs(Structure):
    pass

struct_arsdk_ephemeris_req_upload_cbs._pack_ = True # source:False
struct_arsdk_ephemeris_req_upload_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('progress', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_ephemeris_itf), POINTER_T(struct_arsdk_ephemeris_req_upload), ctypes.c_float, POINTER_T(None))),
    ('complete', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_ephemeris_itf), POINTER_T(struct_arsdk_ephemeris_req_upload), arsdk_ephemeris_req_status, ctypes.c_int32, POINTER_T(None))),
]

arsdk_ephemeris_itf_create_req_upload = _libraries['libarsdkctrl.so'].arsdk_ephemeris_itf_create_req_upload
arsdk_ephemeris_itf_create_req_upload.restype = ctypes.c_int32
arsdk_ephemeris_itf_create_req_upload.argtypes = [POINTER_T(struct_arsdk_ephemeris_itf), POINTER_T(ctypes.c_char), arsdk_device_type, POINTER_T(struct_arsdk_ephemeris_req_upload_cbs), POINTER_T(POINTER_T(struct_arsdk_ephemeris_req_upload))]
arsdk_ephemeris_req_upload_cancel = _libraries['libarsdkctrl.so'].arsdk_ephemeris_req_upload_cancel
arsdk_ephemeris_req_upload_cancel.restype = ctypes.c_int32
arsdk_ephemeris_req_upload_cancel.argtypes = [POINTER_T(struct_arsdk_ephemeris_req_upload)]
arsdk_ephemeris_req_upload_get_dev_type = _libraries['libarsdkctrl.so'].arsdk_ephemeris_req_upload_get_dev_type
arsdk_ephemeris_req_upload_get_dev_type.restype = ctypes.c_int
arsdk_ephemeris_req_upload_get_dev_type.argtypes = [POINTER_T(struct_arsdk_ephemeris_req_upload)]
arsdk_ephemeris_req_upload_get_file_path = _libraries['libarsdkctrl.so'].arsdk_ephemeris_req_upload_get_file_path
arsdk_ephemeris_req_upload_get_file_path.restype = POINTER_T(ctypes.c_char)
arsdk_ephemeris_req_upload_get_file_path.argtypes = [POINTER_T(struct_arsdk_ephemeris_req_upload)]
arsdk_ephemeris_itf_cancel_all = _libraries['libarsdkctrl.so'].arsdk_ephemeris_itf_cancel_all
arsdk_ephemeris_itf_cancel_all.restype = ctypes.c_int32
arsdk_ephemeris_itf_cancel_all.argtypes = [POINTER_T(struct_arsdk_ephemeris_itf)]
class struct_arsdk_ftp_file_list(Structure):
    pass

class struct_arsdk_ftp_req_put(Structure):
    pass

class struct_arsdk_ftp_req_get(Structure):
    pass

class struct_arsdk_ftp_req_rename(Structure):
    pass

class struct_arsdk_ftp_req_delete(Structure):
    pass

class struct_arsdk_ftp_req_list(Structure):
    pass

class struct_arsdk_ftp_file(Structure):
    pass


# values for enumeration 'arsdk_ftp_srv_type'
arsdk_ftp_srv_type__enumvalues = {
    -1: 'ARSDK_FTP_SRV_TYPE_UNKNOWN',
    0: 'ARSDK_FTP_SRV_TYPE_MEDIA',
    1: 'ARSDK_FTP_SRV_TYPE_UPDATE',
    2: 'ARSDK_FTP_SRV_TYPE_FLIGHT_PLAN',
}
ARSDK_FTP_SRV_TYPE_UNKNOWN = -1
ARSDK_FTP_SRV_TYPE_MEDIA = 0
ARSDK_FTP_SRV_TYPE_UPDATE = 1
ARSDK_FTP_SRV_TYPE_FLIGHT_PLAN = 2
arsdk_ftp_srv_type = ctypes.c_int # enum

# values for enumeration 'arsdk_ftp_req_status'
arsdk_ftp_req_status__enumvalues = {
    0: 'ARSDK_FTP_REQ_STATUS_OK',
    1: 'ARSDK_FTP_REQ_STATUS_CANCELED',
    2: 'ARSDK_FTP_REQ_STATUS_FAILED',
    3: 'ARSDK_FTP_REQ_STATUS_ABORTED',
}
ARSDK_FTP_REQ_STATUS_OK = 0
ARSDK_FTP_REQ_STATUS_CANCELED = 1
ARSDK_FTP_REQ_STATUS_FAILED = 2
ARSDK_FTP_REQ_STATUS_ABORTED = 3
arsdk_ftp_req_status = ctypes.c_int # enum

# values for enumeration 'arsdk_ftp_file_type'
arsdk_ftp_file_type__enumvalues = {
    -1: 'ARSDK_FTP_FILE_TYPE_UNKNOWN',
    0: 'ARSDK_FTP_FILE_TYPE_FILE',
    1: 'ARSDK_FTP_FILE_TYPE_DIR',
    2: 'ARSDK_FTP_FILE_TYPE_LINK',
}
ARSDK_FTP_FILE_TYPE_UNKNOWN = -1
ARSDK_FTP_FILE_TYPE_FILE = 0
ARSDK_FTP_FILE_TYPE_DIR = 1
ARSDK_FTP_FILE_TYPE_LINK = 2
arsdk_ftp_file_type = ctypes.c_int # enum
class struct_arsdk_ftp_req_put_cbs(Structure):
    pass

struct_arsdk_ftp_req_put_cbs._pack_ = True # source:False
struct_arsdk_ftp_req_put_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('progress', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_ftp_itf), POINTER_T(struct_arsdk_ftp_req_put), ctypes.c_float, POINTER_T(None))),
    ('complete', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_ftp_itf), POINTER_T(struct_arsdk_ftp_req_put), arsdk_ftp_req_status, ctypes.c_int32, POINTER_T(None))),
]

class struct_arsdk_ftp_req_get_cbs(Structure):
    pass

struct_arsdk_ftp_req_get_cbs._pack_ = True # source:False
struct_arsdk_ftp_req_get_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('progress', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_ftp_itf), POINTER_T(struct_arsdk_ftp_req_get), ctypes.c_float, POINTER_T(None))),
    ('complete', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_ftp_itf), POINTER_T(struct_arsdk_ftp_req_get), arsdk_ftp_req_status, ctypes.c_int32, POINTER_T(None))),
]

class struct_arsdk_ftp_req_rename_cbs(Structure):
    pass

struct_arsdk_ftp_req_rename_cbs._pack_ = True # source:False
struct_arsdk_ftp_req_rename_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('complete', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_ftp_itf), POINTER_T(struct_arsdk_ftp_req_rename), arsdk_ftp_req_status, ctypes.c_int32, POINTER_T(None))),
]

class struct_arsdk_ftp_req_delete_cbs(Structure):
    pass

struct_arsdk_ftp_req_delete_cbs._pack_ = True # source:False
struct_arsdk_ftp_req_delete_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('complete', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_ftp_itf), POINTER_T(struct_arsdk_ftp_req_delete), arsdk_ftp_req_status, ctypes.c_int32, POINTER_T(None))),
]

class struct_arsdk_ftp_req_list_cbs(Structure):
    pass

struct_arsdk_ftp_req_list_cbs._pack_ = True # source:False
struct_arsdk_ftp_req_list_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('complete', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_ftp_itf), POINTER_T(struct_arsdk_ftp_req_list), arsdk_ftp_req_status, ctypes.c_int32, POINTER_T(None))),
]

arsdk_ftp_itf_cancel_all = _libraries['libarsdkctrl.so'].arsdk_ftp_itf_cancel_all
arsdk_ftp_itf_cancel_all.restype = ctypes.c_int32
arsdk_ftp_itf_cancel_all.argtypes = [POINTER_T(struct_arsdk_ftp_itf)]
uint8_t = ctypes.c_uint8
arsdk_ftp_itf_create_req_get = _libraries['libarsdkctrl.so'].arsdk_ftp_itf_create_req_get
arsdk_ftp_itf_create_req_get.restype = ctypes.c_int32
arsdk_ftp_itf_create_req_get.argtypes = [POINTER_T(struct_arsdk_ftp_itf), POINTER_T(struct_arsdk_ftp_req_get_cbs), arsdk_device_type, arsdk_ftp_srv_type, POINTER_T(ctypes.c_char), POINTER_T(ctypes.c_char), uint8_t, POINTER_T(POINTER_T(struct_arsdk_ftp_req_get))]
arsdk_ftp_req_get_cancel = _libraries['libarsdkctrl.so'].arsdk_ftp_req_get_cancel
arsdk_ftp_req_get_cancel.restype = ctypes.c_int32
arsdk_ftp_req_get_cancel.argtypes = [POINTER_T(struct_arsdk_ftp_req_get)]
arsdk_ftp_req_get_get_remote_path = _libraries['libarsdkctrl.so'].arsdk_ftp_req_get_get_remote_path
arsdk_ftp_req_get_get_remote_path.restype = POINTER_T(ctypes.c_char)
arsdk_ftp_req_get_get_remote_path.argtypes = [POINTER_T(struct_arsdk_ftp_req_get)]
arsdk_ftp_req_get_get_local_path = _libraries['libarsdkctrl.so'].arsdk_ftp_req_get_get_local_path
arsdk_ftp_req_get_get_local_path.restype = POINTER_T(ctypes.c_char)
arsdk_ftp_req_get_get_local_path.argtypes = [POINTER_T(struct_arsdk_ftp_req_get)]
class struct_pomp_buffer(Structure):
    pass

arsdk_ftp_req_get_get_buffer = _libraries['libarsdkctrl.so'].arsdk_ftp_req_get_get_buffer
arsdk_ftp_req_get_get_buffer.restype = POINTER_T(struct_pomp_buffer)
arsdk_ftp_req_get_get_buffer.argtypes = [POINTER_T(struct_arsdk_ftp_req_get)]
arsdk_ftp_req_get_get_dev_type = _libraries['libarsdkctrl.so'].arsdk_ftp_req_get_get_dev_type
arsdk_ftp_req_get_get_dev_type.restype = ctypes.c_int
arsdk_ftp_req_get_get_dev_type.argtypes = [POINTER_T(struct_arsdk_ftp_req_get)]
arsdk_ftp_req_get_get_total_size = _libraries['libarsdkctrl.so'].arsdk_ftp_req_get_get_total_size
arsdk_ftp_req_get_get_total_size.restype = size_t
arsdk_ftp_req_get_get_total_size.argtypes = [POINTER_T(struct_arsdk_ftp_req_get)]
arsdk_ftp_req_get_get_dlsize = _libraries['libarsdkctrl.so'].arsdk_ftp_req_get_get_dlsize
arsdk_ftp_req_get_get_dlsize.restype = size_t
arsdk_ftp_req_get_get_dlsize.argtypes = [POINTER_T(struct_arsdk_ftp_req_get)]
arsdk_ftp_itf_create_req_put = _libraries['libarsdkctrl.so'].arsdk_ftp_itf_create_req_put
arsdk_ftp_itf_create_req_put.restype = ctypes.c_int32
arsdk_ftp_itf_create_req_put.argtypes = [POINTER_T(struct_arsdk_ftp_itf), POINTER_T(struct_arsdk_ftp_req_put_cbs), arsdk_device_type, arsdk_ftp_srv_type, POINTER_T(ctypes.c_char), POINTER_T(ctypes.c_char), uint8_t, POINTER_T(POINTER_T(struct_arsdk_ftp_req_put))]
arsdk_ftp_itf_create_req_put_buff = _libraries['libarsdkctrl.so'].arsdk_ftp_itf_create_req_put_buff
arsdk_ftp_itf_create_req_put_buff.restype = ctypes.c_int32
arsdk_ftp_itf_create_req_put_buff.argtypes = [POINTER_T(struct_arsdk_ftp_itf), POINTER_T(struct_arsdk_ftp_req_put_cbs), arsdk_device_type, arsdk_ftp_srv_type, POINTER_T(ctypes.c_char), POINTER_T(struct_pomp_buffer), uint8_t, POINTER_T(POINTER_T(struct_arsdk_ftp_req_put))]
arsdk_ftp_req_put_cancel = _libraries['libarsdkctrl.so'].arsdk_ftp_req_put_cancel
arsdk_ftp_req_put_cancel.restype = ctypes.c_int32
arsdk_ftp_req_put_cancel.argtypes = [POINTER_T(struct_arsdk_ftp_req_put)]
arsdk_ftp_req_put_get_remote_path = _libraries['libarsdkctrl.so'].arsdk_ftp_req_put_get_remote_path
arsdk_ftp_req_put_get_remote_path.restype = POINTER_T(ctypes.c_char)
arsdk_ftp_req_put_get_remote_path.argtypes = [POINTER_T(struct_arsdk_ftp_req_put)]
arsdk_ftp_req_put_get_local_path = _libraries['libarsdkctrl.so'].arsdk_ftp_req_put_get_local_path
arsdk_ftp_req_put_get_local_path.restype = POINTER_T(ctypes.c_char)
arsdk_ftp_req_put_get_local_path.argtypes = [POINTER_T(struct_arsdk_ftp_req_put)]
arsdk_ftp_req_put_get_dev_type = _libraries['libarsdkctrl.so'].arsdk_ftp_req_put_get_dev_type
arsdk_ftp_req_put_get_dev_type.restype = ctypes.c_int
arsdk_ftp_req_put_get_dev_type.argtypes = [POINTER_T(struct_arsdk_ftp_req_put)]
arsdk_ftp_req_put_get_total_size = _libraries['libarsdkctrl.so'].arsdk_ftp_req_put_get_total_size
arsdk_ftp_req_put_get_total_size.restype = size_t
arsdk_ftp_req_put_get_total_size.argtypes = [POINTER_T(struct_arsdk_ftp_req_put)]
arsdk_ftp_req_put_get_ulsize = _libraries['libarsdkctrl.so'].arsdk_ftp_req_put_get_ulsize
arsdk_ftp_req_put_get_ulsize.restype = size_t
arsdk_ftp_req_put_get_ulsize.argtypes = [POINTER_T(struct_arsdk_ftp_req_put)]
arsdk_ftp_itf_create_req_rename = _libraries['libarsdkctrl.so'].arsdk_ftp_itf_create_req_rename
arsdk_ftp_itf_create_req_rename.restype = ctypes.c_int32
arsdk_ftp_itf_create_req_rename.argtypes = [POINTER_T(struct_arsdk_ftp_itf), POINTER_T(struct_arsdk_ftp_req_rename_cbs), arsdk_device_type, arsdk_ftp_srv_type, POINTER_T(ctypes.c_char), POINTER_T(ctypes.c_char), POINTER_T(POINTER_T(struct_arsdk_ftp_req_rename))]
arsdk_ftp_req_rename_cancel = _libraries['libarsdkctrl.so'].arsdk_ftp_req_rename_cancel
arsdk_ftp_req_rename_cancel.restype = ctypes.c_int32
arsdk_ftp_req_rename_cancel.argtypes = [POINTER_T(struct_arsdk_ftp_req_rename)]
arsdk_ftp_req_rename_get_src = _libraries['libarsdkctrl.so'].arsdk_ftp_req_rename_get_src
arsdk_ftp_req_rename_get_src.restype = POINTER_T(ctypes.c_char)
arsdk_ftp_req_rename_get_src.argtypes = [POINTER_T(struct_arsdk_ftp_req_rename)]
arsdk_ftp_req_rename_get_dst = _libraries['libarsdkctrl.so'].arsdk_ftp_req_rename_get_dst
arsdk_ftp_req_rename_get_dst.restype = POINTER_T(ctypes.c_char)
arsdk_ftp_req_rename_get_dst.argtypes = [POINTER_T(struct_arsdk_ftp_req_rename)]
arsdk_ftp_req_rename_get_dev_type = _libraries['libarsdkctrl.so'].arsdk_ftp_req_rename_get_dev_type
arsdk_ftp_req_rename_get_dev_type.restype = ctypes.c_int
arsdk_ftp_req_rename_get_dev_type.argtypes = [POINTER_T(struct_arsdk_ftp_req_rename)]
arsdk_ftp_itf_create_req_delete = _libraries['libarsdkctrl.so'].arsdk_ftp_itf_create_req_delete
arsdk_ftp_itf_create_req_delete.restype = ctypes.c_int32
arsdk_ftp_itf_create_req_delete.argtypes = [POINTER_T(struct_arsdk_ftp_itf), POINTER_T(struct_arsdk_ftp_req_delete_cbs), arsdk_device_type, arsdk_ftp_srv_type, POINTER_T(ctypes.c_char), POINTER_T(POINTER_T(struct_arsdk_ftp_req_delete))]
arsdk_ftp_req_delete_cancel = _libraries['libarsdkctrl.so'].arsdk_ftp_req_delete_cancel
arsdk_ftp_req_delete_cancel.restype = ctypes.c_int32
arsdk_ftp_req_delete_cancel.argtypes = [POINTER_T(struct_arsdk_ftp_req_delete)]
arsdk_ftp_req_delete_get_path = _libraries['libarsdkctrl.so'].arsdk_ftp_req_delete_get_path
arsdk_ftp_req_delete_get_path.restype = POINTER_T(ctypes.c_char)
arsdk_ftp_req_delete_get_path.argtypes = [POINTER_T(struct_arsdk_ftp_req_delete)]
arsdk_ftp_req_delete_get_dev_type = _libraries['libarsdkctrl.so'].arsdk_ftp_req_delete_get_dev_type
arsdk_ftp_req_delete_get_dev_type.restype = ctypes.c_int
arsdk_ftp_req_delete_get_dev_type.argtypes = [POINTER_T(struct_arsdk_ftp_req_delete)]
arsdk_ftp_itf_create_req_list = _libraries['libarsdkctrl.so'].arsdk_ftp_itf_create_req_list
arsdk_ftp_itf_create_req_list.restype = ctypes.c_int32
arsdk_ftp_itf_create_req_list.argtypes = [POINTER_T(struct_arsdk_ftp_itf), POINTER_T(struct_arsdk_ftp_req_list_cbs), arsdk_device_type, arsdk_ftp_srv_type, POINTER_T(ctypes.c_char), POINTER_T(POINTER_T(struct_arsdk_ftp_req_list))]
arsdk_ftp_req_list_cancel = _libraries['libarsdkctrl.so'].arsdk_ftp_req_list_cancel
arsdk_ftp_req_list_cancel.restype = ctypes.c_int32
arsdk_ftp_req_list_cancel.argtypes = [POINTER_T(struct_arsdk_ftp_req_list)]
arsdk_ftp_req_list_get_path = _libraries['libarsdkctrl.so'].arsdk_ftp_req_list_get_path
arsdk_ftp_req_list_get_path.restype = POINTER_T(ctypes.c_char)
arsdk_ftp_req_list_get_path.argtypes = [POINTER_T(struct_arsdk_ftp_req_list)]
arsdk_ftp_req_list_get_dev_type = _libraries['libarsdkctrl.so'].arsdk_ftp_req_list_get_dev_type
arsdk_ftp_req_list_get_dev_type.restype = ctypes.c_int
arsdk_ftp_req_list_get_dev_type.argtypes = [POINTER_T(struct_arsdk_ftp_req_list)]
arsdk_ftp_req_list_get_result = _libraries['libarsdkctrl.so'].arsdk_ftp_req_list_get_result
arsdk_ftp_req_list_get_result.restype = POINTER_T(struct_arsdk_ftp_file_list)
arsdk_ftp_req_list_get_result.argtypes = [POINTER_T(struct_arsdk_ftp_req_list)]
arsdk_ftp_file_list_next_file = _libraries['libarsdkctrl.so'].arsdk_ftp_file_list_next_file
arsdk_ftp_file_list_next_file.restype = POINTER_T(struct_arsdk_ftp_file)
arsdk_ftp_file_list_next_file.argtypes = [POINTER_T(struct_arsdk_ftp_file_list), POINTER_T(struct_arsdk_ftp_file)]
arsdk_ftp_file_list_get_count = _libraries['libarsdkctrl.so'].arsdk_ftp_file_list_get_count
arsdk_ftp_file_list_get_count.restype = size_t
arsdk_ftp_file_list_get_count.argtypes = [POINTER_T(struct_arsdk_ftp_file_list)]
arsdk_ftp_file_list_ref = _libraries['libarsdkctrl.so'].arsdk_ftp_file_list_ref
arsdk_ftp_file_list_ref.restype = None
arsdk_ftp_file_list_ref.argtypes = [POINTER_T(struct_arsdk_ftp_file_list)]
arsdk_ftp_file_list_unref = _libraries['libarsdkctrl.so'].arsdk_ftp_file_list_unref
arsdk_ftp_file_list_unref.restype = None
arsdk_ftp_file_list_unref.argtypes = [POINTER_T(struct_arsdk_ftp_file_list)]
arsdk_ftp_file_get_name = _libraries['libarsdkctrl.so'].arsdk_ftp_file_get_name
arsdk_ftp_file_get_name.restype = POINTER_T(ctypes.c_char)
arsdk_ftp_file_get_name.argtypes = [POINTER_T(struct_arsdk_ftp_file)]
arsdk_ftp_file_get_size = _libraries['libarsdkctrl.so'].arsdk_ftp_file_get_size
arsdk_ftp_file_get_size.restype = size_t
arsdk_ftp_file_get_size.argtypes = [POINTER_T(struct_arsdk_ftp_file)]
arsdk_ftp_file_get_type = _libraries['libarsdkctrl.so'].arsdk_ftp_file_get_type
arsdk_ftp_file_get_type.restype = ctypes.c_int
arsdk_ftp_file_get_type.argtypes = [POINTER_T(struct_arsdk_ftp_file)]
arsdk_ftp_file_ref = _libraries['libarsdkctrl.so'].arsdk_ftp_file_ref
arsdk_ftp_file_ref.restype = None
arsdk_ftp_file_ref.argtypes = [POINTER_T(struct_arsdk_ftp_file)]
arsdk_ftp_file_unref = _libraries['libarsdkctrl.so'].arsdk_ftp_file_unref
arsdk_ftp_file_unref.restype = None
arsdk_ftp_file_unref.argtypes = [POINTER_T(struct_arsdk_ftp_file)]
class struct_arsdk_media(Structure):
    pass

class struct_arsdk_media_res(Structure):
    pass

class struct_arsdk_media_list(Structure):
    pass

class struct_arsdk_media_req_list(Structure):
    pass

class struct_arsdk_media_req_download(Structure):
    pass

class struct_arsdk_media_req_delete(Structure):
    pass


# values for enumeration 'arsdk_media_req_status'
arsdk_media_req_status__enumvalues = {
    0: 'ARSDK_MEDIA_REQ_STATUS_OK',
    1: 'ARSDK_MEDIA_REQ_STATUS_CANCELED',
    2: 'ARSDK_MEDIA_REQ_STATUS_FAILED',
    3: 'ARSDK_MEDIA_REQ_STATUS_ABORTED',
}
ARSDK_MEDIA_REQ_STATUS_OK = 0
ARSDK_MEDIA_REQ_STATUS_CANCELED = 1
ARSDK_MEDIA_REQ_STATUS_FAILED = 2
ARSDK_MEDIA_REQ_STATUS_ABORTED = 3
arsdk_media_req_status = ctypes.c_int # enum

# values for enumeration 'arsdk_media_type'
arsdk_media_type__enumvalues = {
    0: 'ARSDK_MEDIA_TYPE_UNKNOWN',
    1: 'ARSDK_MEDIA_TYPE_PHOTO',
    2: 'ARSDK_MEDIA_TYPE_VIDEO',
    3: 'ARSDK_MEDIA_TYPE_ALL',
}
ARSDK_MEDIA_TYPE_UNKNOWN = 0
ARSDK_MEDIA_TYPE_PHOTO = 1
ARSDK_MEDIA_TYPE_VIDEO = 2
ARSDK_MEDIA_TYPE_ALL = 3
arsdk_media_type = ctypes.c_int # enum

# values for enumeration 'arsdk_media_res_type'
arsdk_media_res_type__enumvalues = {
    -1: 'ARSDK_MEDIA_RES_TYPE_UNKNOWN',
    0: 'ARSDK_MEDIA_RES_TYPE_PHOTO',
    1: 'ARSDK_MEDIA_RES_TYPE_VIDEO',
    2: 'ARSDK_MEDIA_RES_TYPE_THUMBNAIL',
}
ARSDK_MEDIA_RES_TYPE_UNKNOWN = -1
ARSDK_MEDIA_RES_TYPE_PHOTO = 0
ARSDK_MEDIA_RES_TYPE_VIDEO = 1
ARSDK_MEDIA_RES_TYPE_THUMBNAIL = 2
arsdk_media_res_type = ctypes.c_int # enum

# values for enumeration 'arsdk_media_res_format'
arsdk_media_res_format__enumvalues = {
    -1: 'ARSDK_MEDIA_RES_FMT_UNKNOWN',
    0: 'ARSDK_MEDIA_RES_FMT_JPG',
    1: 'ARSDK_MEDIA_RES_FMT_DNG',
    2: 'ARSDK_MEDIA_RES_FMT_MP4',
}
ARSDK_MEDIA_RES_FMT_UNKNOWN = -1
ARSDK_MEDIA_RES_FMT_JPG = 0
ARSDK_MEDIA_RES_FMT_DNG = 1
ARSDK_MEDIA_RES_FMT_MP4 = 2
arsdk_media_res_format = ctypes.c_int # enum
class struct_arsdk_media_req_list_cbs(Structure):
    pass

struct_arsdk_media_req_list_cbs._pack_ = True # source:False
struct_arsdk_media_req_list_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('complete', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_media_itf), POINTER_T(struct_arsdk_media_req_list), arsdk_media_req_status, ctypes.c_int32, POINTER_T(None))),
]

arsdk_media_itf_create_req_list = _libraries['libarsdkctrl.so'].arsdk_media_itf_create_req_list
arsdk_media_itf_create_req_list.restype = ctypes.c_int32
arsdk_media_itf_create_req_list.argtypes = [POINTER_T(struct_arsdk_media_itf), POINTER_T(struct_arsdk_media_req_list_cbs), uint32_t, arsdk_device_type, POINTER_T(POINTER_T(struct_arsdk_media_req_list))]
arsdk_media_req_list_cancel = _libraries['libarsdkctrl.so'].arsdk_media_req_list_cancel
arsdk_media_req_list_cancel.restype = ctypes.c_int32
arsdk_media_req_list_cancel.argtypes = [POINTER_T(struct_arsdk_media_req_list)]
arsdk_media_req_list_get_dev_type = _libraries['libarsdkctrl.so'].arsdk_media_req_list_get_dev_type
arsdk_media_req_list_get_dev_type.restype = ctypes.c_int
arsdk_media_req_list_get_dev_type.argtypes = [POINTER_T(struct_arsdk_media_req_list)]
arsdk_media_req_list_get_result = _libraries['libarsdkctrl.so'].arsdk_media_req_list_get_result
arsdk_media_req_list_get_result.restype = POINTER_T(struct_arsdk_media_list)
arsdk_media_req_list_get_result.argtypes = [POINTER_T(struct_arsdk_media_req_list)]
arsdk_media_list_next_media = _libraries['libarsdkctrl.so'].arsdk_media_list_next_media
arsdk_media_list_next_media.restype = POINTER_T(struct_arsdk_media)
arsdk_media_list_next_media.argtypes = [POINTER_T(struct_arsdk_media_list), POINTER_T(struct_arsdk_media)]
arsdk_media_list_get_count = _libraries['libarsdkctrl.so'].arsdk_media_list_get_count
arsdk_media_list_get_count.restype = size_t
arsdk_media_list_get_count.argtypes = [POINTER_T(struct_arsdk_media_list)]
arsdk_media_list_ref = _libraries['libarsdkctrl.so'].arsdk_media_list_ref
arsdk_media_list_ref.restype = None
arsdk_media_list_ref.argtypes = [POINTER_T(struct_arsdk_media_list)]
arsdk_media_list_unref = _libraries['libarsdkctrl.so'].arsdk_media_list_unref
arsdk_media_list_unref.restype = None
arsdk_media_list_unref.argtypes = [POINTER_T(struct_arsdk_media_list)]
class struct_arsdk_media_req_download_cbs(Structure):
    pass

struct_arsdk_media_req_download_cbs._pack_ = True # source:False
struct_arsdk_media_req_download_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('progress', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_media_itf), POINTER_T(struct_arsdk_media_req_download), ctypes.c_float, POINTER_T(None))),
    ('complete', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_media_itf), POINTER_T(struct_arsdk_media_req_download), arsdk_media_req_status, ctypes.c_int32, POINTER_T(None))),
]

arsdk_media_itf_create_req_download = _libraries['libarsdkctrl.so'].arsdk_media_itf_create_req_download
arsdk_media_itf_create_req_download.restype = ctypes.c_int32
arsdk_media_itf_create_req_download.argtypes = [POINTER_T(struct_arsdk_media_itf), POINTER_T(struct_arsdk_media_req_download_cbs), POINTER_T(ctypes.c_char), POINTER_T(ctypes.c_char), arsdk_device_type, uint8_t, POINTER_T(POINTER_T(struct_arsdk_media_req_download))]
arsdk_media_req_download_cancel = _libraries['libarsdkctrl.so'].arsdk_media_req_download_cancel
arsdk_media_req_download_cancel.restype = ctypes.c_int32
arsdk_media_req_download_cancel.argtypes = [POINTER_T(struct_arsdk_media_req_download)]
arsdk_media_req_download_get_uri = _libraries['libarsdkctrl.so'].arsdk_media_req_download_get_uri
arsdk_media_req_download_get_uri.restype = POINTER_T(ctypes.c_char)
arsdk_media_req_download_get_uri.argtypes = [POINTER_T(struct_arsdk_media_req_download)]
arsdk_media_req_download_get_local_path = _libraries['libarsdkctrl.so'].arsdk_media_req_download_get_local_path
arsdk_media_req_download_get_local_path.restype = POINTER_T(ctypes.c_char)
arsdk_media_req_download_get_local_path.argtypes = [POINTER_T(struct_arsdk_media_req_download)]
arsdk_media_req_download_get_buffer = _libraries['libarsdkctrl.so'].arsdk_media_req_download_get_buffer
arsdk_media_req_download_get_buffer.restype = POINTER_T(struct_pomp_buffer)
arsdk_media_req_download_get_buffer.argtypes = [POINTER_T(struct_arsdk_media_req_download)]
arsdk_media_req_download_get_dev_type = _libraries['libarsdkctrl.so'].arsdk_media_req_download_get_dev_type
arsdk_media_req_download_get_dev_type.restype = ctypes.c_int
arsdk_media_req_download_get_dev_type.argtypes = [POINTER_T(struct_arsdk_media_req_download)]
class struct_arsdk_media_req_delete_cbs(Structure):
    pass

struct_arsdk_media_req_delete_cbs._pack_ = True # source:False
struct_arsdk_media_req_delete_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('complete', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_media_itf), POINTER_T(struct_arsdk_media_req_delete), arsdk_media_req_status, ctypes.c_int32, POINTER_T(None))),
]

arsdk_media_itf_create_req_delete = _libraries['libarsdkctrl.so'].arsdk_media_itf_create_req_delete
arsdk_media_itf_create_req_delete.restype = ctypes.c_int32
arsdk_media_itf_create_req_delete.argtypes = [POINTER_T(struct_arsdk_media_itf), POINTER_T(struct_arsdk_media_req_delete_cbs), POINTER_T(struct_arsdk_media), arsdk_device_type, POINTER_T(POINTER_T(struct_arsdk_media_req_delete))]
arsdk_media_req_delete_get_media = _libraries['libarsdkctrl.so'].arsdk_media_req_delete_get_media
arsdk_media_req_delete_get_media.restype = POINTER_T(struct_arsdk_media)
arsdk_media_req_delete_get_media.argtypes = [POINTER_T(struct_arsdk_media_req_delete)]
arsdk_media_req_delete_get_dev_type = _libraries['libarsdkctrl.so'].arsdk_media_req_delete_get_dev_type
arsdk_media_req_delete_get_dev_type.restype = ctypes.c_int
arsdk_media_req_delete_get_dev_type.argtypes = [POINTER_T(struct_arsdk_media_req_delete)]
arsdk_media_itf_cancel_all = _libraries['libarsdkctrl.so'].arsdk_media_itf_cancel_all
arsdk_media_itf_cancel_all.restype = ctypes.c_int32
arsdk_media_itf_cancel_all.argtypes = [POINTER_T(struct_arsdk_media_itf)]
arsdk_media_get_name = _libraries['libarsdkctrl.so'].arsdk_media_get_name
arsdk_media_get_name.restype = POINTER_T(ctypes.c_char)
arsdk_media_get_name.argtypes = [POINTER_T(struct_arsdk_media)]
arsdk_media_get_runid = _libraries['libarsdkctrl.so'].arsdk_media_get_runid
arsdk_media_get_runid.restype = POINTER_T(ctypes.c_char)
arsdk_media_get_runid.argtypes = [POINTER_T(struct_arsdk_media)]
class struct_tm(Structure):
    pass

arsdk_media_get_date = _libraries['libarsdkctrl.so'].arsdk_media_get_date
arsdk_media_get_date.restype = POINTER_T(struct_tm)
arsdk_media_get_date.argtypes = [POINTER_T(struct_arsdk_media)]
arsdk_media_get_type = _libraries['libarsdkctrl.so'].arsdk_media_get_type
arsdk_media_get_type.restype = ctypes.c_int
arsdk_media_get_type.argtypes = [POINTER_T(struct_arsdk_media)]
arsdk_media_next_res = _libraries['libarsdkctrl.so'].arsdk_media_next_res
arsdk_media_next_res.restype = POINTER_T(struct_arsdk_media_res)
arsdk_media_next_res.argtypes = [POINTER_T(struct_arsdk_media), POINTER_T(struct_arsdk_media_res)]
arsdk_media_get_res_count = _libraries['libarsdkctrl.so'].arsdk_media_get_res_count
arsdk_media_get_res_count.restype = size_t
arsdk_media_get_res_count.argtypes = [POINTER_T(struct_arsdk_media)]
arsdk_media_ref = _libraries['libarsdkctrl.so'].arsdk_media_ref
arsdk_media_ref.restype = None
arsdk_media_ref.argtypes = [POINTER_T(struct_arsdk_media)]
arsdk_media_unref = _libraries['libarsdkctrl.so'].arsdk_media_unref
arsdk_media_unref.restype = None
arsdk_media_unref.argtypes = [POINTER_T(struct_arsdk_media)]
arsdk_media_res_get_type = _libraries['libarsdkctrl.so'].arsdk_media_res_get_type
arsdk_media_res_get_type.restype = ctypes.c_int
arsdk_media_res_get_type.argtypes = [POINTER_T(struct_arsdk_media_res)]
arsdk_media_res_get_fmt = _libraries['libarsdkctrl.so'].arsdk_media_res_get_fmt
arsdk_media_res_get_fmt.restype = ctypes.c_int
arsdk_media_res_get_fmt.argtypes = [POINTER_T(struct_arsdk_media_res)]
arsdk_media_res_get_uri = _libraries['libarsdkctrl.so'].arsdk_media_res_get_uri
arsdk_media_res_get_uri.restype = POINTER_T(ctypes.c_char)
arsdk_media_res_get_uri.argtypes = [POINTER_T(struct_arsdk_media_res)]
arsdk_media_res_get_size = _libraries['libarsdkctrl.so'].arsdk_media_res_get_size
arsdk_media_res_get_size.restype = size_t
arsdk_media_res_get_size.argtypes = [POINTER_T(struct_arsdk_media_res)]
arsdk_media_res_get_name = _libraries['libarsdkctrl.so'].arsdk_media_res_get_name
arsdk_media_res_get_name.restype = POINTER_T(ctypes.c_char)
arsdk_media_res_get_name.argtypes = [POINTER_T(struct_arsdk_media_res)]
class struct_arsdk_pud_req(Structure):
    pass


# values for enumeration 'arsdk_pud_req_status'
arsdk_pud_req_status__enumvalues = {
    0: 'ARSDK_PUD_REQ_STATUS_OK',
    1: 'ARSDK_PUD_REQ_STATUS_CANCELED',
    2: 'ARSDK_PUD_REQ_STATUS_FAILED',
    3: 'ARSDK_PUD_REQ_STATUS_ABORTED',
}
ARSDK_PUD_REQ_STATUS_OK = 0
ARSDK_PUD_REQ_STATUS_CANCELED = 1
ARSDK_PUD_REQ_STATUS_FAILED = 2
ARSDK_PUD_REQ_STATUS_ABORTED = 3
arsdk_pud_req_status = ctypes.c_int # enum
class struct_arsdk_pud_req_cbs(Structure):
    pass

struct_arsdk_pud_req_cbs._pack_ = True # source:False
struct_arsdk_pud_req_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('progress', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_pud_itf), POINTER_T(struct_arsdk_pud_req), POINTER_T(ctypes.c_char), ctypes.c_int32, ctypes.c_int32, arsdk_pud_req_status, POINTER_T(None))),
    ('complete', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_pud_itf), POINTER_T(struct_arsdk_pud_req), arsdk_pud_req_status, ctypes.c_int32, POINTER_T(None))),
]

arsdk_pud_itf_cancel_all = _libraries['libarsdkctrl.so'].arsdk_pud_itf_cancel_all
arsdk_pud_itf_cancel_all.restype = ctypes.c_int32
arsdk_pud_itf_cancel_all.argtypes = [POINTER_T(struct_arsdk_pud_itf)]
arsdk_pud_itf_create_req = _libraries['libarsdkctrl.so'].arsdk_pud_itf_create_req
arsdk_pud_itf_create_req.restype = ctypes.c_int32
arsdk_pud_itf_create_req.argtypes = [POINTER_T(struct_arsdk_pud_itf), POINTER_T(ctypes.c_char), arsdk_device_type, POINTER_T(struct_arsdk_pud_req_cbs), POINTER_T(POINTER_T(struct_arsdk_pud_req))]
arsdk_pud_req_cancel = _libraries['libarsdkctrl.so'].arsdk_pud_req_cancel
arsdk_pud_req_cancel.restype = ctypes.c_int32
arsdk_pud_req_cancel.argtypes = [POINTER_T(struct_arsdk_pud_req)]
arsdk_pud_req_get_dev_type = _libraries['libarsdkctrl.so'].arsdk_pud_req_get_dev_type
arsdk_pud_req_get_dev_type.restype = ctypes.c_int
arsdk_pud_req_get_dev_type.argtypes = [POINTER_T(struct_arsdk_pud_req)]
class struct_arsdk_updater_transport(Structure):
    pass

class struct_arsdk_updater_req_upload(Structure):
    pass


# values for enumeration 'arsdk_updater_req_status'
arsdk_updater_req_status__enumvalues = {
    0: 'ARSDK_UPDATER_REQ_STATUS_OK',
    1: 'ARSDK_UPDATER_REQ_STATUS_CANCELED',
    2: 'ARSDK_UPDATER_REQ_STATUS_FAILED',
    3: 'ARSDK_UPDATER_REQ_STATUS_ABORTED',
}
ARSDK_UPDATER_REQ_STATUS_OK = 0
ARSDK_UPDATER_REQ_STATUS_CANCELED = 1
ARSDK_UPDATER_REQ_STATUS_FAILED = 2
ARSDK_UPDATER_REQ_STATUS_ABORTED = 3
arsdk_updater_req_status = ctypes.c_int # enum
class struct_arsdk_updater_req_upload_cbs(Structure):
    pass

struct_arsdk_updater_req_upload_cbs._pack_ = True # source:False
struct_arsdk_updater_req_upload_cbs._fields_ = [
    ('userdata', POINTER_T(None)),
    ('progress', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_updater_itf), POINTER_T(struct_arsdk_updater_req_upload), ctypes.c_float, POINTER_T(None))),
    ('complete', ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdk_updater_itf), POINTER_T(struct_arsdk_updater_req_upload), arsdk_updater_req_status, ctypes.c_int32, POINTER_T(None))),
]

arsdk_updater_itf_create_req_upload = _libraries['libarsdkctrl.so'].arsdk_updater_itf_create_req_upload
arsdk_updater_itf_create_req_upload.restype = ctypes.c_int32
arsdk_updater_itf_create_req_upload.argtypes = [POINTER_T(struct_arsdk_updater_itf), POINTER_T(ctypes.c_char), arsdk_device_type, POINTER_T(struct_arsdk_updater_req_upload_cbs), POINTER_T(POINTER_T(struct_arsdk_updater_req_upload))]
arsdk_updater_req_upload_cancel = _libraries['libarsdkctrl.so'].arsdk_updater_req_upload_cancel
arsdk_updater_req_upload_cancel.restype = ctypes.c_int32
arsdk_updater_req_upload_cancel.argtypes = [POINTER_T(struct_arsdk_updater_req_upload)]
arsdk_updater_req_upload_get_dev_type = _libraries['libarsdkctrl.so'].arsdk_updater_req_upload_get_dev_type
arsdk_updater_req_upload_get_dev_type.restype = ctypes.c_int
arsdk_updater_req_upload_get_dev_type.argtypes = [POINTER_T(struct_arsdk_updater_req_upload)]
arsdk_updater_itf_cancel_all = _libraries['libarsdkctrl.so'].arsdk_updater_itf_cancel_all
arsdk_updater_itf_cancel_all.restype = ctypes.c_int32
arsdk_updater_itf_cancel_all.argtypes = [POINTER_T(struct_arsdk_updater_itf)]
arsdk_updater_appid_to_devtype = _libraries['libarsdkctrl.so'].arsdk_updater_appid_to_devtype
arsdk_updater_appid_to_devtype.restype = ctypes.c_int
arsdk_updater_appid_to_devtype.argtypes = [uint32_t]
class struct_arsdk_discovery(Structure):
    pass

class struct_arsdk_device_mngr(Structure):
    pass

class struct_arsdk_stream_itf(Structure):
    pass

struct_arsdk_discovery_cfg._pack_ = True # source:False
struct_arsdk_discovery_cfg._fields_ = [
    ('types', POINTER_T(arsdk_device_type)),
    ('count', ctypes.c_uint32),
    ('PADDING_0', ctypes.c_ubyte * 4),
]

class struct_arsdkctrl_backend_mux_cfg(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('mux', POINTER_T(struct_mux_ctx)),
    ('stream_supported', ctypes.c_int32),
    ('proto_v_min', ctypes.c_uint32),
    ('proto_v_max', ctypes.c_uint32),
    ('PADDING_0', ctypes.c_ubyte * 4),
     ]

arsdkctrl_backend_mux_new = _libraries['libarsdkctrl.so'].arsdkctrl_backend_mux_new
arsdkctrl_backend_mux_new.restype = ctypes.c_int32
arsdkctrl_backend_mux_new.argtypes = [POINTER_T(struct_arsdk_ctrl), POINTER_T(struct_arsdkctrl_backend_mux_cfg), POINTER_T(POINTER_T(struct_arsdkctrl_backend_mux))]
arsdkctrl_backend_mux_destroy = _libraries['libarsdkctrl.so'].arsdkctrl_backend_mux_destroy
arsdkctrl_backend_mux_destroy.restype = ctypes.c_int32
arsdkctrl_backend_mux_destroy.argtypes = [POINTER_T(struct_arsdkctrl_backend_mux)]
arsdkctrl_backend_mux_get_parent = _libraries['libarsdkctrl.so'].arsdkctrl_backend_mux_get_parent
arsdkctrl_backend_mux_get_parent.restype = POINTER_T(struct_arsdkctrl_backend)
arsdkctrl_backend_mux_get_parent.argtypes = [POINTER_T(struct_arsdkctrl_backend_mux)]
arsdkctrl_backend_mux_get_mux_ctx = _libraries['libarsdkctrl.so'].arsdkctrl_backend_mux_get_mux_ctx
arsdkctrl_backend_mux_get_mux_ctx.restype = POINTER_T(struct_mux_ctx)
arsdkctrl_backend_mux_get_mux_ctx.argtypes = [POINTER_T(struct_arsdkctrl_backend_mux)]
class struct_arsdkctrl_backend_net_cfg(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('iface', POINTER_T(ctypes.c_char)),
    ('qos_mode_supported', ctypes.c_int32),
    ('stream_supported', ctypes.c_int32),
    ('proto_v_min', ctypes.c_uint32),
    ('proto_v_max', ctypes.c_uint32),
     ]

arsdkctrl_backend_net_socket_cb_t = ctypes.CFUNCTYPE(None, POINTER_T(struct_arsdkctrl_backend_net), ctypes.c_int32, arsdk_socket_kind, POINTER_T(None))
arsdkctrl_backend_net_new = _libraries['libarsdkctrl.so'].arsdkctrl_backend_net_new
arsdkctrl_backend_net_new.restype = ctypes.c_int32
arsdkctrl_backend_net_new.argtypes = [POINTER_T(struct_arsdk_ctrl), POINTER_T(struct_arsdkctrl_backend_net_cfg), POINTER_T(POINTER_T(struct_arsdkctrl_backend_net))]
arsdkctrl_backend_net_destroy = _libraries['libarsdkctrl.so'].arsdkctrl_backend_net_destroy
arsdkctrl_backend_net_destroy.restype = ctypes.c_int32
arsdkctrl_backend_net_destroy.argtypes = [POINTER_T(struct_arsdkctrl_backend_net)]
arsdkctrl_backend_net_get_parent = _libraries['libarsdkctrl.so'].arsdkctrl_backend_net_get_parent
arsdkctrl_backend_net_get_parent.restype = POINTER_T(struct_arsdkctrl_backend)
arsdkctrl_backend_net_get_parent.argtypes = [POINTER_T(struct_arsdkctrl_backend_net)]
arsdkctrl_backend_net_set_socket_cb = _libraries['libarsdkctrl.so'].arsdkctrl_backend_net_set_socket_cb
arsdkctrl_backend_net_set_socket_cb.restype = ctypes.c_int32
arsdkctrl_backend_net_set_socket_cb.argtypes = [POINTER_T(struct_arsdkctrl_backend_net), arsdkctrl_backend_net_socket_cb_t, POINTER_T(None)]
class struct_arsdk_discovery_device_info(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('name', POINTER_T(ctypes.c_char)),
    ('type', arsdk_device_type),
    ('PADDING_0', ctypes.c_ubyte * 4),
    ('addr', POINTER_T(ctypes.c_char)),
    ('port', ctypes.c_uint16),
    ('PADDING_1', ctypes.c_ubyte * 6),
    ('id', POINTER_T(ctypes.c_char)),
    ('proto_v', ctypes.c_uint32),
    ('api', arsdk_device_api),
     ]

arsdk_discovery_new = _libraries['libarsdkctrl.so'].arsdk_discovery_new
arsdk_discovery_new.restype = ctypes.c_int32
arsdk_discovery_new.argtypes = [POINTER_T(ctypes.c_char), POINTER_T(struct_arsdkctrl_backend), POINTER_T(struct_arsdk_ctrl), POINTER_T(POINTER_T(struct_arsdk_discovery))]
arsdk_discovery_destroy = _libraries['libarsdkctrl.so'].arsdk_discovery_destroy
arsdk_discovery_destroy.restype = ctypes.c_int32
arsdk_discovery_destroy.argtypes = [POINTER_T(struct_arsdk_discovery)]
arsdk_discovery_start = _libraries['libarsdkctrl.so'].arsdk_discovery_start
arsdk_discovery_start.restype = ctypes.c_int32
arsdk_discovery_start.argtypes = [POINTER_T(struct_arsdk_discovery)]
arsdk_discovery_stop = _libraries['libarsdkctrl.so'].arsdk_discovery_stop
arsdk_discovery_stop.restype = ctypes.c_int32
arsdk_discovery_stop.argtypes = [POINTER_T(struct_arsdk_discovery)]
arsdk_discovery_add_device = _libraries['libarsdkctrl.so'].arsdk_discovery_add_device
arsdk_discovery_add_device.restype = ctypes.c_int32
arsdk_discovery_add_device.argtypes = [POINTER_T(struct_arsdk_discovery), POINTER_T(struct_arsdk_discovery_device_info)]
arsdk_discovery_remove_device = _libraries['libarsdkctrl.so'].arsdk_discovery_remove_device
arsdk_discovery_remove_device.restype = ctypes.c_int32
arsdk_discovery_remove_device.argtypes = [POINTER_T(struct_arsdk_discovery), POINTER_T(struct_arsdk_discovery_device_info)]
class struct_pomp_ctx(Structure):
    pass

class struct_pomp_conn(Structure):
    pass

class struct_pomp_msg(Structure):
    pass

class struct_pomp_evt(Structure):
    pass

class struct_pomp_timer(Structure):
    pass

class struct_pomp_sockaddr_storage(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('__data', ctypes.c_char * 128),
     ]


# values for enumeration 'pomp_event'
pomp_event__enumvalues = {
    0: 'POMP_EVENT_CONNECTED',
    1: 'POMP_EVENT_DISCONNECTED',
    2: 'POMP_EVENT_MSG',
}
POMP_EVENT_CONNECTED = 0
POMP_EVENT_DISCONNECTED = 1
POMP_EVENT_MSG = 2
pomp_event = ctypes.c_int # enum
pomp_event_str = _libraries['libpomp.so'].pomp_event_str
pomp_event_str.restype = POINTER_T(ctypes.c_char)
pomp_event_str.argtypes = [pomp_event]

# values for enumeration 'pomp_fd_event'
pomp_fd_event__enumvalues = {
    1: 'POMP_FD_EVENT_IN',
    2: 'POMP_FD_EVENT_PRI',
    4: 'POMP_FD_EVENT_OUT',
    8: 'POMP_FD_EVENT_ERR',
    16: 'POMP_FD_EVENT_HUP',
}
POMP_FD_EVENT_IN = 1
POMP_FD_EVENT_PRI = 2
POMP_FD_EVENT_OUT = 4
POMP_FD_EVENT_ERR = 8
POMP_FD_EVENT_HUP = 16
pomp_fd_event = ctypes.c_int # enum

# values for enumeration 'pomp_socket_kind'
pomp_socket_kind__enumvalues = {
    0: 'POMP_SOCKET_KIND_SERVER',
    1: 'POMP_SOCKET_KIND_PEER',
    2: 'POMP_SOCKET_KIND_CLIENT',
    3: 'POMP_SOCKET_KIND_DGRAM',
}
POMP_SOCKET_KIND_SERVER = 0
POMP_SOCKET_KIND_PEER = 1
POMP_SOCKET_KIND_CLIENT = 2
POMP_SOCKET_KIND_DGRAM = 3
pomp_socket_kind = ctypes.c_int # enum
pomp_socket_kind_str = _libraries['libpomp.so'].pomp_socket_kind_str
pomp_socket_kind_str.restype = POINTER_T(ctypes.c_char)
pomp_socket_kind_str.argtypes = [pomp_socket_kind]

# values for enumeration 'pomp_send_status'
pomp_send_status__enumvalues = {
    1: 'POMP_SEND_STATUS_OK',
    2: 'POMP_SEND_STATUS_ERROR',
    4: 'POMP_SEND_STATUS_ABORTED',
    8: 'POMP_SEND_STATUS_QUEUE_EMPTY',
}
POMP_SEND_STATUS_OK = 1
POMP_SEND_STATUS_ERROR = 2
POMP_SEND_STATUS_ABORTED = 4
POMP_SEND_STATUS_QUEUE_EMPTY = 8
pomp_send_status = ctypes.c_int # enum
class struct_pomp_cred(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('pid', ctypes.c_uint32),
    ('uid', ctypes.c_uint32),
    ('gid', ctypes.c_uint32),
     ]

pomp_event_cb_t = ctypes.CFUNCTYPE(None, POINTER_T(struct_pomp_ctx), pomp_event, POINTER_T(struct_pomp_conn), POINTER_T(struct_pomp_msg), POINTER_T(None))
pomp_ctx_raw_cb_t = ctypes.CFUNCTYPE(None, POINTER_T(struct_pomp_ctx), POINTER_T(struct_pomp_conn), POINTER_T(struct_pomp_buffer), POINTER_T(None))
pomp_socket_cb_t = ctypes.CFUNCTYPE(None, POINTER_T(struct_pomp_ctx), ctypes.c_int32, pomp_socket_kind, POINTER_T(None))
pomp_send_cb_t = ctypes.CFUNCTYPE(None, POINTER_T(struct_pomp_ctx), POINTER_T(struct_pomp_conn), POINTER_T(struct_pomp_buffer), ctypes.c_uint32, POINTER_T(None), POINTER_T(None))
pomp_fd_event_cb_t = ctypes.CFUNCTYPE(None, ctypes.c_int32, ctypes.c_uint32, POINTER_T(None))
pomp_evt_cb_t = ctypes.CFUNCTYPE(None, POINTER_T(struct_pomp_evt), POINTER_T(None))
pomp_timer_cb_t = ctypes.CFUNCTYPE(None, POINTER_T(struct_pomp_timer), POINTER_T(None))
pomp_idle_cb_t = ctypes.CFUNCTYPE(None, POINTER_T(None))
pomp_watchdog_cb_t = ctypes.CFUNCTYPE(None, POINTER_T(struct_pomp_loop), POINTER_T(None))
pomp_ctx_new = _libraries['libpomp.so'].pomp_ctx_new
pomp_ctx_new.restype = POINTER_T(struct_pomp_ctx)
pomp_ctx_new.argtypes = [pomp_event_cb_t, POINTER_T(None)]
pomp_ctx_new_with_loop = _libraries['libpomp.so'].pomp_ctx_new_with_loop
pomp_ctx_new_with_loop.restype = POINTER_T(struct_pomp_ctx)
pomp_ctx_new_with_loop.argtypes = [pomp_event_cb_t, POINTER_T(None), POINTER_T(struct_pomp_loop)]
pomp_ctx_set_raw = _libraries['libpomp.so'].pomp_ctx_set_raw
pomp_ctx_set_raw.restype = ctypes.c_int32
pomp_ctx_set_raw.argtypes = [POINTER_T(struct_pomp_ctx), pomp_ctx_raw_cb_t]
pomp_ctx_set_socket_cb = _libraries['libpomp.so'].pomp_ctx_set_socket_cb
pomp_ctx_set_socket_cb.restype = ctypes.c_int32
pomp_ctx_set_socket_cb.argtypes = [POINTER_T(struct_pomp_ctx), pomp_socket_cb_t]
pomp_ctx_set_send_cb = _libraries['libpomp.so'].pomp_ctx_set_send_cb
pomp_ctx_set_send_cb.restype = ctypes.c_int32
pomp_ctx_set_send_cb.argtypes = [POINTER_T(struct_pomp_ctx), pomp_send_cb_t]
pomp_ctx_setup_keepalive = _libraries['libpomp.so'].pomp_ctx_setup_keepalive
pomp_ctx_setup_keepalive.restype = ctypes.c_int32
pomp_ctx_setup_keepalive.argtypes = [POINTER_T(struct_pomp_ctx), ctypes.c_int32, ctypes.c_int32, ctypes.c_int32, ctypes.c_int32]
pomp_ctx_destroy = _libraries['libpomp.so'].pomp_ctx_destroy
pomp_ctx_destroy.restype = ctypes.c_int32
pomp_ctx_destroy.argtypes = [POINTER_T(struct_pomp_ctx)]
class struct_sockaddr(Structure):
    pass

pomp_ctx_listen = _libraries['libpomp.so'].pomp_ctx_listen
pomp_ctx_listen.restype = ctypes.c_int32
pomp_ctx_listen.argtypes = [POINTER_T(struct_pomp_ctx), POINTER_T(struct_sockaddr), uint32_t]
pomp_ctx_listen_with_access_mode = _libraries['libpomp.so'].pomp_ctx_listen_with_access_mode
pomp_ctx_listen_with_access_mode.restype = ctypes.c_int32
pomp_ctx_listen_with_access_mode.argtypes = [POINTER_T(struct_pomp_ctx), POINTER_T(struct_sockaddr), uint32_t, uint32_t]
pomp_ctx_connect = _libraries['libpomp.so'].pomp_ctx_connect
pomp_ctx_connect.restype = ctypes.c_int32
pomp_ctx_connect.argtypes = [POINTER_T(struct_pomp_ctx), POINTER_T(struct_sockaddr), uint32_t]
pomp_ctx_bind = _libraries['libpomp.so'].pomp_ctx_bind
pomp_ctx_bind.restype = ctypes.c_int32
pomp_ctx_bind.argtypes = [POINTER_T(struct_pomp_ctx), POINTER_T(struct_sockaddr), uint32_t]
pomp_ctx_stop = _libraries['libpomp.so'].pomp_ctx_stop
pomp_ctx_stop.restype = ctypes.c_int32
pomp_ctx_stop.argtypes = [POINTER_T(struct_pomp_ctx)]
pomp_ctx_get_loop = _libraries['libpomp.so'].pomp_ctx_get_loop
pomp_ctx_get_loop.restype = POINTER_T(struct_pomp_loop)
pomp_ctx_get_loop.argtypes = [POINTER_T(struct_pomp_ctx)]
intptr_t = ctypes.c_int64
pomp_ctx_get_fd = _libraries['libpomp.so'].pomp_ctx_get_fd
pomp_ctx_get_fd.restype = intptr_t
pomp_ctx_get_fd.argtypes = [POINTER_T(struct_pomp_ctx)]
pomp_ctx_process_fd = _libraries['libpomp.so'].pomp_ctx_process_fd
pomp_ctx_process_fd.restype = ctypes.c_int32
pomp_ctx_process_fd.argtypes = [POINTER_T(struct_pomp_ctx)]
pomp_ctx_wait_and_process = _libraries['libpomp.so'].pomp_ctx_wait_and_process
pomp_ctx_wait_and_process.restype = ctypes.c_int32
pomp_ctx_wait_and_process.argtypes = [POINTER_T(struct_pomp_ctx), ctypes.c_int32]
pomp_ctx_wakeup = _libraries['libpomp.so'].pomp_ctx_wakeup
pomp_ctx_wakeup.restype = ctypes.c_int32
pomp_ctx_wakeup.argtypes = [POINTER_T(struct_pomp_ctx)]
pomp_ctx_get_next_conn = _libraries['libpomp.so'].pomp_ctx_get_next_conn
pomp_ctx_get_next_conn.restype = POINTER_T(struct_pomp_conn)
pomp_ctx_get_next_conn.argtypes = [POINTER_T(struct_pomp_ctx), POINTER_T(struct_pomp_conn)]
pomp_ctx_get_conn = _libraries['libpomp.so'].pomp_ctx_get_conn
pomp_ctx_get_conn.restype = POINTER_T(struct_pomp_conn)
pomp_ctx_get_conn.argtypes = [POINTER_T(struct_pomp_ctx)]
pomp_ctx_get_local_addr = _libraries['libpomp.so'].pomp_ctx_get_local_addr
pomp_ctx_get_local_addr.restype = POINTER_T(struct_sockaddr)
pomp_ctx_get_local_addr.argtypes = [POINTER_T(struct_pomp_ctx), POINTER_T(ctypes.c_uint32)]
pomp_ctx_send_msg = _libraries['libpomp.so'].pomp_ctx_send_msg
pomp_ctx_send_msg.restype = ctypes.c_int32
pomp_ctx_send_msg.argtypes = [POINTER_T(struct_pomp_ctx), POINTER_T(struct_pomp_msg)]
pomp_ctx_send_msg_to = _libraries['libpomp.so'].pomp_ctx_send_msg_to
pomp_ctx_send_msg_to.restype = ctypes.c_int32
pomp_ctx_send_msg_to.argtypes = [POINTER_T(struct_pomp_ctx), POINTER_T(struct_pomp_msg), POINTER_T(struct_sockaddr), uint32_t]
pomp_ctx_send = _libraries['libpomp.so'].pomp_ctx_send
pomp_ctx_send.restype = ctypes.c_int32
pomp_ctx_send.argtypes = [POINTER_T(struct_pomp_ctx), uint32_t, POINTER_T(ctypes.c_char)]
class struct___va_list_tag(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('gp_offset', ctypes.c_uint32),
    ('fp_offset', ctypes.c_uint32),
    ('overflow_arg_area', POINTER_T(None)),
    ('reg_save_area', POINTER_T(None)),
     ]

va_list = struct___va_list_tag * 1
pomp_ctx_sendv = _libraries['libpomp.so'].pomp_ctx_sendv
pomp_ctx_sendv.restype = ctypes.c_int32
pomp_ctx_sendv.argtypes = [POINTER_T(struct_pomp_ctx), uint32_t, POINTER_T(ctypes.c_char), va_list]
pomp_ctx_send_raw_buf = _libraries['libpomp.so'].pomp_ctx_send_raw_buf
pomp_ctx_send_raw_buf.restype = ctypes.c_int32
pomp_ctx_send_raw_buf.argtypes = [POINTER_T(struct_pomp_ctx), POINTER_T(struct_pomp_buffer)]
pomp_ctx_send_raw_buf_to = _libraries['libpomp.so'].pomp_ctx_send_raw_buf_to
pomp_ctx_send_raw_buf_to.restype = ctypes.c_int32
pomp_ctx_send_raw_buf_to.argtypes = [POINTER_T(struct_pomp_ctx), POINTER_T(struct_pomp_buffer), POINTER_T(struct_sockaddr), uint32_t]
pomp_conn_disconnect = _libraries['libpomp.so'].pomp_conn_disconnect
pomp_conn_disconnect.restype = ctypes.c_int32
pomp_conn_disconnect.argtypes = [POINTER_T(struct_pomp_conn)]
pomp_conn_get_local_addr = _libraries['libpomp.so'].pomp_conn_get_local_addr
pomp_conn_get_local_addr.restype = POINTER_T(struct_sockaddr)
pomp_conn_get_local_addr.argtypes = [POINTER_T(struct_pomp_conn), POINTER_T(ctypes.c_uint32)]
pomp_conn_get_peer_addr = _libraries['libpomp.so'].pomp_conn_get_peer_addr
pomp_conn_get_peer_addr.restype = POINTER_T(struct_sockaddr)
pomp_conn_get_peer_addr.argtypes = [POINTER_T(struct_pomp_conn), POINTER_T(ctypes.c_uint32)]
pomp_conn_get_peer_cred = _libraries['libpomp.so'].pomp_conn_get_peer_cred
pomp_conn_get_peer_cred.restype = POINTER_T(struct_pomp_cred)
pomp_conn_get_peer_cred.argtypes = [POINTER_T(struct_pomp_conn)]
pomp_conn_get_fd = _libraries['libpomp.so'].pomp_conn_get_fd
pomp_conn_get_fd.restype = ctypes.c_int32
pomp_conn_get_fd.argtypes = [POINTER_T(struct_pomp_conn)]
pomp_conn_suspend_read = _libraries['libpomp.so'].pomp_conn_suspend_read
pomp_conn_suspend_read.restype = ctypes.c_int32
pomp_conn_suspend_read.argtypes = [POINTER_T(struct_pomp_conn)]
pomp_conn_resume_read = _libraries['libpomp.so'].pomp_conn_resume_read
pomp_conn_resume_read.restype = ctypes.c_int32
pomp_conn_resume_read.argtypes = [POINTER_T(struct_pomp_conn)]
pomp_conn_send_msg = _libraries['libpomp.so'].pomp_conn_send_msg
pomp_conn_send_msg.restype = ctypes.c_int32
pomp_conn_send_msg.argtypes = [POINTER_T(struct_pomp_conn), POINTER_T(struct_pomp_msg)]
pomp_conn_send = _libraries['libpomp.so'].pomp_conn_send
pomp_conn_send.restype = ctypes.c_int32
pomp_conn_send.argtypes = [POINTER_T(struct_pomp_conn), uint32_t, POINTER_T(ctypes.c_char)]
pomp_conn_sendv = _libraries['libpomp.so'].pomp_conn_sendv
pomp_conn_sendv.restype = ctypes.c_int32
pomp_conn_sendv.argtypes = [POINTER_T(struct_pomp_conn), uint32_t, POINTER_T(ctypes.c_char), va_list]
pomp_conn_send_raw_buf = _libraries['libpomp.so'].pomp_conn_send_raw_buf
pomp_conn_send_raw_buf.restype = ctypes.c_int32
pomp_conn_send_raw_buf.argtypes = [POINTER_T(struct_pomp_conn), POINTER_T(struct_pomp_buffer)]
pomp_buffer_new = _libraries['libpomp.so'].pomp_buffer_new
pomp_buffer_new.restype = POINTER_T(struct_pomp_buffer)
pomp_buffer_new.argtypes = [size_t]
pomp_buffer_new_copy = _libraries['libpomp.so'].pomp_buffer_new_copy
pomp_buffer_new_copy.restype = POINTER_T(struct_pomp_buffer)
pomp_buffer_new_copy.argtypes = [POINTER_T(struct_pomp_buffer)]
pomp_buffer_new_with_data = _libraries['libpomp.so'].pomp_buffer_new_with_data
pomp_buffer_new_with_data.restype = POINTER_T(struct_pomp_buffer)
pomp_buffer_new_with_data.argtypes = [POINTER_T(None), size_t]
pomp_buffer_new_get_data = _libraries['libpomp.so'].pomp_buffer_new_get_data
pomp_buffer_new_get_data.restype = POINTER_T(struct_pomp_buffer)
pomp_buffer_new_get_data.argtypes = [size_t, POINTER_T(POINTER_T(None))]
pomp_buffer_ref = _libraries['libpomp.so'].pomp_buffer_ref
pomp_buffer_ref.restype = None
pomp_buffer_ref.argtypes = [POINTER_T(struct_pomp_buffer)]
pomp_buffer_unref = _libraries['libpomp.so'].pomp_buffer_unref
pomp_buffer_unref.restype = None
pomp_buffer_unref.argtypes = [POINTER_T(struct_pomp_buffer)]
pomp_buffer_is_shared = _libraries['libpomp.so'].pomp_buffer_is_shared
pomp_buffer_is_shared.restype = ctypes.c_int32
pomp_buffer_is_shared.argtypes = [POINTER_T(struct_pomp_buffer)]
pomp_buffer_set_capacity = _libraries['libpomp.so'].pomp_buffer_set_capacity
pomp_buffer_set_capacity.restype = ctypes.c_int32
pomp_buffer_set_capacity.argtypes = [POINTER_T(struct_pomp_buffer), size_t]
pomp_buffer_ensure_capacity = _libraries['libpomp.so'].pomp_buffer_ensure_capacity
pomp_buffer_ensure_capacity.restype = ctypes.c_int32
pomp_buffer_ensure_capacity.argtypes = [POINTER_T(struct_pomp_buffer), size_t]
pomp_buffer_set_len = _libraries['libpomp.so'].pomp_buffer_set_len
pomp_buffer_set_len.restype = ctypes.c_int32
pomp_buffer_set_len.argtypes = [POINTER_T(struct_pomp_buffer), size_t]
pomp_buffer_get_data = _libraries['libpomp.so'].pomp_buffer_get_data
pomp_buffer_get_data.restype = ctypes.c_int32
pomp_buffer_get_data.argtypes = [POINTER_T(struct_pomp_buffer), POINTER_T(POINTER_T(None)), POINTER_T(ctypes.c_uint64), POINTER_T(ctypes.c_uint64)]
pomp_buffer_get_cdata = _libraries['libpomp.so'].pomp_buffer_get_cdata
pomp_buffer_get_cdata.restype = ctypes.c_int32
pomp_buffer_get_cdata.argtypes = [POINTER_T(struct_pomp_buffer), POINTER_T(POINTER_T(None)), POINTER_T(ctypes.c_uint64), POINTER_T(ctypes.c_uint64)]
pomp_buffer_append_data = _libraries['libpomp.so'].pomp_buffer_append_data
pomp_buffer_append_data.restype = ctypes.c_int32
pomp_buffer_append_data.argtypes = [POINTER_T(struct_pomp_buffer), POINTER_T(None), size_t]
pomp_buffer_append_buffer = _libraries['libpomp.so'].pomp_buffer_append_buffer
pomp_buffer_append_buffer.restype = ctypes.c_int32
pomp_buffer_append_buffer.argtypes = [POINTER_T(struct_pomp_buffer), POINTER_T(struct_pomp_buffer)]
pomp_buffer_write = _libraries['libpomp.so'].pomp_buffer_write
pomp_buffer_write.restype = ctypes.c_int32
pomp_buffer_write.argtypes = [POINTER_T(struct_pomp_buffer), POINTER_T(ctypes.c_uint64), POINTER_T(None), size_t]
pomp_buffer_read = _libraries['libpomp.so'].pomp_buffer_read
pomp_buffer_read.restype = ctypes.c_int32
pomp_buffer_read.argtypes = [POINTER_T(struct_pomp_buffer), POINTER_T(ctypes.c_uint64), POINTER_T(None), size_t]
pomp_buffer_cread = _libraries['libpomp.so'].pomp_buffer_cread
pomp_buffer_cread.restype = ctypes.c_int32
pomp_buffer_cread.argtypes = [POINTER_T(struct_pomp_buffer), POINTER_T(ctypes.c_uint64), POINTER_T(POINTER_T(None)), size_t]
pomp_msg_new = _libraries['libpomp.so'].pomp_msg_new
pomp_msg_new.restype = POINTER_T(struct_pomp_msg)
pomp_msg_new.argtypes = []
pomp_msg_new_copy = _libraries['libpomp.so'].pomp_msg_new_copy
pomp_msg_new_copy.restype = POINTER_T(struct_pomp_msg)
pomp_msg_new_copy.argtypes = [POINTER_T(struct_pomp_msg)]
pomp_msg_new_with_buffer = _libraries['libpomp.so'].pomp_msg_new_with_buffer
pomp_msg_new_with_buffer.restype = POINTER_T(struct_pomp_msg)
pomp_msg_new_with_buffer.argtypes = [POINTER_T(struct_pomp_buffer)]
pomp_msg_destroy = _libraries['libpomp.so'].pomp_msg_destroy
pomp_msg_destroy.restype = ctypes.c_int32
pomp_msg_destroy.argtypes = [POINTER_T(struct_pomp_msg)]
pomp_msg_get_id = _libraries['libpomp.so'].pomp_msg_get_id
pomp_msg_get_id.restype = uint32_t
pomp_msg_get_id.argtypes = [POINTER_T(struct_pomp_msg)]
pomp_msg_get_buffer = _libraries['libpomp.so'].pomp_msg_get_buffer
pomp_msg_get_buffer.restype = POINTER_T(struct_pomp_buffer)
pomp_msg_get_buffer.argtypes = [POINTER_T(struct_pomp_msg)]
pomp_msg_write = _libraries['libpomp.so'].pomp_msg_write
pomp_msg_write.restype = ctypes.c_int32
pomp_msg_write.argtypes = [POINTER_T(struct_pomp_msg), uint32_t, POINTER_T(ctypes.c_char)]
pomp_msg_writev = _libraries['libpomp.so'].pomp_msg_writev
pomp_msg_writev.restype = ctypes.c_int32
pomp_msg_writev.argtypes = [POINTER_T(struct_pomp_msg), uint32_t, POINTER_T(ctypes.c_char), va_list]
pomp_msg_write_argv = _libraries['libpomp.so'].pomp_msg_write_argv
pomp_msg_write_argv.restype = ctypes.c_int32
pomp_msg_write_argv.argtypes = [POINTER_T(struct_pomp_msg), uint32_t, POINTER_T(ctypes.c_char), ctypes.c_int32, POINTER_T(POINTER_T(ctypes.c_char))]
pomp_msg_read = _libraries['libpomp.so'].pomp_msg_read
pomp_msg_read.restype = ctypes.c_int32
pomp_msg_read.argtypes = [POINTER_T(struct_pomp_msg), POINTER_T(ctypes.c_char)]
pomp_msg_readv = _libraries['libpomp.so'].pomp_msg_readv
pomp_msg_readv.restype = ctypes.c_int32
pomp_msg_readv.argtypes = [POINTER_T(struct_pomp_msg), POINTER_T(ctypes.c_char), va_list]
pomp_msg_dump = _libraries['libpomp.so'].pomp_msg_dump
pomp_msg_dump.restype = ctypes.c_int32
pomp_msg_dump.argtypes = [POINTER_T(struct_pomp_msg), POINTER_T(ctypes.c_char), uint32_t]
pomp_msg_adump = _libraries['libpomp.so'].pomp_msg_adump
pomp_msg_adump.restype = ctypes.c_int32
pomp_msg_adump.argtypes = [POINTER_T(struct_pomp_msg), POINTER_T(POINTER_T(ctypes.c_char))]
pomp_loop_new = _libraries['libpomp.so'].pomp_loop_new
pomp_loop_new.restype = POINTER_T(struct_pomp_loop)
pomp_loop_new.argtypes = []
pomp_loop_destroy = _libraries['libpomp.so'].pomp_loop_destroy
pomp_loop_destroy.restype = ctypes.c_int32
pomp_loop_destroy.argtypes = [POINTER_T(struct_pomp_loop)]
pomp_loop_add = _libraries['libpomp.so'].pomp_loop_add
pomp_loop_add.restype = ctypes.c_int32
pomp_loop_add.argtypes = [POINTER_T(struct_pomp_loop), ctypes.c_int32, uint32_t, pomp_fd_event_cb_t, POINTER_T(None)]
pomp_loop_update = _libraries['libpomp.so'].pomp_loop_update
pomp_loop_update.restype = ctypes.c_int32
pomp_loop_update.argtypes = [POINTER_T(struct_pomp_loop), ctypes.c_int32, uint32_t]
pomp_loop_update2 = _libraries['libpomp.so'].pomp_loop_update2
pomp_loop_update2.restype = ctypes.c_int32
pomp_loop_update2.argtypes = [POINTER_T(struct_pomp_loop), ctypes.c_int32, uint32_t, uint32_t]
pomp_loop_remove = _libraries['libpomp.so'].pomp_loop_remove
pomp_loop_remove.restype = ctypes.c_int32
pomp_loop_remove.argtypes = [POINTER_T(struct_pomp_loop), ctypes.c_int32]
pomp_loop_has_fd = _libraries['libpomp.so'].pomp_loop_has_fd
pomp_loop_has_fd.restype = ctypes.c_int32
pomp_loop_has_fd.argtypes = [POINTER_T(struct_pomp_loop), ctypes.c_int32]
pomp_loop_get_fd = _libraries['libpomp.so'].pomp_loop_get_fd
pomp_loop_get_fd.restype = intptr_t
pomp_loop_get_fd.argtypes = [POINTER_T(struct_pomp_loop)]
pomp_loop_process_fd = _libraries['libpomp.so'].pomp_loop_process_fd
pomp_loop_process_fd.restype = ctypes.c_int32
pomp_loop_process_fd.argtypes = [POINTER_T(struct_pomp_loop)]
pomp_loop_wait_and_process = _libraries['libpomp.so'].pomp_loop_wait_and_process
pomp_loop_wait_and_process.restype = ctypes.c_int32
pomp_loop_wait_and_process.argtypes = [POINTER_T(struct_pomp_loop), ctypes.c_int32]
pomp_loop_wakeup = _libraries['libpomp.so'].pomp_loop_wakeup
pomp_loop_wakeup.restype = ctypes.c_int32
pomp_loop_wakeup.argtypes = [POINTER_T(struct_pomp_loop)]
pomp_loop_idle_add = _libraries['libpomp.so'].pomp_loop_idle_add
pomp_loop_idle_add.restype = ctypes.c_int32
pomp_loop_idle_add.argtypes = [POINTER_T(struct_pomp_loop), pomp_idle_cb_t, POINTER_T(None)]
pomp_loop_idle_add_with_cookie = _libraries['libpomp.so'].pomp_loop_idle_add_with_cookie
pomp_loop_idle_add_with_cookie.restype = ctypes.c_int32
pomp_loop_idle_add_with_cookie.argtypes = [POINTER_T(struct_pomp_loop), pomp_idle_cb_t, POINTER_T(None), POINTER_T(None)]
pomp_loop_idle_remove = _libraries['libpomp.so'].pomp_loop_idle_remove
pomp_loop_idle_remove.restype = ctypes.c_int32
pomp_loop_idle_remove.argtypes = [POINTER_T(struct_pomp_loop), pomp_idle_cb_t, POINTER_T(None)]
pomp_loop_idle_remove_by_cookie = _libraries['libpomp.so'].pomp_loop_idle_remove_by_cookie
pomp_loop_idle_remove_by_cookie.restype = ctypes.c_int32
pomp_loop_idle_remove_by_cookie.argtypes = [POINTER_T(struct_pomp_loop), POINTER_T(None)]
pomp_loop_idle_flush = _libraries['libpomp.so'].pomp_loop_idle_flush
pomp_loop_idle_flush.restype = ctypes.c_int32
pomp_loop_idle_flush.argtypes = [POINTER_T(struct_pomp_loop)]
pomp_loop_idle_flush_by_cookie = _libraries['libpomp.so'].pomp_loop_idle_flush_by_cookie
pomp_loop_idle_flush_by_cookie.restype = ctypes.c_int32
pomp_loop_idle_flush_by_cookie.argtypes = [POINTER_T(struct_pomp_loop), POINTER_T(None)]
pomp_loop_watchdog_enable = _libraries['libpomp.so'].pomp_loop_watchdog_enable
pomp_loop_watchdog_enable.restype = ctypes.c_int32
pomp_loop_watchdog_enable.argtypes = [POINTER_T(struct_pomp_loop), uint32_t, pomp_watchdog_cb_t, POINTER_T(None)]
pomp_loop_watchdog_disable = _libraries['libpomp.so'].pomp_loop_watchdog_disable
pomp_loop_watchdog_disable.restype = ctypes.c_int32
pomp_loop_watchdog_disable.argtypes = [POINTER_T(struct_pomp_loop)]
pomp_evt_new = _libraries['libpomp.so'].pomp_evt_new
pomp_evt_new.restype = POINTER_T(struct_pomp_evt)
pomp_evt_new.argtypes = []
pomp_evt_destroy = _libraries['libpomp.so'].pomp_evt_destroy
pomp_evt_destroy.restype = ctypes.c_int32
pomp_evt_destroy.argtypes = [POINTER_T(struct_pomp_evt)]
pomp_evt_attach_to_loop = _libraries['libpomp.so'].pomp_evt_attach_to_loop
pomp_evt_attach_to_loop.restype = ctypes.c_int32
pomp_evt_attach_to_loop.argtypes = [POINTER_T(struct_pomp_evt), POINTER_T(struct_pomp_loop), pomp_evt_cb_t, POINTER_T(None)]
pomp_evt_detach_from_loop = _libraries['libpomp.so'].pomp_evt_detach_from_loop
pomp_evt_detach_from_loop.restype = ctypes.c_int32
pomp_evt_detach_from_loop.argtypes = [POINTER_T(struct_pomp_evt), POINTER_T(struct_pomp_loop)]
pomp_evt_is_attached = _libraries['libpomp.so'].pomp_evt_is_attached
pomp_evt_is_attached.restype = ctypes.c_int32
pomp_evt_is_attached.argtypes = [POINTER_T(struct_pomp_evt), POINTER_T(struct_pomp_loop)]
pomp_evt_signal = _libraries['libpomp.so'].pomp_evt_signal
pomp_evt_signal.restype = ctypes.c_int32
pomp_evt_signal.argtypes = [POINTER_T(struct_pomp_evt)]
pomp_evt_clear = _libraries['libpomp.so'].pomp_evt_clear
pomp_evt_clear.restype = ctypes.c_int32
pomp_evt_clear.argtypes = [POINTER_T(struct_pomp_evt)]
pomp_timer_new = _libraries['libpomp.so'].pomp_timer_new
pomp_timer_new.restype = POINTER_T(struct_pomp_timer)
pomp_timer_new.argtypes = [POINTER_T(struct_pomp_loop), pomp_timer_cb_t, POINTER_T(None)]
pomp_timer_destroy = _libraries['libpomp.so'].pomp_timer_destroy
pomp_timer_destroy.restype = ctypes.c_int32
pomp_timer_destroy.argtypes = [POINTER_T(struct_pomp_timer)]
pomp_timer_set = _libraries['libpomp.so'].pomp_timer_set
pomp_timer_set.restype = ctypes.c_int32
pomp_timer_set.argtypes = [POINTER_T(struct_pomp_timer), uint32_t]
pomp_timer_set_periodic = _libraries['libpomp.so'].pomp_timer_set_periodic
pomp_timer_set_periodic.restype = ctypes.c_int32
pomp_timer_set_periodic.argtypes = [POINTER_T(struct_pomp_timer), uint32_t, uint32_t]
pomp_timer_clear = _libraries['libpomp.so'].pomp_timer_clear
pomp_timer_clear.restype = ctypes.c_int32
pomp_timer_clear.argtypes = [POINTER_T(struct_pomp_timer)]
pomp_addr_parse = _libraries['libpomp.so'].pomp_addr_parse
pomp_addr_parse.restype = ctypes.c_int32
pomp_addr_parse.argtypes = [POINTER_T(ctypes.c_char), POINTER_T(struct_sockaddr), POINTER_T(ctypes.c_uint32)]
pomp_addr_format = _libraries['libpomp.so'].pomp_addr_format
pomp_addr_format.restype = ctypes.c_int32
pomp_addr_format.argtypes = [POINTER_T(ctypes.c_char), uint32_t, POINTER_T(struct_sockaddr), uint32_t]
pomp_addr_is_unix = _libraries['libpomp.so'].pomp_addr_is_unix
pomp_addr_is_unix.restype = ctypes.c_int32
pomp_addr_is_unix.argtypes = [POINTER_T(struct_sockaddr), uint32_t]
pomp_addr_get_real_addr = _libraries['libpomp.so'].pomp_addr_get_real_addr
pomp_addr_get_real_addr.restype = ctypes.c_int32
pomp_addr_get_real_addr.argtypes = [POINTER_T(ctypes.c_char), POINTER_T(POINTER_T(ctypes.c_char))]
class struct_pomp_encoder(Structure):
    pass

class struct_pomp_decoder(Structure):
    pass

pomp_msg_init = _libraries['libpomp.so'].pomp_msg_init
pomp_msg_init.restype = ctypes.c_int32
pomp_msg_init.argtypes = [POINTER_T(struct_pomp_msg), uint32_t]
pomp_msg_finish = _libraries['libpomp.so'].pomp_msg_finish
pomp_msg_finish.restype = ctypes.c_int32
pomp_msg_finish.argtypes = [POINTER_T(struct_pomp_msg)]
pomp_msg_clear = _libraries['libpomp.so'].pomp_msg_clear
pomp_msg_clear.restype = ctypes.c_int32
pomp_msg_clear.argtypes = [POINTER_T(struct_pomp_msg)]
pomp_encoder_new = _libraries['libpomp.so'].pomp_encoder_new
pomp_encoder_new.restype = POINTER_T(struct_pomp_encoder)
pomp_encoder_new.argtypes = []
pomp_encoder_destroy = _libraries['libpomp.so'].pomp_encoder_destroy
pomp_encoder_destroy.restype = ctypes.c_int32
pomp_encoder_destroy.argtypes = [POINTER_T(struct_pomp_encoder)]
pomp_encoder_init = _libraries['libpomp.so'].pomp_encoder_init
pomp_encoder_init.restype = ctypes.c_int32
pomp_encoder_init.argtypes = [POINTER_T(struct_pomp_encoder), POINTER_T(struct_pomp_msg)]
pomp_encoder_clear = _libraries['libpomp.so'].pomp_encoder_clear
pomp_encoder_clear.restype = ctypes.c_int32
pomp_encoder_clear.argtypes = [POINTER_T(struct_pomp_encoder)]
pomp_encoder_write = _libraries['libpomp.so'].pomp_encoder_write
pomp_encoder_write.restype = ctypes.c_int32
pomp_encoder_write.argtypes = [POINTER_T(struct_pomp_encoder), POINTER_T(ctypes.c_char)]
pomp_encoder_writev = _libraries['libpomp.so'].pomp_encoder_writev
pomp_encoder_writev.restype = ctypes.c_int32
pomp_encoder_writev.argtypes = [POINTER_T(struct_pomp_encoder), POINTER_T(ctypes.c_char), va_list]
pomp_encoder_write_argv = _libraries['libpomp.so'].pomp_encoder_write_argv
pomp_encoder_write_argv.restype = ctypes.c_int32
pomp_encoder_write_argv.argtypes = [POINTER_T(struct_pomp_encoder), POINTER_T(ctypes.c_char), ctypes.c_int32, POINTER_T(POINTER_T(ctypes.c_char))]
int8_t = ctypes.c_int8
pomp_encoder_write_i8 = _libraries['libpomp.so'].pomp_encoder_write_i8
pomp_encoder_write_i8.restype = ctypes.c_int32
pomp_encoder_write_i8.argtypes = [POINTER_T(struct_pomp_encoder), int8_t]
pomp_encoder_write_u8 = _libraries['libpomp.so'].pomp_encoder_write_u8
pomp_encoder_write_u8.restype = ctypes.c_int32
pomp_encoder_write_u8.argtypes = [POINTER_T(struct_pomp_encoder), uint8_t]
int16_t = ctypes.c_int16
pomp_encoder_write_i16 = _libraries['libpomp.so'].pomp_encoder_write_i16
pomp_encoder_write_i16.restype = ctypes.c_int32
pomp_encoder_write_i16.argtypes = [POINTER_T(struct_pomp_encoder), int16_t]
pomp_encoder_write_u16 = _libraries['libpomp.so'].pomp_encoder_write_u16
pomp_encoder_write_u16.restype = ctypes.c_int32
pomp_encoder_write_u16.argtypes = [POINTER_T(struct_pomp_encoder), uint16_t]
int32_t = ctypes.c_int32
pomp_encoder_write_i32 = _libraries['libpomp.so'].pomp_encoder_write_i32
pomp_encoder_write_i32.restype = ctypes.c_int32
pomp_encoder_write_i32.argtypes = [POINTER_T(struct_pomp_encoder), int32_t]
pomp_encoder_write_u32 = _libraries['libpomp.so'].pomp_encoder_write_u32
pomp_encoder_write_u32.restype = ctypes.c_int32
pomp_encoder_write_u32.argtypes = [POINTER_T(struct_pomp_encoder), uint32_t]
int64_t = ctypes.c_int64
pomp_encoder_write_i64 = _libraries['libpomp.so'].pomp_encoder_write_i64
pomp_encoder_write_i64.restype = ctypes.c_int32
pomp_encoder_write_i64.argtypes = [POINTER_T(struct_pomp_encoder), int64_t]
uint64_t = ctypes.c_uint64
pomp_encoder_write_u64 = _libraries['libpomp.so'].pomp_encoder_write_u64
pomp_encoder_write_u64.restype = ctypes.c_int32
pomp_encoder_write_u64.argtypes = [POINTER_T(struct_pomp_encoder), uint64_t]
pomp_encoder_write_str = _libraries['libpomp.so'].pomp_encoder_write_str
pomp_encoder_write_str.restype = ctypes.c_int32
pomp_encoder_write_str.argtypes = [POINTER_T(struct_pomp_encoder), POINTER_T(ctypes.c_char)]
pomp_encoder_write_buf = _libraries['libpomp.so'].pomp_encoder_write_buf
pomp_encoder_write_buf.restype = ctypes.c_int32
pomp_encoder_write_buf.argtypes = [POINTER_T(struct_pomp_encoder), POINTER_T(None), uint32_t]
pomp_encoder_write_f32 = _libraries['libpomp.so'].pomp_encoder_write_f32
pomp_encoder_write_f32.restype = ctypes.c_int32
pomp_encoder_write_f32.argtypes = [POINTER_T(struct_pomp_encoder), ctypes.c_float]
pomp_encoder_write_f64 = _libraries['libpomp.so'].pomp_encoder_write_f64
pomp_encoder_write_f64.restype = ctypes.c_int32
pomp_encoder_write_f64.argtypes = [POINTER_T(struct_pomp_encoder), ctypes.c_double]
pomp_encoder_write_fd = _libraries['libpomp.so'].pomp_encoder_write_fd
pomp_encoder_write_fd.restype = ctypes.c_int32
pomp_encoder_write_fd.argtypes = [POINTER_T(struct_pomp_encoder), ctypes.c_int32]
pomp_decoder_new = _libraries['libpomp.so'].pomp_decoder_new
pomp_decoder_new.restype = POINTER_T(struct_pomp_decoder)
pomp_decoder_new.argtypes = []
pomp_decoder_destroy = _libraries['libpomp.so'].pomp_decoder_destroy
pomp_decoder_destroy.restype = ctypes.c_int32
pomp_decoder_destroy.argtypes = [POINTER_T(struct_pomp_decoder)]
pomp_decoder_init = _libraries['libpomp.so'].pomp_decoder_init
pomp_decoder_init.restype = ctypes.c_int32
pomp_decoder_init.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(struct_pomp_msg)]
pomp_decoder_clear = _libraries['libpomp.so'].pomp_decoder_clear
pomp_decoder_clear.restype = ctypes.c_int32
pomp_decoder_clear.argtypes = [POINTER_T(struct_pomp_decoder)]
pomp_decoder_read = _libraries['libpomp.so'].pomp_decoder_read
pomp_decoder_read.restype = ctypes.c_int32
pomp_decoder_read.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(ctypes.c_char)]
pomp_decoder_readv = _libraries['libpomp.so'].pomp_decoder_readv
pomp_decoder_readv.restype = ctypes.c_int32
pomp_decoder_readv.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(ctypes.c_char), va_list]
pomp_decoder_dump = _libraries['libpomp.so'].pomp_decoder_dump
pomp_decoder_dump.restype = ctypes.c_int32
pomp_decoder_dump.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(ctypes.c_char), uint32_t]
pomp_decoder_adump = _libraries['libpomp.so'].pomp_decoder_adump
pomp_decoder_adump.restype = ctypes.c_int32
pomp_decoder_adump.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(POINTER_T(ctypes.c_char))]
pomp_decoder_read_i8 = _libraries['libpomp.so'].pomp_decoder_read_i8
pomp_decoder_read_i8.restype = ctypes.c_int32
pomp_decoder_read_i8.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(ctypes.c_byte)]
pomp_decoder_read_u8 = _libraries['libpomp.so'].pomp_decoder_read_u8
pomp_decoder_read_u8.restype = ctypes.c_int32
pomp_decoder_read_u8.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(ctypes.c_ubyte)]
pomp_decoder_read_i16 = _libraries['libpomp.so'].pomp_decoder_read_i16
pomp_decoder_read_i16.restype = ctypes.c_int32
pomp_decoder_read_i16.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(ctypes.c_int16)]
pomp_decoder_read_u16 = _libraries['libpomp.so'].pomp_decoder_read_u16
pomp_decoder_read_u16.restype = ctypes.c_int32
pomp_decoder_read_u16.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(ctypes.c_uint16)]
pomp_decoder_read_i32 = _libraries['libpomp.so'].pomp_decoder_read_i32
pomp_decoder_read_i32.restype = ctypes.c_int32
pomp_decoder_read_i32.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(ctypes.c_int32)]
pomp_decoder_read_u32 = _libraries['libpomp.so'].pomp_decoder_read_u32
pomp_decoder_read_u32.restype = ctypes.c_int32
pomp_decoder_read_u32.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(ctypes.c_uint32)]
pomp_decoder_read_i64 = _libraries['libpomp.so'].pomp_decoder_read_i64
pomp_decoder_read_i64.restype = ctypes.c_int32
pomp_decoder_read_i64.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(ctypes.c_int64)]
pomp_decoder_read_u64 = _libraries['libpomp.so'].pomp_decoder_read_u64
pomp_decoder_read_u64.restype = ctypes.c_int32
pomp_decoder_read_u64.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(ctypes.c_uint64)]
pomp_decoder_read_str = _libraries['libpomp.so'].pomp_decoder_read_str
pomp_decoder_read_str.restype = ctypes.c_int32
pomp_decoder_read_str.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(POINTER_T(ctypes.c_char))]
pomp_decoder_read_cstr = _libraries['libpomp.so'].pomp_decoder_read_cstr
pomp_decoder_read_cstr.restype = ctypes.c_int32
pomp_decoder_read_cstr.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(POINTER_T(ctypes.c_char))]
pomp_decoder_read_buf = _libraries['libpomp.so'].pomp_decoder_read_buf
pomp_decoder_read_buf.restype = ctypes.c_int32
pomp_decoder_read_buf.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(POINTER_T(None)), POINTER_T(ctypes.c_uint32)]
pomp_decoder_read_cbuf = _libraries['libpomp.so'].pomp_decoder_read_cbuf
pomp_decoder_read_cbuf.restype = ctypes.c_int32
pomp_decoder_read_cbuf.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(POINTER_T(None)), POINTER_T(ctypes.c_uint32)]
pomp_decoder_read_f32 = _libraries['libpomp.so'].pomp_decoder_read_f32
pomp_decoder_read_f32.restype = ctypes.c_int32
pomp_decoder_read_f32.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(ctypes.c_float)]
pomp_decoder_read_f64 = _libraries['libpomp.so'].pomp_decoder_read_f64
pomp_decoder_read_f64.restype = ctypes.c_int32
pomp_decoder_read_f64.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(ctypes.c_double)]
pomp_decoder_read_fd = _libraries['libpomp.so'].pomp_decoder_read_fd
pomp_decoder_read_fd.restype = ctypes.c_int32
pomp_decoder_read_fd.argtypes = [POINTER_T(struct_pomp_decoder), POINTER_T(ctypes.c_int32)]

# values for enumeration 'pomp_loop_impl'
pomp_loop_impl__enumvalues = {
    0: 'POMP_LOOP_IMPL_EPOLL',
    1: 'POMP_LOOP_IMPL_POLL',
    2: 'POMP_LOOP_IMPL_WIN32',
}
POMP_LOOP_IMPL_EPOLL = 0
POMP_LOOP_IMPL_POLL = 1
POMP_LOOP_IMPL_WIN32 = 2
pomp_loop_impl = ctypes.c_int # enum

# values for enumeration 'pomp_timer_impl'
pomp_timer_impl__enumvalues = {
    0: 'POMP_TIMER_IMPL_TIMER_FD',
    1: 'POMP_TIMER_IMPL_KQUEUE',
    2: 'POMP_TIMER_IMPL_POSIX',
    3: 'POMP_TIMER_IMPL_WIN32',
}
POMP_TIMER_IMPL_TIMER_FD = 0
POMP_TIMER_IMPL_KQUEUE = 1
POMP_TIMER_IMPL_POSIX = 2
POMP_TIMER_IMPL_WIN32 = 3
pomp_timer_impl = ctypes.c_int # enum
pomp_internal_set_loop_impl = _libraries['libpomp.so'].pomp_internal_set_loop_impl
pomp_internal_set_loop_impl.restype = ctypes.c_int32
pomp_internal_set_loop_impl.argtypes = [pomp_loop_impl]
pomp_internal_set_timer_impl = _libraries['libpomp.so'].pomp_internal_set_timer_impl
pomp_internal_set_timer_impl.restype = ctypes.c_int32
pomp_internal_set_timer_impl.argtypes = [pomp_timer_impl]
class struct_vbuf_cbs(Structure):
    pass

vbuf_generic_get_cbs = _libraries['libvideo-buffers-generic.so'].vbuf_generic_get_cbs
vbuf_generic_get_cbs.restype = ctypes.c_int32
vbuf_generic_get_cbs.argtypes = [POINTER_T(struct_vbuf_cbs)]
class struct_vbuf_buffer(Structure):
    pass

class struct_vbuf_pool(Structure):
    pass

class struct_vbuf_queue(Structure):
    pass

struct_vbuf_cbs._pack_ = True # source:False
struct_vbuf_cbs._fields_ = [
    ('alloc', ctypes.CFUNCTYPE(ctypes.c_int32, POINTER_T(struct_vbuf_buffer), POINTER_T(None))),
    ('alloc_userdata', POINTER_T(None)),
    ('realloc', ctypes.CFUNCTYPE(ctypes.c_int32, POINTER_T(struct_vbuf_buffer), POINTER_T(None))),
    ('realloc_userdata', POINTER_T(None)),
    ('unref', ctypes.CFUNCTYPE(ctypes.c_int32, POINTER_T(struct_vbuf_buffer), POINTER_T(None))),
    ('unref_userdata', POINTER_T(None)),
    ('free', ctypes.CFUNCTYPE(ctypes.c_int32, POINTER_T(struct_vbuf_buffer), POINTER_T(None))),
    ('free_userdata', POINTER_T(None)),
    ('pool_get', ctypes.CFUNCTYPE(ctypes.c_int32, POINTER_T(struct_vbuf_buffer), ctypes.c_int32, POINTER_T(None))),
    ('pool_get_userdata', POINTER_T(None)),
    ('pool_put', ctypes.CFUNCTYPE(ctypes.c_int32, POINTER_T(struct_vbuf_buffer), POINTER_T(None))),
    ('pool_put_userdata', POINTER_T(None)),
    ('queue_push', ctypes.CFUNCTYPE(ctypes.c_int32, POINTER_T(struct_vbuf_buffer), POINTER_T(None))),
    ('queue_push_userdata', POINTER_T(None)),
    ('queue_peek', ctypes.CFUNCTYPE(ctypes.c_int32, POINTER_T(struct_vbuf_buffer), ctypes.c_int32, POINTER_T(None))),
    ('queue_peek_userdata', POINTER_T(None)),
    ('queue_pop', ctypes.CFUNCTYPE(ctypes.c_int32, POINTER_T(struct_vbuf_buffer), ctypes.c_int32, POINTER_T(None))),
    ('queue_pop_userdata', POINTER_T(None)),
]

vbuf_new = _libraries['libvideo-buffers.so'].vbuf_new
vbuf_new.restype = ctypes.c_int32
vbuf_new.argtypes = [size_t, size_t, POINTER_T(struct_vbuf_cbs), POINTER_T(struct_vbuf_pool), POINTER_T(POINTER_T(struct_vbuf_buffer))]
vbuf_ref = _libraries['libvideo-buffers.so'].vbuf_ref
vbuf_ref.restype = ctypes.c_int32
vbuf_ref.argtypes = [POINTER_T(struct_vbuf_buffer)]
vbuf_unref = _libraries['libvideo-buffers.so'].vbuf_unref
vbuf_unref.restype = ctypes.c_int32
vbuf_unref.argtypes = [POINTER_T(struct_vbuf_buffer)]
vbuf_get_ref_count = _libraries['libvideo-buffers.so'].vbuf_get_ref_count
vbuf_get_ref_count.restype = ctypes.c_int32
vbuf_get_ref_count.argtypes = [POINTER_T(struct_vbuf_buffer)]
vbuf_write_lock = _libraries['libvideo-buffers.so'].vbuf_write_lock
vbuf_write_lock.restype = ctypes.c_int32
vbuf_write_lock.argtypes = [POINTER_T(struct_vbuf_buffer)]
vbuf_write_unlock = _libraries['libvideo-buffers.so'].vbuf_write_unlock
vbuf_write_unlock.restype = ctypes.c_int32
vbuf_write_unlock.argtypes = [POINTER_T(struct_vbuf_buffer)]
vbuf_is_write_locked = _libraries['libvideo-buffers.so'].vbuf_is_write_locked
vbuf_is_write_locked.restype = ctypes.c_int32
vbuf_is_write_locked.argtypes = [POINTER_T(struct_vbuf_buffer)]
vbuf_get_pool = _libraries['libvideo-buffers.so'].vbuf_get_pool
vbuf_get_pool.restype = POINTER_T(struct_vbuf_pool)
vbuf_get_pool.argtypes = [POINTER_T(struct_vbuf_buffer)]
vbuf_get_data = _libraries['libvideo-buffers.so'].vbuf_get_data
vbuf_get_data.restype = POINTER_T(ctypes.c_ubyte)
vbuf_get_data.argtypes = [POINTER_T(struct_vbuf_buffer)]
vbuf_get_cdata = _libraries['libvideo-buffers.so'].vbuf_get_cdata
vbuf_get_cdata.restype = POINTER_T(ctypes.c_ubyte)
vbuf_get_cdata.argtypes = [POINTER_T(struct_vbuf_buffer)]
ssize_t = ctypes.c_int64
vbuf_get_capacity = _libraries['libvideo-buffers.so'].vbuf_get_capacity
vbuf_get_capacity.restype = ssize_t
vbuf_get_capacity.argtypes = [POINTER_T(struct_vbuf_buffer)]
vbuf_set_capacity = _libraries['libvideo-buffers.so'].vbuf_set_capacity
vbuf_set_capacity.restype = ssize_t
vbuf_set_capacity.argtypes = [POINTER_T(struct_vbuf_buffer), size_t]
vbuf_get_size = _libraries['libvideo-buffers.so'].vbuf_get_size
vbuf_get_size.restype = ssize_t
vbuf_get_size.argtypes = [POINTER_T(struct_vbuf_buffer)]
vbuf_set_size = _libraries['libvideo-buffers.so'].vbuf_set_size
vbuf_set_size.restype = ctypes.c_int32
vbuf_set_size.argtypes = [POINTER_T(struct_vbuf_buffer), size_t]
vbuf_copy = _libraries['libvideo-buffers.so'].vbuf_copy
vbuf_copy.restype = ctypes.c_int32
vbuf_copy.argtypes = [POINTER_T(struct_vbuf_buffer), POINTER_T(struct_vbuf_buffer)]
vbuf_get_userdata = _libraries['libvideo-buffers.so'].vbuf_get_userdata
vbuf_get_userdata.restype = POINTER_T(ctypes.c_ubyte)
vbuf_get_userdata.argtypes = [POINTER_T(struct_vbuf_buffer)]
vbuf_get_cuserdata = _libraries['libvideo-buffers.so'].vbuf_get_cuserdata
vbuf_get_cuserdata.restype = POINTER_T(ctypes.c_ubyte)
vbuf_get_cuserdata.argtypes = [POINTER_T(struct_vbuf_buffer)]
vbuf_get_userdata_capacity = _libraries['libvideo-buffers.so'].vbuf_get_userdata_capacity
vbuf_get_userdata_capacity.restype = ssize_t
vbuf_get_userdata_capacity.argtypes = [POINTER_T(struct_vbuf_buffer)]
vbuf_set_userdata_capacity = _libraries['libvideo-buffers.so'].vbuf_set_userdata_capacity
vbuf_set_userdata_capacity.restype = ssize_t
vbuf_set_userdata_capacity.argtypes = [POINTER_T(struct_vbuf_buffer), size_t]
vbuf_get_userdata_size = _libraries['libvideo-buffers.so'].vbuf_get_userdata_size
vbuf_get_userdata_size.restype = ssize_t
vbuf_get_userdata_size.argtypes = [POINTER_T(struct_vbuf_buffer)]
vbuf_set_userdata_size = _libraries['libvideo-buffers.so'].vbuf_set_userdata_size
vbuf_set_userdata_size.restype = ctypes.c_int32
vbuf_set_userdata_size.argtypes = [POINTER_T(struct_vbuf_buffer), size_t]
vbuf_userdata_copy = _libraries['libvideo-buffers.so'].vbuf_userdata_copy
vbuf_userdata_copy.restype = ctypes.c_int32
vbuf_userdata_copy.argtypes = [POINTER_T(struct_vbuf_buffer), POINTER_T(struct_vbuf_buffer)]
vbuf_metadata_add = _libraries['libvideo-buffers.so'].vbuf_metadata_add
vbuf_metadata_add.restype = ctypes.c_int32
vbuf_metadata_add.argtypes = [POINTER_T(struct_vbuf_buffer), POINTER_T(None), ctypes.c_uint32, size_t, POINTER_T(POINTER_T(ctypes.c_ubyte))]
vbuf_metadata_get = _libraries['libvideo-buffers.so'].vbuf_metadata_get
vbuf_metadata_get.restype = ctypes.c_int32
vbuf_metadata_get.argtypes = [POINTER_T(struct_vbuf_buffer), POINTER_T(None), POINTER_T(ctypes.c_uint32), POINTER_T(ctypes.c_uint64), POINTER_T(POINTER_T(ctypes.c_ubyte))]
vbuf_metadata_remove = _libraries['libvideo-buffers.so'].vbuf_metadata_remove
vbuf_metadata_remove.restype = ctypes.c_int32
vbuf_metadata_remove.argtypes = [POINTER_T(struct_vbuf_buffer), POINTER_T(None)]
vbuf_metadata_copy = _libraries['libvideo-buffers.so'].vbuf_metadata_copy
vbuf_metadata_copy.restype = ctypes.c_int32
vbuf_metadata_copy.argtypes = [POINTER_T(struct_vbuf_buffer), POINTER_T(struct_vbuf_buffer), ctypes.c_uint32]
vbuf_pool_new = _libraries['libvideo-buffers.so'].vbuf_pool_new
vbuf_pool_new.restype = ctypes.c_int32
vbuf_pool_new.argtypes = [ctypes.c_uint32, size_t, size_t, POINTER_T(struct_vbuf_cbs), POINTER_T(POINTER_T(struct_vbuf_pool))]
vbuf_pool_destroy = _libraries['libvideo-buffers.so'].vbuf_pool_destroy
vbuf_pool_destroy.restype = ctypes.c_int32
vbuf_pool_destroy.argtypes = [POINTER_T(struct_vbuf_pool)]
vbuf_pool_get_count = _libraries['libvideo-buffers.so'].vbuf_pool_get_count
vbuf_pool_get_count.restype = ctypes.c_int32
vbuf_pool_get_count.argtypes = [POINTER_T(struct_vbuf_pool)]
vbuf_pool_get = _libraries['libvideo-buffers.so'].vbuf_pool_get
vbuf_pool_get.restype = ctypes.c_int32
vbuf_pool_get.argtypes = [POINTER_T(struct_vbuf_pool), ctypes.c_int32, POINTER_T(POINTER_T(struct_vbuf_buffer))]
vbuf_pool_abort = _libraries['libvideo-buffers.so'].vbuf_pool_abort
vbuf_pool_abort.restype = ctypes.c_int32
vbuf_pool_abort.argtypes = [POINTER_T(struct_vbuf_pool)]
vbuf_pool_get_evt = _libraries['libvideo-buffers.so'].vbuf_pool_get_evt
vbuf_pool_get_evt.restype = POINTER_T(struct_pomp_evt)
vbuf_pool_get_evt.argtypes = [POINTER_T(struct_vbuf_pool)]
vbuf_queue_new = _libraries['libvideo-buffers.so'].vbuf_queue_new
vbuf_queue_new.restype = ctypes.c_int32
vbuf_queue_new.argtypes = [ctypes.c_uint32, ctypes.c_int32, POINTER_T(POINTER_T(struct_vbuf_queue))]
vbuf_queue_destroy = _libraries['libvideo-buffers.so'].vbuf_queue_destroy
vbuf_queue_destroy.restype = ctypes.c_int32
vbuf_queue_destroy.argtypes = [POINTER_T(struct_vbuf_queue)]
vbuf_queue_get_count = _libraries['libvideo-buffers.so'].vbuf_queue_get_count
vbuf_queue_get_count.restype = ctypes.c_int32
vbuf_queue_get_count.argtypes = [POINTER_T(struct_vbuf_queue)]
vbuf_queue_peek = _libraries['libvideo-buffers.so'].vbuf_queue_peek
vbuf_queue_peek.restype = ctypes.c_int32
vbuf_queue_peek.argtypes = [POINTER_T(struct_vbuf_queue), ctypes.c_uint32, ctypes.c_int32, POINTER_T(POINTER_T(struct_vbuf_buffer))]
vbuf_queue_pop = _libraries['libvideo-buffers.so'].vbuf_queue_pop
vbuf_queue_pop.restype = ctypes.c_int32
vbuf_queue_pop.argtypes = [POINTER_T(struct_vbuf_queue), ctypes.c_int32, POINTER_T(POINTER_T(struct_vbuf_buffer))]
vbuf_queue_push = _libraries['libvideo-buffers.so'].vbuf_queue_push
vbuf_queue_push.restype = ctypes.c_int32
vbuf_queue_push.argtypes = [POINTER_T(struct_vbuf_queue), POINTER_T(struct_vbuf_buffer)]
vbuf_queue_abort = _libraries['libvideo-buffers.so'].vbuf_queue_abort
vbuf_queue_abort.restype = ctypes.c_int32
vbuf_queue_abort.argtypes = [POINTER_T(struct_vbuf_queue)]
vbuf_queue_flush = _libraries['libvideo-buffers.so'].vbuf_queue_flush
vbuf_queue_flush.restype = ctypes.c_int32
vbuf_queue_flush.argtypes = [POINTER_T(struct_vbuf_queue)]
vbuf_queue_get_evt = _libraries['libvideo-buffers.so'].vbuf_queue_get_evt
vbuf_queue_get_evt.restype = POINTER_T(struct_pomp_evt)
vbuf_queue_get_evt.argtypes = [POINTER_T(struct_vbuf_queue)]
class struct_json_object(Structure):
    pass

class struct_vmeta_buffer(Structure):
    pass

class union_vmeta_buffer_0(Union):
    _pack_ = True # source:False
    _fields_ = [
    ('data', POINTER_T(ctypes.c_ubyte)),
    ('cdata', POINTER_T(ctypes.c_ubyte)),
     ]

struct_vmeta_buffer._pack_ = True # source:False
struct_vmeta_buffer._fields_ = [
    ('vmeta_buffer_0', union_vmeta_buffer_0),
    ('len', ctypes.c_uint64),
    ('pos', ctypes.c_uint64),
]

class struct_vmeta_quaternion(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('w', ctypes.c_float),
    ('x', ctypes.c_float),
    ('y', ctypes.c_float),
    ('z', ctypes.c_float),
     ]

class struct_vmeta_euler(Structure):
    pass

class union_vmeta_euler_2(Union):
    _pack_ = True # source:False
    _fields_ = [
    ('roll', ctypes.c_float),
    ('phi', ctypes.c_float),
     ]

class union_vmeta_euler_0(Union):
    _pack_ = True # source:False
    _fields_ = [
    ('yaw', ctypes.c_float),
    ('psi', ctypes.c_float),
     ]

class union_vmeta_euler_1(Union):
    _pack_ = True # source:False
    _fields_ = [
    ('pitch', ctypes.c_float),
    ('theta', ctypes.c_float),
     ]

struct_vmeta_euler._pack_ = True # source:False
struct_vmeta_euler._fields_ = [
    ('vmeta_euler_0', union_vmeta_euler_0),
    ('vmeta_euler_1', union_vmeta_euler_1),
    ('vmeta_euler_2', union_vmeta_euler_2),
]

class struct_vmeta_xyz(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('x', ctypes.c_float),
    ('y', ctypes.c_float),
    ('z', ctypes.c_float),
     ]

class struct_vmeta_ned(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('north', ctypes.c_float),
    ('east', ctypes.c_float),
    ('down', ctypes.c_float),
     ]

class struct_vmeta_fov(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('horz', ctypes.c_float),
    ('vert', ctypes.c_float),
    ('has_horz', ctypes.c_uint32, 1),
    ('has_vert', ctypes.c_uint32, 1),
    ('PADDING_0', ctypes.c_uint32, 30),
     ]

class struct_vmeta_thermal_spot(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('x', ctypes.c_float),
    ('y', ctypes.c_float),
    ('temp', ctypes.c_float),
    ('valid', ctypes.c_ubyte),
    ('PADDING_0', ctypes.c_ubyte * 3),
     ]

class struct_vmeta_location(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('latitude', ctypes.c_double),
    ('longitude', ctypes.c_double),
    ('altitude', ctypes.c_double),
    ('sv_count', ctypes.c_ubyte),
    ('valid', ctypes.c_ubyte),
    ('PADDING_0', ctypes.c_ubyte * 6),
     ]

vmeta_euler_to_quat = _libraries['libvideo-metadata.so'].vmeta_euler_to_quat
vmeta_euler_to_quat.restype = None
vmeta_euler_to_quat.argtypes = [POINTER_T(struct_vmeta_euler), POINTER_T(struct_vmeta_quaternion)]
vmeta_quat_to_euler = _libraries['libvideo-metadata.so'].vmeta_quat_to_euler
vmeta_quat_to_euler.restype = None
vmeta_quat_to_euler.argtypes = [POINTER_T(struct_vmeta_quaternion), POINTER_T(struct_vmeta_euler)]

# values for enumeration 'vmeta_flying_state'
vmeta_flying_state__enumvalues = {
    0: 'VMETA_FLYING_STATE_LANDED',
    1: 'VMETA_FLYING_STATE_TAKINGOFF',
    2: 'VMETA_FLYING_STATE_HOVERING',
    3: 'VMETA_FLYING_STATE_FLYING',
    4: 'VMETA_FLYING_STATE_LANDING',
    5: 'VMETA_FLYING_STATE_EMERGENCY',
    6: 'VMETA_FLYING_STATE_USER_TAKEOFF',
    7: 'VMETA_FLYING_STATE_MOTOR_RAMPING',
    8: 'VMETA_FLYING_STATE_EMERGENCY_LANDING',
}
VMETA_FLYING_STATE_LANDED = 0
VMETA_FLYING_STATE_TAKINGOFF = 1
VMETA_FLYING_STATE_HOVERING = 2
VMETA_FLYING_STATE_FLYING = 3
VMETA_FLYING_STATE_LANDING = 4
VMETA_FLYING_STATE_EMERGENCY = 5
VMETA_FLYING_STATE_USER_TAKEOFF = 6
VMETA_FLYING_STATE_MOTOR_RAMPING = 7
VMETA_FLYING_STATE_EMERGENCY_LANDING = 8
vmeta_flying_state = ctypes.c_int # enum

# values for enumeration 'vmeta_piloting_mode'
vmeta_piloting_mode__enumvalues = {
    0: 'VMETA_PILOTING_MODE_MANUAL',
    1: 'VMETA_PILOTING_MODE_RETURN_HOME',
    2: 'VMETA_PILOTING_MODE_FLIGHT_PLAN',
    3: 'VMETA_PILOTING_MODE_TRACKING',
    3: 'VMETA_PILOTING_MODE_FOLLOW_ME',
    4: 'VMETA_PILOTING_MODE_MAGIC_CARPET',
    5: 'VMETA_PILOTING_MODE_MOVE_TO',
}
VMETA_PILOTING_MODE_MANUAL = 0
VMETA_PILOTING_MODE_RETURN_HOME = 1
VMETA_PILOTING_MODE_FLIGHT_PLAN = 2
VMETA_PILOTING_MODE_TRACKING = 3
VMETA_PILOTING_MODE_FOLLOW_ME = 3
VMETA_PILOTING_MODE_MAGIC_CARPET = 4
VMETA_PILOTING_MODE_MOVE_TO = 5
vmeta_piloting_mode = ctypes.c_int # enum

# values for enumeration 'vmeta_followme_anim'
vmeta_followme_anim__enumvalues = {
    0: 'VMETA_FOLLOWME_ANIM_NONE',
    1: 'VMETA_FOLLOWME_ANIM_ORBIT',
    2: 'VMETA_FOLLOWME_ANIM_BOOMERANG',
    3: 'VMETA_FOLLOWME_ANIM_PARABOLA',
    4: 'VMETA_FOLLOWME_ANIM_ZENITH',
}
VMETA_FOLLOWME_ANIM_NONE = 0
VMETA_FOLLOWME_ANIM_ORBIT = 1
VMETA_FOLLOWME_ANIM_BOOMERANG = 2
VMETA_FOLLOWME_ANIM_PARABOLA = 3
VMETA_FOLLOWME_ANIM_ZENITH = 4
vmeta_followme_anim = ctypes.c_int # enum

# values for enumeration 'vmeta_automation_anim'
vmeta_automation_anim__enumvalues = {
    0: 'VMETA_AUTOMATION_ANIM_NONE',
    1: 'VMETA_AUTOMATION_ANIM_ORBIT',
    2: 'VMETA_AUTOMATION_ANIM_BOOMERANG',
    3: 'VMETA_AUTOMATION_ANIM_PARABOLA',
    4: 'VMETA_AUTOMATION_ANIM_DOLLY_SLIDE',
    5: 'VMETA_AUTOMATION_ANIM_DOLLY_ZOOM',
    6: 'VMETA_AUTOMATION_ANIM_REVEAL_VERT',
    7: 'VMETA_AUTOMATION_ANIM_REVEAL_HORZ',
    8: 'VMETA_AUTOMATION_ANIM_PANORAMA_HORZ',
    9: 'VMETA_AUTOMATION_ANIM_CANDLE',
    10: 'VMETA_AUTOMATION_ANIM_FLIP_FRONT',
    11: 'VMETA_AUTOMATION_ANIM_FLIP_BACK',
    12: 'VMETA_AUTOMATION_ANIM_FLIP_LEFT',
    13: 'VMETA_AUTOMATION_ANIM_FLIP_RIGHT',
    14: 'VMETA_AUTOMATION_ANIM_TWISTUP',
    15: 'VMETA_AUTOMATION_ANIM_POSITION_TWISTUP',
}
VMETA_AUTOMATION_ANIM_NONE = 0
VMETA_AUTOMATION_ANIM_ORBIT = 1
VMETA_AUTOMATION_ANIM_BOOMERANG = 2
VMETA_AUTOMATION_ANIM_PARABOLA = 3
VMETA_AUTOMATION_ANIM_DOLLY_SLIDE = 4
VMETA_AUTOMATION_ANIM_DOLLY_ZOOM = 5
VMETA_AUTOMATION_ANIM_REVEAL_VERT = 6
VMETA_AUTOMATION_ANIM_REVEAL_HORZ = 7
VMETA_AUTOMATION_ANIM_PANORAMA_HORZ = 8
VMETA_AUTOMATION_ANIM_CANDLE = 9
VMETA_AUTOMATION_ANIM_FLIP_FRONT = 10
VMETA_AUTOMATION_ANIM_FLIP_BACK = 11
VMETA_AUTOMATION_ANIM_FLIP_LEFT = 12
VMETA_AUTOMATION_ANIM_FLIP_RIGHT = 13
VMETA_AUTOMATION_ANIM_TWISTUP = 14
VMETA_AUTOMATION_ANIM_POSITION_TWISTUP = 15
vmeta_automation_anim = ctypes.c_int # enum

# values for enumeration 'vmeta_thermal_calib_state'
vmeta_thermal_calib_state__enumvalues = {
    0: 'VMETA_THERMAL_CALIB_STATE_DONE',
    1: 'VMETA_THERMAL_CALIB_STATE_REQUESTED',
    2: 'VMETA_THERMAL_CALIB_STATE_IN_PROGRESS',
}
VMETA_THERMAL_CALIB_STATE_DONE = 0
VMETA_THERMAL_CALIB_STATE_REQUESTED = 1
VMETA_THERMAL_CALIB_STATE_IN_PROGRESS = 2
vmeta_thermal_calib_state = ctypes.c_int # enum

# values for enumeration 'vmeta_frame_type'
vmeta_frame_type__enumvalues = {
    0: 'VMETA_FRAME_TYPE_NONE',
    1: 'VMETA_FRAME_TYPE_V1_RECORDING',
    2: 'VMETA_FRAME_TYPE_V1_STREAMING_BASIC',
    3: 'VMETA_FRAME_TYPE_V1_STREAMING_EXTENDED',
    4: 'VMETA_FRAME_TYPE_V2',
    5: 'VMETA_FRAME_TYPE_V3',
}
VMETA_FRAME_TYPE_NONE = 0
VMETA_FRAME_TYPE_V1_RECORDING = 1
VMETA_FRAME_TYPE_V1_STREAMING_BASIC = 2
VMETA_FRAME_TYPE_V1_STREAMING_EXTENDED = 3
VMETA_FRAME_TYPE_V2 = 4
VMETA_FRAME_TYPE_V3 = 5
vmeta_frame_type = ctypes.c_int # enum
class struct_vmeta_frame_ext_timestamp(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('frame_timestamp', ctypes.c_uint64),
     ]

class struct_vmeta_frame_ext_followme(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('target', struct_vmeta_location),
    ('enabled', ctypes.c_uint32, 1),
    ('mode', ctypes.c_uint32, 1),
    ('angle_locked', ctypes.c_uint32, 1),
    ('PADDING_0', ctypes.c_uint32, 29),
    ('animation', vmeta_followme_anim),
     ]

class struct_vmeta_frame_ext_automation(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('framing_target', struct_vmeta_location),
    ('flight_destination', struct_vmeta_location),
    ('followme_enabled', ctypes.c_uint32, 1),
    ('lookatme_enabled', ctypes.c_uint32, 1),
    ('angle_locked', ctypes.c_uint32, 1),
    ('PADDING_0', ctypes.c_uint32, 29),
    ('animation', vmeta_automation_anim),
     ]

class struct_vmeta_frame_ext_thermal(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('calib_state', vmeta_thermal_calib_state),
    ('min', struct_vmeta_thermal_spot),
    ('max', struct_vmeta_thermal_spot),
    ('probe', struct_vmeta_thermal_spot),
     ]

vmeta_flying_state_str = _libraries['libvideo-metadata.so'].vmeta_flying_state_str
vmeta_flying_state_str.restype = POINTER_T(ctypes.c_char)
vmeta_flying_state_str.argtypes = [vmeta_flying_state]
vmeta_piloting_mode_str = _libraries['libvideo-metadata.so'].vmeta_piloting_mode_str
vmeta_piloting_mode_str.restype = POINTER_T(ctypes.c_char)
vmeta_piloting_mode_str.argtypes = [vmeta_piloting_mode]
vmeta_followme_anim_str = _libraries['libvideo-metadata.so'].vmeta_followme_anim_str
vmeta_followme_anim_str.restype = POINTER_T(ctypes.c_char)
vmeta_followme_anim_str.argtypes = [vmeta_followme_anim]
vmeta_automation_anim_str = _libraries['libvideo-metadata.so'].vmeta_automation_anim_str
vmeta_automation_anim_str.restype = POINTER_T(ctypes.c_char)
vmeta_automation_anim_str.argtypes = [vmeta_automation_anim]
vmeta_thermal_calib_state_str = _libraries['libvideo-metadata.so'].vmeta_thermal_calib_state_str
vmeta_thermal_calib_state_str.restype = POINTER_T(ctypes.c_char)
vmeta_thermal_calib_state_str.argtypes = [vmeta_thermal_calib_state]
vmeta_frame_type_str = _libraries['libvideo-metadata.so'].vmeta_frame_type_str
vmeta_frame_type_str.restype = POINTER_T(ctypes.c_char)
vmeta_frame_type_str.argtypes = [vmeta_frame_type]
class struct_vmeta_frame(Structure):
    pass

class union_vmeta_frame_0(Union):
    pass

class struct_vmeta_frame_v1_streaming_basic(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('drone_attitude', struct_vmeta_euler),
    ('frame_quat', struct_vmeta_quaternion),
    ('camera_pan', ctypes.c_float),
    ('camera_tilt', ctypes.c_float),
    ('exposure_time', ctypes.c_float),
    ('gain', ctypes.c_uint16),
    ('wifi_rssi', ctypes.c_byte),
    ('battery_percentage', ctypes.c_ubyte),
     ]

class struct_vmeta_frame_v3(Structure):
    pass

class struct_vmeta_frame_v3_base(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('drone_quat', struct_vmeta_quaternion),
    ('location', struct_vmeta_location),
    ('ground_distance', ctypes.c_double),
    ('speed', struct_vmeta_ned),
    ('air_speed', ctypes.c_float),
    ('frame_base_quat', struct_vmeta_quaternion),
    ('frame_quat', struct_vmeta_quaternion),
    ('exposure_time', ctypes.c_float),
    ('gain', ctypes.c_uint16),
    ('PADDING_0', ctypes.c_ubyte * 2),
    ('awb_r_gain', ctypes.c_float),
    ('awb_b_gain', ctypes.c_float),
    ('picture_hfov', ctypes.c_float),
    ('picture_vfov', ctypes.c_float),
    ('link_goodput', ctypes.c_uint32),
    ('link_quality', ctypes.c_byte),
    ('wifi_rssi', ctypes.c_byte),
    ('battery_percentage', ctypes.c_ubyte),
    ('animation', ctypes.c_uint32, 1),
    ('PADDING_1', ctypes.c_uint8, 7),
    ('state', vmeta_flying_state),
    ('mode', vmeta_piloting_mode),
     ]

struct_vmeta_frame_v3._pack_ = True # source:False
struct_vmeta_frame_v3._fields_ = [
    ('base', struct_vmeta_frame_v3_base),
    ('has_timestamp', ctypes.c_uint32, 1),
    ('has_automation', ctypes.c_uint32, 1),
    ('has_thermal', ctypes.c_uint32, 1),
    ('PADDING_0', ctypes.c_uint64, 61),
    ('timestamp', struct_vmeta_frame_ext_timestamp),
    ('automation', struct_vmeta_frame_ext_automation),
    ('thermal', struct_vmeta_frame_ext_thermal),
    ('PADDING_1', ctypes.c_ubyte * 4),
]

class struct_vmeta_frame_v1_streaming_extended(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('drone_attitude', struct_vmeta_euler),
    ('PADDING_0', ctypes.c_ubyte * 4),
    ('location', struct_vmeta_location),
    ('altitude', ctypes.c_double),
    ('distance_from_home', ctypes.c_double),
    ('speed', struct_vmeta_xyz),
    ('frame_quat', struct_vmeta_quaternion),
    ('camera_pan', ctypes.c_float),
    ('camera_tilt', ctypes.c_float),
    ('exposure_time', ctypes.c_float),
    ('gain', ctypes.c_uint16),
    ('wifi_rssi', ctypes.c_byte),
    ('battery_percentage', ctypes.c_ubyte),
    ('binning', ctypes.c_uint32, 1),
    ('animation', ctypes.c_uint32, 1),
    ('PADDING_1', ctypes.c_uint32, 30),
    ('state', vmeta_flying_state),
    ('mode', vmeta_piloting_mode),
     ]

class struct_vmeta_frame_v2(Structure):
    pass

class struct_vmeta_frame_v2_base(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('drone_quat', struct_vmeta_quaternion),
    ('location', struct_vmeta_location),
    ('ground_distance', ctypes.c_double),
    ('speed', struct_vmeta_ned),
    ('air_speed', ctypes.c_float),
    ('frame_quat', struct_vmeta_quaternion),
    ('camera_pan', ctypes.c_float),
    ('camera_tilt', ctypes.c_float),
    ('exposure_time', ctypes.c_float),
    ('gain', ctypes.c_uint16),
    ('wifi_rssi', ctypes.c_byte),
    ('battery_percentage', ctypes.c_ubyte),
    ('binning', ctypes.c_uint32, 1),
    ('animation', ctypes.c_uint32, 1),
    ('PADDING_0', ctypes.c_uint32, 30),
    ('state', vmeta_flying_state),
    ('mode', vmeta_piloting_mode),
    ('PADDING_1', ctypes.c_ubyte * 4),
     ]

struct_vmeta_frame_v2._pack_ = True # source:False
struct_vmeta_frame_v2._fields_ = [
    ('base', struct_vmeta_frame_v2_base),
    ('has_timestamp', ctypes.c_uint32, 1),
    ('has_followme', ctypes.c_uint32, 1),
    ('PADDING_0', ctypes.c_uint64, 62),
    ('timestamp', struct_vmeta_frame_ext_timestamp),
    ('followme', struct_vmeta_frame_ext_followme),
]

class struct_vmeta_frame_v1_recording(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('drone_attitude', struct_vmeta_euler),
    ('PADDING_0', ctypes.c_ubyte * 4),
    ('location', struct_vmeta_location),
    ('altitude', ctypes.c_double),
    ('distance_from_home', ctypes.c_double),
    ('speed', struct_vmeta_xyz),
    ('PADDING_1', ctypes.c_ubyte * 4),
    ('frame_timestamp', ctypes.c_uint64),
    ('frame_quat', struct_vmeta_quaternion),
    ('camera_pan', ctypes.c_float),
    ('camera_tilt', ctypes.c_float),
    ('exposure_time', ctypes.c_float),
    ('gain', ctypes.c_uint16),
    ('wifi_rssi', ctypes.c_byte),
    ('battery_percentage', ctypes.c_ubyte),
    ('binning', ctypes.c_uint32, 1),
    ('animation', ctypes.c_uint32, 1),
    ('PADDING_2', ctypes.c_uint32, 30),
    ('state', vmeta_flying_state),
    ('mode', vmeta_piloting_mode),
    ('PADDING_3', ctypes.c_ubyte * 4),
     ]

union_vmeta_frame_0._pack_ = True # source:False
union_vmeta_frame_0._fields_ = [
    ('v1_rec', struct_vmeta_frame_v1_recording),
    ('v1_strm_basic', struct_vmeta_frame_v1_streaming_basic),
    ('v1_strm_ext', struct_vmeta_frame_v1_streaming_extended),
    ('v2', struct_vmeta_frame_v2),
    ('v3', struct_vmeta_frame_v3),
]

struct_vmeta_frame._pack_ = True # source:False
struct_vmeta_frame._fields_ = [
    ('type', vmeta_frame_type),
    ('PADDING_0', ctypes.c_ubyte * 4),
    ('vmeta_frame_0', union_vmeta_frame_0),
]

vmeta_frame_write = _libraries['libvideo-metadata.so'].vmeta_frame_write
vmeta_frame_write.restype = ctypes.c_int32
vmeta_frame_write.argtypes = [POINTER_T(struct_vmeta_buffer), POINTER_T(struct_vmeta_frame)]
vmeta_frame_read = _libraries['libvideo-metadata.so'].vmeta_frame_read
vmeta_frame_read.restype = ctypes.c_int32
vmeta_frame_read.argtypes = [POINTER_T(struct_vmeta_buffer), POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_char)]
vmeta_frame_to_json = _libraries['libvideo-metadata.so'].vmeta_frame_to_json
vmeta_frame_to_json.restype = ctypes.c_int32
vmeta_frame_to_json.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(struct_json_object)]
vmeta_frame_to_csv = _libraries['libvideo-metadata.so'].vmeta_frame_to_csv
vmeta_frame_to_csv.restype = ssize_t
vmeta_frame_to_csv.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_char), size_t]
vmeta_frame_csv_header = _libraries['libvideo-metadata.so'].vmeta_frame_csv_header
vmeta_frame_csv_header.restype = ssize_t
vmeta_frame_csv_header.argtypes = [vmeta_frame_type, POINTER_T(ctypes.c_char), size_t]
vmeta_frame_get_mime_type = _libraries['libvideo-metadata.so'].vmeta_frame_get_mime_type
vmeta_frame_get_mime_type.restype = POINTER_T(ctypes.c_char)
vmeta_frame_get_mime_type.argtypes = [vmeta_frame_type]
vmeta_frame_get_location = _libraries['libvideo-metadata.so'].vmeta_frame_get_location
vmeta_frame_get_location.restype = ctypes.c_int32
vmeta_frame_get_location.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(struct_vmeta_location)]
vmeta_frame_get_speed_ned = _libraries['libvideo-metadata.so'].vmeta_frame_get_speed_ned
vmeta_frame_get_speed_ned.restype = ctypes.c_int32
vmeta_frame_get_speed_ned.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(struct_vmeta_ned)]
vmeta_frame_get_air_speed = _libraries['libvideo-metadata.so'].vmeta_frame_get_air_speed
vmeta_frame_get_air_speed.restype = ctypes.c_int32
vmeta_frame_get_air_speed.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_float)]
vmeta_frame_get_ground_distance = _libraries['libvideo-metadata.so'].vmeta_frame_get_ground_distance
vmeta_frame_get_ground_distance.restype = ctypes.c_int32
vmeta_frame_get_ground_distance.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_double)]
vmeta_frame_get_drone_euler = _libraries['libvideo-metadata.so'].vmeta_frame_get_drone_euler
vmeta_frame_get_drone_euler.restype = ctypes.c_int32
vmeta_frame_get_drone_euler.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(struct_vmeta_euler)]
vmeta_frame_get_drone_quat = _libraries['libvideo-metadata.so'].vmeta_frame_get_drone_quat
vmeta_frame_get_drone_quat.restype = ctypes.c_int32
vmeta_frame_get_drone_quat.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(struct_vmeta_quaternion)]
vmeta_frame_get_frame_euler = _libraries['libvideo-metadata.so'].vmeta_frame_get_frame_euler
vmeta_frame_get_frame_euler.restype = ctypes.c_int32
vmeta_frame_get_frame_euler.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(struct_vmeta_euler)]
vmeta_frame_get_frame_quat = _libraries['libvideo-metadata.so'].vmeta_frame_get_frame_quat
vmeta_frame_get_frame_quat.restype = ctypes.c_int32
vmeta_frame_get_frame_quat.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(struct_vmeta_quaternion)]
vmeta_frame_get_frame_base_euler = _libraries['libvideo-metadata.so'].vmeta_frame_get_frame_base_euler
vmeta_frame_get_frame_base_euler.restype = ctypes.c_int32
vmeta_frame_get_frame_base_euler.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(struct_vmeta_euler)]
vmeta_frame_get_frame_base_quat = _libraries['libvideo-metadata.so'].vmeta_frame_get_frame_base_quat
vmeta_frame_get_frame_base_quat.restype = ctypes.c_int32
vmeta_frame_get_frame_base_quat.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(struct_vmeta_quaternion)]
vmeta_frame_get_frame_timestamp = _libraries['libvideo-metadata.so'].vmeta_frame_get_frame_timestamp
vmeta_frame_get_frame_timestamp.restype = ctypes.c_int32
vmeta_frame_get_frame_timestamp.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_uint64)]
vmeta_frame_get_camera_pan = _libraries['libvideo-metadata.so'].vmeta_frame_get_camera_pan
vmeta_frame_get_camera_pan.restype = ctypes.c_int32
vmeta_frame_get_camera_pan.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_float)]
vmeta_frame_get_camera_tilt = _libraries['libvideo-metadata.so'].vmeta_frame_get_camera_tilt
vmeta_frame_get_camera_tilt.restype = ctypes.c_int32
vmeta_frame_get_camera_tilt.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_float)]
vmeta_frame_get_exposure_time = _libraries['libvideo-metadata.so'].vmeta_frame_get_exposure_time
vmeta_frame_get_exposure_time.restype = ctypes.c_int32
vmeta_frame_get_exposure_time.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_float)]
vmeta_frame_get_gain = _libraries['libvideo-metadata.so'].vmeta_frame_get_gain
vmeta_frame_get_gain.restype = ctypes.c_int32
vmeta_frame_get_gain.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_uint16)]
vmeta_frame_get_awb_r_gain = _libraries['libvideo-metadata.so'].vmeta_frame_get_awb_r_gain
vmeta_frame_get_awb_r_gain.restype = ctypes.c_int32
vmeta_frame_get_awb_r_gain.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_float)]
vmeta_frame_get_awb_b_gain = _libraries['libvideo-metadata.so'].vmeta_frame_get_awb_b_gain
vmeta_frame_get_awb_b_gain.restype = ctypes.c_int32
vmeta_frame_get_awb_b_gain.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_float)]
vmeta_frame_get_picture_h_fov = _libraries['libvideo-metadata.so'].vmeta_frame_get_picture_h_fov
vmeta_frame_get_picture_h_fov.restype = ctypes.c_int32
vmeta_frame_get_picture_h_fov.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_float)]
vmeta_frame_get_picture_v_fov = _libraries['libvideo-metadata.so'].vmeta_frame_get_picture_v_fov
vmeta_frame_get_picture_v_fov.restype = ctypes.c_int32
vmeta_frame_get_picture_v_fov.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_float)]
vmeta_frame_get_link_goodput = _libraries['libvideo-metadata.so'].vmeta_frame_get_link_goodput
vmeta_frame_get_link_goodput.restype = ctypes.c_int32
vmeta_frame_get_link_goodput.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_uint32)]
vmeta_frame_get_link_quality = _libraries['libvideo-metadata.so'].vmeta_frame_get_link_quality
vmeta_frame_get_link_quality.restype = ctypes.c_int32
vmeta_frame_get_link_quality.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_ubyte)]
vmeta_frame_get_wifi_rssi = _libraries['libvideo-metadata.so'].vmeta_frame_get_wifi_rssi
vmeta_frame_get_wifi_rssi.restype = ctypes.c_int32
vmeta_frame_get_wifi_rssi.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_byte)]
vmeta_frame_get_battery_pencentage = _libraries['libvideo-metadata.so'].vmeta_frame_get_battery_pencentage
vmeta_frame_get_battery_pencentage.restype = ctypes.c_int32
vmeta_frame_get_battery_pencentage.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(ctypes.c_ubyte)]
vmeta_frame_get_flying_state = _libraries['libvideo-metadata.so'].vmeta_frame_get_flying_state
vmeta_frame_get_flying_state.restype = ctypes.c_int32
vmeta_frame_get_flying_state.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(vmeta_flying_state)]
vmeta_frame_get_piloting_mode = _libraries['libvideo-metadata.so'].vmeta_frame_get_piloting_mode
vmeta_frame_get_piloting_mode.restype = ctypes.c_int32
vmeta_frame_get_piloting_mode.argtypes = [POINTER_T(struct_vmeta_frame), POINTER_T(vmeta_piloting_mode)]
vmeta_frame_v1_streaming_basic_write = _libraries['libvideo-metadata.so'].vmeta_frame_v1_streaming_basic_write
vmeta_frame_v1_streaming_basic_write.restype = ctypes.c_int32
vmeta_frame_v1_streaming_basic_write.argtypes = [POINTER_T(struct_vmeta_buffer), POINTER_T(struct_vmeta_frame_v1_streaming_basic)]
vmeta_frame_v1_streaming_basic_read = _libraries['libvideo-metadata.so'].vmeta_frame_v1_streaming_basic_read
vmeta_frame_v1_streaming_basic_read.restype = ctypes.c_int32
vmeta_frame_v1_streaming_basic_read.argtypes = [POINTER_T(struct_vmeta_buffer), POINTER_T(struct_vmeta_frame_v1_streaming_basic)]
vmeta_frame_v1_streaming_basic_to_json = _libraries['libvideo-metadata.so'].vmeta_frame_v1_streaming_basic_to_json
vmeta_frame_v1_streaming_basic_to_json.restype = ctypes.c_int32
vmeta_frame_v1_streaming_basic_to_json.argtypes = [POINTER_T(struct_vmeta_frame_v1_streaming_basic), POINTER_T(struct_json_object)]
vmeta_frame_v1_streaming_basic_to_csv = _libraries['libvideo-metadata.so'].vmeta_frame_v1_streaming_basic_to_csv
vmeta_frame_v1_streaming_basic_to_csv.restype = size_t
vmeta_frame_v1_streaming_basic_to_csv.argtypes = [POINTER_T(struct_vmeta_frame_v1_streaming_basic), POINTER_T(ctypes.c_char), size_t]
vmeta_frame_v1_streaming_basic_csv_header = _libraries['libvideo-metadata.so'].vmeta_frame_v1_streaming_basic_csv_header
vmeta_frame_v1_streaming_basic_csv_header.restype = size_t
vmeta_frame_v1_streaming_basic_csv_header.argtypes = [POINTER_T(ctypes.c_char), size_t]
vmeta_frame_v1_streaming_extended_write = _libraries['libvideo-metadata.so'].vmeta_frame_v1_streaming_extended_write
vmeta_frame_v1_streaming_extended_write.restype = ctypes.c_int32
vmeta_frame_v1_streaming_extended_write.argtypes = [POINTER_T(struct_vmeta_buffer), POINTER_T(struct_vmeta_frame_v1_streaming_extended)]
vmeta_frame_v1_streaming_extended_read = _libraries['libvideo-metadata.so'].vmeta_frame_v1_streaming_extended_read
vmeta_frame_v1_streaming_extended_read.restype = ctypes.c_int32
vmeta_frame_v1_streaming_extended_read.argtypes = [POINTER_T(struct_vmeta_buffer), POINTER_T(struct_vmeta_frame_v1_streaming_extended)]
vmeta_frame_v1_streaming_extended_to_json = _libraries['libvideo-metadata.so'].vmeta_frame_v1_streaming_extended_to_json
vmeta_frame_v1_streaming_extended_to_json.restype = ctypes.c_int32
vmeta_frame_v1_streaming_extended_to_json.argtypes = [POINTER_T(struct_vmeta_frame_v1_streaming_extended), POINTER_T(struct_json_object)]
vmeta_frame_v1_streaming_extended_to_csv = _libraries['libvideo-metadata.so'].vmeta_frame_v1_streaming_extended_to_csv
vmeta_frame_v1_streaming_extended_to_csv.restype = size_t
vmeta_frame_v1_streaming_extended_to_csv.argtypes = [POINTER_T(struct_vmeta_frame_v1_streaming_extended), POINTER_T(ctypes.c_char), size_t]
vmeta_frame_v1_streaming_extended_csv_header = _libraries['libvideo-metadata.so'].vmeta_frame_v1_streaming_extended_csv_header
vmeta_frame_v1_streaming_extended_csv_header.restype = size_t
vmeta_frame_v1_streaming_extended_csv_header.argtypes = [POINTER_T(ctypes.c_char), size_t]
vmeta_frame_v1_recording_write = _libraries['libvideo-metadata.so'].vmeta_frame_v1_recording_write
vmeta_frame_v1_recording_write.restype = ctypes.c_int32
vmeta_frame_v1_recording_write.argtypes = [POINTER_T(struct_vmeta_buffer), POINTER_T(struct_vmeta_frame_v1_recording)]
vmeta_frame_v1_recording_read = _libraries['libvideo-metadata.so'].vmeta_frame_v1_recording_read
vmeta_frame_v1_recording_read.restype = ctypes.c_int32
vmeta_frame_v1_recording_read.argtypes = [POINTER_T(struct_vmeta_buffer), POINTER_T(struct_vmeta_frame_v1_recording)]
vmeta_frame_v1_recording_to_json = _libraries['libvideo-metadata.so'].vmeta_frame_v1_recording_to_json
vmeta_frame_v1_recording_to_json.restype = ctypes.c_int32
vmeta_frame_v1_recording_to_json.argtypes = [POINTER_T(struct_vmeta_frame_v1_recording), POINTER_T(struct_json_object)]
vmeta_frame_v1_recording_to_csv = _libraries['libvideo-metadata.so'].vmeta_frame_v1_recording_to_csv
vmeta_frame_v1_recording_to_csv.restype = size_t
vmeta_frame_v1_recording_to_csv.argtypes = [POINTER_T(struct_vmeta_frame_v1_recording), POINTER_T(ctypes.c_char), size_t]
vmeta_frame_v1_recording_csv_header = _libraries['libvideo-metadata.so'].vmeta_frame_v1_recording_csv_header
vmeta_frame_v1_recording_csv_header.restype = size_t
vmeta_frame_v1_recording_csv_header.argtypes = [POINTER_T(ctypes.c_char), size_t]
vmeta_frame_v2_write = _libraries['libvideo-metadata.so'].vmeta_frame_v2_write
vmeta_frame_v2_write.restype = ctypes.c_int32
vmeta_frame_v2_write.argtypes = [POINTER_T(struct_vmeta_buffer), POINTER_T(struct_vmeta_frame_v2)]
vmeta_frame_v2_read = _libraries['libvideo-metadata.so'].vmeta_frame_v2_read
vmeta_frame_v2_read.restype = ctypes.c_int32
vmeta_frame_v2_read.argtypes = [POINTER_T(struct_vmeta_buffer), POINTER_T(struct_vmeta_frame_v2)]
vmeta_frame_v2_to_json = _libraries['libvideo-metadata.so'].vmeta_frame_v2_to_json
vmeta_frame_v2_to_json.restype = ctypes.c_int32
vmeta_frame_v2_to_json.argtypes = [POINTER_T(struct_vmeta_frame_v2), POINTER_T(struct_json_object)]
vmeta_frame_v2_to_csv = _libraries['libvideo-metadata.so'].vmeta_frame_v2_to_csv
vmeta_frame_v2_to_csv.restype = size_t
vmeta_frame_v2_to_csv.argtypes = [POINTER_T(struct_vmeta_frame_v2), POINTER_T(ctypes.c_char), size_t]
vmeta_frame_v2_csv_header = _libraries['libvideo-metadata.so'].vmeta_frame_v2_csv_header
vmeta_frame_v2_csv_header.restype = size_t
vmeta_frame_v2_csv_header.argtypes = [POINTER_T(ctypes.c_char), size_t]
vmeta_frame_v3_write = _libraries['libvideo-metadata.so'].vmeta_frame_v3_write
vmeta_frame_v3_write.restype = ctypes.c_int32
vmeta_frame_v3_write.argtypes = [POINTER_T(struct_vmeta_buffer), POINTER_T(struct_vmeta_frame_v3)]
vmeta_frame_v3_read = _libraries['libvideo-metadata.so'].vmeta_frame_v3_read
vmeta_frame_v3_read.restype = ctypes.c_int32
vmeta_frame_v3_read.argtypes = [POINTER_T(struct_vmeta_buffer), POINTER_T(struct_vmeta_frame_v3)]
vmeta_frame_v3_to_json = _libraries['libvideo-metadata.so'].vmeta_frame_v3_to_json
vmeta_frame_v3_to_json.restype = ctypes.c_int32
vmeta_frame_v3_to_json.argtypes = [POINTER_T(struct_vmeta_frame_v3), POINTER_T(struct_json_object)]
vmeta_frame_v3_to_csv = _libraries['libvideo-metadata.so'].vmeta_frame_v3_to_csv
vmeta_frame_v3_to_csv.restype = size_t
vmeta_frame_v3_to_csv.argtypes = [POINTER_T(struct_vmeta_frame_v3), POINTER_T(ctypes.c_char), size_t]
vmeta_frame_v3_csv_header = _libraries['libvideo-metadata.so'].vmeta_frame_v3_csv_header
vmeta_frame_v3_csv_header.restype = size_t
vmeta_frame_v3_csv_header.argtypes = [POINTER_T(ctypes.c_char), size_t]

# values for enumeration 'vmeta_session_location_format'
vmeta_session_location_format__enumvalues = {
    0: 'VMETA_SESSION_LOCATION_CSV',
    1: 'VMETA_SESSION_LOCATION_ISO6709',
    2: 'VMETA_SESSION_LOCATION_XYZ',
}
VMETA_SESSION_LOCATION_CSV = 0
VMETA_SESSION_LOCATION_ISO6709 = 1
VMETA_SESSION_LOCATION_XYZ = 2
vmeta_session_location_format = ctypes.c_int # enum

# values for enumeration 'vmeta_stream_sdes_type'
vmeta_stream_sdes_type__enumvalues = {
    0: 'VMETA_STRM_SDES_TYPE_END',
    1: 'VMETA_STRM_SDES_TYPE_CNAME',
    2: 'VMETA_STRM_SDES_TYPE_NAME',
    3: 'VMETA_STRM_SDES_TYPE_EMAIL',
    4: 'VMETA_STRM_SDES_TYPE_PHONE',
    5: 'VMETA_STRM_SDES_TYPE_LOC',
    6: 'VMETA_STRM_SDES_TYPE_TOOL',
    7: 'VMETA_STRM_SDES_TYPE_NOTE',
    8: 'VMETA_STRM_SDES_TYPE_PRIV',
}
VMETA_STRM_SDES_TYPE_END = 0
VMETA_STRM_SDES_TYPE_CNAME = 1
VMETA_STRM_SDES_TYPE_NAME = 2
VMETA_STRM_SDES_TYPE_EMAIL = 3
VMETA_STRM_SDES_TYPE_PHONE = 4
VMETA_STRM_SDES_TYPE_LOC = 5
VMETA_STRM_SDES_TYPE_TOOL = 6
VMETA_STRM_SDES_TYPE_NOTE = 7
VMETA_STRM_SDES_TYPE_PRIV = 8
vmeta_stream_sdes_type = ctypes.c_int # enum

# values for enumeration 'vmeta_stream_sdp_type'
vmeta_stream_sdp_type__enumvalues = {
    0: 'VMETA_STRM_SDP_TYPE_SESSION_INFO',
    1: 'VMETA_STRM_SDP_TYPE_SESSION_NAME',
    2: 'VMETA_STRM_SDP_TYPE_SESSION_TOOL',
    3: 'VMETA_STRM_SDP_TYPE_SESSION_ATTR',
    4: 'VMETA_STRM_SDP_TYPE_MEDIA_ATTR',
}
VMETA_STRM_SDP_TYPE_SESSION_INFO = 0
VMETA_STRM_SDP_TYPE_SESSION_NAME = 1
VMETA_STRM_SDP_TYPE_SESSION_TOOL = 2
VMETA_STRM_SDP_TYPE_SESSION_ATTR = 3
VMETA_STRM_SDP_TYPE_MEDIA_ATTR = 4
vmeta_stream_sdp_type = ctypes.c_int # enum

# values for enumeration 'vmeta_record_type'
vmeta_record_type__enumvalues = {
    0: 'VMETA_REC_META',
    1: 'VMETA_REC_UDTA',
    2: 'VMETA_REC_XYZ',
}
VMETA_REC_META = 0
VMETA_REC_UDTA = 1
VMETA_REC_XYZ = 2
vmeta_record_type = ctypes.c_int # enum
class struct_vmeta_thermal_alignment(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('rotation', struct_vmeta_euler),
    ('valid', ctypes.c_ubyte),
    ('PADDING_0', ctypes.c_ubyte * 3),
     ]

class struct_vmeta_thermal_conversion(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('r', ctypes.c_float),
    ('b', ctypes.c_float),
    ('f', ctypes.c_float),
    ('o', ctypes.c_float),
    ('tau_win', ctypes.c_float),
    ('t_win', ctypes.c_float),
    ('t_bg', ctypes.c_float),
    ('emissivity', ctypes.c_float),
    ('valid', ctypes.c_ubyte),
    ('PADDING_0', ctypes.c_ubyte * 3),
     ]

class struct_vmeta_thermal(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('metaversion', ctypes.c_int32),
    ('camserial', ctypes.c_char * 50),
    ('PADDING_0', ctypes.c_ubyte * 2),
    ('alignment', struct_vmeta_thermal_alignment),
    ('conv_low', struct_vmeta_thermal_conversion),
    ('conv_high', struct_vmeta_thermal_conversion),
    ('scale_factor', ctypes.c_double),
     ]

class struct_vmeta_session(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('friendly_name', ctypes.c_char * 40),
    ('maker', ctypes.c_char * 40),
    ('model', ctypes.c_char * 40),
    ('model_id', ctypes.c_char * 5),
    ('serial_number', ctypes.c_char * 32),
    ('software_version', ctypes.c_char * 20),
    ('build_id', ctypes.c_char * 48),
    ('title', ctypes.c_char * 80),
    ('comment', ctypes.c_char * 100),
    ('copyright', ctypes.c_char * 80),
    ('PADDING_0', ctypes.c_ubyte * 3),
    ('media_date', ctypes.c_int64),
    ('media_date_gmtoff', ctypes.c_int64),
    ('run_date', ctypes.c_int64),
    ('run_date_gmtoff', ctypes.c_int64),
    ('run_id', ctypes.c_char * 33),
    ('boot_id', ctypes.c_char * 33),
    ('PADDING_1', ctypes.c_ubyte * 6),
    ('takeoff_loc', struct_vmeta_location),
    ('picture_fov', struct_vmeta_fov),
    ('PADDING_2', ctypes.c_ubyte * 4),
    ('thermal', struct_vmeta_thermal),
    ('has_thermal', ctypes.c_uint32, 1),
    ('PADDING_3', ctypes.c_uint8, 7),
    ('video_mode', ctypes.c_char * 20),
    ('PADDING_4', ctypes.c_ubyte * 3),
     ]

time_t = ctypes.c_int64
vmeta_session_date_write = _libraries['libvideo-metadata.so'].vmeta_session_date_write
vmeta_session_date_write.restype = ssize_t
vmeta_session_date_write.argtypes = [POINTER_T(ctypes.c_char), size_t, time_t, ctypes.c_int64]
vmeta_session_date_read = _libraries['libvideo-metadata.so'].vmeta_session_date_read
vmeta_session_date_read.restype = ctypes.c_int32
vmeta_session_date_read.argtypes = [POINTER_T(ctypes.c_char), POINTER_T(ctypes.c_int64), POINTER_T(ctypes.c_int64)]
vmeta_session_location_write = _libraries['libvideo-metadata.so'].vmeta_session_location_write
vmeta_session_location_write.restype = ssize_t
vmeta_session_location_write.argtypes = [POINTER_T(ctypes.c_char), size_t, vmeta_session_location_format, POINTER_T(struct_vmeta_location)]
vmeta_session_location_read = _libraries['libvideo-metadata.so'].vmeta_session_location_read
vmeta_session_location_read.restype = ctypes.c_int32
vmeta_session_location_read.argtypes = [POINTER_T(ctypes.c_char), POINTER_T(struct_vmeta_location)]
vmeta_session_fov_write = _libraries['libvideo-metadata.so'].vmeta_session_fov_write
vmeta_session_fov_write.restype = ssize_t
vmeta_session_fov_write.argtypes = [POINTER_T(ctypes.c_char), size_t, POINTER_T(struct_vmeta_fov)]
vmeta_session_fov_read = _libraries['libvideo-metadata.so'].vmeta_session_fov_read
vmeta_session_fov_read.restype = ctypes.c_int32
vmeta_session_fov_read.argtypes = [POINTER_T(ctypes.c_char), POINTER_T(struct_vmeta_fov)]
vmeta_session_thermal_alignment_write = _libraries['libvideo-metadata.so'].vmeta_session_thermal_alignment_write
vmeta_session_thermal_alignment_write.restype = ssize_t
vmeta_session_thermal_alignment_write.argtypes = [POINTER_T(ctypes.c_char), size_t, POINTER_T(struct_vmeta_thermal_alignment)]
vmeta_session_thermal_alignment_read = _libraries['libvideo-metadata.so'].vmeta_session_thermal_alignment_read
vmeta_session_thermal_alignment_read.restype = ctypes.c_int32
vmeta_session_thermal_alignment_read.argtypes = [POINTER_T(ctypes.c_char), POINTER_T(struct_vmeta_thermal_alignment)]
vmeta_session_thermal_conversion_write = _libraries['libvideo-metadata.so'].vmeta_session_thermal_conversion_write
vmeta_session_thermal_conversion_write.restype = ssize_t
vmeta_session_thermal_conversion_write.argtypes = [POINTER_T(ctypes.c_char), size_t, POINTER_T(struct_vmeta_thermal_conversion)]
vmeta_session_thermal_conversion_read = _libraries['libvideo-metadata.so'].vmeta_session_thermal_conversion_read
vmeta_session_thermal_conversion_read.restype = ctypes.c_int32
vmeta_session_thermal_conversion_read.argtypes = [POINTER_T(ctypes.c_char), POINTER_T(struct_vmeta_thermal_conversion)]
vmeta_session_thermal_scale_factor_write = _libraries['libvideo-metadata.so'].vmeta_session_thermal_scale_factor_write
vmeta_session_thermal_scale_factor_write.restype = ssize_t
vmeta_session_thermal_scale_factor_write.argtypes = [POINTER_T(ctypes.c_char), size_t, ctypes.c_double]
vmeta_session_thermal_scale_factor_read = _libraries['libvideo-metadata.so'].vmeta_session_thermal_scale_factor_read
vmeta_session_thermal_scale_factor_read.restype = ctypes.c_int32
vmeta_session_thermal_scale_factor_read.argtypes = [POINTER_T(ctypes.c_char), POINTER_T(ctypes.c_double)]
vmeta_session_streaming_sdes_write_cb_t = ctypes.CFUNCTYPE(None, vmeta_stream_sdes_type, POINTER_T(ctypes.c_char), POINTER_T(ctypes.c_char), POINTER_T(None))
vmeta_session_streaming_sdes_write = _libraries['libvideo-metadata.so'].vmeta_session_streaming_sdes_write
vmeta_session_streaming_sdes_write.restype = ctypes.c_int32
vmeta_session_streaming_sdes_write.argtypes = [POINTER_T(struct_vmeta_session), vmeta_session_streaming_sdes_write_cb_t, POINTER_T(None)]
vmeta_session_streaming_sdes_read = _libraries['libvideo-metadata.so'].vmeta_session_streaming_sdes_read
vmeta_session_streaming_sdes_read.restype = ctypes.c_int32
vmeta_session_streaming_sdes_read.argtypes = [vmeta_stream_sdes_type, POINTER_T(ctypes.c_char), POINTER_T(ctypes.c_char), POINTER_T(struct_vmeta_session)]
vmeta_session_streaming_sdp_write_cb_t = ctypes.CFUNCTYPE(None, vmeta_stream_sdp_type, POINTER_T(ctypes.c_char), POINTER_T(ctypes.c_char), POINTER_T(None))
vmeta_session_streaming_sdp_write = _libraries['libvideo-metadata.so'].vmeta_session_streaming_sdp_write
vmeta_session_streaming_sdp_write.restype = ctypes.c_int32
vmeta_session_streaming_sdp_write.argtypes = [POINTER_T(struct_vmeta_session), ctypes.c_int32, vmeta_session_streaming_sdp_write_cb_t, POINTER_T(None)]
vmeta_session_streaming_sdp_read = _libraries['libvideo-metadata.so'].vmeta_session_streaming_sdp_read
vmeta_session_streaming_sdp_read.restype = ctypes.c_int32
vmeta_session_streaming_sdp_read.argtypes = [vmeta_stream_sdp_type, POINTER_T(ctypes.c_char), POINTER_T(ctypes.c_char), POINTER_T(struct_vmeta_session)]
vmeta_session_recording_write_cb_t = ctypes.CFUNCTYPE(None, vmeta_record_type, POINTER_T(ctypes.c_char), POINTER_T(ctypes.c_char), POINTER_T(None))
vmeta_session_recording_write = _libraries['libvideo-metadata.so'].vmeta_session_recording_write
vmeta_session_recording_write.restype = ctypes.c_int32
vmeta_session_recording_write.argtypes = [POINTER_T(struct_vmeta_session), vmeta_session_recording_write_cb_t, POINTER_T(None)]
vmeta_session_recording_read = _libraries['libvideo-metadata.so'].vmeta_session_recording_read
vmeta_session_recording_read.restype = ctypes.c_int32
vmeta_session_recording_read.argtypes = [POINTER_T(ctypes.c_char), POINTER_T(ctypes.c_char), POINTER_T(struct_vmeta_session)]
vmeta_session_to_json = _libraries['libvideo-metadata.so'].vmeta_session_to_json
vmeta_session_to_json.restype = ctypes.c_int32
vmeta_session_to_json.argtypes = [POINTER_T(struct_vmeta_session), POINTER_T(struct_json_object)]
vmeta_session_to_str = _libraries['libvideo-metadata.so'].vmeta_session_to_str
vmeta_session_to_str.restype = ctypes.c_int32
vmeta_session_to_str.argtypes = [POINTER_T(struct_vmeta_session), POINTER_T(ctypes.c_char), size_t]
class struct_pdraw(Structure):
    pass

class struct_pdraw_cbs(Structure):
    pass

class struct_pdraw_demuxer_media(Structure):
    pass

class struct_pdraw_media_info(Structure):
    pass

struct_pdraw_cbs._pack_ = True # source:False
struct_pdraw_cbs._fields_ = [
    ('open_resp', ctypes.CFUNCTYPE(None, POINTER_T(struct_pdraw), ctypes.c_int32, POINTER_T(None))),
    ('close_resp', ctypes.CFUNCTYPE(None, POINTER_T(struct_pdraw), ctypes.c_int32, POINTER_T(None))),
    ('unrecoverable_error', ctypes.CFUNCTYPE(None, POINTER_T(struct_pdraw), POINTER_T(None))),
    ('select_demuxer_media', ctypes.CFUNCTYPE(ctypes.c_int32, POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_demuxer_media), ctypes.c_uint64, POINTER_T(None))),
    ('media_added', ctypes.CFUNCTYPE(None, POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_media_info), POINTER_T(None))),
    ('media_removed', ctypes.CFUNCTYPE(None, POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_media_info), POINTER_T(None))),
    ('ready_to_play', ctypes.CFUNCTYPE(None, POINTER_T(struct_pdraw), ctypes.c_int32, POINTER_T(None))),
    ('end_of_range', ctypes.CFUNCTYPE(None, POINTER_T(struct_pdraw), ctypes.c_uint64, POINTER_T(None))),
    ('play_resp', ctypes.CFUNCTYPE(None, POINTER_T(struct_pdraw), ctypes.c_int32, ctypes.c_uint64, ctypes.c_float, POINTER_T(None))),
    ('pause_resp', ctypes.CFUNCTYPE(None, POINTER_T(struct_pdraw), ctypes.c_int32, ctypes.c_uint64, POINTER_T(None))),
    ('seek_resp', ctypes.CFUNCTYPE(None, POINTER_T(struct_pdraw), ctypes.c_int32, ctypes.c_uint64, ctypes.c_float, POINTER_T(None))),
    ('socket_created', ctypes.CFUNCTYPE(None, POINTER_T(struct_pdraw), ctypes.c_int32, POINTER_T(None))),
]

class struct_pdraw_video_renderer_cbs(Structure):
    pass

class struct_pdraw_video_renderer(Structure):
    pass

class struct_pdraw_rect(Structure):
    pass

class struct_pdraw_session_info(Structure):
    pass

class struct_pdraw_video_frame_extra(Structure):
    pass

class struct_pdraw_video_frame(Structure):
    pass

struct_pdraw_video_renderer_cbs._pack_ = True # source:False
struct_pdraw_video_renderer_cbs._fields_ = [
    ('render_ready', ctypes.CFUNCTYPE(None, POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_video_renderer), POINTER_T(None))),
    ('load_texture', ctypes.CFUNCTYPE(ctypes.c_int32, POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_video_renderer), ctypes.c_uint32, ctypes.c_uint32, POINTER_T(struct_pdraw_session_info), POINTER_T(struct_vmeta_session), POINTER_T(struct_pdraw_video_frame), POINTER_T(None), ctypes.c_uint64, POINTER_T(None))),
    ('render_overlay', ctypes.CFUNCTYPE(None, POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_video_renderer), POINTER_T(struct_pdraw_rect), POINTER_T(struct_pdraw_rect), POINTER_T(ctypes.c_float), POINTER_T(ctypes.c_float), POINTER_T(struct_pdraw_session_info), POINTER_T(struct_vmeta_session), POINTER_T(struct_vmeta_frame), POINTER_T(struct_pdraw_video_frame_extra), POINTER_T(None))),
]

class struct_pdraw_video_sink_cbs(Structure):
    pass

class struct_pdraw_video_sink(Structure):
    pass

struct_pdraw_video_sink_cbs._pack_ = True # source:False
struct_pdraw_video_sink_cbs._fields_ = [
    ('flush', ctypes.CFUNCTYPE(None, POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_video_sink), POINTER_T(None))),
]

pdraw_new = _libraries['libpdraw.so'].pdraw_new
pdraw_new.restype = ctypes.c_int32
pdraw_new.argtypes = [POINTER_T(struct_pomp_loop), POINTER_T(struct_pdraw_cbs), POINTER_T(None), POINTER_T(POINTER_T(struct_pdraw))]
pdraw_destroy = _libraries['libpdraw.so'].pdraw_destroy
pdraw_destroy.restype = ctypes.c_int32
pdraw_destroy.argtypes = [POINTER_T(struct_pdraw)]
pdraw_open_url = _libraries['libpdraw.so'].pdraw_open_url
pdraw_open_url.restype = ctypes.c_int32
pdraw_open_url.argtypes = [POINTER_T(struct_pdraw), POINTER_T(ctypes.c_char)]
pdraw_open_single_stream = _libraries['libpdraw.so'].pdraw_open_single_stream
pdraw_open_single_stream.restype = ctypes.c_int32
pdraw_open_single_stream.argtypes = [POINTER_T(struct_pdraw), POINTER_T(ctypes.c_char), uint16_t, uint16_t, POINTER_T(ctypes.c_char), uint16_t, uint16_t]
pdraw_open_url_mux = _libraries['libpdraw.so'].pdraw_open_url_mux
pdraw_open_url_mux.restype = ctypes.c_int32
pdraw_open_url_mux.argtypes = [POINTER_T(struct_pdraw), POINTER_T(ctypes.c_char), POINTER_T(struct_mux_ctx)]
pdraw_close = _libraries['libpdraw.so'].pdraw_close
pdraw_close.restype = ctypes.c_int32
pdraw_close.argtypes = [POINTER_T(struct_pdraw)]
pdraw_get_single_stream_local_stream_port = _libraries['libpdraw.so'].pdraw_get_single_stream_local_stream_port
pdraw_get_single_stream_local_stream_port.restype = uint16_t
pdraw_get_single_stream_local_stream_port.argtypes = [POINTER_T(struct_pdraw)]
pdraw_get_single_stream_local_control_port = _libraries['libpdraw.so'].pdraw_get_single_stream_local_control_port
pdraw_get_single_stream_local_control_port.restype = uint16_t
pdraw_get_single_stream_local_control_port.argtypes = [POINTER_T(struct_pdraw)]
pdraw_is_ready_to_play = _libraries['libpdraw.so'].pdraw_is_ready_to_play
pdraw_is_ready_to_play.restype = ctypes.c_int32
pdraw_is_ready_to_play.argtypes = [POINTER_T(struct_pdraw)]
pdraw_is_paused = _libraries['libpdraw.so'].pdraw_is_paused
pdraw_is_paused.restype = ctypes.c_int32
pdraw_is_paused.argtypes = [POINTER_T(struct_pdraw)]
pdraw_play = _libraries['libpdraw.so'].pdraw_play
pdraw_play.restype = ctypes.c_int32
pdraw_play.argtypes = [POINTER_T(struct_pdraw)]
pdraw_play_with_speed = _libraries['libpdraw.so'].pdraw_play_with_speed
pdraw_play_with_speed.restype = ctypes.c_int32
pdraw_play_with_speed.argtypes = [POINTER_T(struct_pdraw), ctypes.c_float]
pdraw_pause = _libraries['libpdraw.so'].pdraw_pause
pdraw_pause.restype = ctypes.c_int32
pdraw_pause.argtypes = [POINTER_T(struct_pdraw)]
pdraw_previous_frame = _libraries['libpdraw.so'].pdraw_previous_frame
pdraw_previous_frame.restype = ctypes.c_int32
pdraw_previous_frame.argtypes = [POINTER_T(struct_pdraw)]
pdraw_next_frame = _libraries['libpdraw.so'].pdraw_next_frame
pdraw_next_frame.restype = ctypes.c_int32
pdraw_next_frame.argtypes = [POINTER_T(struct_pdraw)]
pdraw_seek = _libraries['libpdraw.so'].pdraw_seek
pdraw_seek.restype = ctypes.c_int32
pdraw_seek.argtypes = [POINTER_T(struct_pdraw), int64_t, ctypes.c_int32]
pdraw_seek_forward = _libraries['libpdraw.so'].pdraw_seek_forward
pdraw_seek_forward.restype = ctypes.c_int32
pdraw_seek_forward.argtypes = [POINTER_T(struct_pdraw), uint64_t, ctypes.c_int32]
pdraw_seek_back = _libraries['libpdraw.so'].pdraw_seek_back
pdraw_seek_back.restype = ctypes.c_int32
pdraw_seek_back.argtypes = [POINTER_T(struct_pdraw), uint64_t, ctypes.c_int32]
pdraw_seek_to = _libraries['libpdraw.so'].pdraw_seek_to
pdraw_seek_to.restype = ctypes.c_int32
pdraw_seek_to.argtypes = [POINTER_T(struct_pdraw), uint64_t, ctypes.c_int32]
pdraw_get_duration = _libraries['libpdraw.so'].pdraw_get_duration
pdraw_get_duration.restype = uint64_t
pdraw_get_duration.argtypes = [POINTER_T(struct_pdraw)]
pdraw_get_current_time = _libraries['libpdraw.so'].pdraw_get_current_time
pdraw_get_current_time.restype = uint64_t
pdraw_get_current_time.argtypes = [POINTER_T(struct_pdraw)]
class struct_pdraw_video_renderer_params(Structure):
    pass

pdraw_start_video_renderer = _libraries['libpdraw.so'].pdraw_start_video_renderer
pdraw_start_video_renderer.restype = ctypes.c_int32
pdraw_start_video_renderer.argtypes = [POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_rect), POINTER_T(struct_pdraw_video_renderer_params), POINTER_T(struct_pdraw_video_renderer_cbs), POINTER_T(None), POINTER_T(POINTER_T(struct_pdraw_video_renderer))]
class struct_egl_display(Structure):
    pass

pdraw_start_video_renderer_egl = _libraries['libpdraw.so'].pdraw_start_video_renderer_egl
pdraw_start_video_renderer_egl.restype = ctypes.c_int32
pdraw_start_video_renderer_egl.argtypes = [POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_rect), POINTER_T(struct_pdraw_video_renderer_params), POINTER_T(struct_pdraw_video_renderer_cbs), POINTER_T(None), POINTER_T(struct_egl_display), POINTER_T(POINTER_T(struct_pdraw_video_renderer))]
pdraw_stop_video_renderer = _libraries['libpdraw.so'].pdraw_stop_video_renderer
pdraw_stop_video_renderer.restype = ctypes.c_int32
pdraw_stop_video_renderer.argtypes = [POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_video_renderer)]
pdraw_resize_video_renderer = _libraries['libpdraw.so'].pdraw_resize_video_renderer
pdraw_resize_video_renderer.restype = ctypes.c_int32
pdraw_resize_video_renderer.argtypes = [POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_video_renderer), POINTER_T(struct_pdraw_rect)]
pdraw_set_video_renderer_params = _libraries['libpdraw.so'].pdraw_set_video_renderer_params
pdraw_set_video_renderer_params.restype = ctypes.c_int32
pdraw_set_video_renderer_params.argtypes = [POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_video_renderer), POINTER_T(struct_pdraw_video_renderer_params)]
pdraw_get_video_renderer_params = _libraries['libpdraw.so'].pdraw_get_video_renderer_params
pdraw_get_video_renderer_params.restype = ctypes.c_int32
pdraw_get_video_renderer_params.argtypes = [POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_video_renderer), POINTER_T(struct_pdraw_video_renderer_params)]
pdraw_render_video = _libraries['libpdraw.so'].pdraw_render_video
pdraw_render_video.restype = ctypes.c_int32
pdraw_render_video.argtypes = [POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_video_renderer), POINTER_T(struct_pdraw_rect)]
pdraw_render_video_mat = _libraries['libpdraw.so'].pdraw_render_video_mat
pdraw_render_video_mat.restype = ctypes.c_int32
pdraw_render_video_mat.argtypes = [POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_video_renderer), POINTER_T(struct_pdraw_rect), POINTER_T(ctypes.c_float), POINTER_T(ctypes.c_float)]
class struct_pdraw_video_sink_params(Structure):
    pass

pdraw_start_video_sink = _libraries['libpdraw.so'].pdraw_start_video_sink
pdraw_start_video_sink.restype = ctypes.c_int32
pdraw_start_video_sink.argtypes = [POINTER_T(struct_pdraw), ctypes.c_uint32, POINTER_T(struct_pdraw_video_sink_params), POINTER_T(struct_pdraw_video_sink_cbs), POINTER_T(None), POINTER_T(POINTER_T(struct_pdraw_video_sink))]
pdraw_stop_video_sink = _libraries['libpdraw.so'].pdraw_stop_video_sink
pdraw_stop_video_sink.restype = ctypes.c_int32
pdraw_stop_video_sink.argtypes = [POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_video_sink)]
pdraw_resync_video_sink = _libraries['libpdraw.so'].pdraw_resync_video_sink
pdraw_resync_video_sink.restype = ctypes.c_int32
pdraw_resync_video_sink.argtypes = [POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_video_sink)]
pdraw_get_video_sink_queue = _libraries['libpdraw.so'].pdraw_get_video_sink_queue
pdraw_get_video_sink_queue.restype = POINTER_T(struct_vbuf_queue)
pdraw_get_video_sink_queue.argtypes = [POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_video_sink)]
pdraw_video_sink_queue_flushed = _libraries['libpdraw.so'].pdraw_video_sink_queue_flushed
pdraw_video_sink_queue_flushed.restype = ctypes.c_int32
pdraw_video_sink_queue_flushed.argtypes = [POINTER_T(struct_pdraw), POINTER_T(struct_pdraw_video_sink)]
pdraw_get_session_type = _libraries['libpdraw.so'].pdraw_get_session_type
pdraw_get_session_type.restype = ctypes.c_int
pdraw_get_session_type.argtypes = [POINTER_T(struct_pdraw)]
pdraw_get_self_friendly_name = _libraries['libpdraw.so'].pdraw_get_self_friendly_name
pdraw_get_self_friendly_name.restype = ctypes.c_int32
pdraw_get_self_friendly_name.argtypes = [POINTER_T(struct_pdraw), POINTER_T(ctypes.c_char), size_t]
pdraw_set_self_friendly_name = _libraries['libpdraw.so'].pdraw_set_self_friendly_name
pdraw_set_self_friendly_name.restype = ctypes.c_int32
pdraw_set_self_friendly_name.argtypes = [POINTER_T(struct_pdraw), POINTER_T(ctypes.c_char)]
pdraw_get_self_serial_number = _libraries['libpdraw.so'].pdraw_get_self_serial_number
pdraw_get_self_serial_number.restype = ctypes.c_int32
pdraw_get_self_serial_number.argtypes = [POINTER_T(struct_pdraw), POINTER_T(ctypes.c_char), size_t]
pdraw_set_self_serial_number = _libraries['libpdraw.so'].pdraw_set_self_serial_number
pdraw_set_self_serial_number.restype = ctypes.c_int32
pdraw_set_self_serial_number.argtypes = [POINTER_T(struct_pdraw), POINTER_T(ctypes.c_char)]
pdraw_get_self_software_version = _libraries['libpdraw.so'].pdraw_get_self_software_version
pdraw_get_self_software_version.restype = ctypes.c_int32
pdraw_get_self_software_version.argtypes = [POINTER_T(struct_pdraw), POINTER_T(ctypes.c_char), size_t]
pdraw_set_self_software_version = _libraries['libpdraw.so'].pdraw_set_self_software_version
pdraw_set_self_software_version.restype = ctypes.c_int32
pdraw_set_self_software_version.argtypes = [POINTER_T(struct_pdraw), POINTER_T(ctypes.c_char)]
pdraw_is_self_pilot = _libraries['libpdraw.so'].pdraw_is_self_pilot
pdraw_is_self_pilot.restype = ctypes.c_int32
pdraw_is_self_pilot.argtypes = [POINTER_T(struct_pdraw)]
pdraw_set_self_pilot = _libraries['libpdraw.so'].pdraw_set_self_pilot
pdraw_set_self_pilot.restype = ctypes.c_int32
pdraw_set_self_pilot.argtypes = [POINTER_T(struct_pdraw), ctypes.c_int32]
pdraw_get_peer_session_metadata = _libraries['libpdraw.so'].pdraw_get_peer_session_metadata
pdraw_get_peer_session_metadata.restype = ctypes.c_int32
pdraw_get_peer_session_metadata.argtypes = [POINTER_T(struct_pdraw), POINTER_T(struct_vmeta_session)]
pdraw_get_peer_drone_model = _libraries['libpdraw.so'].pdraw_get_peer_drone_model
pdraw_get_peer_drone_model.restype = ctypes.c_int
pdraw_get_peer_drone_model.argtypes = [POINTER_T(struct_pdraw)]
pdraw_get_pipeline_mode_setting = _libraries['libpdraw.so'].pdraw_get_pipeline_mode_setting
pdraw_get_pipeline_mode_setting.restype = ctypes.c_int
pdraw_get_pipeline_mode_setting.argtypes = [POINTER_T(struct_pdraw)]

# values for enumeration 'pdraw_pipeline_mode'
pdraw_pipeline_mode__enumvalues = {
    0: 'PDRAW_PIPELINE_MODE_DECODE_ALL',
    1: 'PDRAW_PIPELINE_MODE_DECODE_NONE',
}
PDRAW_PIPELINE_MODE_DECODE_ALL = 0
PDRAW_PIPELINE_MODE_DECODE_NONE = 1
pdraw_pipeline_mode = ctypes.c_int # enum
pdraw_set_pipeline_mode_setting = _libraries['libpdraw.so'].pdraw_set_pipeline_mode_setting
pdraw_set_pipeline_mode_setting.restype = ctypes.c_int32
pdraw_set_pipeline_mode_setting.argtypes = [POINTER_T(struct_pdraw), pdraw_pipeline_mode]
pdraw_get_display_screen_settings = _libraries['libpdraw.so'].pdraw_get_display_screen_settings
pdraw_get_display_screen_settings.restype = ctypes.c_int32
pdraw_get_display_screen_settings.argtypes = [POINTER_T(struct_pdraw), POINTER_T(ctypes.c_float), POINTER_T(ctypes.c_float), POINTER_T(ctypes.c_float), POINTER_T(ctypes.c_float), POINTER_T(ctypes.c_float), POINTER_T(ctypes.c_float)]
pdraw_set_display_screen_settings = _libraries['libpdraw.so'].pdraw_set_display_screen_settings
pdraw_set_display_screen_settings.restype = ctypes.c_int32
pdraw_set_display_screen_settings.argtypes = [POINTER_T(struct_pdraw), ctypes.c_float, ctypes.c_float, ctypes.c_float, ctypes.c_float, ctypes.c_float, ctypes.c_float]
pdraw_get_hmd_model_setting = _libraries['libpdraw.so'].pdraw_get_hmd_model_setting
pdraw_get_hmd_model_setting.restype = ctypes.c_int
pdraw_get_hmd_model_setting.argtypes = [POINTER_T(struct_pdraw)]

# values for enumeration 'pdraw_hmd_model'
pdraw_hmd_model__enumvalues = {
    0: 'PDRAW_HMD_MODEL_UNKNOWN',
    0: 'PDRAW_HMD_MODEL_COCKPITGLASSES',
    1: 'PDRAW_HMD_MODEL_COCKPITGLASSES_2',
}
PDRAW_HMD_MODEL_UNKNOWN = 0
PDRAW_HMD_MODEL_COCKPITGLASSES = 0
PDRAW_HMD_MODEL_COCKPITGLASSES_2 = 1
pdraw_hmd_model = ctypes.c_int # enum
pdraw_set_hmd_model_setting = _libraries['libpdraw.so'].pdraw_set_hmd_model_setting
pdraw_set_hmd_model_setting.restype = ctypes.c_int32
pdraw_set_hmd_model_setting.argtypes = [POINTER_T(struct_pdraw), pdraw_hmd_model]
pdraw_set_android_jvm = _libraries['libpdraw.so'].pdraw_set_android_jvm
pdraw_set_android_jvm.restype = ctypes.c_int32
pdraw_set_android_jvm.argtypes = [POINTER_T(struct_pdraw), POINTER_T(None)]

# values for enumeration 'pdraw_drone_model'
pdraw_drone_model__enumvalues = {
    0: 'PDRAW_DRONE_MODEL_UNKNOWN',
    1: 'PDRAW_DRONE_MODEL_BEBOP',
    2: 'PDRAW_DRONE_MODEL_BEBOP2',
    3: 'PDRAW_DRONE_MODEL_DISCO',
    4: 'PDRAW_DRONE_MODEL_BLUEGRASS',
    5: 'PDRAW_DRONE_MODEL_ANAFI',
    6: 'PDRAW_DRONE_MODEL_ANAFI_THERMAL',
}
PDRAW_DRONE_MODEL_UNKNOWN = 0
PDRAW_DRONE_MODEL_BEBOP = 1
PDRAW_DRONE_MODEL_BEBOP2 = 2
PDRAW_DRONE_MODEL_DISCO = 3
PDRAW_DRONE_MODEL_BLUEGRASS = 4
PDRAW_DRONE_MODEL_ANAFI = 5
PDRAW_DRONE_MODEL_ANAFI_THERMAL = 6
pdraw_drone_model = ctypes.c_int # enum
pdraw_drone_model_str = _libraries['libpdraw.so'].pdraw_drone_model_str
pdraw_drone_model_str.restype = POINTER_T(ctypes.c_char)
pdraw_drone_model_str.argtypes = [pdraw_drone_model]
pdraw_hmd_model_str = _libraries['libpdraw.so'].pdraw_hmd_model_str
pdraw_hmd_model_str.restype = POINTER_T(ctypes.c_char)
pdraw_hmd_model_str.argtypes = [pdraw_hmd_model]
pdraw_pipeline_mode_str = _libraries['libpdraw.so'].pdraw_pipeline_mode_str
pdraw_pipeline_mode_str.restype = POINTER_T(ctypes.c_char)
pdraw_pipeline_mode_str.argtypes = [pdraw_pipeline_mode]

# values for enumeration 'pdraw_session_type'
pdraw_session_type__enumvalues = {
    0: 'PDRAW_SESSION_TYPE_UNKNOWN',
    1: 'PDRAW_SESSION_TYPE_LIVE',
    2: 'PDRAW_SESSION_TYPE_REPLAY',
}
PDRAW_SESSION_TYPE_UNKNOWN = 0
PDRAW_SESSION_TYPE_LIVE = 1
PDRAW_SESSION_TYPE_REPLAY = 2
pdraw_session_type = ctypes.c_int # enum
pdraw_session_type_str = _libraries['libpdraw.so'].pdraw_session_type_str
pdraw_session_type_str.restype = POINTER_T(ctypes.c_char)
pdraw_session_type_str.argtypes = [pdraw_session_type]

# values for enumeration 'pdraw_media_type'
pdraw_media_type__enumvalues = {
    0: 'PDRAW_MEDIA_TYPE_UNKNOWN',
    1: 'PDRAW_MEDIA_TYPE_VIDEO',
}
PDRAW_MEDIA_TYPE_UNKNOWN = 0
PDRAW_MEDIA_TYPE_VIDEO = 1
pdraw_media_type = ctypes.c_int # enum
pdraw_media_type_str = _libraries['libpdraw.so'].pdraw_media_type_str
pdraw_media_type_str.restype = POINTER_T(ctypes.c_char)
pdraw_media_type_str.argtypes = [pdraw_media_type]

# values for enumeration 'pdraw_video_media_format'
pdraw_video_media_format__enumvalues = {
    0: 'PDRAW_VIDEO_MEDIA_FORMAT_UNKNOWN',
    1: 'PDRAW_VIDEO_MEDIA_FORMAT_YUV',
    2: 'PDRAW_VIDEO_MEDIA_FORMAT_H264',
    4: 'PDRAW_VIDEO_MEDIA_FORMAT_OPAQUE',
}
PDRAW_VIDEO_MEDIA_FORMAT_UNKNOWN = 0
PDRAW_VIDEO_MEDIA_FORMAT_YUV = 1
PDRAW_VIDEO_MEDIA_FORMAT_H264 = 2
PDRAW_VIDEO_MEDIA_FORMAT_OPAQUE = 4
pdraw_video_media_format = ctypes.c_int # enum
pdraw_video_media_format_str = _libraries['libpdraw.so'].pdraw_video_media_format_str
pdraw_video_media_format_str.restype = POINTER_T(ctypes.c_char)
pdraw_video_media_format_str.argtypes = [pdraw_video_media_format]

# values for enumeration 'pdraw_yuv_format'
pdraw_yuv_format__enumvalues = {
    0: 'PDRAW_YUV_FORMAT_UNKNOWN',
    1: 'PDRAW_YUV_FORMAT_I420',
    2: 'PDRAW_YUV_FORMAT_NV12',
}
PDRAW_YUV_FORMAT_UNKNOWN = 0
PDRAW_YUV_FORMAT_I420 = 1
PDRAW_YUV_FORMAT_NV12 = 2
pdraw_yuv_format = ctypes.c_int # enum
pdraw_yuv_format_str = _libraries['libpdraw.so'].pdraw_yuv_format_str
pdraw_yuv_format_str.restype = POINTER_T(ctypes.c_char)
pdraw_yuv_format_str.argtypes = [pdraw_yuv_format]

# values for enumeration 'pdraw_h264_format'
pdraw_h264_format__enumvalues = {
    0: 'PDRAW_H264_FORMAT_UNKNOWN',
    1: 'PDRAW_H264_FORMAT_BYTE_STREAM',
    2: 'PDRAW_H264_FORMAT_AVCC',
}
PDRAW_H264_FORMAT_UNKNOWN = 0
PDRAW_H264_FORMAT_BYTE_STREAM = 1
PDRAW_H264_FORMAT_AVCC = 2
pdraw_h264_format = ctypes.c_int # enum
pdraw_h264_format_str = _libraries['libpdraw.so'].pdraw_h264_format_str
pdraw_h264_format_str.restype = POINTER_T(ctypes.c_char)
pdraw_h264_format_str.argtypes = [pdraw_h264_format]

# values for enumeration 'pdraw_video_type'
pdraw_video_type__enumvalues = {
    0: 'PDRAW_VIDEO_TYPE_DEFAULT_CAMERA',
    0: 'PDRAW_VIDEO_TYPE_FRONT_CAMERA',
}
PDRAW_VIDEO_TYPE_DEFAULT_CAMERA = 0
PDRAW_VIDEO_TYPE_FRONT_CAMERA = 0
pdraw_video_type = ctypes.c_int # enum
pdraw_video_type_str = _libraries['libpdraw.so'].pdraw_video_type_str
pdraw_video_type_str.restype = POINTER_T(ctypes.c_char)
pdraw_video_type_str.argtypes = [pdraw_video_type]

# values for enumeration 'pdraw_histogram_channel'
pdraw_histogram_channel__enumvalues = {
    0: 'PDRAW_HISTOGRAM_CHANNEL_RED',
    1: 'PDRAW_HISTOGRAM_CHANNEL_GREEN',
    2: 'PDRAW_HISTOGRAM_CHANNEL_BLUE',
    3: 'PDRAW_HISTOGRAM_CHANNEL_LUMA',
    4: 'PDRAW_HISTOGRAM_CHANNEL_MAX',
}
PDRAW_HISTOGRAM_CHANNEL_RED = 0
PDRAW_HISTOGRAM_CHANNEL_GREEN = 1
PDRAW_HISTOGRAM_CHANNEL_BLUE = 2
PDRAW_HISTOGRAM_CHANNEL_LUMA = 3
PDRAW_HISTOGRAM_CHANNEL_MAX = 4
pdraw_histogram_channel = ctypes.c_int # enum
pdraw_histogram_channel_str = _libraries['libpdraw.so'].pdraw_histogram_channel_str
pdraw_histogram_channel_str.restype = POINTER_T(ctypes.c_char)
pdraw_histogram_channel_str.argtypes = [pdraw_histogram_channel]

# values for enumeration 'pdraw_video_renderer_fill_mode'
pdraw_video_renderer_fill_mode__enumvalues = {
    0: 'PDRAW_VIDEO_RENDERER_FILL_MODE_FIT',
    1: 'PDRAW_VIDEO_RENDERER_FILL_MODE_CROP',
    2: 'PDRAW_VIDEO_RENDERER_FILL_MODE_FIT_PAD_BLUR_CROP',
    3: 'PDRAW_VIDEO_RENDERER_FILL_MODE_FIT_PAD_BLUR_EXTEND',
}
PDRAW_VIDEO_RENDERER_FILL_MODE_FIT = 0
PDRAW_VIDEO_RENDERER_FILL_MODE_CROP = 1
PDRAW_VIDEO_RENDERER_FILL_MODE_FIT_PAD_BLUR_CROP = 2
PDRAW_VIDEO_RENDERER_FILL_MODE_FIT_PAD_BLUR_EXTEND = 3
pdraw_video_renderer_fill_mode = ctypes.c_int # enum
pdraw_video_renderer_fill_mode_str = _libraries['libpdraw.so'].pdraw_video_renderer_fill_mode_str
pdraw_video_renderer_fill_mode_str.restype = POINTER_T(ctypes.c_char)
pdraw_video_renderer_fill_mode_str.argtypes = [pdraw_video_renderer_fill_mode]

# values for enumeration 'pdraw_video_renderer_transition_flag'
pdraw_video_renderer_transition_flag__enumvalues = {
    1: 'PDRAW_VIDEO_RENDERER_TRANSITION_FLAG_SOS',
    2: 'PDRAW_VIDEO_RENDERER_TRANSITION_FLAG_EOS',
    4: 'PDRAW_VIDEO_RENDERER_TRANSITION_FLAG_RECONFIGURE',
    8: 'PDRAW_VIDEO_RENDERER_TRANSITION_FLAG_TIMEOUT',
    16: 'PDRAW_VIDEO_RENDERER_TRANSITION_FLAG_PHOTO_TRIGGER',
}
PDRAW_VIDEO_RENDERER_TRANSITION_FLAG_SOS = 1
PDRAW_VIDEO_RENDERER_TRANSITION_FLAG_EOS = 2
PDRAW_VIDEO_RENDERER_TRANSITION_FLAG_RECONFIGURE = 4
PDRAW_VIDEO_RENDERER_TRANSITION_FLAG_TIMEOUT = 8
PDRAW_VIDEO_RENDERER_TRANSITION_FLAG_PHOTO_TRIGGER = 16
pdraw_video_renderer_transition_flag = ctypes.c_int # enum
pdraw_video_renderer_transition_flag_str = _libraries['libpdraw.so'].pdraw_video_renderer_transition_flag_str
pdraw_video_renderer_transition_flag_str.restype = POINTER_T(ctypes.c_char)
pdraw_video_renderer_transition_flag_str.argtypes = [pdraw_video_renderer_transition_flag]
pdraw_video_frame_to_json = _libraries['libpdraw.so'].pdraw_video_frame_to_json
pdraw_video_frame_to_json.restype = ctypes.c_int32
pdraw_video_frame_to_json.argtypes = [POINTER_T(struct_pdraw_video_frame), POINTER_T(struct_json_object)]
pdraw_video_frame_to_json_str = _libraries['libpdraw.so'].pdraw_video_frame_to_json_str
pdraw_video_frame_to_json_str.restype = ctypes.c_int32
pdraw_video_frame_to_json_str.argtypes = [POINTER_T(struct_pdraw_video_frame), POINTER_T(ctypes.c_char), ctypes.c_uint32]
pdraw_pack_yuv_frame = _libraries['libpdraw.so'].pdraw_pack_yuv_frame
pdraw_pack_yuv_frame.restype = ctypes.c_int32
pdraw_pack_yuv_frame.argtypes = [POINTER_T(struct_pdraw_video_frame), POINTER_T(struct_pdraw_video_frame), POINTER_T(struct_vbuf_buffer)]
struct_pdraw_session_info._pack_ = True # source:False
struct_pdraw_session_info._fields_ = [
    ('friendly_name', ctypes.c_char * 40),
    ('serial_number', ctypes.c_char * 32),
    ('software_version', ctypes.c_char * 20),
    ('drone_model', pdraw_drone_model),
    ('session_type', pdraw_session_type),
    ('is_pilot', ctypes.c_int32),
    ('duration', ctypes.c_uint64),
]

class struct_pdraw_video_yuv_info(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('width', ctypes.c_uint32),
    ('height', ctypes.c_uint32),
    ('crop_left', ctypes.c_uint32),
    ('crop_top', ctypes.c_uint32),
    ('crop_width', ctypes.c_uint32),
    ('crop_height', ctypes.c_uint32),
    ('sar_width', ctypes.c_uint32),
    ('sar_height', ctypes.c_uint32),
    ('full_range', ctypes.c_int32),
    ('horizontal_fov', ctypes.c_float),
    ('vertical_fov', ctypes.c_float),
     ]

class struct_pdraw_video_h264_info(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('width', ctypes.c_uint32),
    ('height', ctypes.c_uint32),
    ('sps', ctypes.c_ubyte * 64),
    ('spslen', ctypes.c_uint64),
    ('pps', ctypes.c_ubyte * 64),
    ('ppslen', ctypes.c_uint64),
     ]

class struct_pdraw_video_info(Structure):
    pass

class union_pdraw_video_info_0(Union):
    _pack_ = True # source:False
    _fields_ = [
    ('yuv', struct_pdraw_video_yuv_info),
    ('h264', struct_pdraw_video_h264_info),
     ]

struct_pdraw_video_info._pack_ = True # source:False
struct_pdraw_video_info._fields_ = [
    ('format', pdraw_video_media_format),
    ('type', pdraw_video_type),
    ('pdraw_video_info_0', union_pdraw_video_info_0),
]

class union_pdraw_media_info_0(Union):
    _pack_ = True # source:False
    _fields_ = [
    ('video', struct_pdraw_video_info),
     ]

struct_pdraw_media_info._pack_ = True # source:False
struct_pdraw_media_info._fields_ = [
    ('type', pdraw_media_type),
    ('id', ctypes.c_uint32),
    ('pdraw_media_info_0', union_pdraw_media_info_0),
]

class struct_pdraw_video_yuv_frame(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('format', pdraw_yuv_format),
    ('PADDING_0', ctypes.c_ubyte * 4),
    ('plane', POINTER_T(ctypes.c_ubyte) * 3),
    ('stride', ctypes.c_uint32 * 3),
    ('width', ctypes.c_uint32),
    ('height', ctypes.c_uint32),
    ('crop_left', ctypes.c_uint32),
    ('crop_top', ctypes.c_uint32),
    ('crop_width', ctypes.c_uint32),
    ('crop_height', ctypes.c_uint32),
    ('sar_width', ctypes.c_uint32),
    ('sar_height', ctypes.c_uint32),
    ('full_range', ctypes.c_int32),
     ]

class struct_pdraw_video_h264_frame(Structure):
    _pack_ = True # source:False
    _fields_ = [
    ('format', pdraw_h264_format),
    ('is_complete', ctypes.c_int32),
    ('is_sync', ctypes.c_int32),
    ('is_ref', ctypes.c_int32),
     ]

class union_pdraw_video_frame_0(Union):
    _pack_ = True # source:False
    _fields_ = [
    ('yuv', struct_pdraw_video_yuv_frame),
    ('h264', struct_pdraw_video_h264_frame),
    ('PADDING_0', ctypes.c_ubyte * 64),
     ]

struct_pdraw_video_frame._pack_ = True # source:False
struct_pdraw_video_frame._fields_ = [
    ('format', pdraw_video_media_format),
    ('PADDING_0', ctypes.c_ubyte * 4),
    ('pdraw_video_frame_0', union_pdraw_video_frame_0),
    ('has_errors', ctypes.c_int32),
    ('is_silent', ctypes.c_int32),
    ('ntp_timestamp', ctypes.c_uint64),
    ('ntp_unskewed_timestamp', ctypes.c_uint64),
    ('ntp_raw_timestamp', ctypes.c_uint64),
    ('ntp_raw_unskewed_timestamp', ctypes.c_uint64),
    ('play_timestamp', ctypes.c_uint64),
    ('capture_timestamp', ctypes.c_uint64),
    ('local_timestamp', ctypes.c_uint64),
    ('has_metadata', ctypes.c_int32),
    ('PADDING_1', ctypes.c_ubyte * 4),
    ('metadata', struct_vmeta_frame),
]

struct_pdraw_video_frame_extra._pack_ = True # source:False
struct_pdraw_video_frame_extra._fields_ = [
    ('play_timestamp', ctypes.c_uint64),
    ('histogram', POINTER_T(ctypes.c_float) * 4),
    ('histogram_len', ctypes.c_uint64 * 4),
]

struct_pdraw_rect._pack_ = True # source:False
struct_pdraw_rect._fields_ = [
    ('x', ctypes.c_int32),
    ('y', ctypes.c_int32),
    ('width', ctypes.c_uint32),
    ('height', ctypes.c_uint32),
]

struct_pdraw_video_renderer_params._pack_ = True # source:False
struct_pdraw_video_renderer_params._fields_ = [
    ('fill_mode', pdraw_video_renderer_fill_mode),
    ('enable_transition_flags', ctypes.c_uint32),
    ('enable_hmd_distortion_correction', ctypes.c_int32),
    ('hmd_ipd_offset', ctypes.c_float),
    ('hmd_x_offset', ctypes.c_float),
    ('hmd_y_offset', ctypes.c_float),
    ('video_scale_factor', ctypes.c_float),
    ('enable_overexposure_zebras', ctypes.c_int32),
    ('overexposure_zebras_threshold', ctypes.c_float),
    ('enable_histograms', ctypes.c_int32),
    ('video_texture_width', ctypes.c_uint32),
    ('video_texture_dar_width', ctypes.c_uint32),
    ('video_texture_dar_height', ctypes.c_uint32),
]

struct_pdraw_video_sink_params._pack_ = True # source:False
struct_pdraw_video_sink_params._fields_ = [
    ('queue_max_count', ctypes.c_uint32),
    ('queue_drop_when_full', ctypes.c_int32),
    ('required_format', pdraw_h264_format),
]

struct_pdraw_demuxer_media._pack_ = True # source:False
struct_pdraw_demuxer_media._fields_ = [
    ('name', POINTER_T(ctypes.c_char)),
    ('media_id', ctypes.c_int32),
    ('is_default', ctypes.c_int32),
    ('idx', ctypes.c_int32),
    ('stream_port', ctypes.c_uint32),
    ('control_port', ctypes.c_uint32),
    ('PADDING_0', ctypes.c_ubyte * 4),
    ('uri', POINTER_T(ctypes.c_char)),
]

struct_sockaddr._pack_ = True # source:False
struct_sockaddr._fields_ = [
    ('sa_family', ctypes.c_uint16),
    ('sa_data', ctypes.c_char * 14),
]

struct_arsdk_peer_info._pack_ = True # source:False
struct_arsdk_peer_info._fields_ = [
    ('backend_type', arsdk_backend_type),
    ('proto_v', ctypes.c_uint32),
    ('ctrl_name', POINTER_T(ctypes.c_char)),
    ('ctrl_type', POINTER_T(ctypes.c_char)),
    ('ctrl_addr', POINTER_T(ctypes.c_char)),
    ('device_id', POINTER_T(ctypes.c_char)),
    ('json', POINTER_T(ctypes.c_char)),
]

struct_arsdk_cmd._pack_ = True # source:False
struct_arsdk_cmd._fields_ = [
    ('prj_id', ctypes.c_ubyte),
    ('cls_id', ctypes.c_ubyte),
    ('cmd_id', ctypes.c_uint16),
    ('id', ctypes.c_uint32),
    ('buf', POINTER_T(struct_pomp_buffer)),
    ('userdata', POINTER_T(None)),
    ('buffer_type', arsdk_cmd_buffer_type),
    ('PADDING_0', ctypes.c_ubyte * 4),
]

struct_arsdk_cmd_desc._pack_ = True # source:False
struct_arsdk_cmd_desc._fields_ = [
    ('name', POINTER_T(ctypes.c_char)),
    ('prj_id', ctypes.c_ubyte),
    ('cls_id', ctypes.c_ubyte),
    ('cmd_id', ctypes.c_uint16),
    ('list_type', arsdk_cmd_list_type),
    ('buffer_type', arsdk_cmd_buffer_type),
    ('timeout_policy', arsdk_cmd_timeout_policy),
    ('arg_desc_table', POINTER_T(struct_arsdk_arg_desc)),
    ('arg_desc_count', ctypes.c_uint32),
    ('PADDING_0', ctypes.c_ubyte * 4),
]

struct_arsdk_device_info._pack_ = True # source:False
struct_arsdk_device_info._fields_ = [
    ('backend_type', arsdk_backend_type),
    ('proto_v', ctypes.c_uint32),
    ('api', arsdk_device_api),
    ('state', arsdk_device_state),
    ('name', POINTER_T(ctypes.c_char)),
    ('type', arsdk_device_type),
    ('PADDING_0', ctypes.c_ubyte * 4),
    ('addr', POINTER_T(ctypes.c_char)),
    ('port', ctypes.c_uint16),
    ('PADDING_1', ctypes.c_ubyte * 6),
    ('id', POINTER_T(ctypes.c_char)),
    ('json', POINTER_T(ctypes.c_char)),
]

__all__ = \
    ['ARSDK_ARG_TYPE_BINARY', 'ARSDK_ARG_TYPE_DOUBLE',
    'ARSDK_ARG_TYPE_ENUM', 'ARSDK_ARG_TYPE_FLOAT',
    'ARSDK_ARG_TYPE_I16', 'ARSDK_ARG_TYPE_I32', 'ARSDK_ARG_TYPE_I64',
    'ARSDK_ARG_TYPE_I8', 'ARSDK_ARG_TYPE_STRING',
    'ARSDK_ARG_TYPE_U16', 'ARSDK_ARG_TYPE_U32', 'ARSDK_ARG_TYPE_U64',
    'ARSDK_ARG_TYPE_U8', 'ARSDK_BACKEND_TYPE_BLE',
    'ARSDK_BACKEND_TYPE_MUX', 'ARSDK_BACKEND_TYPE_NET',
    'ARSDK_BACKEND_TYPE_UNKNOWN', 'ARSDK_CMD_BUFFER_TYPE_ACK',
    'ARSDK_CMD_BUFFER_TYPE_HIGH_PRIO',
    'ARSDK_CMD_BUFFER_TYPE_INVALID', 'ARSDK_CMD_BUFFER_TYPE_NON_ACK',
    'ARSDK_CMD_DIR_RX', 'ARSDK_CMD_DIR_TX',
    'ARSDK_CMD_ITF_SEND_STATUS_ACK_RECEIVED',
    'ARSDK_CMD_ITF_SEND_STATUS_CANCELED',
    'ARSDK_CMD_ITF_SEND_STATUS_SENT',
    'ARSDK_CMD_ITF_SEND_STATUS_TIMEOUT',
    'ARSDK_CMD_LIST_TYPE_LIST_ITEM', 'ARSDK_CMD_LIST_TYPE_MAP_ITEM',
    'ARSDK_CMD_LIST_TYPE_NONE', 'ARSDK_CMD_TIMEOUT_POLICY_FLUSH',
    'ARSDK_CMD_TIMEOUT_POLICY_POP', 'ARSDK_CMD_TIMEOUT_POLICY_RETRY',
    'ARSDK_CONN_CANCEL_REASON_LOCAL',
    'ARSDK_CONN_CANCEL_REASON_REJECTED',
    'ARSDK_CONN_CANCEL_REASON_REMOTE',
    'ARSDK_CRASHML_REQ_STATUS_ABORTED',
    'ARSDK_CRASHML_REQ_STATUS_CANCELED',
    'ARSDK_CRASHML_REQ_STATUS_FAILED', 'ARSDK_CRASHML_REQ_STATUS_OK',
    'ARSDK_CRASHML_TYPE_DIR', 'ARSDK_CRASHML_TYPE_TARGZ',
    'ARSDK_DEVICE_API_FULL', 'ARSDK_DEVICE_API_UNKNOWN',
    'ARSDK_DEVICE_API_UPDATE_ONLY', 'ARSDK_DEVICE_STATE_CONNECTED',
    'ARSDK_DEVICE_STATE_CONNECTING', 'ARSDK_DEVICE_STATE_IDLE',
    'ARSDK_DEVICE_STATE_REMOVING', 'ARSDK_DEVICE_TYPE_ANAFI4K',
    'ARSDK_DEVICE_TYPE_ANAFI_2', 'ARSDK_DEVICE_TYPE_ANAFI_THERMAL',
    'ARSDK_DEVICE_TYPE_ANAFI_UA', 'ARSDK_DEVICE_TYPE_ANAFI_USA',
    'ARSDK_DEVICE_TYPE_BEBOP', 'ARSDK_DEVICE_TYPE_BEBOP_2',
    'ARSDK_DEVICE_TYPE_CHIMERA', 'ARSDK_DEVICE_TYPE_EVINRUDE',
    'ARSDK_DEVICE_TYPE_JS', 'ARSDK_DEVICE_TYPE_JS_EVO_LIGHT',
    'ARSDK_DEVICE_TYPE_JS_EVO_RACE', 'ARSDK_DEVICE_TYPE_PAROS',
    'ARSDK_DEVICE_TYPE_POWERUP', 'ARSDK_DEVICE_TYPE_RS',
    'ARSDK_DEVICE_TYPE_RS3', 'ARSDK_DEVICE_TYPE_RS_EVO_BRICK',
    'ARSDK_DEVICE_TYPE_RS_EVO_HYDROFOIL',
    'ARSDK_DEVICE_TYPE_RS_EVO_LIGHT', 'ARSDK_DEVICE_TYPE_SKYCTRL',
    'ARSDK_DEVICE_TYPE_SKYCTRL_2', 'ARSDK_DEVICE_TYPE_SKYCTRL_2P',
    'ARSDK_DEVICE_TYPE_SKYCTRL_3', 'ARSDK_DEVICE_TYPE_SKYCTRL_4',
    'ARSDK_DEVICE_TYPE_SKYCTRL_NG', 'ARSDK_DEVICE_TYPE_SKYCTRL_UA',
    'ARSDK_DEVICE_TYPE_UNKNOWN', 'ARSDK_DEVICE_TYPE_WINGX',
    'ARSDK_EPHEMERIS_REQ_STATUS_ABORTED',
    'ARSDK_EPHEMERIS_REQ_STATUS_CANCELED',
    'ARSDK_EPHEMERIS_REQ_STATUS_FAILED',
    'ARSDK_EPHEMERIS_REQ_STATUS_OK', 'ARSDK_FTP_FILE_TYPE_DIR',
    'ARSDK_FTP_FILE_TYPE_FILE', 'ARSDK_FTP_FILE_TYPE_LINK',
    'ARSDK_FTP_FILE_TYPE_UNKNOWN', 'ARSDK_FTP_REQ_STATUS_ABORTED',
    'ARSDK_FTP_REQ_STATUS_CANCELED', 'ARSDK_FTP_REQ_STATUS_FAILED',
    'ARSDK_FTP_REQ_STATUS_OK', 'ARSDK_FTP_SRV_TYPE_FLIGHT_PLAN',
    'ARSDK_FTP_SRV_TYPE_MEDIA', 'ARSDK_FTP_SRV_TYPE_UNKNOWN',
    'ARSDK_FTP_SRV_TYPE_UPDATE', 'ARSDK_LINK_STATUS_KO',
    'ARSDK_LINK_STATUS_OK', 'ARSDK_MEDIA_REQ_STATUS_ABORTED',
    'ARSDK_MEDIA_REQ_STATUS_CANCELED',
    'ARSDK_MEDIA_REQ_STATUS_FAILED', 'ARSDK_MEDIA_REQ_STATUS_OK',
    'ARSDK_MEDIA_RES_FMT_DNG', 'ARSDK_MEDIA_RES_FMT_JPG',
    'ARSDK_MEDIA_RES_FMT_MP4', 'ARSDK_MEDIA_RES_FMT_UNKNOWN',
    'ARSDK_MEDIA_RES_TYPE_PHOTO', 'ARSDK_MEDIA_RES_TYPE_THUMBNAIL',
    'ARSDK_MEDIA_RES_TYPE_UNKNOWN', 'ARSDK_MEDIA_RES_TYPE_VIDEO',
    'ARSDK_MEDIA_TYPE_ALL', 'ARSDK_MEDIA_TYPE_PHOTO',
    'ARSDK_MEDIA_TYPE_UNKNOWN', 'ARSDK_MEDIA_TYPE_VIDEO',
    'ARSDK_PUD_REQ_STATUS_ABORTED', 'ARSDK_PUD_REQ_STATUS_CANCELED',
    'ARSDK_PUD_REQ_STATUS_FAILED', 'ARSDK_PUD_REQ_STATUS_OK',
    'ARSDK_SOCKET_KIND_COMMAND', 'ARSDK_SOCKET_KIND_CONNECTION',
    'ARSDK_SOCKET_KIND_DISCOVERY', 'ARSDK_SOCKET_KIND_FTP',
    'ARSDK_SOCKET_KIND_VIDEO', 'ARSDK_UPDATER_REQ_STATUS_ABORTED',
    'ARSDK_UPDATER_REQ_STATUS_CANCELED',
    'ARSDK_UPDATER_REQ_STATUS_FAILED', 'ARSDK_UPDATER_REQ_STATUS_OK',
    'PDRAW_DRONE_MODEL_ANAFI', 'PDRAW_DRONE_MODEL_ANAFI_THERMAL',
    'PDRAW_DRONE_MODEL_BEBOP', 'PDRAW_DRONE_MODEL_BEBOP2',
    'PDRAW_DRONE_MODEL_BLUEGRASS', 'PDRAW_DRONE_MODEL_DISCO',
    'PDRAW_DRONE_MODEL_UNKNOWN', 'PDRAW_H264_FORMAT_AVCC',
    'PDRAW_H264_FORMAT_BYTE_STREAM', 'PDRAW_H264_FORMAT_UNKNOWN',
    'PDRAW_HISTOGRAM_CHANNEL_BLUE', 'PDRAW_HISTOGRAM_CHANNEL_GREEN',
    'PDRAW_HISTOGRAM_CHANNEL_LUMA', 'PDRAW_HISTOGRAM_CHANNEL_MAX',
    'PDRAW_HISTOGRAM_CHANNEL_RED', 'PDRAW_HMD_MODEL_COCKPITGLASSES',
    'PDRAW_HMD_MODEL_COCKPITGLASSES_2', 'PDRAW_HMD_MODEL_UNKNOWN',
    'PDRAW_MEDIA_TYPE_UNKNOWN', 'PDRAW_MEDIA_TYPE_VIDEO',
    'PDRAW_PIPELINE_MODE_DECODE_ALL',
    'PDRAW_PIPELINE_MODE_DECODE_NONE', 'PDRAW_SESSION_TYPE_LIVE',
    'PDRAW_SESSION_TYPE_REPLAY', 'PDRAW_SESSION_TYPE_UNKNOWN',
    'PDRAW_VIDEO_MEDIA_FORMAT_H264',
    'PDRAW_VIDEO_MEDIA_FORMAT_OPAQUE',
    'PDRAW_VIDEO_MEDIA_FORMAT_UNKNOWN',
    'PDRAW_VIDEO_MEDIA_FORMAT_YUV',
    'PDRAW_VIDEO_RENDERER_FILL_MODE_CROP',
    'PDRAW_VIDEO_RENDERER_FILL_MODE_FIT',
    'PDRAW_VIDEO_RENDERER_FILL_MODE_FIT_PAD_BLUR_CROP',
    'PDRAW_VIDEO_RENDERER_FILL_MODE_FIT_PAD_BLUR_EXTEND',
    'PDRAW_VIDEO_RENDERER_TRANSITION_FLAG_EOS',
    'PDRAW_VIDEO_RENDERER_TRANSITION_FLAG_PHOTO_TRIGGER',
    'PDRAW_VIDEO_RENDERER_TRANSITION_FLAG_RECONFIGURE',
    'PDRAW_VIDEO_RENDERER_TRANSITION_FLAG_SOS',
    'PDRAW_VIDEO_RENDERER_TRANSITION_FLAG_TIMEOUT',
    'PDRAW_VIDEO_TYPE_DEFAULT_CAMERA',
    'PDRAW_VIDEO_TYPE_FRONT_CAMERA', 'PDRAW_YUV_FORMAT_I420',
    'PDRAW_YUV_FORMAT_NV12', 'PDRAW_YUV_FORMAT_UNKNOWN',
    'POMP_EVENT_CONNECTED', 'POMP_EVENT_DISCONNECTED',
    'POMP_EVENT_MSG', 'POMP_FD_EVENT_ERR', 'POMP_FD_EVENT_HUP',
    'POMP_FD_EVENT_IN', 'POMP_FD_EVENT_OUT', 'POMP_FD_EVENT_PRI',
    'POMP_LOOP_IMPL_EPOLL', 'POMP_LOOP_IMPL_POLL',
    'POMP_LOOP_IMPL_WIN32', 'POMP_SEND_STATUS_ABORTED',
    'POMP_SEND_STATUS_ERROR', 'POMP_SEND_STATUS_OK',
    'POMP_SEND_STATUS_QUEUE_EMPTY', 'POMP_SOCKET_KIND_CLIENT',
    'POMP_SOCKET_KIND_DGRAM', 'POMP_SOCKET_KIND_PEER',
    'POMP_SOCKET_KIND_SERVER', 'POMP_TIMER_IMPL_KQUEUE',
    'POMP_TIMER_IMPL_POSIX', 'POMP_TIMER_IMPL_TIMER_FD',
    'POMP_TIMER_IMPL_WIN32', 'VMETA_AUTOMATION_ANIM_BOOMERANG',
    'VMETA_AUTOMATION_ANIM_CANDLE',
    'VMETA_AUTOMATION_ANIM_DOLLY_SLIDE',
    'VMETA_AUTOMATION_ANIM_DOLLY_ZOOM',
    'VMETA_AUTOMATION_ANIM_FLIP_BACK',
    'VMETA_AUTOMATION_ANIM_FLIP_FRONT',
    'VMETA_AUTOMATION_ANIM_FLIP_LEFT',
    'VMETA_AUTOMATION_ANIM_FLIP_RIGHT', 'VMETA_AUTOMATION_ANIM_NONE',
    'VMETA_AUTOMATION_ANIM_ORBIT',
    'VMETA_AUTOMATION_ANIM_PANORAMA_HORZ',
    'VMETA_AUTOMATION_ANIM_PARABOLA',
    'VMETA_AUTOMATION_ANIM_POSITION_TWISTUP',
    'VMETA_AUTOMATION_ANIM_REVEAL_HORZ',
    'VMETA_AUTOMATION_ANIM_REVEAL_VERT',
    'VMETA_AUTOMATION_ANIM_TWISTUP', 'VMETA_FLYING_STATE_EMERGENCY',
    'VMETA_FLYING_STATE_EMERGENCY_LANDING',
    'VMETA_FLYING_STATE_FLYING', 'VMETA_FLYING_STATE_HOVERING',
    'VMETA_FLYING_STATE_LANDED', 'VMETA_FLYING_STATE_LANDING',
    'VMETA_FLYING_STATE_MOTOR_RAMPING',
    'VMETA_FLYING_STATE_TAKINGOFF', 'VMETA_FLYING_STATE_USER_TAKEOFF',
    'VMETA_FOLLOWME_ANIM_BOOMERANG', 'VMETA_FOLLOWME_ANIM_NONE',
    'VMETA_FOLLOWME_ANIM_ORBIT', 'VMETA_FOLLOWME_ANIM_PARABOLA',
    'VMETA_FOLLOWME_ANIM_ZENITH', 'VMETA_FRAME_TYPE_NONE',
    'VMETA_FRAME_TYPE_V1_RECORDING',
    'VMETA_FRAME_TYPE_V1_STREAMING_BASIC',
    'VMETA_FRAME_TYPE_V1_STREAMING_EXTENDED', 'VMETA_FRAME_TYPE_V2',
    'VMETA_FRAME_TYPE_V3', 'VMETA_PILOTING_MODE_FLIGHT_PLAN',
    'VMETA_PILOTING_MODE_FOLLOW_ME',
    'VMETA_PILOTING_MODE_MAGIC_CARPET', 'VMETA_PILOTING_MODE_MANUAL',
    'VMETA_PILOTING_MODE_MOVE_TO', 'VMETA_PILOTING_MODE_RETURN_HOME',
    'VMETA_PILOTING_MODE_TRACKING', 'VMETA_REC_META',
    'VMETA_REC_UDTA', 'VMETA_REC_XYZ', 'VMETA_SESSION_LOCATION_CSV',
    'VMETA_SESSION_LOCATION_ISO6709', 'VMETA_SESSION_LOCATION_XYZ',
    'VMETA_STRM_SDES_TYPE_CNAME', 'VMETA_STRM_SDES_TYPE_EMAIL',
    'VMETA_STRM_SDES_TYPE_END', 'VMETA_STRM_SDES_TYPE_LOC',
    'VMETA_STRM_SDES_TYPE_NAME', 'VMETA_STRM_SDES_TYPE_NOTE',
    'VMETA_STRM_SDES_TYPE_PHONE', 'VMETA_STRM_SDES_TYPE_PRIV',
    'VMETA_STRM_SDES_TYPE_TOOL', 'VMETA_STRM_SDP_TYPE_MEDIA_ATTR',
    'VMETA_STRM_SDP_TYPE_SESSION_ATTR',
    'VMETA_STRM_SDP_TYPE_SESSION_INFO',
    'VMETA_STRM_SDP_TYPE_SESSION_NAME',
    'VMETA_STRM_SDP_TYPE_SESSION_TOOL',
    'VMETA_THERMAL_CALIB_STATE_DONE',
    'VMETA_THERMAL_CALIB_STATE_IN_PROGRESS',
    'VMETA_THERMAL_CALIB_STATE_REQUESTED', 'arsdk_arg_type',
    'arsdk_arg_type_str', 'arsdk_backend_mux_destroy',
    'arsdk_backend_mux_get_mux_ctx', 'arsdk_backend_mux_get_parent',
    'arsdk_backend_mux_new', 'arsdk_backend_mux_start_listen',
    'arsdk_backend_mux_stop_listen', 'arsdk_backend_net_destroy',
    'arsdk_backend_net_get_parent', 'arsdk_backend_net_new',
    'arsdk_backend_net_set_socket_cb',
    'arsdk_backend_net_socket_cb_t', 'arsdk_backend_net_start_listen',
    'arsdk_backend_net_stop_listen', 'arsdk_backend_type',
    'arsdk_backend_type_str', 'arsdk_blackbox_itf_create_listener',
    'arsdk_blackbox_listener_unregister', 'arsdk_cmd_buffer_type',
    'arsdk_cmd_dec', 'arsdk_cmd_dec_header', 'arsdk_cmd_dir',
    'arsdk_cmd_enc', 'arsdk_cmd_enc_argv', 'arsdk_cmd_find_desc',
    'arsdk_cmd_fmt', 'arsdk_cmd_get_values',
    'arsdk_cmd_itf_get_osdata', 'arsdk_cmd_itf_send',
    'arsdk_cmd_itf_send_status', 'arsdk_cmd_itf_send_status_cb_t',
    'arsdk_cmd_itf_send_status_str', 'arsdk_cmd_itf_set_osdata',
    'arsdk_cmd_list_type', 'arsdk_cmd_timeout_policy',
    'arsdk_conn_cancel_reason', 'arsdk_conn_cancel_reason_str',
    'arsdk_crashml_itf_cancel_all', 'arsdk_crashml_itf_create_req',
    'arsdk_crashml_req_cancel', 'arsdk_crashml_req_get_dev_type',
    'arsdk_crashml_req_status', 'arsdk_crashml_type',
    'arsdk_ctrl_destroy', 'arsdk_ctrl_get_device',
    'arsdk_ctrl_get_loop', 'arsdk_ctrl_new', 'arsdk_ctrl_next_device',
    'arsdk_ctrl_set_device_cbs', 'arsdk_device_api',
    'arsdk_device_connect', 'arsdk_device_create_cmd_itf',
    'arsdk_device_create_tcp_proxy', 'arsdk_device_destroy_tcp_proxy',
    'arsdk_device_disconnect', 'arsdk_device_get_backend',
    'arsdk_device_get_blackbox_itf', 'arsdk_device_get_cmd_itf',
    'arsdk_device_get_crashml_itf', 'arsdk_device_get_ephemeris_itf',
    'arsdk_device_get_flight_log_itf', 'arsdk_device_get_ftp_itf',
    'arsdk_device_get_handle', 'arsdk_device_get_info',
    'arsdk_device_get_media_itf', 'arsdk_device_get_pud_itf',
    'arsdk_device_get_updater_itf', 'arsdk_device_state',
    'arsdk_device_state_str', 'arsdk_device_tcp_proxy_get_addr',
    'arsdk_device_tcp_proxy_get_port', 'arsdk_device_type',
    'arsdk_device_type_str', 'arsdk_discovery_add_device',
    'arsdk_discovery_avahi_destroy', 'arsdk_discovery_avahi_new',
    'arsdk_discovery_avahi_start', 'arsdk_discovery_avahi_stop',
    'arsdk_discovery_destroy', 'arsdk_discovery_mux_destroy',
    'arsdk_discovery_mux_new', 'arsdk_discovery_mux_start',
    'arsdk_discovery_mux_stop', 'arsdk_discovery_net_destroy',
    'arsdk_discovery_net_new', 'arsdk_discovery_net_new_with_port',
    'arsdk_discovery_net_start', 'arsdk_discovery_net_stop',
    'arsdk_discovery_new', 'arsdk_discovery_remove_device',
    'arsdk_discovery_start', 'arsdk_discovery_stop',
    'arsdk_ephemeris_itf_cancel_all',
    'arsdk_ephemeris_itf_create_req_upload',
    'arsdk_ephemeris_req_status', 'arsdk_ephemeris_req_upload_cancel',
    'arsdk_ephemeris_req_upload_get_dev_type',
    'arsdk_ephemeris_req_upload_get_file_path',
    'arsdk_ftp_file_get_name', 'arsdk_ftp_file_get_size',
    'arsdk_ftp_file_get_type', 'arsdk_ftp_file_list_get_count',
    'arsdk_ftp_file_list_next_file', 'arsdk_ftp_file_list_ref',
    'arsdk_ftp_file_list_unref', 'arsdk_ftp_file_ref',
    'arsdk_ftp_file_type', 'arsdk_ftp_file_unref',
    'arsdk_ftp_itf_cancel_all', 'arsdk_ftp_itf_create_req_delete',
    'arsdk_ftp_itf_create_req_get', 'arsdk_ftp_itf_create_req_list',
    'arsdk_ftp_itf_create_req_put',
    'arsdk_ftp_itf_create_req_put_buff',
    'arsdk_ftp_itf_create_req_rename', 'arsdk_ftp_req_delete_cancel',
    'arsdk_ftp_req_delete_get_dev_type',
    'arsdk_ftp_req_delete_get_path', 'arsdk_ftp_req_get_cancel',
    'arsdk_ftp_req_get_get_buffer', 'arsdk_ftp_req_get_get_dev_type',
    'arsdk_ftp_req_get_get_dlsize',
    'arsdk_ftp_req_get_get_local_path',
    'arsdk_ftp_req_get_get_remote_path',
    'arsdk_ftp_req_get_get_total_size', 'arsdk_ftp_req_list_cancel',
    'arsdk_ftp_req_list_get_dev_type', 'arsdk_ftp_req_list_get_path',
    'arsdk_ftp_req_list_get_result', 'arsdk_ftp_req_put_cancel',
    'arsdk_ftp_req_put_get_dev_type',
    'arsdk_ftp_req_put_get_local_path',
    'arsdk_ftp_req_put_get_remote_path',
    'arsdk_ftp_req_put_get_total_size',
    'arsdk_ftp_req_put_get_ulsize', 'arsdk_ftp_req_rename_cancel',
    'arsdk_ftp_req_rename_get_dev_type',
    'arsdk_ftp_req_rename_get_dst', 'arsdk_ftp_req_rename_get_src',
    'arsdk_ftp_req_status', 'arsdk_ftp_srv_type',
    'arsdk_get_cmd_table', 'arsdk_link_status',
    'arsdk_link_status_str', 'arsdk_media_get_date',
    'arsdk_media_get_name', 'arsdk_media_get_res_count',
    'arsdk_media_get_runid', 'arsdk_media_get_type',
    'arsdk_media_itf_cancel_all', 'arsdk_media_itf_create_req_delete',
    'arsdk_media_itf_create_req_download',
    'arsdk_media_itf_create_req_list', 'arsdk_media_list_get_count',
    'arsdk_media_list_next_media', 'arsdk_media_list_ref',
    'arsdk_media_list_unref', 'arsdk_media_next_res',
    'arsdk_media_ref', 'arsdk_media_req_delete_get_dev_type',
    'arsdk_media_req_delete_get_media',
    'arsdk_media_req_download_cancel',
    'arsdk_media_req_download_get_buffer',
    'arsdk_media_req_download_get_dev_type',
    'arsdk_media_req_download_get_local_path',
    'arsdk_media_req_download_get_uri', 'arsdk_media_req_list_cancel',
    'arsdk_media_req_list_get_dev_type',
    'arsdk_media_req_list_get_result', 'arsdk_media_req_status',
    'arsdk_media_res_format', 'arsdk_media_res_get_fmt',
    'arsdk_media_res_get_name', 'arsdk_media_res_get_size',
    'arsdk_media_res_get_type', 'arsdk_media_res_get_uri',
    'arsdk_media_res_type', 'arsdk_media_type', 'arsdk_media_unref',
    'arsdk_mngr_destroy', 'arsdk_mngr_get_loop',
    'arsdk_mngr_get_peer', 'arsdk_mngr_new', 'arsdk_mngr_next_peer',
    'arsdk_mngr_set_peer_cbs', 'arsdk_peer_accept',
    'arsdk_peer_create_cmd_itf', 'arsdk_peer_disconnect',
    'arsdk_peer_get_backend', 'arsdk_peer_get_cmd_itf',
    'arsdk_peer_get_handle', 'arsdk_peer_get_info',
    'arsdk_peer_reject', 'arsdk_publisher_avahi_destroy',
    'arsdk_publisher_avahi_new', 'arsdk_publisher_avahi_start',
    'arsdk_publisher_avahi_stop', 'arsdk_publisher_mux_destroy',
    'arsdk_publisher_mux_new', 'arsdk_publisher_mux_start',
    'arsdk_publisher_mux_stop', 'arsdk_publisher_net_destroy',
    'arsdk_publisher_net_new', 'arsdk_publisher_net_start',
    'arsdk_publisher_net_stop', 'arsdk_pud_itf_cancel_all',
    'arsdk_pud_itf_create_req', 'arsdk_pud_req_cancel',
    'arsdk_pud_req_get_dev_type', 'arsdk_pud_req_status',
    'arsdk_socket_kind', 'arsdk_socket_kind_str',
    'arsdk_updater_appid_to_devtype', 'arsdk_updater_itf_cancel_all',
    'arsdk_updater_itf_create_req_upload', 'arsdk_updater_req_status',
    'arsdk_updater_req_upload_cancel',
    'arsdk_updater_req_upload_get_dev_type',
    'arsdkctrl_backend_mux_destroy',
    'arsdkctrl_backend_mux_get_mux_ctx',
    'arsdkctrl_backend_mux_get_parent', 'arsdkctrl_backend_mux_new',
    'arsdkctrl_backend_net_destroy',
    'arsdkctrl_backend_net_get_parent', 'arsdkctrl_backend_net_new',
    'arsdkctrl_backend_net_set_socket_cb',
    'arsdkctrl_backend_net_socket_cb_t', 'int16_t', 'int32_t',
    'int64_t', 'int8_t', 'intptr_t', 'pdraw_close', 'pdraw_destroy',
    'pdraw_drone_model', 'pdraw_drone_model_str',
    'pdraw_get_current_time', 'pdraw_get_display_screen_settings',
    'pdraw_get_duration', 'pdraw_get_hmd_model_setting',
    'pdraw_get_peer_drone_model', 'pdraw_get_peer_session_metadata',
    'pdraw_get_pipeline_mode_setting', 'pdraw_get_self_friendly_name',
    'pdraw_get_self_serial_number', 'pdraw_get_self_software_version',
    'pdraw_get_session_type',
    'pdraw_get_single_stream_local_control_port',
    'pdraw_get_single_stream_local_stream_port',
    'pdraw_get_video_renderer_params', 'pdraw_get_video_sink_queue',
    'pdraw_h264_format', 'pdraw_h264_format_str',
    'pdraw_histogram_channel', 'pdraw_histogram_channel_str',
    'pdraw_hmd_model', 'pdraw_hmd_model_str', 'pdraw_is_paused',
    'pdraw_is_ready_to_play', 'pdraw_is_self_pilot',
    'pdraw_media_type', 'pdraw_media_type_str', 'pdraw_new',
    'pdraw_next_frame', 'pdraw_open_single_stream', 'pdraw_open_url',
    'pdraw_open_url_mux', 'pdraw_pack_yuv_frame', 'pdraw_pause',
    'pdraw_pipeline_mode', 'pdraw_pipeline_mode_str', 'pdraw_play',
    'pdraw_play_with_speed', 'pdraw_previous_frame',
    'pdraw_render_video', 'pdraw_render_video_mat',
    'pdraw_resize_video_renderer', 'pdraw_resync_video_sink',
    'pdraw_seek', 'pdraw_seek_back', 'pdraw_seek_forward',
    'pdraw_seek_to', 'pdraw_session_type', 'pdraw_session_type_str',
    'pdraw_set_android_jvm', 'pdraw_set_display_screen_settings',
    'pdraw_set_hmd_model_setting', 'pdraw_set_pipeline_mode_setting',
    'pdraw_set_self_friendly_name', 'pdraw_set_self_pilot',
    'pdraw_set_self_serial_number', 'pdraw_set_self_software_version',
    'pdraw_set_video_renderer_params', 'pdraw_start_video_renderer',
    'pdraw_start_video_renderer_egl', 'pdraw_start_video_sink',
    'pdraw_stop_video_renderer', 'pdraw_stop_video_sink',
    'pdraw_video_frame_to_json', 'pdraw_video_frame_to_json_str',
    'pdraw_video_media_format', 'pdraw_video_media_format_str',
    'pdraw_video_renderer_fill_mode',
    'pdraw_video_renderer_fill_mode_str',
    'pdraw_video_renderer_transition_flag',
    'pdraw_video_renderer_transition_flag_str',
    'pdraw_video_sink_queue_flushed', 'pdraw_video_type',
    'pdraw_video_type_str', 'pdraw_yuv_format',
    'pdraw_yuv_format_str', 'pomp_addr_format',
    'pomp_addr_get_real_addr', 'pomp_addr_is_unix', 'pomp_addr_parse',
    'pomp_buffer_append_buffer', 'pomp_buffer_append_data',
    'pomp_buffer_cread', 'pomp_buffer_ensure_capacity',
    'pomp_buffer_get_cdata', 'pomp_buffer_get_data',
    'pomp_buffer_is_shared', 'pomp_buffer_new',
    'pomp_buffer_new_copy', 'pomp_buffer_new_get_data',
    'pomp_buffer_new_with_data', 'pomp_buffer_read',
    'pomp_buffer_ref', 'pomp_buffer_set_capacity',
    'pomp_buffer_set_len', 'pomp_buffer_unref', 'pomp_buffer_write',
    'pomp_conn_disconnect', 'pomp_conn_get_fd',
    'pomp_conn_get_local_addr', 'pomp_conn_get_peer_addr',
    'pomp_conn_get_peer_cred', 'pomp_conn_resume_read',
    'pomp_conn_send', 'pomp_conn_send_msg', 'pomp_conn_send_raw_buf',
    'pomp_conn_sendv', 'pomp_conn_suspend_read', 'pomp_ctx_bind',
    'pomp_ctx_connect', 'pomp_ctx_destroy', 'pomp_ctx_get_conn',
    'pomp_ctx_get_fd', 'pomp_ctx_get_local_addr', 'pomp_ctx_get_loop',
    'pomp_ctx_get_next_conn', 'pomp_ctx_listen',
    'pomp_ctx_listen_with_access_mode', 'pomp_ctx_new',
    'pomp_ctx_new_with_loop', 'pomp_ctx_process_fd',
    'pomp_ctx_raw_cb_t', 'pomp_ctx_send', 'pomp_ctx_send_msg',
    'pomp_ctx_send_msg_to', 'pomp_ctx_send_raw_buf',
    'pomp_ctx_send_raw_buf_to', 'pomp_ctx_sendv', 'pomp_ctx_set_raw',
    'pomp_ctx_set_send_cb', 'pomp_ctx_set_socket_cb',
    'pomp_ctx_setup_keepalive', 'pomp_ctx_stop',
    'pomp_ctx_wait_and_process', 'pomp_ctx_wakeup',
    'pomp_decoder_adump', 'pomp_decoder_clear',
    'pomp_decoder_destroy', 'pomp_decoder_dump', 'pomp_decoder_init',
    'pomp_decoder_new', 'pomp_decoder_read', 'pomp_decoder_read_buf',
    'pomp_decoder_read_cbuf', 'pomp_decoder_read_cstr',
    'pomp_decoder_read_f32', 'pomp_decoder_read_f64',
    'pomp_decoder_read_fd', 'pomp_decoder_read_i16',
    'pomp_decoder_read_i32', 'pomp_decoder_read_i64',
    'pomp_decoder_read_i8', 'pomp_decoder_read_str',
    'pomp_decoder_read_u16', 'pomp_decoder_read_u32',
    'pomp_decoder_read_u64', 'pomp_decoder_read_u8',
    'pomp_decoder_readv', 'pomp_encoder_clear',
    'pomp_encoder_destroy', 'pomp_encoder_init', 'pomp_encoder_new',
    'pomp_encoder_write', 'pomp_encoder_write_argv',
    'pomp_encoder_write_buf', 'pomp_encoder_write_f32',
    'pomp_encoder_write_f64', 'pomp_encoder_write_fd',
    'pomp_encoder_write_i16', 'pomp_encoder_write_i32',
    'pomp_encoder_write_i64', 'pomp_encoder_write_i8',
    'pomp_encoder_write_str', 'pomp_encoder_write_u16',
    'pomp_encoder_write_u32', 'pomp_encoder_write_u64',
    'pomp_encoder_write_u8', 'pomp_encoder_writev', 'pomp_event',
    'pomp_event_cb_t', 'pomp_event_str', 'pomp_evt_attach_to_loop',
    'pomp_evt_cb_t', 'pomp_evt_clear', 'pomp_evt_destroy',
    'pomp_evt_detach_from_loop', 'pomp_evt_is_attached',
    'pomp_evt_new', 'pomp_evt_signal', 'pomp_fd_event',
    'pomp_fd_event_cb_t', 'pomp_idle_cb_t',
    'pomp_internal_set_loop_impl', 'pomp_internal_set_timer_impl',
    'pomp_loop_add', 'pomp_loop_destroy', 'pomp_loop_get_fd',
    'pomp_loop_has_fd', 'pomp_loop_idle_add',
    'pomp_loop_idle_add_with_cookie', 'pomp_loop_idle_flush',
    'pomp_loop_idle_flush_by_cookie', 'pomp_loop_idle_remove',
    'pomp_loop_idle_remove_by_cookie', 'pomp_loop_impl',
    'pomp_loop_new', 'pomp_loop_process_fd', 'pomp_loop_remove',
    'pomp_loop_update', 'pomp_loop_update2',
    'pomp_loop_wait_and_process', 'pomp_loop_wakeup',
    'pomp_loop_watchdog_disable', 'pomp_loop_watchdog_enable',
    'pomp_msg_adump', 'pomp_msg_clear', 'pomp_msg_destroy',
    'pomp_msg_dump', 'pomp_msg_finish', 'pomp_msg_get_buffer',
    'pomp_msg_get_id', 'pomp_msg_init', 'pomp_msg_new',
    'pomp_msg_new_copy', 'pomp_msg_new_with_buffer', 'pomp_msg_read',
    'pomp_msg_readv', 'pomp_msg_write', 'pomp_msg_write_argv',
    'pomp_msg_writev', 'pomp_send_cb_t', 'pomp_send_status',
    'pomp_socket_cb_t', 'pomp_socket_kind', 'pomp_socket_kind_str',
    'pomp_timer_cb_t', 'pomp_timer_clear', 'pomp_timer_destroy',
    'pomp_timer_impl', 'pomp_timer_new', 'pomp_timer_set',
    'pomp_timer_set_periodic', 'pomp_watchdog_cb_t', 'size_t',
    'ssize_t', 'struct___va_list_tag', 'struct_arsdk_arg_desc',
    'struct_arsdk_backend', 'struct_arsdk_backend_listen_cbs',
    'struct_arsdk_backend_mux', 'struct_arsdk_backend_mux_cfg',
    'struct_arsdk_backend_net', 'struct_arsdk_backend_net_cfg',
    'struct_arsdk_binary', 'struct_arsdk_blackbox_itf',
    'struct_arsdk_blackbox_listener',
    'struct_arsdk_blackbox_listener_cbs',
    'struct_arsdk_blackbox_rc_piloting_info', 'struct_arsdk_cmd',
    'struct_arsdk_cmd_desc', 'struct_arsdk_cmd_itf',
    'struct_arsdk_cmd_itf_cbs', 'struct_arsdk_crashml_itf',
    'struct_arsdk_crashml_req', 'struct_arsdk_crashml_req_cbs',
    'struct_arsdk_ctrl', 'struct_arsdk_ctrl_device_cbs',
    'struct_arsdk_device', 'struct_arsdk_device_conn_cbs',
    'struct_arsdk_device_conn_cfg', 'struct_arsdk_device_info',
    'struct_arsdk_device_mngr', 'struct_arsdk_device_tcp_proxy',
    'struct_arsdk_device_tcp_proxy_cbs', 'struct_arsdk_discovery',
    'struct_arsdk_discovery_avahi', 'struct_arsdk_discovery_cfg',
    'struct_arsdk_discovery_device_info',
    'struct_arsdk_discovery_mux', 'struct_arsdk_discovery_net',
    'struct_arsdk_enum_desc', 'struct_arsdk_ephemeris_itf',
    'struct_arsdk_ephemeris_req_upload',
    'struct_arsdk_ephemeris_req_upload_cbs',
    'struct_arsdk_flight_log_itf', 'struct_arsdk_ftp_file',
    'struct_arsdk_ftp_file_list', 'struct_arsdk_ftp_itf',
    'struct_arsdk_ftp_req_delete', 'struct_arsdk_ftp_req_delete_cbs',
    'struct_arsdk_ftp_req_get', 'struct_arsdk_ftp_req_get_cbs',
    'struct_arsdk_ftp_req_list', 'struct_arsdk_ftp_req_list_cbs',
    'struct_arsdk_ftp_req_put', 'struct_arsdk_ftp_req_put_cbs',
    'struct_arsdk_ftp_req_rename', 'struct_arsdk_ftp_req_rename_cbs',
    'struct_arsdk_media', 'struct_arsdk_media_itf',
    'struct_arsdk_media_list', 'struct_arsdk_media_req_delete',
    'struct_arsdk_media_req_delete_cbs',
    'struct_arsdk_media_req_download',
    'struct_arsdk_media_req_download_cbs',
    'struct_arsdk_media_req_list', 'struct_arsdk_media_req_list_cbs',
    'struct_arsdk_media_res', 'struct_arsdk_mngr',
    'struct_arsdk_mngr_peer_cbs', 'struct_arsdk_peer',
    'struct_arsdk_peer_conn_cbs', 'struct_arsdk_peer_conn_cfg',
    'struct_arsdk_peer_info', 'struct_arsdk_publisher_avahi',
    'struct_arsdk_publisher_avahi_cfg', 'struct_arsdk_publisher_cfg',
    'struct_arsdk_publisher_mux', 'struct_arsdk_publisher_net',
    'struct_arsdk_publisher_net_cfg', 'struct_arsdk_pud_itf',
    'struct_arsdk_pud_req', 'struct_arsdk_pud_req_cbs',
    'struct_arsdk_stream_itf', 'struct_arsdk_updater_itf',
    'struct_arsdk_updater_req_upload',
    'struct_arsdk_updater_req_upload_cbs',
    'struct_arsdk_updater_transport', 'struct_arsdk_value',
    'struct_arsdkctrl_backend', 'struct_arsdkctrl_backend_mux',
    'struct_arsdkctrl_backend_mux_cfg',
    'struct_arsdkctrl_backend_net',
    'struct_arsdkctrl_backend_net_cfg', 'struct_egl_display',
    'struct_json_object', 'struct_mux_ctx', 'struct_pdraw',
    'struct_pdraw_cbs', 'struct_pdraw_demuxer_media',
    'struct_pdraw_media_info', 'struct_pdraw_rect',
    'struct_pdraw_session_info', 'struct_pdraw_video_frame',
    'struct_pdraw_video_frame_extra', 'struct_pdraw_video_h264_frame',
    'struct_pdraw_video_h264_info', 'struct_pdraw_video_info',
    'struct_pdraw_video_renderer', 'struct_pdraw_video_renderer_cbs',
    'struct_pdraw_video_renderer_params', 'struct_pdraw_video_sink',
    'struct_pdraw_video_sink_cbs', 'struct_pdraw_video_sink_params',
    'struct_pdraw_video_yuv_frame', 'struct_pdraw_video_yuv_info',
    'struct_pomp_buffer', 'struct_pomp_conn', 'struct_pomp_cred',
    'struct_pomp_ctx', 'struct_pomp_decoder', 'struct_pomp_encoder',
    'struct_pomp_evt', 'struct_pomp_loop', 'struct_pomp_msg',
    'struct_pomp_sockaddr_storage', 'struct_pomp_timer',
    'struct_sockaddr', 'struct_tm', 'struct_vbuf_buffer',
    'struct_vbuf_cbs', 'struct_vbuf_pool', 'struct_vbuf_queue',
    'struct_vmeta_buffer', 'struct_vmeta_euler', 'struct_vmeta_fov',
    'struct_vmeta_frame', 'struct_vmeta_frame_ext_automation',
    'struct_vmeta_frame_ext_followme',
    'struct_vmeta_frame_ext_thermal',
    'struct_vmeta_frame_ext_timestamp',
    'struct_vmeta_frame_v1_recording',
    'struct_vmeta_frame_v1_streaming_basic',
    'struct_vmeta_frame_v1_streaming_extended',
    'struct_vmeta_frame_v2', 'struct_vmeta_frame_v2_base',
    'struct_vmeta_frame_v3', 'struct_vmeta_frame_v3_base',
    'struct_vmeta_location', 'struct_vmeta_ned',
    'struct_vmeta_quaternion', 'struct_vmeta_session',
    'struct_vmeta_thermal', 'struct_vmeta_thermal_alignment',
    'struct_vmeta_thermal_conversion', 'struct_vmeta_thermal_spot',
    'struct_vmeta_xyz', 'time_t', 'uint16_t', 'uint32_t', 'uint64_t',
    'uint8_t', 'union_arsdk_value_0', 'union_pdraw_media_info_0',
    'union_pdraw_video_frame_0', 'union_pdraw_video_info_0',
    'union_vmeta_buffer_0', 'union_vmeta_euler_0',
    'union_vmeta_euler_1', 'union_vmeta_euler_2',
    'union_vmeta_frame_0', 'va_list', 'vbuf_copy',
    'vbuf_generic_get_cbs', 'vbuf_get_capacity', 'vbuf_get_cdata',
    'vbuf_get_cuserdata', 'vbuf_get_data', 'vbuf_get_pool',
    'vbuf_get_ref_count', 'vbuf_get_size', 'vbuf_get_userdata',
    'vbuf_get_userdata_capacity', 'vbuf_get_userdata_size',
    'vbuf_is_write_locked', 'vbuf_metadata_add', 'vbuf_metadata_copy',
    'vbuf_metadata_get', 'vbuf_metadata_remove', 'vbuf_new',
    'vbuf_pool_abort', 'vbuf_pool_destroy', 'vbuf_pool_get',
    'vbuf_pool_get_count', 'vbuf_pool_get_evt', 'vbuf_pool_new',
    'vbuf_queue_abort', 'vbuf_queue_destroy', 'vbuf_queue_flush',
    'vbuf_queue_get_count', 'vbuf_queue_get_evt', 'vbuf_queue_new',
    'vbuf_queue_peek', 'vbuf_queue_pop', 'vbuf_queue_push',
    'vbuf_ref', 'vbuf_set_capacity', 'vbuf_set_size',
    'vbuf_set_userdata_capacity', 'vbuf_set_userdata_size',
    'vbuf_unref', 'vbuf_userdata_copy', 'vbuf_write_lock',
    'vbuf_write_unlock', 'vmeta_automation_anim',
    'vmeta_automation_anim_str', 'vmeta_euler_to_quat',
    'vmeta_flying_state', 'vmeta_flying_state_str',
    'vmeta_followme_anim', 'vmeta_followme_anim_str',
    'vmeta_frame_csv_header', 'vmeta_frame_get_air_speed',
    'vmeta_frame_get_awb_b_gain', 'vmeta_frame_get_awb_r_gain',
    'vmeta_frame_get_battery_pencentage',
    'vmeta_frame_get_camera_pan', 'vmeta_frame_get_camera_tilt',
    'vmeta_frame_get_drone_euler', 'vmeta_frame_get_drone_quat',
    'vmeta_frame_get_exposure_time', 'vmeta_frame_get_flying_state',
    'vmeta_frame_get_frame_base_euler',
    'vmeta_frame_get_frame_base_quat', 'vmeta_frame_get_frame_euler',
    'vmeta_frame_get_frame_quat', 'vmeta_frame_get_frame_timestamp',
    'vmeta_frame_get_gain', 'vmeta_frame_get_ground_distance',
    'vmeta_frame_get_link_goodput', 'vmeta_frame_get_link_quality',
    'vmeta_frame_get_location', 'vmeta_frame_get_mime_type',
    'vmeta_frame_get_picture_h_fov', 'vmeta_frame_get_picture_v_fov',
    'vmeta_frame_get_piloting_mode', 'vmeta_frame_get_speed_ned',
    'vmeta_frame_get_wifi_rssi', 'vmeta_frame_read',
    'vmeta_frame_to_csv', 'vmeta_frame_to_json', 'vmeta_frame_type',
    'vmeta_frame_type_str', 'vmeta_frame_v1_recording_csv_header',
    'vmeta_frame_v1_recording_read',
    'vmeta_frame_v1_recording_to_csv',
    'vmeta_frame_v1_recording_to_json',
    'vmeta_frame_v1_recording_write',
    'vmeta_frame_v1_streaming_basic_csv_header',
    'vmeta_frame_v1_streaming_basic_read',
    'vmeta_frame_v1_streaming_basic_to_csv',
    'vmeta_frame_v1_streaming_basic_to_json',
    'vmeta_frame_v1_streaming_basic_write',
    'vmeta_frame_v1_streaming_extended_csv_header',
    'vmeta_frame_v1_streaming_extended_read',
    'vmeta_frame_v1_streaming_extended_to_csv',
    'vmeta_frame_v1_streaming_extended_to_json',
    'vmeta_frame_v1_streaming_extended_write',
    'vmeta_frame_v2_csv_header', 'vmeta_frame_v2_read',
    'vmeta_frame_v2_to_csv', 'vmeta_frame_v2_to_json',
    'vmeta_frame_v2_write', 'vmeta_frame_v3_csv_header',
    'vmeta_frame_v3_read', 'vmeta_frame_v3_to_csv',
    'vmeta_frame_v3_to_json', 'vmeta_frame_v3_write',
    'vmeta_frame_write', 'vmeta_piloting_mode',
    'vmeta_piloting_mode_str', 'vmeta_quat_to_euler',
    'vmeta_record_type', 'vmeta_session_date_read',
    'vmeta_session_date_write', 'vmeta_session_fov_read',
    'vmeta_session_fov_write', 'vmeta_session_location_format',
    'vmeta_session_location_read', 'vmeta_session_location_write',
    'vmeta_session_recording_read', 'vmeta_session_recording_write',
    'vmeta_session_recording_write_cb_t',
    'vmeta_session_streaming_sdes_read',
    'vmeta_session_streaming_sdes_write',
    'vmeta_session_streaming_sdes_write_cb_t',
    'vmeta_session_streaming_sdp_read',
    'vmeta_session_streaming_sdp_write',
    'vmeta_session_streaming_sdp_write_cb_t',
    'vmeta_session_thermal_alignment_read',
    'vmeta_session_thermal_alignment_write',
    'vmeta_session_thermal_conversion_read',
    'vmeta_session_thermal_conversion_write',
    'vmeta_session_thermal_scale_factor_read',
    'vmeta_session_thermal_scale_factor_write',
    'vmeta_session_to_json', 'vmeta_session_to_str',
    'vmeta_stream_sdes_type', 'vmeta_stream_sdp_type',
    'vmeta_thermal_calib_state', 'vmeta_thermal_calib_state_str']

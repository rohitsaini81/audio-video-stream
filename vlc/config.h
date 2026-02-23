/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to 1 to allow running VLC as root (uid 0). */
/* #undef ALLOW_RUN_AS_ROOT */

/* Define to 1 if AVX inline assembly is available. */
#define CAN_COMPILE_AVX 1

/* Define to 1 if AVX2 inline assembly is available. */
#define CAN_COMPILE_AVX2 1

/* Define to 1 if SSE2 inline assembly is available. */
#define CAN_COMPILE_SSE2 1

/* Define to 1 if SSE3 inline assembly is available. */
#define CAN_COMPILE_SSE3 1

/* Define to 1 if SSE4_1 inline assembly is available. */
#define CAN_COMPILE_SSE4_1 1

/* Define to 1 if SSSE3 inline assembly is available. */
#define CAN_COMPILE_SSSE3 1

/* The ./configure command line */
#define CONFIGURE_LINE "./configure "

/* Copyright string */
#define COPYRIGHT_MESSAGE "Copyright © 1996-2026 the VideoLAN team"

/* The copyright years */
#define COPYRIGHT_YEARS "1996-2026"

/* Default font family */
/* #undef DEFAULT_FAMILY */

/* Default font */
/* #undef DEFAULT_FONT_FILE */

/* Default monospace font family */
/* #undef DEFAULT_MONOSPACE_FAMILY */

/* Default monospace font */
/* #undef DEFAULT_MONOSPACE_FONT_FILE */

/* Binary specific version */
/* #undef DISTRO_VERSION */

/* Define to 1 if macOS UI Metal shaders are enabled. */
/* #undef ENABLE_MACOSX_UI_SHADERS */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* Define to 1 for stream output support. */
#define ENABLE_SOUT 1

/* Define if you want the VideoLAN manager support */
#define ENABLE_VLM 1

/* Enable compile-time and run-time bounds-checking, and some warnings,
   without upsetting glibc 2.15+ or toolchains predefining _FORTIFY_SOURCE */
#if !defined _FORTIFY_SOURCE && defined __OPTIMIZE__ && __OPTIMIZE__
# define _FORTIFY_SOURCE 2
#endif

/* Define to 1 if you have the 'accept4' function. */
#define HAVE_ACCEPT4 1

/* Define to 1 if you have the 'aligned_alloc' function. */
#define HAVE_ALIGNED_ALLOC 1

/* Define to 1 if you have the <altivec.h> header file. */
/* #undef HAVE_ALTIVEC_H */

/* Define to 1 if you have the <AMF/components/FRC.h> header file. */
/* #undef HAVE_AMF_COMPONENTS_FRC_H */

/* Define to 1 if you have the <AMF/components/HQScaler.h> header file. */
/* #undef HAVE_AMF_COMPONENTS_HQSCALER_H */

/* Define to 1 if you have the <AMF/components/VQEnhancer.h> header file. */
/* #undef HAVE_AMF_COMPONENTS_VQENHANCER_H */

/* Define to 1 if you have the <AMF/core/PropertyStorage.h> header file. */
/* #undef HAVE_AMF_CORE_PROPERTYSTORAGE_H */

/* AMD HQScaler supported */
/* #undef HAVE_AMF_SCALER */

/* Define to 1 if you have the <ApplicationServices/ApplicationServices.h>
   header file. */
/* #undef HAVE_APPLICATIONSERVICES_APPLICATIONSERVICES_H */

/* Define if libaribb24 is available. */
/* #undef HAVE_ARIBB24 */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the 'asprintf' function. */
#define HAVE_ASPRINTF 1

/* Define to 1 if you have the 'atof' function. */
#define HAVE_ATOF 1

/* Define to 1 if you have the 'atoll' function. */
#define HAVE_ATOLL 1

/* Support for __attribute__((packed)) for structs */
#define HAVE_ATTRIBUTE_PACKED 1

/* Define to 1 if AVX2 intrinsics are available. */
#define HAVE_AVX2_INTRINSICS 1

/* Define to 1 if you have the 'backtrace' function. */
#define HAVE_BACKTRACE 1

/* Defined to 1 if the qsort_r() prototype contradicts the upcoming POSIX
   standard. */
/* #undef HAVE_BROKEN_QSORT_R */

/* Define to 1 if you have the Mac OS X function
   CFLocaleCopyPreferredLanguages in the CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYPREFERREDLANGUAGES */

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to 1 if you have the 'clock_getres' function. */
#define HAVE_CLOCK_GETRES 1

/* Define to 1 if you have the 'clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the 'clock_nanosleep' function. */
#define HAVE_CLOCK_NANOSLEEP 1

/* Define if CSS engine is built */
#define HAVE_CSS 1

/* define if the compiler supports basic C++17 syntax */
#define HAVE_CXX17 1

/* Define to 1 if C++ headers define locale_t */
#define HAVE_CXX_LOCALE_T 1

/* Define if the compiler supports typeof. */
/* #undef HAVE_CXX_TYPEOF */

/* Define to 1 if you have the <d3dx9effect.h> header file. */
/* #undef HAVE_D3DX9EFFECT_H */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <DeckLinkAPI.h> header file. */
/* #undef HAVE_DECKLINKAPI_H */

/* Define to 1 if you have the 'dirfd' function. */
#define HAVE_DIRFD 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the 'dup3' function. */
#define HAVE_DUP3 1

/* Define if libdvbcsa is available. */
/* #undef HAVE_DVBCSA */

/* Define to 1 if you have the <dxgidebug.h> header file. */
/* #undef HAVE_DXGIDEBUG_H */

/* Define to 1 if you have the 'eventfd' function. */
#define HAVE_EVENTFD 1

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the 'fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if you have the 'fdopendir' function. */
#define HAVE_FDOPENDIR 1

/* Define to 1 if you have the <features.h> header file. */
#define HAVE_FEATURES_H 1

/* Define to 1 if you have the 'flock' function. */
#define HAVE_FLOCK 1

/* Define to 1 if you have the 'flockfile' function. */
#define HAVE_FLOCKFILE 1

/* Define to 1 if you have the <fluidlite.h> header file. */
/* #undef HAVE_FLUIDLITE_H */

/* Define to 1 if you have the 'fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the 'fstatat' function. */
#define HAVE_FSTATAT 1

/* Define to 1 if you have the 'fstatvfs' function. */
#define HAVE_FSTATVFS 1

/* Define to 1 if you have the 'fsync' function. */
#define HAVE_FSYNC 1

/* Defined if having gcrypt */
#define HAVE_GCRYPT 1

/* Define to 1 if you have the 'getauxval' function. */
#define HAVE_GETAUXVAL 1

/* Define to 1 if you have the 'getdelim' function. */
#define HAVE_GETDELIM 1

/* Define to 1 if you have the 'getenv' function. */
#define HAVE_GETENV 1

/* Define to 1 if you have the 'getmntent_r' function. */
#define HAVE_GETMNTENT_R 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the 'getpid' function. */
#define HAVE_GETPID 1

/* Define to 1 if you have the 'getpwuid_r' function. */
#define HAVE_GETPWUID_R 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the 'gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <GL/glew.h> header file. */
/* #undef HAVE_GL_GLEW_H */

/* Define to 1 if you have the <GL/wglew.h> header file. */
/* #undef HAVE_GL_WGLEW_H */

/* Define to 1 if you have the 'gmtime_r' function. */
#define HAVE_GMTIME_R 1

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if you have GNU libidn. */
/* #undef HAVE_IDN */

/* Define to 1 if you have the 'if_nameindex' function. */
#define HAVE_IF_NAMEINDEX 1

/* Define to 1 if you have if_nametoindex function */
/* #undef HAVE_IF_NAMETOINDEX */

/* Define to 1 if you have inet_pton function */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the <interface/mmal/mmal.h> header file. */
/* #undef HAVE_INTERFACE_MMAL_MMAL_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* For FreeBSD VCD support */
/* #undef HAVE_IOC_TOC_HEADER_IN_SYS_CDIO_H */

/* Define to 1 if you have the 'isatty' function. */
#define HAVE_ISATTY 1

/* Define to 1 if the system has the type 'ISpObjectToken'. */
/* #undef HAVE_ISPOBJECTTOKEN */

/* Define to 1 if you have the <jpeglib.h> header file. */
#define HAVE_JPEGLIB_H 1

/* Define to 1 if you have the <kai.h> header file. */
/* #undef HAVE_KAI_H */

/* Define to 1 if you have the <kva.h> header file. */
/* #undef HAVE_KVA_H */

/* Define to 1 if you have the <lauxlib.h> header file. */
/* #undef HAVE_LAUXLIB_H */

/* Define to 1 if you have the 'lfind' function. */
#define HAVE_LFIND 1

/* Define to 1 if you have the 'anl' library (-lanl). */
#define HAVE_LIBANL 1

/* Define to 1 if you have the <libavcodec/d3d11va.h> header file. */
/* #undef HAVE_LIBAVCODEC_D3D11VA_H */

/* Define to 1 if you have the <libavcodec/dxva2.h> header file. */
/* #undef HAVE_LIBAVCODEC_DXVA2_H */

/* Define to 1 if you have the <libavformat/avformat.h> header file. */
#define HAVE_LIBAVFORMAT_AVFORMAT_H 1

/* Define to 1 if you have the <libavformat/avio.h> header file. */
#define HAVE_LIBAVFORMAT_AVIO_H 1

/* Define to 1 if you have the <libbpg.h> header file. */
/* #undef HAVE_LIBBPG_H */

/* Define to 1 if libplacebo is enabled. */
#define HAVE_LIBPLACEBO 1

/* Define to 1 if <libplacebo/opengl.h> is available. */
#define HAVE_LIBPLACEBO_GL 1

/* Define to 1 if you have the libvorbis */
#define HAVE_LIBVORBIS 1

/* Define to 1 if you have the <linux/dccp.h> header file. */
#define HAVE_LINUX_DCCP_H 1

/* Define to 1 if you have the <linux/magic.h> header file. */
#define HAVE_LINUX_MAGIC_H 1

/* Define to 1 if you have the <linux/videodev2.h> header file. */
#define HAVE_LINUX_VIDEODEV2_H 1

/* Define to 1 if you have the 'lldiv' function. */
#define HAVE_LLDIV 1

/* Define to 1 if you have the 'localtime_r' function. */
#define HAVE_LOCALTIME_R 1

/* Define to 1 if you have the lrintf function */
#define HAVE_LRINTF 1

/* Define to 1 if you have the <lualib.h> header file. */
/* #undef HAVE_LUALIB_H */

/* Define to 1 if you have the <lua.h> header file. */
/* #undef HAVE_LUA_H */

/* Define to 1 if you have the <mad.h> header file. */
/* #undef HAVE_MAD_H */

/* Define to 1 if the system has the type 'max_align_t'. */
#define HAVE_MAX_ALIGN_T 1

/* Define to 1 if you have the 'memalign' function. */
#define HAVE_MEMALIGN 1

/* Define to 1 if you have the 'memfd_create' function. */
#define HAVE_MEMFD_CREATE 1

/* Define to 1 if you have the 'memrchr' function. */
#define HAVE_MEMRCHR 1

/* Define to 1 if you have the <minix/config.h> header file. */
/* #undef HAVE_MINIX_CONFIG_H */

/* Define to 1 if you have the 'mkostemp' function. */
#define HAVE_MKOSTEMP 1

/* Define to 1 if you have the 'mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if you have the <mpc/mpcdec.h> header file. */
/* #undef HAVE_MPC_MPCDEC_H */

/* Define to 1 if you have the NANF function */
#define HAVE_NANF 1

/* Define to 1 if you have the <neaacdec.h> header file. */
/* #undef HAVE_NEAACDEC_H */

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#define HAVE_NETINET_TCP_H 1

/* Define to 1 if you have the <netinet/udplite.h> header file. */
/* #undef HAVE_NETINET_UDPLITE_H */

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Define to 1 if you have the 'newlocale' function. */
#define HAVE_NEWLOCALE 1

/* Define to 1 if you have the 'nrand48' function. */
#define HAVE_NRAND48 1

/* Define to 1 if you have the 'open_memstream' function. */
#define HAVE_OPEN_MEMSTREAM 1

/* Define to 1 if you have the 'pipe2' function. */
#define HAVE_PIPE2 1

/* Define to 1 if you have the <png.h> header file. */
#define HAVE_PNG_H 1

/* Define to 1 if you have the 'poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if you have the 'posix_fadvise' function. */
#define HAVE_POSIX_FADVISE 1

/* Define to 1 if you have the 'posix_memalign' function. */
#define HAVE_POSIX_MEMALIGN 1

/* Define to 1 if you have the <postproc/postprocess.h> header file. */
/* #undef HAVE_POSTPROC_POSTPROCESS_H */

/* Define to 1 if using libprojectM 2.x */
/* #undef HAVE_PROJECTM2 */

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the 'qsort_r' function. */
#define HAVE_QSORT_R 1

/* Define to 1 if you have the 'readv' function. */
#define HAVE_READV 1

/* Define to 1 if you have realpath function */
#define HAVE_REALPATH 1

/* Define to 1 if you have the 'recvmmsg' function. */
#define HAVE_RECVMMSG 1

/* Define to 1 if you have the 'recvmsg' function. */
#define HAVE_RECVMSG 1

/* Define to 1 if you have the 'rewind' function. */
#define HAVE_REWIND 1

/* Define to 1 if you have the 'sched_getaffinity' function. */
#define HAVE_SCHED_GETAFFINITY 1

/* For NetBSD VCD support */
/* #undef HAVE_SCSIREQ_IN_SYS_SCSIIO_H */

/* Define to 1 if you have the <search.h> header file. */
#define HAVE_SEARCH_H 1

/* Define to 1 if you have the 'sendmsg' function. */
#define HAVE_SENDMSG 1

/* Define to 1 if you have the 'setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the 'setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the sincos function. */
#define HAVE_SINCOS 1

/* Define to 1 if you have the <SLES/OpenSLES.h> header file. */
/* #undef HAVE_SLES_OPENSLES_H */

/* Define to 1 if sparkle is enabled. */
/* #undef HAVE_SPARKLE */

/* Define to 1 if SSE2 intrinsics are available. */
#define HAVE_SSE2_INTRINSICS 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the 'strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the 'strcasestr' function. */
#define HAVE_STRCASESTR 1

/* Define to 1 if you have the 'strcoll' function and it is properly defined.
   */
#define HAVE_STRCOLL 1

/* Define to 1 if you have the 'strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the 'strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if you have the 'strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if you have the 'strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the 'strnstr' function. */
/* #undef HAVE_STRNSTR */

/* Define to 1 if you have the 'strsep' function. */
#define HAVE_STRSEP 1

/* Define to 1 if you have the 'strtof' function. */
#define HAVE_STRTOF 1

/* Define to 1 if you have the 'strtok_r' function. */
#define HAVE_STRTOK_R 1

/* Define to 1 if you have the 'strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if the system has the type 'struct if_nameindex'. */
#define HAVE_STRUCT_IF_NAMEINDEX 1

/* Define to 1 if the system has the type 'struct pollfd'. */
#define HAVE_STRUCT_POLLFD 1

/* Define to 1 if the system has the type 'struct timespec'. */
#define HAVE_STRUCT_TIMESPEC 1

/* Define to 1 if you have the 'strverscmp' function. */
#define HAVE_STRVERSCMP 1

/* Define to 1 if you have the 'swab' function. */
#define HAVE_SWAB 1

/* Define to 1 if you have the <sys/auxv.h> header file. */
#define HAVE_SYS_AUXV_H 1

/* Define to 1 if you have the <sys/eventfd.h> header file. */
#define HAVE_SYS_EVENTFD_H 1

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/shm.h> header file. */
#define HAVE_SYS_SHM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/soundcard.h> header file. */
/* #undef HAVE_SYS_SOUNDCARD_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/videoio.h> header file. */
/* #undef HAVE_SYS_VIDEOIO_H */

/* Define to 1 if you have the 'tdestroy' function. */
#define HAVE_TDESTROY 1

/* Define to 1 if you have the 'tfind' function. */
#define HAVE_TFIND 1

/* Define to 1 if you have the <threads.h> header file. */
#define HAVE_THREADS_H 1

/* Defined to 1 if C11 _Thread_local storage qualifier is supported */
#define HAVE_THREAD_LOCAL 1

/* Define if libtiger is available. */
/* #undef HAVE_TIGER */

/* Define to 1 if you have the 'timegm' function. */
#define HAVE_TIMEGM 1

/* Define to 1 if you have the 'timespec_get' function. */
#define HAVE_TIMESPEC_GET 1

/* Define to 1 if you have the <tremor/ivorbiscodec.h> header file. */
/* #undef HAVE_TREMOR_IVORBISCODEC_H */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the 'uselocale' function. */
#define HAVE_USELOCALE 1

/* Define to 1 if you have the <valgrind/valgrind.h> header file. */
/* #undef HAVE_VALGRIND_VALGRIND_H */

/* Define to 1 if you have the 'vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define to 1 if vlc_process_Spawn() is usable. */
#define HAVE_VLC_PROCESS_SPAWN 1

/* Define to 1 if you have the 'vmsplice' function. */
#define HAVE_VMSPLICE 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if you have the 'wordexp' function. */
#define HAVE_WORDEXP 1

/* Define to 1 if you have the <wordexp.h> header file. */
#define HAVE_WORDEXP_H 1

/* Define to 1 if you have the 'writev' function. */
#define HAVE_WRITEV 1

/* Use external asm on x86. */
#define HAVE_X86ASM 1

/* Define to 1 if you have the <xlocale.h> header file. */
/* #undef HAVE_XLOCALE_H */

/* Define to 1 if you have zlib. */
#define HAVE_ZLIB 1

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Define to 1 if you have the '_lock_file' function. */
/* #undef HAVE__LOCK_FILE */

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST 

/* Dynamic object extension */
#define LIBEXT ".so"

/* libvlc version major number */
#define LIBVLC_ABI_MAJOR 12

/* libvlc version micro number */
#define LIBVLC_ABI_MICRO 0

/* libvlc version minor number */
#define LIBVLC_ABI_MINOR 0

/* Define within the LibVLC source code tree. */
#define LIBVLC_INTERNAL_ /**/

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define to 1 if debug code should NOT be compiled */
/* #undef NDEBUG */

/* Define if you want to optimize memory usage over performance */
/* #undef OPTIMIZE_MEMORY */

/* Name of package */
#define PACKAGE "vlc"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "vlc"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "vlc 4.0.0-dev"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "vlc"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.0.0-dev"

/* version development string */
#define PACKAGE_VERSION_DEV "dev"

/* version extra number */
#define PACKAGE_VERSION_EXTRA 0

/* version major number */
#define PACKAGE_VERSION_MAJOR 4

/* version minor number */
#define PACKAGE_VERSION_MINOR 0

/* version revision number */
#define PACKAGE_VERSION_REVISION 0

/* Max possible value of the ssize_t type */
/* #undef SSIZE_MAX */

/* Define to 1 if all of the C89 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Define if the telx module is built */
#define TELX_COMPILED 1

/* Define to 1 for Unicode (Wide Chars) APIs. */
/* #undef UNICODE */

/* Enable extensions on AIX, Interix, z/OS.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on macOS.  */
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable X/Open compliant socket functions that do not require linking
   with -lxnet on HP-UX 11.11.  */
#ifndef _HPUX_ALT_XOPEN_SOCKET_API
# define _HPUX_ALT_XOPEN_SOCKET_API 1
#endif
/* Identify the host operating system as Minix.
   This macro does not affect the system headers' behavior.
   A future release of Autoconf may stop defining this macro.  */
#ifndef _MINIX
/* # undef _MINIX */
#endif
/* Enable general extensions on NetBSD.
   Enable NetBSD compatibility extensions on Minix.  */
#ifndef _NETBSD_SOURCE
# define _NETBSD_SOURCE 1
#endif
/* Enable OpenBSD compatibility extensions on NetBSD.
   Oddly enough, this does nothing on OpenBSD.  */
#ifndef _OPENBSD_SOURCE
# define _OPENBSD_SOURCE 1
#endif
/* Define to 1 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_SOURCE
/* # undef _POSIX_SOURCE */
#endif
/* Define to 2 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_1_SOURCE
/* # undef _POSIX_1_SOURCE */
#endif
/* Enable POSIX-compatible threading on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
#ifndef __STDC_WANT_IEC_60559_ATTRIBS_EXT__
# define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
#ifndef __STDC_WANT_IEC_60559_BFP_EXT__
# define __STDC_WANT_IEC_60559_BFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
#ifndef __STDC_WANT_IEC_60559_DFP_EXT__
# define __STDC_WANT_IEC_60559_DFP_EXT__ 1
#endif
/* Enable extensions specified by C23 Annex F.  */
#ifndef __STDC_WANT_IEC_60559_EXT__
# define __STDC_WANT_IEC_60559_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#endif
/* Enable extensions specified by C23 Annex H and ISO/IEC TS 18661-3:2015.  */
#ifndef __STDC_WANT_IEC_60559_TYPES_EXT__
# define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
#ifndef __STDC_WANT_LIB_EXT2__
# define __STDC_WANT_LIB_EXT2__ 1
#endif
/* Enable extensions specified by ISO/IEC 24747:2009.  */
#ifndef __STDC_WANT_MATH_SPEC_FUNCS__
# define __STDC_WANT_MATH_SPEC_FUNCS__ 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions.  Define to 500 only if necessary
   to make mbstate_t available.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif


/* Version number of package */
#define VERSION "4.0.0-dev"

/* Simple version string */
#define VERSION_MESSAGE "4.0.0-dev Otto Chriek"

/* compiler */
#define VLC_COMPILER "gcc version 15.2.1 20251112 (GCC)"

/* user who ran configure */
#define VLC_COMPILE_BY "rohit"

/* host which ran configure */
#define VLC_COMPILE_HOST "archlinux"

/* Define to limit the scope of <windows.h>. */
/* #undef WIN32_LEAN_AND_MEAN */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Define to 1 if 'lex' declares 'yytext' as a 'char *' by default, not a
   'char[]'. */
#define YYTEXT_POINTER 1

/* Define if the zvbi module is built */
/* #undef ZVBI_COMPILED */

/* Define to 64 for large files support. */
#define _FILE_OFFSET_BITS 64

/* Define to '0x0601' for Windows 7 APIs. */
/* #undef _WIN32_WINNT */

/* Define to empty if 'const' does not conform to ANSI C. */
/* #undef const */

/* Alias fdatasync() to fsync() if missing. */
/* #undef fdatasync */

/* Define to '__inline__' or '__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported only directly.  */
#define restrict __restrict__
/* Work around a bug in older versions of Sun C++, which did not
   #define __restrict__ or support _Restrict or __restrict__
   even though the corresponding Sun C compiler ended up with
   "#define restrict _Restrict" or "#define restrict __restrict__"
   in the previous line.  This workaround can be removed once
   we assume Oracle Developer Studio 12.5 (2016) or later.  */
#if defined __SUNPRO_CC && !defined __RESTRICT && !defined __restrict__
# define _Restrict
# define __restrict__
#endif

/* Define to `sockaddr' if <sys/socket.h> does not define. */
/* #undef sockaddr_storage */

/* Define to `int' if <sys/socket.h> does not define. */
/* #undef socklen_t */

/* Define to `sa_family' if <sys/socket.h> does not define. */
/* #undef ss_family */

/* Define to `ptrdiff_t' if <stddef.h> does not define. */
/* #undef ssize_t */

#include <vlc_fixups.h>


#if defined(_MSC_VER) && !defined(__clang__)
# pragma fenv_access(off)
# pragma fp_contract(on)
#elif defined(__GNUC__)
/* Not supported so far */
#else
# pragma STDC FENV_ACCESS OFF
# pragma STDC FP_CONTRACT ON
#endif


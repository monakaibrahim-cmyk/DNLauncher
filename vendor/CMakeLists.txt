# Vendored third-party libraries matching versions recovered from DNLauncher.exe:
# - zlib 1.2.3
# - libpng 1.2.24
# - IJG libjpeg 6b
# - CxImage 6.00 (JPG + PNG enabled)
# - TinyXML 2.5.3 (TIXML_USE_STL)

add_library(zlib STATIC
    zlib-1.2.3/adler32.c
    zlib-1.2.3/compress.c
    zlib-1.2.3/crc32.c
    zlib-1.2.3/deflate.c
    zlib-1.2.3/gzio.c
    zlib-1.2.3/infback.c
    zlib-1.2.3/inffast.c
    zlib-1.2.3/inflate.c
    zlib-1.2.3/inftrees.c
    zlib-1.2.3/trees.c
    zlib-1.2.3/uncompr.c
    zlib-1.2.3/zutil.c
)
set_target_properties(zlib PROPERTIES OUTPUT_NAME "dn_zlib")
target_include_directories(zlib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/zlib-1.2.3")
target_compile_definitions(zlib PRIVATE _CRT_SECURE_NO_WARNINGS _CRT_NONSTDC_NO_DEPRECATE)

add_library(libpng STATIC
    libpng-1.2.24/png.c
    libpng-1.2.24/pngerror.c
    libpng-1.2.24/pngget.c
    libpng-1.2.24/pngmem.c
    libpng-1.2.24/pngpread.c
    libpng-1.2.24/pngread.c
    libpng-1.2.24/pngrio.c
    libpng-1.2.24/pngrtran.c
    libpng-1.2.24/pngrutil.c
    libpng-1.2.24/pngset.c
    libpng-1.2.24/pngtrans.c
    libpng-1.2.24/pngvcrd.c
    libpng-1.2.24/pngwio.c
    libpng-1.2.24/pngwrite.c
    libpng-1.2.24/pngwtran.c
    libpng-1.2.24/pngwutil.c
)
target_include_directories(libpng PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/libpng-1.2.24")
target_link_libraries(libpng PUBLIC zlib)
target_compile_definitions(libpng PRIVATE _CRT_SECURE_NO_WARNINGS _CRT_NONSTDC_NO_DEPRECATE)

add_library(libjpeg STATIC
    jpeg-6b/jcapimin.c
    jpeg-6b/jcapistd.c
    jpeg-6b/jccoefct.c
    jpeg-6b/jccolor.c
    jpeg-6b/jcdctmgr.c
    jpeg-6b/jchuff.c
    jpeg-6b/jcinit.c
    jpeg-6b/jcmainct.c
    jpeg-6b/jcmarker.c
    jpeg-6b/jcmaster.c
    jpeg-6b/jcomapi.c
    jpeg-6b/jcparam.c
    jpeg-6b/jcphuff.c
    jpeg-6b/jcprepct.c
    jpeg-6b/jcsample.c
    jpeg-6b/jctrans.c
    jpeg-6b/jdapimin.c
    jpeg-6b/jdapistd.c
    jpeg-6b/jdatadst.c
    jpeg-6b/jdatasrc.c
    jpeg-6b/jdcoefct.c
    jpeg-6b/jdcolor.c
    jpeg-6b/jddctmgr.c
    jpeg-6b/jdhuff.c
    jpeg-6b/jdinput.c
    jpeg-6b/jdmainct.c
    jpeg-6b/jdmarker.c
    jpeg-6b/jdmaster.c
    jpeg-6b/jdmerge.c
    jpeg-6b/jdphuff.c
    jpeg-6b/jdpostct.c
    jpeg-6b/jdsample.c
    jpeg-6b/jdtrans.c
    jpeg-6b/jerror.c
    jpeg-6b/jfdctflt.c
    jpeg-6b/jfdctfst.c
    jpeg-6b/jfdctint.c
    jpeg-6b/jidctflt.c
    jpeg-6b/jidctfst.c
    jpeg-6b/jidctint.c
    jpeg-6b/jidctred.c
    jpeg-6b/jmemmgr.c
    jpeg-6b/jmemnobs.c
    jpeg-6b/jquant1.c
    jpeg-6b/jquant2.c
    jpeg-6b/jutils.c
)
target_include_directories(libjpeg PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/jpeg-6b")
target_compile_definitions(libjpeg PRIVATE _CRT_SECURE_NO_WARNINGS _CRT_NONSTDC_NO_DEPRECATE)

add_library(cximage STATIC
    CxImage/ximadsp.cpp
    CxImage/ximaenc.cpp
    CxImage/ximaexif.cpp
    CxImage/ximage.cpp
    CxImage/ximahist.cpp
    CxImage/ximainfo.cpp
    CxImage/ximaint.cpp
    CxImage/ximajpg.cpp
    CxImage/ximalpha.cpp
    CxImage/ximalyr.cpp
    CxImage/ximapal.cpp
    CxImage/ximapng.cpp
    CxImage/ximasel.cpp
    CxImage/ximath.cpp
    CxImage/ximatran.cpp
    CxImage/ximawnd.cpp
    CxImage/xmemfile.cpp
)
target_include_directories(cximage PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/CxImage")
target_link_libraries(cximage PUBLIC libpng libjpeg zlib)
target_compile_definitions(cximage PRIVATE _CRT_SECURE_NO_WARNINGS _CRT_NONSTDC_NO_DEPRECATE)

add_library(tinyxml STATIC
    tinyxml/tinystr.cpp
    tinyxml/tinyxml.cpp
    tinyxml/tinyxmlerror.cpp
    tinyxml/tinyxmlparser.cpp
)
target_include_directories(tinyxml PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/tinyxml")
target_compile_definitions(tinyxml PUBLIC TIXML_USE_STL)
target_compile_definitions(tinyxml PRIVATE _CRT_SECURE_NO_WARNINGS)

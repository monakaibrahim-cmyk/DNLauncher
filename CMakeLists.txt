cmake_minimum_required(VERSION 3.20)
project(DnLauncher LANGUAGES C CXX RC)

if(NOT CMAKE_SIZEOF_VOID_P EQUAL 4)
    message(WARNING "DNLauncher.exe is a 32-bit x86 binary. Configure with -A Win32 (or x86 vcvars).")
endif()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MFC_FLAG 1) # Static MFC (/MT)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
set(CMAKE_VS_GLOBALS "VcpkgEnabled=false")

set(DNLAUNCHER_REGION "SG" CACHE STRING "Target regional publisher build (SG, US, TWN, KOR, CHN, JPN, THAI, IDN, RUS, EU, BASE)")
set_property(CACHE DNLAUNCHER_REGION PROPERTY STRINGS SG US TWN KOR CHN JPN THAI IDN RUS EU BASE)

add_compile_definitions(
    WIN32
    _WINDOWS
    UNICODE
    _UNICODE
    _${DNLAUNCHER_REGION}
)

enable_testing()

find_package(Python3 COMPONENTS Interpreter)

# Vendored third-party libraries (zlib, libpng, libjpeg, CxImage, TinyXML)
add_subdirectory(vendor)

add_library(DnCommon STATIC
    src/Common/CriticalSection.h
    src/Common/LogWnd.cpp
    src/Common/LogWnd.h
    src/Common/MD5Checksum.cpp
    src/Common/MD5Checksum.h
    src/Common/Stream.cpp
    src/Common/Stream.h
    src/Common/Thread.cpp
    src/Common/Thread.h
)
target_include_directories(DnCommon PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

add_library(EtFileSystem STATIC
    src/EtFileSystem/EtFileSystem.cpp
    src/EtFileSystem/EtFileSystem.h
)
target_include_directories(EtFileSystem PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_link_libraries(EtFileSystem PUBLIC zlib)

add_library(DnUI STATIC
    src/UI/ColorStatic.cpp
    src/UI/ColorStatic.h
    src/UI/SkinButton.cpp
    src/UI/SkinButton.h
    src/UI/SkinProgress.cpp
    src/UI/SkinProgress.h
)
target_include_directories(DnUI PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_link_libraries(DnUI PUBLIC cximage zlib)

add_library(DnPatcher STATIC
    src/Patcher/DnPatchInfo.cpp
    src/Patcher/DnPatchInfo.h
    src/Patcher/DnPatchThread.cpp
    src/Patcher/DnPatchThread.h
)
target_include_directories(DnPatcher PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_link_libraries(DnPatcher PUBLIC EtFileSystem DnCommon tinyxml wininet.lib urlmon.lib)

add_library(DnLauncherCore STATIC
    src/Launcher/DnXml.cpp
    src/Launcher/DnXml.h
    src/Launcher/DnHtmlView.cpp
    src/Launcher/DnHtmlView.h
    src/Launcher/DnView.cpp
    src/Launcher/DnView.h
    src/Launcher/DnOptionData.cpp
    src/Launcher/DnOptionData.h
    src/Launcher/DnOptionDlg.cpp
    src/Launcher/DnOptionDlg.h
    src/Launcher/DnFIrstPatchDlg.cpp
    src/Launcher/DnFIrstPatchDlg.h
    src/Launcher/DnLauncherDlg.cpp
    src/Launcher/DnLauncherDlg.h
    src/Launcher/DnLauncherDlgSG.cpp
    src/Launcher/DnLauncherDlgSG.h
)
target_include_directories(DnLauncherCore PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${CMAKE_CURRENT_SOURCE_DIR}/res"
)
target_link_libraries(DnLauncherCore PUBLIC
    DnUI
    DnPatcher
    EtFileSystem
    DnCommon
    cximage
    tinyxml
    zlib
    wininet.lib
    urlmon.lib
    winmm.lib
    version.lib
    shlwapi.lib
)

# DirectX SDK (June 2010): on Windows 10/11 SDK toolchains, <dxdiag.h> and <d3d9.h>
# already come from the Windows SDK; adding DXSDK_DIR/Include before Windows SDK
# triggers dxgitype.h/dwrite.h conflicts in <wincodec.h>, so we only add it on legacy toolsets.
set(DXSDK_DIR "$ENV{DXSDK_DIR}")
if(NOT DXSDK_DIR AND EXISTS "C:/Program Files (x86)/Microsoft DirectX SDK (June 2010)")
    set(DXSDK_DIR "C:/Program Files (x86)/Microsoft DirectX SDK (June 2010)")
endif()
if(DXSDK_DIR AND EXISTS "${DXSDK_DIR}/Include" AND CMAKE_VS_PLATFORM_TOOLSET_VERSION LESS 140)
    target_include_directories(DnLauncherCore PRIVATE "${DXSDK_DIR}/Include")
endif()

add_executable(DNLauncher WIN32
    src/Launcher/DnLauncherApp.cpp
    src/Launcher/DnLauncherApp.h
    src/stdafx.cpp
    src/stdafx.h
    res/DnLauncher.rc
    res/resource.h
)
target_include_directories(DNLauncher PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${CMAKE_CURRENT_SOURCE_DIR}/res"
)
if(DXSDK_DIR AND EXISTS "${DXSDK_DIR}/Include" AND CMAKE_VS_PLATFORM_TOOLSET_VERSION LESS 140)
    target_include_directories(DNLauncher PRIVATE "${DXSDK_DIR}/Include")
endif()
target_link_libraries(DNLauncher PRIVATE
    DnLauncherCore
    dxguid.lib
)
if(MSVC)
    set_property(TARGET DNLauncher APPEND_STRING PROPERTY LINK_FLAGS " /ENTRY:wWinMainCRTStartup /MANIFEST:NO")
    set_source_files_properties(res/DnLauncher.rc PROPERTIES COMPILE_OPTIONS "/c65001")
endif()

add_executable(DnAutoUpdate WIN32
    src/AutoUpdate/DnAutoUpdateApp.cpp
    src/AutoUpdate/DnAutoUpdateApp.h
    src/AutoUpdate/DnAutoUpdateDlg.cpp
    src/AutoUpdate/DnAutoUpdateDlg.h
    src/AutoUpdate/HttpDownload.cpp
    src/AutoUpdate/HttpDownload.h
    src/stdafx.cpp
    src/stdafx.h
    res/DnAutoUpdate.rc
    res/AutoUpdateResource.h
)
target_include_directories(DnAutoUpdate PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${CMAKE_CURRENT_SOURCE_DIR}/res"
)
target_link_libraries(DnAutoUpdate PRIVATE
    DnCommon
    wininet.lib
    urlmon.lib
    winmm.lib
    shlwapi.lib
    shell32.lib
)
if(MSVC)
    set_property(TARGET DnAutoUpdate APPEND_STRING PROPERTY LINK_FLAGS " /ENTRY:wWinMainCRTStartup /MANIFEST:NO")
    set_source_files_properties(res/DnAutoUpdate.rc PROPERTIES COMPILE_OPTIONS "/c65001")
endif()

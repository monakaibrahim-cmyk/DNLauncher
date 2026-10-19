#pragma once

#define _USE_SINGLE_CLIENT
//#define _USE_COMMAND_LINE
#define _USE_MULTILANGUAGE

#include "resource.h"

// Default Patch Server URL
#define	PATCHCONFIG_LIST_URL	_T( "http://patchsea.dragonnest.com/Game/DragonNest/Patch/" )
#define	PATCHCONFIG_LIST		_T( "PatchConfigList.xml" )

#define DNLAUNCHER_NAME			"DnLauncher.exe"
#define DNLAUNCHER_NAME_TMP		"dnlauncher.tmp"
#define DNCLIENT_NAME			"DragonNest.exe"
#define DNCLIENT_NAME_X64		"DragonNest_x64.exe"
#define DNAUTOUPDATE_NAME		"DnAutoUpdate.exe"
#define CLIENT_VERSION_NAME		_T( "Version.cfg" )
#define SERVER_VERSION_NAME		_T( "PatchInfoServer.cfg" )
#define PATCHINFONAME			_T( "PatchConfig.cfg" )
#define FIRSTPATCHLIST_NAME		_T( "FirstPatchList.txt" )

#define FIRSTPATCH_CONTROL_NAME _T( "FirstPatchControlData.xml" )

#define RETRY_MAX_COUNT		3
#define __MAX_PATH			8192
#define LAUNCHER_VERSION	2
#define _USE_LOG
#define _USE_AUTOUPDATE

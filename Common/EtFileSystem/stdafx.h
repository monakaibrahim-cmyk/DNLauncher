// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows XP or later.                   
#define _WIN32_WINNT 0x0501	// Change this to the appropriate value to target other versions of Windows.
#endif						

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers

#include <windows.h>
#include <tchar.h>
#include <string>

// stl
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <unordered_map>
#include <algorithm>
#include <string>

#include "../DNDefine.h"

#ifdef _UNICODE
typedef std::wstring tstring;
#else
typedef std::string tstring;
#endif

#ifndef SAFE_DELETE
#define SAFE_DELETE(p)       { if(p) { delete (p);     (p)=NULL; } }
#endif    
#ifndef SAFE_DELETE_ARRAY
#define SAFE_DELETE_ARRAY(p) { if(p) { delete[] (p);   (p)=NULL; } }
#endif    
//#ifndef SAFE_RELEASE
//#define SAFE_RELEASE(p)      { if(p) { (p)->Release(); (p)=NULL; } }
//#endif

#ifdef _UNICODE
typedef std::wstring tstring;
#else
typedef std::string tstring;
#endif

// stdafx.h :     ʴ
// ǥ ý    Ʈ    
//  ִ  Դϴ.

#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN		//   ʴ  Windows  մϴ.
#endif

// Ʒ  ÷ 켱ϴ ÷  ϴ   Ǹ Ͻʽÿ.
// ٸ ÷ Ǵ ش  ֽ  MSDN Ͻʽÿ.
#ifndef WINVER				// Windows XP ̻󿡼    ֽϴ.
#define WINVER 0x0601		// ٸ  Windows µ    ֽʽÿ.
#endif

#ifndef _WIN32_WINNT		// Windows XP ̻󿡼    ֽϴ.                   
#define _WIN32_WINNT 0x0601	// ٸ  Windows µ    ֽʽÿ.
#endif						

#ifndef _WIN32_WINDOWS		// Windows 98 ̻󿡼    ֽϴ.
#define _WIN32_WINDOWS 0x0410 // Windows Me ̻ µ    ֽʽÿ.
#endif

#ifndef _WIN32_IE			// IE 6.0 ̻󿡼    ֽϴ.
#define _WIN32_IE 0x0600	// ٸ  IE µ    ֽʽÿ.
#endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// Ϻ CString ڴ  ˴ϴ.

// MFC  κа    ޽  ⸦ մϴ.
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC ٽ  ǥ  Դϴ.
#include <afxext.h>         // MFC ȮԴϴ.


#include <afxdisp.h>        // MFC ڵȭ ŬԴϴ.



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>		// Internet Explorer 4  Ʈѿ  MFC Դϴ.
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// Windows  Ʈѿ  MFC Դϴ.
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <vector>
using namespace std;

#include "wininet.h"
#pragma comment ( lib, "Wininet.lib" )

#ifndef SAFE_DELETE
#define SAFE_DELETE(x) if(x) { delete x; x=NULL; }
#endif // SAFE_DELETE

#define RETRY_MAX_COUNT	3



#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif



#include "DnUtil.h"
#include "stdafx.h"
#include "Tlhelp32.h"
#include <dxdiag.h>
#include <strsafe.h>
#include "LogWnd.h"
#include <d3d9.h>


#pragma warning( disable : 4995 )

#pragma comment( lib, "Version.lib" )
#pragma comment( lib, "dxguid.lib" )
#pragma comment( lib, "D3d9.lib" )

void ErrorMessageBoxLog( UINT uiStringID )
{
	LogWnd::Log( LogLevel::Error, _S(uiStringID) );
	AfxMessageBox( uiStringID );	
}

void ErrorMessageBoxLog( CString strString )
{
	LogWnd::Log( LogLevel::Error, strString );
	AfxMessageBox( strString );	
}

CString _fnLoadString( UINT id )
{
	CString sMsg = L"";
	
	if( id > 0 )
		sMsg.LoadString( id );

	return sMsg;
}

BOOL ClientDeleteFile( LPCTSTR strFileName )
{
	DWORD dwNowTime = timeGetTime();

	if( ::GetFileAttributes( strFileName ) != 0xFFFFFFFF )
	{
		while( 1 )
		{
			if( timeGetTime() > dwNowTime + 5000 )
			{
				CString strError;
				strError.Format( L"%s %s", strFileName, _S( STR_DELETE_FILE_FAIL + DNPATCHINFO.GetLanguageOffset() ) );
				ErrorMessageBoxLog( strError );
				return FALSE; 
			}

			DWORD dwAttr = ::GetFileAttributes( strFileName );
			if( dwAttr & FILE_ATTRIBUTE_READONLY )
			{
				dwAttr &= ~FILE_ATTRIBUTE_READONLY;
				::SetFileAttributes( strFileName , dwAttr );
			}
			if( DeleteFile( strFileName ) ) 
			{
				return TRUE; 
			}
		}
	}

	return TRUE;
}

BOOL KillProcess( LPCTSTR strProcessName )
{
	LogWnd::TraceLog( _T("KillProcess") );

	WCHAR ExeName[1024] = {0,};
	wsprintf( ExeName , L"%s" , strProcessName );
	_tcsupr_s( ExeName );

	HANDLE hSnapshot = CreateToolhelp32Snapshot( TH32CS_SNAPPROCESS, 0 );
	DWORD dwProcessID = GetCurrentProcessId();

	if ( hSnapshot != INVALID_HANDLE_VALUE ) 
	{ 
		PROCESSENTRY32 pe32 ; 
		pe32.dwSize=sizeof(PROCESSENTRY32); 
		BOOL bContinue ; 

		TCHAR strProcessName[ 1024 ] = {0,}; 

		if ( Process32First ( hSnapshot, &pe32 ) ) 
		{ 
			do 
			{ 
				if( pe32.th32ProcessID == dwProcessID  ) 
				{
					bContinue = Process32Next( hSnapshot, &pe32 ); 
					continue;
				}

				wsprintf( strProcessName , L"%s" , pe32.szExeFile );
				_tcsupr_s( strProcessName );               

				if( ( _tcsicmp(strProcessName, ExeName) != NULL ) ) 
				{ 
					HANDLE hProcess = OpenProcess( PROCESS_ALL_ACCESS, 0, pe32.th32ProcessID ); 
					if( hProcess ) 
					{ 
						DWORD       dwExitCode; 
						GetExitCodeProcess( hProcess, &dwExitCode); 
						TerminateProcess( hProcess, dwExitCode); 
						CloseHandle(hProcess); 
					} 

				} 
				bContinue = Process32Next( hSnapshot, &pe32 ); 
			}
			while ( bContinue );        
		} 
		CloseHandle( hSnapshot );
	}
	return TRUE;
}

BOOL FindProcessName( LPCTSTR strProcessName )
{
	HANDLE hProcessSnap = NULL;
	PROCESSENTRY32 pe32 = {0};
	UINT i;

	hProcessSnap = CreateToolhelp32Snapshot( TH32CS_SNAPPROCESS, 0 );

	if( hProcessSnap == INVALID_HANDLE_VALUE )
		return FALSE;

	pe32.dwSize = sizeof(PROCESSENTRY32);

	if( Process32First( hProcessSnap, &pe32 ) )
	{
		do
		{
			for( i=0; i<=_tcslen(pe32.szExeFile); i++ )
			{
				pe32.szExeFile[i] = tolower( pe32.szExeFile[i] );
			}

			if( _tcsicmp(pe32.szExeFile, strProcessName) == 0 )
			{ 
				CloseHandle( hProcessSnap );
				return TRUE;
			}
		}
		while( Process32Next( hProcessSnap, &pe32 ) );
	}

	CloseHandle( hProcessSnap ); 
	return FALSE;
}

HRGN CreateRgnFromFile( HBITMAP hBmp, COLORREF color )
{
	// get image properties
	BITMAP bmp = { 0 };
	GetObject( hBmp, sizeof(BITMAP), &bmp );
	// allocate memory for extended image information
	LPBITMAPINFO bi = (LPBITMAPINFO) new BYTE[ sizeof(BITMAPINFO) + 8 ];
	memset( bi, 0, sizeof(BITMAPINFO) + 8 );
	bi->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
	// create temporary dc
	HDC dc = CreateIC( _T("DISPLAY"),NULL,NULL,NULL );
	// get extended information about image (length, compression, length of color table if exist, ...)
	DWORD res = GetDIBits( dc, hBmp, 0, bmp.bmHeight, 0, bi, DIB_RGB_COLORS );
	// allocate memory for image data (colors)
	LPBYTE pBits = new BYTE[ bi->bmiHeader.biSizeImage + 4 ];
	// allocate memory for color table
	if ( bi->bmiHeader.biBitCount == 8 )
	{
		// actually color table should be appended to this header(BITMAPINFO),
		// so we have to reallocate and copy it
		LPBITMAPINFO old_bi = bi;
		// 255 - because there is one in BITMAPINFOHEADER
		bi = (LPBITMAPINFO)new char[ sizeof(BITMAPINFO) + 255 * sizeof(RGBQUAD) ];
		memcpy( bi, old_bi, sizeof(BITMAPINFO) );
		// release old header
		delete old_bi;
	}
	// get bitmap info header
	BITMAPINFOHEADER& bih = bi->bmiHeader;
	// get color table (for 256 color mode contains 256 entries of RGBQUAD(=DWORD))
	LPDWORD clr_tbl = (LPDWORD)&bi->bmiColors;
	// fill bits buffer
	res = GetDIBits( dc, hBmp, 0, bih.biHeight, pBits, bi, DIB_RGB_COLORS );
	DeleteDC( dc );

	BITMAP bm;
	GetObject( hBmp, sizeof(BITMAP), &bm );
	// shift bits and byte per pixel (for comparing colors)
	LPBYTE pClr = (LPBYTE)&color;
	// swap red and blue components
	BYTE tmp = pClr[0]; pClr[0] = pClr[2]; pClr[2] = tmp;
	// convert color if curent DC is 16-bit (5:6:5) or 15-bit (5:5:5)
	if ( bih.biBitCount == 16 )
	{
		// for 16 bit
		color = ((DWORD)(pClr[0] & 0xf8) >> 3) |
			((DWORD)(pClr[1] & 0xfc) << 3) |
			((DWORD)(pClr[2] & 0xf8) << 8);
		// for 15 bit
//		color = ((DWORD)(pClr[0] & 0xf8) >> 3) |
//				((DWORD)(pClr[1] & 0xf8) << 2) |
//				((DWORD)(pClr[2] & 0xf8) << 7);
	}

	const DWORD RGNDATAHEADER_SIZE	= sizeof(RGNDATAHEADER);
	const DWORD ADD_RECTS_COUNT		= 40;			// number of rects to be appended
	// to region data buffer

	// BitPerPixel
	BYTE	Bpp = bih.biBitCount >> 3;				// bytes per pixel
	// bytes per line in pBits is DWORD aligned and bmp.bmWidthBytes is WORD aligned
	// so, both of them not
	DWORD m_dwAlignedWidthBytes = (bmp.bmWidthBytes & ~0x3) + (!!(bmp.bmWidthBytes & 0x3) << 2);
	// DIB image is flipped that's why we scan it from the last line
	LPBYTE	pColor = pBits + (bih.biHeight - 1) * m_dwAlignedWidthBytes;
	DWORD	dwLineBackLen = m_dwAlignedWidthBytes + bih.biWidth * Bpp;	// offset of previous scan line
	// (after processing of current)
	DWORD	dwRectsCount = bih.biHeight;			// number of rects in allocated buffer
	INT		i, j;									// current position in mask image
	INT		first = 0;								// left position of current scan line
	// where mask was found
	bool	wasfirst = false;						// set when mask has been found in current scan line
	bool	ismask = false;							// set when current color is mask color

	// allocate memory for region data
	// region data here is set of regions that are rectangles with height 1 pixel (scan line)
	// that's why first allocation is <bm.biHeight> RECTs - number of scan lines in image
	RGNDATAHEADER* pRgnData = 
		(RGNDATAHEADER*)new BYTE[ RGNDATAHEADER_SIZE + dwRectsCount * sizeof(RECT) ];
	// get pointer to RECT table
	LPRECT pRects = (LPRECT)((LPBYTE)pRgnData + RGNDATAHEADER_SIZE);
	// zero region data header memory (header  part only)
	memset( pRgnData, 0, RGNDATAHEADER_SIZE + dwRectsCount * sizeof(RECT) );
	// fill it by default
	pRgnData->dwSize	= RGNDATAHEADER_SIZE;
	pRgnData->iType		= RDH_RECTANGLES;

	for ( i = 0; i < bih.biHeight; i++ )
	{
		for ( j = 0; j < bih.biWidth; j++ )
		{
			// get color
			switch ( bih.biBitCount )
			{
			case 8:
				ismask = (clr_tbl[ *pColor ] != color);
				break;
			case 16:
				ismask = (*(LPWORD)pColor != (WORD)color);
				break;
			case 24:
				ismask = ((*(LPDWORD)pColor & 0x00ffffff) != color);
				break;
			case 32:
				ismask = (*(LPDWORD)pColor != color);
			}
			// shift pointer to next color
			pColor += Bpp;
			// place part of scan line as RECT region if transparent color found after mask color or
			// mask color found at the end of mask image
			if ( wasfirst )
			{
				if ( !ismask )
				{
					// save current RECT
					pRects[ pRgnData->nCount++ ] = CRect( first, i, j, i + 1 );
					// if buffer full reallocate it with more room
					if ( pRgnData->nCount >= dwRectsCount )
					{
						dwRectsCount += ADD_RECTS_COUNT;
						// allocate new buffer
						LPBYTE pRgnDataNew = new BYTE[ RGNDATAHEADER_SIZE + dwRectsCount * sizeof(RECT) ];
						// copy current region data to it
						memcpy( pRgnDataNew, pRgnData, RGNDATAHEADER_SIZE + pRgnData->nCount * sizeof(RECT) );
						// delte old region data buffer
						delete pRgnData;
						// set pointer to new regiondata buffer to current
						pRgnData = (RGNDATAHEADER*)pRgnDataNew;
						// correct pointer to RECT table
						pRects = (LPRECT)((LPBYTE)pRgnData + RGNDATAHEADER_SIZE);
					}
					wasfirst = false;
				}
			}
			else if ( ismask )		// set wasfirst when mask is found
			{
				first = j;
				wasfirst = true;
			}
		}

		if ( wasfirst && ismask )
		{
			// save current RECT
			pRects[ pRgnData->nCount++ ] = CRect( first, i, j, i + 1 );
			// if buffer full reallocate it with more room
			if ( pRgnData->nCount >= dwRectsCount )
			{
				dwRectsCount += ADD_RECTS_COUNT;
				// allocate new buffer
				LPBYTE pRgnDataNew = new BYTE[ RGNDATAHEADER_SIZE + dwRectsCount * sizeof(RECT) ];
				// copy current region data to it
				memcpy( pRgnDataNew, pRgnData, RGNDATAHEADER_SIZE + pRgnData->nCount * sizeof(RECT) );
				// delte old region data buffer
				delete pRgnData;
				// set pointer to new regiondata buffer to current
				pRgnData = (RGNDATAHEADER*)pRgnDataNew;
				// correct pointer to RECT table
				pRects = (LPRECT)((LPBYTE)pRgnData + RGNDATAHEADER_SIZE);
			}
			wasfirst = false;
		}

		pColor -= dwLineBackLen;
	}
	// release image data
	delete [] pBits;
	delete bi;

	// create region
	HRGN hRgn = ExtCreateRegion( NULL, RGNDATAHEADER_SIZE + pRgnData->nCount * sizeof(RECT), (LPRGNDATA)pRgnData );
	// release region data
	delete pRgnData;

	return hRgn;
}

//-----------------------------------------------------------------------------
// Name: GetDXVersion()
// Desc: This function returns the DirectX version.
// Arguments:
//      pdwDirectXVersion - This can be NULL.  If non-NULL, the return value is:
//              0x00000000 = No DirectX installed
//              0x00010000 = DirectX 1.0 installed
//              0x00020000 = DirectX 2.0 installed
//              0x00030000 = DirectX 3.0 installed
//              0x00030001 = DirectX 3.0a installed
//              0x00050000 = DirectX 5.0 installed
//              0x00060000 = DirectX 6.0 installed
//              0x00060100 = DirectX 6.1 installed
//              0x00060101 = DirectX 6.1a installed
//              0x00070000 = DirectX 7.0 installed
//              0x00070001 = DirectX 7.0a installed
//              0x00080000 = DirectX 8.0 installed
//              0x00080100 = DirectX 8.1 installed
//              0x00080101 = DirectX 8.1a installed
//              0x00080102 = DirectX 8.1b installed
//              0x00080200 = DirectX 8.2 installed
//              0x00090000 = DirectX 9.0 installed
//      strDirectXVersion - Destination string to receive a string name of the DirectX Version.  Can be NULL.
//      cchDirectXVersion - Size of destination buffer in characters.  Length should be at least 10 chars.
// Returns: S_OK if the function succeeds.
//          E_FAIL if the DirectX version info couldn't be determined.
//
// Please note that this code is intended as a general guideline. Your
// app will probably be able to simply query for functionality (via
// QueryInterface) for one or two components.
//
// Also please ensure your app will run on future releases of DirectX.
// For example:
//     "if( dwDirectXVersion != 0x00080100 ) return false;" is VERY BAD.
//     "if( dwDirectXVersion < 0x00080100 ) return false;" is MUCH BETTER.
//-----------------------------------------------------------------------------
HRESULT GetDXVersion( DWORD* pdwDirectXVersion, TCHAR* strDirectXVersion, int cchDirectXVersion )
{
	bool bGotDirectXVersion = false;

	// Init values to unknown
	if( pdwDirectXVersion )
		*pdwDirectXVersion = 0;
	if( strDirectXVersion && cchDirectXVersion > 0 )
		strDirectXVersion[0] = 0;

	DWORD dwDirectXVersionMajor = 0;
	DWORD dwDirectXVersionMinor = 0;
	TCHAR cDirectXVersionLetter = ' ';

	// First, try to use dxdiag's COM interface to get the DirectX version.
	// The only downside is this will only work on DirectX9 or later.
	if( SUCCEEDED( GetDirectXVersionViaDxDiag( &dwDirectXVersionMajor, &dwDirectXVersionMinor, &cDirectXVersionLetter ) ) )
		bGotDirectXVersion = true;

	if( !bGotDirectXVersion )
	{
		// Getting the DirectX version info from DxDiag failed,
		// so most likely we are on DirectX8.x or earlier
		if( SUCCEEDED( GetDirectXVersionViaFileVersions( &dwDirectXVersionMajor, &dwDirectXVersionMinor, &cDirectXVersionLetter ) ) )
			bGotDirectXVersion = true;
	}

	// If both techniques failed, then return E_FAIL
	if( !bGotDirectXVersion )
		return E_FAIL;

	// Set the output values to what we got and return
	cDirectXVersionLetter = (char)tolower(cDirectXVersionLetter);

	if( pdwDirectXVersion )
	{
		// If pdwDirectXVersion is non-NULL, then set it to something
		// like 0x00080102 which would represent DirectX8.1b
		DWORD dwDirectXVersion = dwDirectXVersionMajor;
		dwDirectXVersion <<= 8;
		dwDirectXVersion += dwDirectXVersionMinor;
		dwDirectXVersion <<= 8;
		if( cDirectXVersionLetter >= 'a' && cDirectXVersionLetter <= 'z' )
			dwDirectXVersion += (cDirectXVersionLetter - 'a') + 1;

		*pdwDirectXVersion = dwDirectXVersion;
	}

	if( strDirectXVersion && cchDirectXVersion > 0 )
	{
		// If strDirectXVersion is non-NULL, then set it to something
		// like "8.1b" which would represent DirectX8.1b
		if( cDirectXVersionLetter == ' ' )
			StringCchPrintf( strDirectXVersion, cchDirectXVersion, TEXT("%d.%d"), dwDirectXVersionMajor, dwDirectXVersionMinor );
		else
			StringCchPrintf( strDirectXVersion, cchDirectXVersion, TEXT("%d.%d%c"), dwDirectXVersionMajor, dwDirectXVersionMinor, cDirectXVersionLetter );
	}

	return S_OK;
}

//-----------------------------------------------------------------------------
// Name: GetDirectXVersionViaDxDiag()
// Desc: Tries to get the DirectX version from DxDiag's COM interface
//-----------------------------------------------------------------------------
HRESULT GetDirectXVersionViaDxDiag( DWORD* pdwDirectXVersionMajor, DWORD* pdwDirectXVersionMinor, 
								   TCHAR* pcDirectXVersionLetter )
{
	HRESULT hr;
	bool bCleanupCOM = false;

	bool bSuccessGettingMajor = false;
	bool bSuccessGettingMinor = false;
	bool bSuccessGettingLetter = false;

	// Init COM.  COM may fail if its already been inited with a different
	// concurrency model.  And if it fails you shouldn't release it.
	hr = CoInitialize(NULL);
	bCleanupCOM = SUCCEEDED(hr);

	// Get an IDxDiagProvider
	bool bGotDirectXVersion = false;
	IDxDiagProvider* pDxDiagProvider = NULL;
	hr = CoCreateInstance( CLSID_DxDiagProvider, NULL, CLSCTX_INPROC_SERVER,
							IID_IDxDiagProvider, (LPVOID*) &pDxDiagProvider );
	if( SUCCEEDED(hr) )
	{
		// Fill out a DXDIAG_INIT_PARAMS struct
		DXDIAG_INIT_PARAMS dxDiagInitParam;
		ZeroMemory( &dxDiagInitParam, sizeof(DXDIAG_INIT_PARAMS) );
		dxDiagInitParam.dwSize                  = sizeof(DXDIAG_INIT_PARAMS);
		dxDiagInitParam.dwDxDiagHeaderVersion   = DXDIAG_DX9_SDK_VERSION;
		dxDiagInitParam.bAllowWHQLChecks        = false;
		dxDiagInitParam.pReserved               = NULL;

		// Init the m_pDxDiagProvider
		hr = pDxDiagProvider->Initialize( &dxDiagInitParam );
		if( SUCCEEDED(hr) )
		{
			IDxDiagContainer* pDxDiagRoot = NULL;
			IDxDiagContainer* pDxDiagSystemInfo = NULL;

			// Get the DxDiag root container
			hr = pDxDiagProvider->GetRootContainer( &pDxDiagRoot );
			if( SUCCEEDED(hr) )
			{
				// Get the object called DxDiag_SystemInfo
				hr = pDxDiagRoot->GetChildContainer( L"DxDiag_SystemInfo", &pDxDiagSystemInfo );
				if( SUCCEEDED(hr) )
				{
					VARIANT var;
					VariantInit( &var );

					// Get the "dwDirectXVersionMajor" property
					hr = pDxDiagSystemInfo->GetProp( L"dwDirectXVersionMajor", &var );
					if( SUCCEEDED(hr) && var.vt == VT_UI4 )
					{
						if( pdwDirectXVersionMajor )
							*pdwDirectXVersionMajor = var.ulVal;
						bSuccessGettingMajor = true;
					}
					VariantClear( &var );

					// Get the "dwDirectXVersionMinor" property
					hr = pDxDiagSystemInfo->GetProp( L"dwDirectXVersionMinor", &var );
					if( SUCCEEDED(hr) && var.vt == VT_UI4 )
					{
						if( pdwDirectXVersionMinor )
							*pdwDirectXVersionMinor = var.ulVal;
						bSuccessGettingMinor = true;
					}
					VariantClear( &var );

					// Get the "szDirectXVersionLetter" property
					hr = pDxDiagSystemInfo->GetProp( L"szDirectXVersionLetter", &var );
					if( SUCCEEDED(hr) && var.vt == VT_BSTR && SysStringLen( var.bstrVal ) != 0 )
					{
#ifdef UNICODE
						*pcDirectXVersionLetter = var.bstrVal[0];
#else
						char strDestination[10];
						WideCharToMultiByte( CP_ACP, 0, var.bstrVal, -1, strDestination, 10*sizeof(CHAR), NULL, NULL );
						if( pcDirectXVersionLetter )
							*pcDirectXVersionLetter = strDestination[0];
#endif
						bSuccessGettingLetter = true;
					}
					VariantClear( &var );

					// If it all worked right, then mark it down
					if( bSuccessGettingMajor && bSuccessGettingMinor && bSuccessGettingLetter )
						bGotDirectXVersion = true;

					pDxDiagSystemInfo->Release();
				}

				pDxDiagRoot->Release();
			}
		}

		pDxDiagProvider->Release();
	}

	if( bCleanupCOM )
		CoUninitialize();

	if( bGotDirectXVersion )
		return S_OK;
	else
		return E_FAIL;
}

//-----------------------------------------------------------------------------
// Name: GetDirectXVersionViaFileVersions()
// Desc: Tries to get the DirectX version by looking at DirectX file versions
//-----------------------------------------------------------------------------
HRESULT GetDirectXVersionViaFileVersions( DWORD* pdwDirectXVersionMajor, DWORD* pdwDirectXVersionMinor,
										 TCHAR* pcDirectXVersionLetter )
{
	ULARGE_INTEGER llFileVersion;
	TCHAR szPath[512];
	TCHAR szFile[512];
	BOOL bFound = false;

	if( GetSystemDirectory( szPath, MAX_PATH ) != 0 )
	{
		szPath[MAX_PATH-1]=0;

		// Switch off the ddraw version
		StringCchCopy( szFile, 512, szPath );
		StringCchCat( szFile, 512, TEXT("\\ddraw.dll") );
		if( SUCCEEDED( GetFileVersion( szFile, &llFileVersion ) ) )
		{
			if( CompareLargeInts( llFileVersion, MakeInt64( 4, 2, 0, 95 ) ) >= 0 ) // Win9x version
			{
				// flle is >= DirectX1.0 version, so we must be at least DirectX1.0
				if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 1;
				if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 0;
				if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT(' ');
				bFound = true;
			}

			if( CompareLargeInts( llFileVersion, MakeInt64( 4, 3, 0, 1096 ) ) >= 0 ) // Win9x version
			{
				// flle is is >= DirectX2.0 version, so we must DirectX2.0 or DirectX2.0a (no redist change)
				if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 2;
				if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 0;
				if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT(' ');
				bFound = true;
			}

			if( CompareLargeInts( llFileVersion, MakeInt64( 4, 4, 0, 68 ) ) >= 0 ) // Win9x version
			{
				// flle is is >= DirectX3.0 version, so we must be at least DirectX3.0
				if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 3;
				if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 0;
				if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT(' ');
				bFound = true;
			}
		}

		// Switch off the d3drg8x.dll version
		StringCchCopy( szFile, 512, szPath );
		StringCchCat( szFile, 512, TEXT("\\d3drg8x.dll") );
		if( SUCCEEDED( GetFileVersion( szFile, &llFileVersion ) ) )
		{
			if( CompareLargeInts( llFileVersion, MakeInt64( 4, 4, 0, 70 ) ) >= 0 ) // Win9x version
			{
				// d3drg8x.dll is the DirectX3.0a version, so we must be DirectX3.0a or DirectX3.0b  (no redist change)
				if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 3;
				if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 0;
				if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT('a');
				bFound = true;
			}
		}

		// Switch off the ddraw version
		StringCchCopy( szFile, 512, szPath );
		StringCchCat( szFile, 512, TEXT("\\ddraw.dll") );
		if( SUCCEEDED( GetFileVersion( szFile, &llFileVersion ) ) )
		{
			if( CompareLargeInts( llFileVersion, MakeInt64( 4, 5, 0, 155 ) ) >= 0 ) // Win9x version
			{
				// ddraw.dll is the DirectX5.0 version, so we must be DirectX5.0 or DirectX5.2 (no redist change)
				if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 5;
				if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 0;
				if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT(' ');
				bFound = true;
			}

			if( CompareLargeInts( llFileVersion, MakeInt64( 4, 6, 0, 318 ) ) >= 0 ) // Win9x version
			{
				// ddraw.dll is the DirectX6.0 version, so we must be at least DirectX6.0
				if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 6;
				if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 0;
				if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT(' ');
				bFound = true;
			}

			if( CompareLargeInts( llFileVersion, MakeInt64( 4, 6, 0, 436 ) ) >= 0 ) // Win9x version
			{
				// ddraw.dll is the DirectX6.1 version, so we must be at least DirectX6.1
				if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 6;
				if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 1;
				if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT(' ');
				bFound = true;
			}
		}

		// Switch off the dplayx.dll version
		StringCchCopy( szFile, 512, szPath );
		StringCchCat( szFile, 512, TEXT("\\dplayx.dll") );
		if( SUCCEEDED( GetFileVersion( szFile, &llFileVersion ) ) )
		{
			if( CompareLargeInts( llFileVersion, MakeInt64( 4, 6, 3, 518 ) ) >= 0 ) // Win9x version
			{
				// ddraw.dll is the DirectX6.1 version, so we must be at least DirectX6.1a
				if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 6;
				if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 1;
				if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT('a');
				bFound = true;
			}
		}

		// Switch off the ddraw version
		StringCchCopy( szFile, 512, szPath );
		StringCchCat( szFile, 512, TEXT("\\ddraw.dll") );
		if( SUCCEEDED( GetFileVersion( szFile, &llFileVersion ) ) )
		{
			if( CompareLargeInts( llFileVersion, MakeInt64( 4, 7, 0, 700 ) ) >= 0 ) // Win9x version
			{
				// TODO: find win2k version

				// ddraw.dll is the DirectX7.0 version, so we must be at least DirectX7.0
				if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 7;
				if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 0;
				if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT(' ');
				bFound = true;
			}
		}

		// Switch off the dinput version
		StringCchCopy( szFile, 512, szPath );
		StringCchCat( szFile, 512, TEXT("\\dinput.dll") );
		if( SUCCEEDED( GetFileVersion( szFile, &llFileVersion ) ) )
		{
			if( CompareLargeInts( llFileVersion, MakeInt64( 4, 7, 0, 716 ) ) >= 0 ) // Win9x version
			{
				// ddraw.dll is the DirectX7.0 version, so we must be at least DirectX7.0a
				if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 7;
				if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 0;
				if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT('a');
				bFound = true;
			}
		}

		// Switch off the ddraw version
		StringCchCopy( szFile, 512, szPath );
		StringCchCat( szFile, 512, TEXT("\\ddraw.dll") );
		if( SUCCEEDED( GetFileVersion( szFile, &llFileVersion ) ) )
		{
			if( (HIWORD(llFileVersion.HighPart) == 4 && CompareLargeInts( llFileVersion, MakeInt64( 4, 8, 0, 400 ) ) >= 0) || // Win9x version
				(HIWORD(llFileVersion.HighPart) == 5 && CompareLargeInts( llFileVersion, MakeInt64( 5, 1, 2258, 400 ) ) >= 0) ) // Win2k/WinXP version
			{
				// ddraw.dll is the DirectX8.0 version, so we must be at least DirectX8.0 or DirectX8.0a (no redist change)
				if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 8;
				if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 0;
				if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT(' ');
				bFound = true;
			}
		}

		StringCchCopy( szFile, 512, szPath );
		StringCchCat( szFile, 512, TEXT("\\d3d8.dll"));
		if( SUCCEEDED( GetFileVersion( szFile, &llFileVersion ) ) )
		{
			if( (HIWORD(llFileVersion.HighPart) == 4 && CompareLargeInts( llFileVersion, MakeInt64( 4, 8, 1, 881 ) ) >= 0) || // Win9x version
				(HIWORD(llFileVersion.HighPart) == 5 && CompareLargeInts( llFileVersion, MakeInt64( 5, 1, 2600, 881 ) ) >= 0) ) // Win2k/WinXP version
			{
				// d3d8.dll is the DirectX8.1 version, so we must be at least DirectX8.1
				if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 8;
				if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 1;
				if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT(' ');
				bFound = true;
			}

			if( (HIWORD(llFileVersion.HighPart) == 4 && CompareLargeInts( llFileVersion, MakeInt64( 4, 8, 1, 901 ) ) >= 0) || // Win9x version
				(HIWORD(llFileVersion.HighPart) == 5 && CompareLargeInts( llFileVersion, MakeInt64( 5, 1, 2600, 901 ) ) >= 0) ) // Win2k/WinXP version
			{
				// d3d8.dll is the DirectX8.1a version, so we must be at least DirectX8.1a
				if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 8;
				if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 1;
				if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT('a');
				bFound = true;
			}
		}

		StringCchCopy( szFile, 512, szPath );
		StringCchCat( szFile, 512, TEXT("\\mpg2splt.ax"));
		if( SUCCEEDED( GetFileVersion( szFile, &llFileVersion ) ) )
		{
			if( CompareLargeInts( llFileVersion, MakeInt64( 6, 3, 1, 885 ) ) >= 0 ) // Win9x/Win2k/WinXP version
			{
				// quartz.dll is the DirectX8.1b version, so we must be at least DirectX8.1b
				if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 8;
				if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 1;
				if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT('b');
				bFound = true;
			}
		}

		StringCchCopy( szFile, 512, szPath );
		StringCchCat( szFile, 512, TEXT("\\dpnet.dll"));
		if( SUCCEEDED( GetFileVersion( szFile, &llFileVersion ) ) )
		{
			if( (HIWORD(llFileVersion.HighPart) == 4 && CompareLargeInts( llFileVersion, MakeInt64( 4, 9, 0, 134 ) ) >= 0) || // Win9x version
				(HIWORD(llFileVersion.HighPart) == 5 && CompareLargeInts( llFileVersion, MakeInt64( 5, 2, 3677, 134 ) ) >= 0) ) // Win2k/WinXP version
			{
				// dpnet.dll is the DirectX8.2 version, so we must be at least DirectX8.2
				if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 8;
				if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 2;
				if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT(' ');
				bFound = true;
			}
		}

		StringCchCopy( szFile, 512, szPath );
		StringCchCat( szFile, 512, TEXT("\\d3d9.dll"));
		if( SUCCEEDED( GetFileVersion( szFile, &llFileVersion ) ) )
		{
			// File exists, but be at least DirectX9
			if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 9;
			if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 0;
			if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT(' ');
			bFound = true;
		}
	}

	if( !bFound )
	{
		// No DirectX installed
		if( pdwDirectXVersionMajor ) *pdwDirectXVersionMajor = 0;
		if( pdwDirectXVersionMinor ) *pdwDirectXVersionMinor = 0;
		if( pcDirectXVersionLetter ) *pcDirectXVersionLetter = TEXT(' ');
	}

	return S_OK;
}

//-----------------------------------------------------------------------------
// Name: MakeInt64()
// Desc: Returns a ULARGE_INTEGER where a<<48|b<<32|c<<16|d<<0
//-----------------------------------------------------------------------------
ULARGE_INTEGER MakeInt64( WORD a, WORD b, WORD c, WORD d )
{
	ULARGE_INTEGER ull;
	ull.HighPart = MAKELONG(b,a);
	ull.LowPart = MAKELONG(d,c);
	return ull;
}

//-----------------------------------------------------------------------------
// Name: CompareLargeInts()
// Desc: Returns 1 if ullParam1 > ullParam2
//       Returns 0 if ullParam1 = ullParam2
//       Returns -1 if ullParam1 < ullParam2
//-----------------------------------------------------------------------------
int CompareLargeInts( ULARGE_INTEGER ullParam1, ULARGE_INTEGER ullParam2 )
{
	if( ullParam1.HighPart > ullParam2.HighPart )
		return 1;
	if( ullParam1.HighPart < ullParam2.HighPart )
		return -1;

	if( ullParam1.LowPart > ullParam2.LowPart )
		return 1;
	if( ullParam1.LowPart < ullParam2.LowPart )
		return -1;

	return 0;
}

//-----------------------------------------------------------------------------
// Name: GetFileVersion()
// Desc: Returns ULARGE_INTEGER with a file version of a file, or a failure code.
//-----------------------------------------------------------------------------
HRESULT GetFileVersion( TCHAR* szPath, ULARGE_INTEGER* pllFileVersion )
{
	if( szPath == NULL || pllFileVersion == NULL )
		return E_INVALIDARG;

	DWORD dwHandle;
	UINT  cb;
	cb = GetFileVersionInfoSize( szPath, &dwHandle );
	if (cb > 0)
	{
		BYTE* pFileVersionBuffer = new BYTE[cb];
		if( pFileVersionBuffer == NULL )
			return E_OUTOFMEMORY;

		if( GetFileVersionInfo( szPath, 0, cb, pFileVersionBuffer ) )
		{
			VS_FIXEDFILEINFO* pVersion = NULL;
			if( VerQueryValue( pFileVersionBuffer, TEXT("\\"), (VOID**)&pVersion, &cb ) &&
				pVersion != NULL )
			{
				pllFileVersion->HighPart = pVersion->dwFileVersionMS;
				pllFileVersion->LowPart  = pVersion->dwFileVersionLS;
				delete[] pFileVersionBuffer;
				return S_OK;
			}
		}

		delete[] pFileVersionBuffer;
	}

	return E_FAIL;
}

void EnumDisplayMode( std::vector<POINT>& vecDisplayMode )
{
	D3DCAPS9	d3dCaps;
	LPDIRECT3D9	pD3D;

	pD3D = Direct3DCreate9( D3D_SDK_VERSION );
	pD3D->GetDeviceCaps( D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, &d3dCaps);
	D3DADAPTER_IDENTIFIER9 did;
	pD3D->GetAdapterIdentifier( D3DADAPTER_DEFAULT, 0, &did );

	int i, nCount,insertNum;
	D3DDISPLAYMODE DisplayMode;
	vecDisplayMode.clear();

	nCount = pD3D->GetAdapterModeCount( 0, D3DFMT_X8R8G8B8 );
	insertNum = 0;
	for( i=0; i<nCount; i++ )
	{
		pD3D->EnumAdapterModes( 0, D3DFMT_X8R8G8B8, i, &DisplayMode );
		if( ( DisplayMode.Height / ( float )DisplayMode.Width ) > 0.5f && ( DisplayMode.Width >= 1024 && DisplayMode.Height >= 720 ) )	// Only select 16:9 or supported resolutions >= 1024x720
		{
			POINT Resol;
			Resol.x = DisplayMode.Width;
			Resol.y = DisplayMode.Height;

			if( insertNum > 0 && ( vecDisplayMode[insertNum-1].x == Resol.x && vecDisplayMode[insertNum-1].y == Resol.y) )
				continue;
			vecDisplayMode.push_back( Resol );
			insertNum++;
		}
	}

	pD3D->Release();
}

HRESULT DownloadToFile( LPCTSTR strDownloadUrl, LPCTSTR strSaveFilePath )
{
	HINTERNET hInternetSession;
	HINTERNET hHttpConnection;
	// Open Internet Session
	LogWnd::TraceLog( L"Open Internet Session" );
	hInternetSession = InternetOpen( NULL, INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0 );

	if( hInternetSession == NULL )
	{
		LogWnd::Log( LogLevel::Error, L"Internet Session Open Failed!" );
		return S_FALSE;
	}

	// Open Http Connection
	LogWnd::TraceLog( L"Open Http Connection" );
	CString strAddHeader;
	strAddHeader.Format( L"Cache-Control:no-cache\nPragma:no-cache" );

	hHttpConnection = InternetOpenUrl( hInternetSession, strDownloadUrl, strAddHeader, strAddHeader.GetLength(), 
										INTERNET_FLAG_RELOAD | INTERNET_FLAG_DONT_CACHE, 0 );

	if( hHttpConnection == NULL )
	{
		LogWnd::Log( LogLevel::Error, L"Http Connection Open Failed!" );
		InternetCloseHandle( hInternetSession );
		return S_FALSE;
	}

	if( !IsExistFile( hHttpConnection ) )
	{
		LogWnd::Log( LogLevel::Error, L"Download File Is Not Exist!" );
		InternetCloseHandle( hHttpConnection );
		InternetCloseHandle( hInternetSession );
		return S_FALSE;
	}

	// Save File
	CFile file;
	CFileException e;
	UINT uiFileModeFlag = CFile::modeCreate | CFile::modeWrite | CFile::shareDenyNone;

	if( !file.Open( strSaveFilePath, uiFileModeFlag, &e ) )
	{
		LogWnd::Log( LogLevel::Error, L"Download File Open Failed!" );
		InternetCloseHandle( hHttpConnection );
		InternetCloseHandle( hInternetSession );
		return S_FALSE;
	}

	LogWnd::TraceLog( L"Download File Start" );

	DWORD dwRead, dwSize;
	char szReadBuf[32768];	// 32KiB

	BOOL bError = FALSE;

	do 
	{
		if( !InternetQueryDataAvailable( hHttpConnection, &dwSize, 0, 0 ) )
		{
			LogWnd::Log( LogLevel::Error, L"InternetQueryDataAvailable : data not available!" );
			bError = TRUE;	// error "data not available!"
			break;
		}

		if( !InternetReadFile( hHttpConnection, szReadBuf, dwSize, &dwRead ) )
		{
			LogWnd::Log( LogLevel::Error, L"InternetReadFile : reading file fail!" );
			bError = TRUE;	// error "reading file fail!"
			break;
		}

		if( dwRead )
		{
			file.Write( szReadBuf, dwRead );
		}
	} while( dwRead != 0 );

	InternetCloseHandle( hHttpConnection );
	InternetCloseHandle( hInternetSession );
	file.Close();

	if( bError )
		return S_FALSE;

	LogWnd::TraceLog( L"Download File Success" );

	return S_OK;
}

BOOL IsExistFile( HINTERNET hHttpConnection )
{
	if( hHttpConnection == NULL )
		return FALSE;

	TCHAR szBuffer[MAX_PATH]={0,};
	DWORD dwBufferSize = MAX_PATH;
	DWORD dwIndex = 0;

	BOOL bIsExist = FALSE;
	if( HttpQueryInfo( hHttpConnection, HTTP_QUERY_STATUS_CODE, (LPVOID)&szBuffer, &dwBufferSize, &dwIndex ) )
	{
		CString strReply = szBuffer;
		if( strReply == L"200" )
		{
			bIsExist = TRUE;
		}
		else	// "404" || "500"
		{
			bIsExist = FALSE;
		}
	}

	return bIsExist;
}

BOOL IsExistFile( LPCTSTR strDownloadUrl )
{
	HINTERNET hInternetSession;
	HINTERNET hHttpConnection;
	// Open Internet Session
	LogWnd::TraceLog( L"Open Internet Session" );
	hInternetSession = InternetOpen( NULL, INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0 );

	if( hInternetSession == NULL )
	{
		LogWnd::Log( LogLevel::Error, L"Internet Session Open Failed!" );
		return FALSE;
	}

	// Open Http Connection
	LogWnd::TraceLog( L"Open Http Connection" );
	CString strAddHeader;
	strAddHeader.Format( L"Cache-Control:no-cache\nPragma:no-cache" );

	hHttpConnection = InternetOpenUrl( hInternetSession, strDownloadUrl, strAddHeader, strAddHeader.GetLength(), 
										INTERNET_FLAG_RELOAD | INTERNET_FLAG_DONT_CACHE, 0 );

	if( hHttpConnection == NULL )
	{
		LogWnd::Log( LogLevel::Error, L"Http Connection Open Failed!" );
		InternetCloseHandle( hInternetSession );
		return FALSE;
	}

	BOOL bExist = IsExistFile( hHttpConnection );

	InternetCloseHandle( hHttpConnection );
	InternetCloseHandle( hInternetSession );

	return bExist;
}

BOOL KillMyProcess( LPCTSTR strEXEName )
{
	DWORD dwMyProcessID = GetCurrentProcessId();

	WCHAR ExeName[1024] = {0,};
	wsprintf(ExeName, L"%s", strEXEName);
	_tcsupr_s(ExeName);
	HANDLE hSnapShot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

	if( hSnapShot != INVALID_HANDLE_VALUE )
	{
		PROCESSENTRY32 pe32;
		pe32.dwSize = sizeof(PROCESSENTRY32);
		BOOL bContinue;
		TCHAR strProcessName[1024] = {0,};

		if( Process32First(hSnapShot, &pe32) )
		{
			do 
			{
				wsprintf(strProcessName, L"%s", pe32.szExeFile);
				_tcsupr_s(strProcessName);

				if( (_tcsicmp(strProcessName, ExeName) == 0 ) && dwMyProcessID == pe32.th32ProcessID )
				{
					HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, pe32.th32ProcessID);
					if(hProcess)
					{
						DWORD dwExitCode;
						GetExitCodeProcess(hProcess, &dwExitCode);
						TerminateProcess(hProcess, dwExitCode);
						CloseHandle(hProcess);
						CloseHandle(hSnapShot);
						
						return true;
					}

					return false;
				}
				bContinue = Process32Next(hSnapShot, &pe32);

			} while (bContinue);
		}
		CloseHandle(hSnapShot);
	}

	return true;
}

BOOL RunProcess(LPCTSTR strProcessName)
{
	STARTUPINFO             si;
	PROCESS_INFORMATION     pi;
	ZeroMemory(&si, sizeof(si));

	CString strClientPath = DNPATCHINFO.GetClientPath();
	strClientPath += strProcessName;
	
	BOOL bRun = CreateProcess(NULL, (LPWSTR)strClientPath.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);

	if (bRun)
	{
		//KillProcess2(_T(DNLAUNCHER_NAME));
		//ClientDeleteFile(_T(DNLAUNCHER_NAME_TMP)); // Delete temporary launcher file
		//MoveFile(_T(DNLAUNCHER_NAME_NEW), _T(DNLAUNCHER_NAME)); // Move new file to launcher file
	}
	else
	{
		//MessageBox(NULL, "Process execution failed", "Error", MB_OK);
	}

	CloseHandle( pi.hProcess );
	CloseHandle( pi.hThread );
	return bRun;
}

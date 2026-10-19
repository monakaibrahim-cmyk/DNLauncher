/*//===============================================================

	<< BASE-SET >>

	FILE : BASESET.H
	DESC : Class for verifying base project configurations
	INIT BUILT DATE : 2007. 03. 13
	LAST BUILT DATE : 2007. 03. 13

	Copyright (c) 2002~2009 B4nFter (b4nfter@gmail.com) and Co-Writers. All Rights Reserved.

*///===============================================================


#pragma once


///////////////////////////////////////////////////////////////////
//	INCLUDE
///////////////////////////////////////////////////////////////////

/*
	P.S.>
	- This header should be included in project top-level headers
	- Assumes WINDOWS.H and platform headers are already included prior to this file
*/


///////////////////////////////////////////////////////////////////
//	DEFINE
///////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////
//	DECLARATION
///////////////////////////////////////////////////////////////////

//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CBaseSet
//*---------------------------------------------------------------
// DESC : Class for verifying base project configurations
// PRGM : B4nFter
//*---------------------------------------------------------------

class CBaseSet
{
public:
	static BOOL IsDebug();
	static BOOL IsUnicode();
	static BOOL IsMultiThread();
	static BOOL IsLittleEndian();
	static BOOL IsWindowStationVisible();
};


///////////////////////////////////////////////////////////////////
//	IMPLEMENTATION
///////////////////////////////////////////////////////////////////

//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CBaseSet::
//*---------------------------------------------------------------
// DESC : Returns whether project build configuration is _DEBUG
// PARM : N/A
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
inline BOOL CBaseSet::IsDebug()
{
	return(MODE_CMP(TRUE,FALSE));
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CBaseSet::IsUnicode
//*---------------------------------------------------------------
// DESC : Returns whether character set is _UNICODE
// PARM : N/A
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
inline BOOL CBaseSet::IsUnicode()
{
	return(MODE_CHARSET(FALSE, TRUE));
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CBaseSet::IsMultiThread
//*---------------------------------------------------------------
// DESC : Returns whether runtime library is _MT
// PARM : N/A
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
inline BOOL CBaseSet::IsMultiThread()
{
	return(MODE_MT(FALSE,TRUE));
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CBaseSet::IsLittleEndian
//*---------------------------------------------------------------
// DESC : Returns whether current platform is little-endian
// PARM : N/A
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
inline BOOL CBaseSet::IsLittleEndian()
{
	const unsigned long	ulHost = 0x12345678;
	return(::htonl(ulHost) != ulHost);
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CBaseSet::IsWindowStationVisible
//*---------------------------------------------------------------
// DESC : Returns whether process window station is USER-INTERACTIVE
// PARM : N/A
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
inline BOOL CBaseSet::IsWindowStationVisible()
{
	HWINSTA hWindowStation = ::GetProcessWindowStation();
	if (hWindowStation != NULL) {
		USEROBJECTFLAGS	stUOF;
		DWORD dwNeed = 0;
		if (::GetUserObjectInformation(hWindowStation, UOI_FLAGS, &stUOF, sizeof(USEROBJECTFLAGS), &dwNeed) == TRUE) {
			return ((WSF_VISIBLE & stUOF.dwFlags) == WSF_VISIBLE);
		}
	}
	return FALSE;
}


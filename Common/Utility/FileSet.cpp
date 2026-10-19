

///////////////////////////////////////////////////////////////////
//	INCLUDE
///////////////////////////////////////////////////////////////////

#include "STDAFX.H"
#include "FILESET.H"
#include "COMMONMACROS.H"
#include "BASESET.H"
#include "DEBUGUTIL.H"
#include "SAFESTRINGMACROS.H"

///////////////////////////////////////////////////////////////////
//	IMPLEMENTATION
///////////////////////////////////////////////////////////////////

#pragma warning (disable:4238)
CFileSet::FILEBOMTYPEDAT CFileSet::m_stBomTypeDat[EV_BT_NONE] = {
	CFileSet::FILEBOMTYPEDAT(EV_BT_UTF8,		&CVarArgA<UCHAR_MAX>("%c%c%c",		0xEF,0xBB,0xBF),		3),
	CFileSet::FILEBOMTYPEDAT(EV_BT_UTF16_LE,	&CVarArgA<UCHAR_MAX>("%c%c",		0xFF,0xFE),				2),
	CFileSet::FILEBOMTYPEDAT(EV_BT_UTF16_BE,	&CVarArgA<UCHAR_MAX>("%c%c",		0xFE,0xFF),				2),
// 	CFileSet::FILEBOMTYPEDAT(EV_BT_UTF32_LE,	&CVarArgA<UCHAR_MAX>("%c%c%c%c",	0xFF,0xFE,0x00,0x00),	4),
// 	CFileSet::FILEBOMTYPEDAT(EV_BT_UTF32_BE,	&CVarArgA<UCHAR_MAX>("%c%c%c%c",	0x00,0x00,0xFE,0xFF),	4),
};
#pragma warning (default:4238)


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::CFileSet
//*---------------------------------------------------------------
// DESC : Constructor
// PARM : N/A
// RETV : N/A
// PRGM : B4nFter
//*---------------------------------------------------------------
CFileSet::CFileSet()
{
	Reset();
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::~CFileSet
//*---------------------------------------------------------------
// DESC : Destructor
// PARM : N/A
// RETV : N/A
// PRGM : B4nFter
//*---------------------------------------------------------------
CFileSet::~CFileSet()
{
	Close();
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::Reset
//*---------------------------------------------------------------
// DESC : Initialize file-related resources
// PARM : N/A
// RETV : N/A
// PRGM : B4nFter
// P.S.>
//		- Note: Does not close handle
//*---------------------------------------------------------------
VOID CFileSet::Reset()
{
	m_hFile = INVALID_HANDLE_VALUE;
	::memset(m_szFileFullPath, 0, sizeof(m_szFileFullPath));
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::Open
//*---------------------------------------------------------------
// DESC : Open file and allocate resources
// PARM :	1 . lpszFileName - File name including absolute/relative path
//			2 . bIsReadOnly - Read-only flag
//			3 . bIsAppend - Append data to file (valid only if bIsReadOnly == FALSE)
//			4 . bIsReadShare - Read share flag
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CFileSet::Open(LPCTSTR lpszFileName, BOOL bIsReadOnly, BOOL bIsAppend, BOOL bIsReadShare)
{
	DN_ASSERT(FALSE == IsOpen(),		"Invalid!");
	DN_ASSERT(NULL != lpszFileName,		"Invalid!");

	DWORD dwDesiredAccess;
	DWORD dwShareMode;
	DWORD dwCreationDisposition;
	DWORD dwFlagsAndAttributes;

	if (bIsReadOnly) {
		dwDesiredAccess = GENERIC_READ;
		dwShareMode = FILE_SHARE_READ;
		dwCreationDisposition = OPEN_EXISTING;
		dwFlagsAndAttributes = FILE_FLAG_SEQUENTIAL_SCAN | FILE_ATTRIBUTE_READONLY;
		if (!bIsReadShare) { 
			dwShareMode |= FILE_SHARE_WRITE;
		}
	}
	else {
		dwDesiredAccess = GENERIC_READ | GENERIC_WRITE;
		dwShareMode = FILE_SHARE_READ;
		dwFlagsAndAttributes = FILE_ATTRIBUTE_NORMAL;
		if (bIsAppend) {
			dwCreationDisposition = OPEN_ALWAYS;
		}
		else {
			dwCreationDisposition = CREATE_NEW;
		}
	}

	DWORD dwRetVal = Open(lpszFileName, dwDesiredAccess, dwShareMode, dwCreationDisposition, dwFlagsAndAttributes, NULL, NULL);
	if (NOERROR != dwRetVal) {
		return dwRetVal;
	}

	if (!bIsReadOnly) {
		if (bIsAppend) {
			dwRetVal = Seek(FILE_END, 0, 0);
		}
		else {
			if (FALSE == ::SetEndOfFile(m_hFile)) {
				dwRetVal = ::GetLastError();
			}
		}
	}
	
	return dwRetVal;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::Open
//*---------------------------------------------------------------
// DESC : Open file and allocate resources
// PARM :	1 . lpszFileName - File name including absolute/relative path
//			2 . dwDesiredAccess - Access mode
//			3 . dwShareMode - Share mode
//			4 . dwCreationDisposition - Creation disposition
//			5 . dwFlagsAndAttributes - Flags and attributes (multiple can be specified)
//			6 . lpSecurityAttributes - Security attributes
//			7 . hTemplateFile - Template file handle
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CFileSet::Open(
  LPCTSTR lpszFileName,	
  DWORD dwDesiredAccess, 
  DWORD dwShareMode, 
  DWORD dwCreationDisposition, 
  DWORD dwFlagsAndAttributes, 
  LPSECURITY_ATTRIBUTES lpSecurityAttributes,
  HANDLE hTemplateFile
  )
{
	DN_ASSERT(FALSE == IsOpen(),		"Invalid!");
	DN_ASSERT(NULL != lpszFileName,		"Invalid!");
	if (NULL == lpszFileName) {
		return HASERROR;
	}

	m_hFile = ::CreateFile(lpszFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
	if (INVALID_HANDLE_VALUE == m_hFile) {
		return(::GetLastError());
	}

	TCHAR szFileFullPath[MAX_PATH] = { _T('\0') };
	STRNCPY(szFileFullPath, COUNT_OF(szFileFullPath), lpszFileName);
	LPTSTR lpszFilePart;
	DWORD dwRetVal = ::GetFullPathName(szFileFullPath, _countof(m_szFileFullPath), m_szFileFullPath, &lpszFilePart);
	if (0 == dwRetVal) {
		return(::GetLastError());
	}

	return NOERROR;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::Close
//*---------------------------------------------------------------
// DESC : Close file handle and clean up object resources
// PARM : N/A
// RETV : N/A
// PRGM : B4nFter
//*---------------------------------------------------------------
VOID CFileSet::Close()
{
	if (INVALID_HANDLE_VALUE != m_hFile) {
		::CloseHandle(m_hFile);
		Reset();
	}
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::Flush
//*---------------------------------------------------------------
// DESC : Immediately flush write buffer of currently accessed file to disk
// PARM : N/A
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CFileSet::Flush()
{
	DN_ASSERT(TRUE == IsOpen(),		"Invalid!");
	if (FALSE == IsOpen()) {
		return FALSE;
	}

	return(::FlushFileBuffers(m_hFile));
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::IsOpen
//*---------------------------------------------------------------
// DESC : Returns whether file object is currently open
// PARM : N/A
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CFileSet::IsOpen() const
{
	return(INVALID_HANDLE_VALUE != m_hFile);
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::GetFullPath
//*---------------------------------------------------------------
// DESC : Get full path of currently accessed file
// PARM :	1 . lpszBuffer - String output buffer
//			2 . nBufferSize - String output buffer size 
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CFileSet::GetFullPath(/*out*/ LPTSTR lpszBuffer, DWORD nBufferSize) const
{
	DN_ASSERT(TRUE == IsOpen(),						"Invalid!");
	DN_ASSERT(NULL != lpszBuffer,					"Invalid!");
	DN_ASSERT(0 != nBufferSize,						"Invalid!");
	DN_ASSERT(_T('\0') != m_szFileFullPath[0],		"Invalid!");
	if (FALSE == IsOpen() ||
		NULL == lpszBuffer ||
		0 == nBufferSize ||
		0 == _tcscmp( m_szFileFullPath, _T("") )
		)
	{
		return FALSE;
	}

#if	(_MSC_VER >= 1400)	// VS.NET 2005 and above
	return (_tcsncpy_s(lpszBuffer, nBufferSize, m_szFileFullPath, _TRUNCATE)?(TRUE):(FALSE));
#else	// #if	(_MSC_VER >= 1400)
	return (_tcsncpy(lpszBuffer, m_szFileFullPath, nBufferSize)?(TRUE):(FALSE));
#endif	// #if	(_MSC_VER >= 1400)
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::GetDrive
//*---------------------------------------------------------------
// DESC : Get drive letter of currently accessed file
// PARM :	1 . lpszBuffer - String output buffer
//			2 . nBufferSize - String output buffer size 
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CFileSet::GetDrive(/*out*/ LPTSTR lpszBuffer, DWORD nBufferSize) const
{
	DN_ASSERT(TRUE == IsOpen(),						"Invalid!");
	DN_ASSERT(NULL != lpszBuffer,					"Invalid!");
	DN_ASSERT(0 != nBufferSize,						"Invalid!");
	DN_ASSERT(_T('\0') != m_szFileFullPath[0],		"Invalid!");
	if (FALSE == IsOpen() ||
		NULL == lpszBuffer ||
		0 == nBufferSize ||
		0 == _tcscmp( m_szFileFullPath, _T("") )
		)
	{
		return FALSE;
	}

#if	(_MSC_VER >= 1400)	// VS.NET 2005 and above
	return (!_tsplitpath_s(m_szFileFullPath, lpszBuffer, nBufferSize, NULL, 0, NULL, 0, NULL, 0)?(TRUE):(FALSE));
#else	// #if	(_MSC_VER >= 1400)
	return (!_tsplitpath(m_szFileFullPath, lpszBuffer, NULL, NULL, NULL)?(TRUE):(FALSE));
#endif	// #if	(_MSC_VER >= 1400)
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::GetPath
//*---------------------------------------------------------------
// DESC : Get directory path of currently accessed file
// PARM :	1 . lpszBuffer - String output buffer
//			2 . nBufferSize - String output buffer size 
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CFileSet::GetPath(/*out*/ LPTSTR lpszBuffer, DWORD nBufferSize) const
{
	DN_ASSERT(TRUE == IsOpen(),						"Invalid!");
	DN_ASSERT(NULL != lpszBuffer,					"Invalid!");
	DN_ASSERT(0 != nBufferSize,						"Invalid!");
	DN_ASSERT(_T('\0') != m_szFileFullPath[0],		"Invalid!");
	if (FALSE == IsOpen() ||
		NULL == lpszBuffer ||
		0 == nBufferSize ||
		0 == _tcscmp( m_szFileFullPath, _T("") )
		)
	{
		return FALSE;
	}

#if	(_MSC_VER >= 1400)	// VS.NET 2005 and above
	return (!_tsplitpath_s(m_szFileFullPath, NULL, 0, lpszBuffer, nBufferSize, NULL, 0, NULL, 0)?(TRUE):(FALSE));
#else	// #if	(_MSC_VER >= 1400)
	return (!_tsplitpath(m_szFileFullPath, NULL, lpszBuffer, NULL, NULL)?(TRUE):(FALSE));
#endif	// #if	(_MSC_VER >= 1400)
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::GetName
//*---------------------------------------------------------------
// DESC : Get name of currently accessed file (excluding extension)
// PARM :	1 . lpszBuffer - String output buffer
//			2 . nBufferSize - String output buffer size 
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CFileSet::GetName(/*out*/ LPTSTR lpszBuffer, DWORD nBufferSize) const
{
	DN_ASSERT(TRUE == IsOpen(),						"Invalid!");
	DN_ASSERT(NULL != lpszBuffer,					"Invalid!");
	DN_ASSERT(0 != nBufferSize,						"Invalid!");
	DN_ASSERT(_T('\0') != m_szFileFullPath[0],		"Invalid!");
	if (FALSE == IsOpen() ||
		NULL == lpszBuffer ||
		0 == nBufferSize ||
		0 == _tcscmp( m_szFileFullPath, _T("") )
		)
	{
		return FALSE;
	}

#if	(_MSC_VER >= 1400)	// VS.NET 2005 and above
	return (!_tsplitpath_s(m_szFileFullPath, NULL, 0, NULL, 0, lpszBuffer, nBufferSize, NULL, 0)?(TRUE):(FALSE));
#else	// #if	(_MSC_VER >= 1400)
	return (!_tsplitpath(m_szFileFullPath, NULL, NULL, lpszBuffer, NULL)?(TRUE):(FALSE));
#endif	// #if	(_MSC_VER >= 1400)
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::GetExt
//*---------------------------------------------------------------
// DESC : Get extension of currently accessed file
// PARM :	1 . lpszBuffer - String output buffer
//			2 . nBufferSize - String output buffer size 
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CFileSet::GetExt(/*out*/ LPTSTR lpszBuffer, DWORD nBufferSize) const
{
	DN_ASSERT(TRUE == IsOpen(),						"Invalid!");
	DN_ASSERT(NULL != lpszBuffer,					"Invalid!");
	DN_ASSERT(0 != nBufferSize,						"Invalid!");
	DN_ASSERT(_T('\0') != m_szFileFullPath[0],		"Invalid!");
	if (FALSE == IsOpen() ||
		NULL == lpszBuffer ||
		0 == nBufferSize ||
		0 == _tcscmp( m_szFileFullPath, _T("") )
		)
	{
		return FALSE;
	}

#if	(_MSC_VER >= 1400)	// VS.NET 2005 and above
	return (!_tsplitpath_s(m_szFileFullPath, NULL, 0, NULL, 0, NULL, 0, lpszBuffer, nBufferSize)?(TRUE):(FALSE));
#else	// #if	(_MSC_VER >= 1400)
	return (!_tsplitpath(m_szFileFullPath, NULL, NULL, NULL, lpszBuffer)?(TRUE):(FALSE));
#endif	// #if	(_MSC_VER >= 1400)
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::GetTitle
//*---------------------------------------------------------------
// DESC : Get file name + extension of currently accessed file
// PARM :	1 . lpszBuffer - String output buffer
//			2 . nBufferSize - String output buffer size 
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CFileSet::GetTitle(/*out*/ LPTSTR lpszBuffer, DWORD nBufferSize) const
{
	DN_ASSERT(TRUE == IsOpen(),						"Invalid!");
	DN_ASSERT(NULL != lpszBuffer,					"Invalid!");
	DN_ASSERT(0 != nBufferSize,						"Invalid!");
	DN_ASSERT(_T('\0') != m_szFileFullPath[0],		"Invalid!");
	if (FALSE == IsOpen() ||
		NULL == lpszBuffer ||
		0 == nBufferSize ||
		0 == _tcscmp( m_szFileFullPath, _T("") )
		)
	{
		return FALSE;
	}

	TCHAR szFileName[MAX_PATH] = { _T('\0'), };
	TCHAR szExtName[MAX_PATH] = { _T('\0'), };
#if	(_MSC_VER >= 1400)	// VS.NET 2005 and above
	INT iRetVal = _tsplitpath_s(m_szFileFullPath, NULL, 0, NULL, 0, szFileName, _countof(szFileName), szExtName, _countof(szExtName));
#else	// #if	(_MSC_VER >= 1400)
	INT iRetVal = _tsplitpath(m_szFileFullPath, NULL, NULL, szFileName, szExtName);
#endif	// #if	(_MSC_VER >= 1400)
	if (iRetVal) {
		return FALSE;
	}

#if	(_MSC_VER >= 1400)	// VS.NET 2005 and above
	iRetVal = _stprintf_s(lpszBuffer, nBufferSize, _T("%s%s"), szFileName, szExtName);
#else	// #if	(_MSC_VER >= 1400)
	iRetVal = _sntprintf(lpszBuffer, nBufferSize, _T("%s%s"), szFileName, szExtName);
#endif	// #if	(_MSC_VER >= 1400)
	if (iRetVal < 0) {
		return FALSE;
	}

	return TRUE;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::Seek
//*---------------------------------------------------------------
// DESC : Move file pointer to specific position in currently accessed file
// PARM :	1 . dwMoveMethod - File pointer move method
/*
				FILE_BEGIN : Seek from beginning of file
				FILE_CURRENT : Seek from current file position
				FILE_END : Seek from end of file
*/
//			2 . lOffsetLow - File pointer target offset (low LONG)
//			3 . lOffsetHigh - File pointer target offset (high LONG)
//			4 . lpu64Offset - Resulting file pointer offset
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CFileSet::Seek(DWORD dwMoveMethod, LONG lOffsetLow, LONG lOffsetHigh, ULONGLONG* lpu64Offset)
{
	DN_ASSERT(TRUE == IsOpen(),		"Invalid!");
	if (FALSE == IsOpen()) {
		return HASERROR;
	}

	LPLONG lpOffsetHigh = NULL;
	if (lOffsetHigh > 0) {
		lpOffsetHigh = &lOffsetHigh;
	}

	DWORD dwOffsetLow = ::SetFilePointer(m_hFile, lOffsetLow, lpOffsetHigh, dwMoveMethod);
	if (INVALID_SET_FILE_POINTER == dwOffsetLow) {
		DWORD dwErrNo = ::GetLastError();
		if (NO_ERROR != dwErrNo) {
			return dwErrNo;
		}
	}
	if (lpu64Offset) {
		if (lpOffsetHigh) {
			*lpu64Offset = MAKELONGLONG(dwOffsetLow, *lpOffsetHigh);
		}
		else {
			*lpu64Offset = MAKELONGLONG(dwOffsetLow, 0);
		}
	}
	return NOERROR;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::SetLength
//*---------------------------------------------------------------
// DESC : Resize currently accessed file to specified size
// PARM :	1 . dwFileLength - Target file size
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CFileSet::SetLength(ULONGLONG dwFileLength)
{
	DN_ASSERT(IsOpen(),				"Invalid!");

	DWORD dwRetVal = Seek(FILE_BEGIN, LOLONG(dwFileLength), HILONG(dwFileLength));
	if (NOERROR != dwRetVal) {
		return dwRetVal;
	}

	if (!::SetEndOfFile(m_hFile)) {
		dwRetVal = ::GetLastError();
		if (::GetLastError() != NO_ERROR) {
			return dwRetVal;
		}
	}

	return NOERROR;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::GetLength
//*---------------------------------------------------------------
// DESC : Get size of currently accessed file
// PARM :	1 . dwFileLength - Received file size
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CFileSet::GetLength(/*out*/ ULONGLONG& dwFileLength) const
{
	DN_ASSERT(IsOpen(),				"Invalid!");

	ULARGE_INTEGER unFileSize;
	unFileSize.LowPart = ::GetFileSize(m_hFile, &unFileSize.HighPart);
	if (unFileSize.LowPart == INVALID_FILE_SIZE) {
		DWORD dwRetVal = ::GetLastError();
		if (NO_ERROR != dwRetVal) {
			return dwRetVal;
		}
	}

	dwFileLength = unFileSize.QuadPart;

	return NOERROR;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::Read
//*---------------------------------------------------------------
// DESC : Read data starting from current file pointer position
// PARM :	1 . lpBuffer - Buffer pointer to receive data
//			2 . nBufferSize - Buffer size
// RETV : NOERROR - Success / ERROR_HANDLE_EOF - End of file / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CFileSet::Read(/*out*/ LPVOID lpBuffer, /*int,out*/ DWORD& nBufferSize)
{
	DN_ASSERT(TRUE == IsOpen(),		"Invalid!");
	DN_ASSERT(NULL != lpBuffer,		"Invalid!");
	DN_ASSERT(0 != nBufferSize,		"Invalid!");
	if (FALSE == IsOpen() ||
		NULL == lpBuffer ||
		0 == nBufferSize
		)
	{
		return HASERROR;
	}
	
	DWORD dwRetVal = ::ReadFile(m_hFile, lpBuffer, nBufferSize, &nBufferSize, NULL);
	if (0 == dwRetVal) {
		return(::GetLastError());
	}

	return NOERROR;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::Write
//*---------------------------------------------------------------
// DESC : Write data starting from current file pointer position
// PARM :	1 . lpBuffer - Buffer pointer containing data to write
//			2 . nBufferSize - Buffer size
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CFileSet::Write(LPCVOID lpBuffer, /*int,out*/ DWORD& nBufferSize)
{
	DN_ASSERT(TRUE == IsOpen(),		"Invalid!");
	DN_ASSERT(NULL != lpBuffer,		"Invalid!");
	DN_ASSERT(0 != nBufferSize,		"Invalid!");
	if (FALSE == IsOpen() ||
		NULL == lpBuffer ||
		0 == nBufferSize
		)
	{
		return HASERROR;
	}

	DWORD dwRetVal = ::WriteFile(m_hFile, lpBuffer, nBufferSize, &nBufferSize, NULL);
	if (0 == dwRetVal) {
		return(::GetLastError());
	}

	return NOERROR;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::LockRange
//*---------------------------------------------------------------
// DESC : Lock byte range of currently accessed file for exclusive access
// PARM :	1 . uOffset - Relative offset from start of file
//			2 . uNumberOfBytes - Bytes to lock
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CFileSet::LockRange(ULONGLONG uOffset, ULONGLONG uNumberOfBytes)
{
	DN_ASSERT(IsOpen(),				"Invalid!");
	DN_ASSERT(0 != uNumberOfBytes,	"Invalid!");

	ULARGE_INTEGER unULargeInterger;
	ULARGE_INTEGER unCount;

	unULargeInterger.QuadPart = uOffset;
	unCount.QuadPart = uNumberOfBytes;
	if (!::LockFile(m_hFile, unULargeInterger.LowPart, unULargeInterger.HighPart, unCount.LowPart, unCount.HighPart)) {
		return (::GetLastError());
	}

	return NOERROR;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::SkipBOM
//*---------------------------------------------------------------
// DESC : Skip BOM (Byte Order Mark) if present in document file
// PARM : N/A
// RETV : BOM type (EV_BT_NONE if none present)
// PRGM : B4nFter
// P.S.>
//		- File pointer moves to start, then skips BOM length, ending up immediately after BOM
//		- If BOM is not present, file pointer is moved to beginning of file
//*---------------------------------------------------------------
CFileSet::EF_BOMTYPE CFileSet::SkipBOM()
{
	DN_ASSERT(IsOpen(),				"Invalid!");

	if (!IsOpen()) {
		return EV_BT_NONE;
	}

	BYTE btData[UCHAR_MAX];
	DWORD dwSize, dwRetVal;
	for (DWORD dwIndex = 0 ; dwIndex < EV_BT_NONE ; ++dwIndex) {
		dwRetVal = Seek(FILE_BEGIN, 0, 0);
		if (NOERROR != dwRetVal) {
			DN_CONTINUE;
		}
		dwSize = m_stBomTypeDat[dwIndex].m_nSize;
		dwRetVal = Read(btData, dwSize);
		if (NOERROR != dwRetVal) {
			DN_CONTINUE;
		}
		if (dwSize != m_stBomTypeDat[dwIndex].m_nSize) {
			continue;
		}
		if (!::memcmp(btData, m_stBomTypeDat[dwIndex].m_btData, m_stBomTypeDat[dwIndex].m_nSize)) {
			return m_stBomTypeDat[dwIndex].m_eType;
		}
	}

	return EV_BT_NONE;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::WriteBOM
//*---------------------------------------------------------------
// DESC : Write specified BOM (Byte Order Mark) at the beginning of the file
// PARM :	1 . eBomType - BOM type to write
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CFileSet::WriteBOM(CFileSet::EF_BOMTYPE eBomType)
{
	DN_ASSERT(IsOpen(),								"Invalid!");
	DN_ASSERT(CHECK_LIMIT(eBomType, EV_BT_NONE),	"Invalid!");

	if (!IsOpen() ||
		!CHECK_LIMIT(eBomType, EV_BT_NONE)
		)
	{
		return HASERROR;
	}

	DWORD dwRetVal = Seek(FILE_BEGIN, 0, 0);
	if (NOERROR != dwRetVal) {
		DN_RETURN(dwRetVal);
	}

	DWORD dwSize = m_stBomTypeDat[eBomType].m_nSize;
	dwRetVal = Write(m_stBomTypeDat[eBomType].m_btData, dwSize);
	if (NOERROR != dwRetVal) {
		DN_RETURN(dwRetVal);
	}
	if (dwSize != m_stBomTypeDat[eBomType].m_nSize) {
		DN_RETURN(HASERROR);
	}

	return NOERROR;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::UnlockRange
//*---------------------------------------------------------------
// DESC : Unlock byte range of file that was previously locked
// PARM :	1 . uOffset - Relative offset from start of file
//			2 . uNumberOfBytes - Bytes to unlock
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CFileSet::UnlockRange(ULONGLONG uOffset, ULONGLONG uNumberOfBytes)
{
	DN_ASSERT(IsOpen(),				"Invalid!");
	DN_ASSERT(0 != uNumberOfBytes,	"Invalid!");

	ULARGE_INTEGER unULargeInterger;
	ULARGE_INTEGER unCount;

	unULargeInterger.QuadPart = uOffset;
	unCount.QuadPart = uNumberOfBytes;
	if (!::UnlockFile(m_hFile, unULargeInterger.LowPart, unULargeInterger.HighPart, unCount.LowPart, unCount.HighPart)) {
		return (::GetLastError());
	}

	return NOERROR;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::GetPosition
//*---------------------------------------------------------------
// DESC : Get current file pointer position
// PARM :	1 . u64FilePositon - Variable to receive file pointer position
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CFileSet::GetPosition(/*out*/ ULONGLONG& u64FilePositon) const
{
	DN_ASSERT(IsOpen(),				"Invalid!");

	LARGE_INTEGER unLargeInteger;
	unLargeInteger.QuadPart = 0;
	unLargeInteger.LowPart = ::SetFilePointer(m_hFile, unLargeInteger.LowPart, &unLargeInteger.HighPart , FILE_CURRENT);
	if (unLargeInteger.LowPart == (DWORD)-1) {
		DWORD dwErrNo = ::GetLastError();
		if (NO_ERROR != dwErrNo) {
			return dwErrNo;
		}
	}

	u64FilePositon = unLargeInteger.QuadPart;

	return NOERROR;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::GetTime
//*---------------------------------------------------------------
// DESC : Get timestamps of currently accessed file
// PARM :	1 . lpstCreateFileTime - Creation time
//			2 . lpstAccessFileTime - Last access time
//			3 . lpstWriteFileTime - Last write time
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CFileSet::GetTime(/*out*/ LPFILETIME lpstCreateFileTime, /*out*/ LPFILETIME lpstAccessFileTime, /*out*/ LPFILETIME lpstWriteFileTime) const
{
	DN_ASSERT(NULL != lpstCreateFileTime,		"Invalid!");
	DN_ASSERT(NULL != lpstAccessFileTime,		"Invalid!");
	DN_ASSERT(NULL != lpstWriteFileTime,		"Invalid!");

	DWORD dwRetVal = 0;
	if (INVALID_HANDLE_VALUE != m_hFile)
	{
		if (!::GetFileTime(m_hFile, lpstCreateFileTime, lpstAccessFileTime, lpstWriteFileTime))
		{
			dwRetVal = ::GetLastError();
			DN_ASSERT(0, "Error!");
		}
//		DN_VERIFY(::CloseHandle(m_hFile), TRUE,	"error!");
	}
	else
	{
		DN_RETURN(HASERROR);
	}

	return(dwRetVal);
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::GetTime
//*---------------------------------------------------------------
// DESC : Get file timestamps of specified file path (static method)
// PARM :	1 . lpszFileName - File name including absolute/relative path
//			2 . lpstCreateFileTime - Creation time
//			3 . lpstAccessFileTime - Last access time
//			4 . lpstWriteFileTime - Last write time
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CFileSet::GetTime(LPCTSTR lpszFileName, /*out*/ LPFILETIME lpstCreateFileTime, /*out*/ LPFILETIME lpstAccessFileTime, /*out*/ LPFILETIME lpstWriteFileTime)
{
	DN_ASSERT(NULL != lpstCreateFileTime,		"Invalid!");
	DN_ASSERT(NULL != lpstCreateFileTime,		"Invalid!");
	DN_ASSERT(NULL != lpstAccessFileTime,		"Invalid!");
	DN_ASSERT(NULL != lpstWriteFileTime,		"Invalid!");

	DWORD dwRetVal = 0;
	HANDLE hFile = ::CreateFile(lpszFileName, FILE_READ_ATTRIBUTES, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE != hFile)
	{
		if (!::GetFileTime(hFile, lpstCreateFileTime, lpstAccessFileTime, lpstWriteFileTime))
		{
			dwRetVal = ::GetLastError();
			DN_ASSERT(0, "Error!");
		}
		DN_VERIFY(::CloseHandle(hFile), TRUE,	"Error!");
	}
	else
	{
		DN_RETURN(HASERROR);
	}

	return(dwRetVal);
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::GetVersion
//*---------------------------------------------------------------
// DESC : Get version info of specified file path (static method)
// PARM :	1 . lpszFileName - File name including absolute/relative path
//			2 . dwFileVersion1 - Version info 1
//			3 . dwFileVersion2 - Version info 2
//			4 . dwFileVersion3 - Version info 3
//			5 . dwFileVersion4 - Version info 4
// RETV : NOERROR - Success / otherwise - Failure (returns ERROR_RESOURCE_TYPE_NOT_FOUND (1813L) if no version resource in binary)
// PRGM : B4nFter
// P.S.>
//		- Version resource must already exist in file binary
//*---------------------------------------------------------------
DWORD CFileSet::GetVersion(LPCTSTR lpszFileName, DWORD& dwFileVersion1, DWORD& dwFileVersion2, DWORD& dwFileVersion3, DWORD& dwFileVersion4)
{
	DWORD dwHandle= 0;
	DWORD dwFileVersionInfoSize = ::GetFileVersionInfoSize(lpszFileName, &dwHandle);
	if (0 == dwFileVersionInfoSize)
	{
		return (::GetLastError());	// Returns ERROR_RESOURCE_TYPE_NOT_FOUND (1813L) if no version resource
	}

	std::auto_ptr<BYTE>	aVerBuf(NEW BYTE[dwFileVersionInfoSize]);
	if (NULL == aVerBuf.get())
	{
		return ERROR_NOT_ENOUGH_MEMORY;
	}

	DWORD	dwRetVal = 0;
	if (TRUE == ::GetFileVersionInfo(lpszFileName, dwHandle, dwFileVersionInfoSize, aVerBuf.get()))
	{
		UINT uLength    = 0;
		VS_FIXEDFILEINFO* lpVsFixedFileInfo = NULL;
		if (TRUE == ::VerQueryValue(aVerBuf.get(), _T("\\"), (LPVOID*)&lpVsFixedFileInfo, &uLength))
		{
			DN_ASSERT(sizeof(VS_FIXEDFILEINFO) == uLength,	"Error!");
			dwFileVersion1	= HIWORD(lpVsFixedFileInfo->dwFileVersionMS);
			dwFileVersion2	= LOWORD(lpVsFixedFileInfo->dwFileVersionMS);
			dwFileVersion3	= HIWORD(lpVsFixedFileInfo->dwFileVersionLS);
			dwFileVersion4	= LOWORD(lpVsFixedFileInfo->dwFileVersionLS);
		}
		else
		{
			dwRetVal = ERROR_NOT_FOUND;	// 1168L
		}
	}
	else
	{
		dwRetVal = ::GetLastError();
	}

	return dwRetVal;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::GetAttributes
//*---------------------------------------------------------------
// DESC : Get attributes of specified file path (static method)
// PARM :	1 . lpszFileName - File name including absolute/relative path
// RETV : File attributes : Success / INVALID_FILE_ATTRIBUTES : Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CFileSet::GetAttributes(LPCTSTR lpszFileName)
{
	DN_ASSERT(NULL != lpszFileName,		"Invalid!");
	return (::GetFileAttributes(lpszFileName));
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::SetAttributes
//*---------------------------------------------------------------
// DESC : Set attributes of specified file path (static method)
// PARM :	1 . lpszFileName - File name including absolute/relative path
//			2 . dwFileAttributes - File attributes
/*
				FILE_ATTRIBUTE_READONLY             0x00000001
				FILE_ATTRIBUTE_HIDDEN               0x00000002
				FILE_ATTRIBUTE_SYSTEM               0x00000004
				FILE_ATTRIBUTE_DIRECTORY            0x00000010
				FILE_ATTRIBUTE_ARCHIVE              0x00000020
				FILE_ATTRIBUTE_DEVICE               0x00000040
				FILE_ATTRIBUTE_NORMAL               0x00000080
				FILE_ATTRIBUTE_TEMPORARY            0x00000100
				FILE_ATTRIBUTE_SPARSE_FILE          0x00000200
				FILE_ATTRIBUTE_REPARSE_POINT        0x00000400
				FILE_ATTRIBUTE_COMPRESSED           0x00000800
				FILE_ATTRIBUTE_OFFLINE              0x00001000
				FILE_ATTRIBUTE_NOT_CONTENT_INDEXED  0x00002000
				FILE_ATTRIBUTE_ENCRYPTED            0x00004000
*/
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CFileSet::SetAttributes(LPCTSTR lpszFileName, DWORD dwFileAttributes)
{
	DN_ASSERT(NULL != lpszFileName,			"Invalid!");
	return (::SetFileAttributes(lpszFileName, dwFileAttributes));
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::Remove
//*---------------------------------------------------------------
// DESC : Delete file at specified path (static method)
// PARM :	1 . lpszSrcFileName - Source file
//			2 . lpszTgtFileName - Target file
//			3 . pIsFailIfExist - Fail if file exists (TRUE: fail / FALSE: overwrite)
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CFileSet::Copy(LPCTSTR lpszSrcFileName, LPCTSTR lpszTgtFileName, BOOL pIsFailIfExist)
{
	DN_ASSERT(NULL != lpszSrcFileName,	"Invalid!");
	DN_ASSERT(NULL != lpszTgtFileName,	"Invalid!");

	return (::CopyFile(lpszSrcFileName, lpszTgtFileName, pIsFailIfExist));
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::Remove
//*---------------------------------------------------------------
// DESC : Delete file at specified path (static method)
// PARM :	1 . lpszFileName - File name including absolute/relative path
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CFileSet::Remove(LPCTSTR lpszFileName)
{
	DN_ASSERT(NULL != lpszFileName,			"Invalid!");

	return (::DeleteFile(lpszFileName));
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::Rename
//*---------------------------------------------------------------
// DESC : Rename and move file at specified path (static method)
// PARM :	1 . lpszOldFileName - Source file name including absolute/relative path
//			2 . lpszNewFileName - New file path (relative or absolute)
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CFileSet::Rename(LPCTSTR lpszOldFileName, LPCTSTR lpszNewFileName)
{
	DN_ASSERT(NULL != lpszOldFileName,		"Invalid!");
	DN_ASSERT(NULL != lpszNewFileName,		"Invalid!");
	
	return (::MoveFile(lpszOldFileName, lpszNewFileName));
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::GetTempName
//*---------------------------------------------------------------
// DESC : Generate temporary file name based on path, prefix, and number (static method)
// PARM :	1 . lpPathName - Base directory path
//			2 . lpPrefixString - File prefix string
//			3 . uUnique - Base number
//			4 . lpTempFileName - Buffer to receive temporary file name
// RETV : TRUE - Success / FALSE - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
BOOL CFileSet::GetTempName(LPCTSTR lpPathName, LPCTSTR lpPrefixString, UINT uUnique, /*out*/ LPTSTR lpTempFileName)
{
	DN_ASSERT(NULL != lpPathName,				"Invalid!");
	DN_ASSERT(NULL != lpPrefixString,			"Invalid!");
	DN_ASSERT(NULL != lpTempFileName,			"Invalid!");
	if (NULL == lpPathName) { return FALSE; }
	if (NULL == lpPrefixString) { return FALSE; }
	if (NULL == lpTempFileName) { return FALSE; }

	UINT uRetVal = ::GetTempFileName(lpPathName, lpPrefixString, uUnique, lpTempFileName);
	if (0 == uRetVal) {
		return FALSE;
	}

	return TRUE;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CFileSet::GetBomTypeDat
//*---------------------------------------------------------------
// DESC : Get information for specified BOM type
// PARM :	1 . pBomType - EF_BOMTYPE enum value for specified BOM type
// RETV : Pointer to BOM type information
// PRGM : B4nFter
//*---------------------------------------------------------------
CFileSet::LPFILEBOMTYPEDAT CFileSet::GetBomTypeDat(EF_BOMTYPE pBomType)
{
	if (!CHECK_LIMIT(pBomType, EV_BT_NONE)) {
		DN_RETURN(NULL);
	}

	return &m_stBomTypeDat[pBomType];
}


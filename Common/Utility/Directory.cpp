

///////////////////////////////////////////////////////////////////
//	INCLUDE
///////////////////////////////////////////////////////////////////

#include "STDAFX.H"
#include "DIRECTORY.H"
#include "COMMONMACROS.H"
#include "BASESET.H"
#include "DEBUGUTIL.H"
#include "SAFESTRINGMACROS.H"
#include "STRINGSET.H"
#include <IO.H>		// _access

#ifdef _DEBUG
#define new new(_NORMAL_BLOCK,__FILE__,__LINE__)
#endif 

const TCHAR CDirectory::m_szSourceDirectorySeperator[3] = {
	_T('\\'),
	_T(':'),
	_T('\0'),	// Null terminator
};


///////////////////////////////////////////////////////////////////
//	IMPLEMENTATION
///////////////////////////////////////////////////////////////////

//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDirectory::CDirectory
//*---------------------------------------------------------------
// DESC : Constructor
// PARM : N/A
// RETV : N/A
// PRGM : B4nFter
//*---------------------------------------------------------------
CDirectory::CDirectory()
{
	Reset();
};


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDirectory::~CDirectory
//*---------------------------------------------------------------
// DESC : Destructor
// PARM : N/A
// RETV : N/A
// PRGM : B4nFter
//*---------------------------------------------------------------
CDirectory::~CDirectory()
{
	// Clean up if resources not freed by destruction time
	End();
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDirectory::Reset
//*---------------------------------------------------------------
// DESC : Reset object resources
// PARM : N/A
// RETV : N/A
// PRGM : B4nFter
// P.S.>
//		- Note: Does not close directory handle
//*---------------------------------------------------------------
VOID CDirectory::Reset()
{
	m_hFind = INVALID_HANDLE_VALUE;
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDirectory::Begin
//*---------------------------------------------------------------
// DESC : Begin search for matching files in directory
// PARM :	1 . lpszDirectoryFileName - Search file path
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CDirectory::Begin(LPCTSTR lpszDirectoryFileName)
{
	DN_ASSERT(!IsOpen(),					"Already Called!");
//	CHECK_STRING(lpszDirectoryFileName,		DF_DIR_MAX_PATH);

	if (INVALID_HANDLE_VALUE != m_hFind) {
		return(1);
	}


	m_hFind = ::FindFirstFile(lpszDirectoryFileName, &m_stFindData);
	if (INVALID_HANDLE_VALUE != m_hFind) {
		return(NOERROR);
	}
	else {
		return(::GetLastError());
	}
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDirectory::Next
//*---------------------------------------------------------------
// DESC : Continue search after CDirectory::Begin
// PARM : N/A
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
// P.S.>
//		- CDirectory::Begin must be called first
//*---------------------------------------------------------------
DWORD CDirectory::Next()
{
	DN_ASSERT(IsOpen(),	"Must Call CDirectory::Begin() First!");

	if (::FindNextFile(m_hFind, &m_stFindData)) {
		return(NOERROR);
	}
	else {
		return(::GetLastError());
	}
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDirectory::End
//*---------------------------------------------------------------
// DESC : End file search
// PARM : N/A
// RETV : N/A
// PRGM : B4nFter
// P.S.>
//		- Must be called even if CDirectory::Begin / CDirectory::Next fails
//*---------------------------------------------------------------
VOID CDirectory::End()
{
	if (INVALID_HANDLE_VALUE != m_hFind) {
		::FindClose(m_hFind);
		m_hFind = INVALID_HANDLE_VALUE;
	}
	Reset();
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDirectory::Copy
//*---------------------------------------------------------------
// DESC : Copy source directory to destination directory
// PARM :	1 . lpszSourceDirectoryName - Source directory
//			2 . lpszTargetDirectoryName - Destination directory
//			4 . bOverWrite - Overwrite existing (default FALSE)
//			5 . bSubDirectory - Search subdirectories (default FALSE)
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CDirectory::Copy(LPCTSTR lpszSourceDirectoryName, LPCTSTR lpszTargetDirectoryName, BOOL bOverWrite, BOOL bSubDirectory)
{
	DN_ASSERT(NULL != lpszSourceDirectoryName,	"Invalid!");
	DN_ASSERT(NULL != lpszTargetDirectoryName,	"Invalid!");

	// Validate parameters
	if (!lpszSourceDirectoryName || !_tcscmp(lpszSourceDirectoryName, _T(""))) {
		DN_RETURN(1);
	}
	if (!lpszTargetDirectoryName || !_tcscmp(lpszTargetDirectoryName, _T(""))) {
		DN_RETURN(1);
	}

	// Validate directory
	INT iRetVal;
	iRetVal = _taccess(lpszSourceDirectoryName, 0);
	if (iRetVal) {
		// Source directory does not exist
		DN_RETURN(static_cast<DWORD>(iRetVal));
	}
	iRetVal = _taccess(lpszTargetDirectoryName, 0);
	if (iRetVal) {
		// Source directory does not exist
		DN_RETURN(static_cast<DWORD>(iRetVal));
	}

	TCHAR szSourceDirectoryNameOut[DF_DIR_MAX_PATH] = { _T('\0'), };
	TCHAR szTargetDirectoryNameOut[DF_DIR_MAX_PATH] = { _T('\0'), };
	DWORD dwRetVal = CheckFixDirectoryName(lpszSourceDirectoryName, lpszTargetDirectoryName, szSourceDirectoryNameOut, COUNT_OF(szSourceDirectoryNameOut), szTargetDirectoryNameOut, COUNT_OF(szTargetDirectoryNameOut));
	if (NOERROR != dwRetVal) {
		DN_RETURN(dwRetVal);
	}

	// Execute copy (retain source afterward)
	dwRetVal = CopyWork(
		szSourceDirectoryNameOut, 
		szTargetDirectoryNameOut, 
		FALSE,
		bOverWrite, 
		bSubDirectory
		);
	if (NOERROR != dwRetVal) {
		DN_RETURN(dwRetVal);
	}

	return(NOERROR);
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDirectory::Move
//*---------------------------------------------------------------
// DESC : Move source directory to destination directory
// PARM :	1 . lpszSourceDirectoryName - Source directory
//			2 . lpszTargetDirectoryName - Destination directory
//			4 . bOverWrite - Overwrite existing (default FALSE)
//			5 . bSubDirectory - Search subdirectories (default FALSE)
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CDirectory::Move(LPCTSTR lpszSourceDirectoryName, LPCTSTR lpszTargetDirectoryName, BOOL bOverWrite, BOOL bSubDirectory)
{
	DN_ASSERT(NULL != lpszSourceDirectoryName,	"Invalid!");
	DN_ASSERT(NULL != lpszTargetDirectoryName,	"Invalid!");

	// Validate parameters
	if (!lpszSourceDirectoryName || !_tcscmp(lpszSourceDirectoryName, _T(""))) {
		DN_RETURN(1);
	}
	if (!lpszTargetDirectoryName || !_tcscmp(lpszTargetDirectoryName, _T(""))) {
		DN_RETURN(1);
	}

	// Validate directory
	INT iRetVal;
	iRetVal = ::_taccess(lpszSourceDirectoryName, 0);
	if (iRetVal) {
		// Source directory does not exist
		DN_RETURN(static_cast<DWORD>(iRetVal));
	}
	iRetVal = ::_taccess(lpszTargetDirectoryName, 0);
	if (iRetVal) {
		// Source directory does not exist
		DN_RETURN(static_cast<DWORD>(iRetVal));
	}

	TCHAR szSourceDirectoryNameOut[DF_DIR_MAX_PATH] = { _T('\0'), };
	TCHAR szTargetDirectoryNameOut[DF_DIR_MAX_PATH] = { _T('\0'), };
	DWORD dwRetVal = CheckFixDirectoryName(lpszSourceDirectoryName, lpszTargetDirectoryName, szSourceDirectoryNameOut, COUNT_OF(szSourceDirectoryNameOut), szTargetDirectoryNameOut, COUNT_OF(szTargetDirectoryNameOut));
	if (NOERROR != dwRetVal) {
		DN_RETURN(dwRetVal);
	}

	// Execute copy (delete source afterward)
	dwRetVal = CopyWork(
		szSourceDirectoryNameOut, 
		szTargetDirectoryNameOut, 
		TRUE, 
		bOverWrite, 
		bSubDirectory
		);
	if (NOERROR != dwRetVal) {
		DN_RETURN(dwRetVal);
	}

	// Delete processing -> files inside directory already deleted by CopyWork()
	if (FALSE == ::RemoveDirectory(lpszSourceDirectoryName) &&
		bSubDirectory
		)
	{
		DN_RETURN(::GetLastError());
	}

	return(NOERROR);
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDirectory::Rename
//*---------------------------------------------------------------
// DESC : Rename source directory to destination directory
// PARM :	1 . lpszSourceDirectoryName - Source directory
//			2 . lpszTargetDirectoryName - Destination directory
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CDirectory::Rename(LPCTSTR lpszSourceDirectoryName, LPCTSTR lpszTargetDirectoryName)
{
	DN_ASSERT(NULL != lpszSourceDirectoryName,	"Invalid!");
	DN_ASSERT(NULL != lpszTargetDirectoryName,	"Invalid!");
//	CHECK_STRING(lpszSourceDirectoryName,			DF_DIR_MAX_PATH);
//	CHECK_STRING(lpszTargetDirectoryName,			DF_DIR_MAX_PATH);

	// Validate parameters
	if (!lpszSourceDirectoryName || !_tcscmp(lpszSourceDirectoryName, _T(""))) {
		DN_RETURN(1);
	}
	// Validate parameters
	if (!lpszTargetDirectoryName || !_tcscmp(lpszTargetDirectoryName, _T(""))) {
		DN_RETURN(1);
	}

	if (FALSE == ::MoveFile(lpszSourceDirectoryName, lpszTargetDirectoryName)) {
		return(::GetLastError());
	}
	return(NOERROR);
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDirectory::Remove
//*---------------------------------------------------------------
// DESC : Remove source directory
// PARM :	1 . lpszSourceDirectoryName - Source directory
//			2 . bCheckFileExist - Keep directory if files exist (default TRUE)
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CDirectory::Remove(LPCTSTR lpszSourceDirectoryName, BOOL bCheckFileExist)
{
	DN_ASSERT(NULL != lpszSourceDirectoryName,	"Invalid!");
//	CHECK_STRING(lpszSourceDirectoryName,			DF_DIR_MAX_PATH);

	// Validate parameters
	if (!lpszSourceDirectoryName || !_tcscmp(lpszSourceDirectoryName, _T(""))) {
		DN_RETURN(1);
	}

	TCHAR szSourceDirectoryName[DF_DIR_MAX_PATH] = { _T('\0'), };
	STRNCPY(szSourceDirectoryName, COUNT_OF(szSourceDirectoryName), lpszSourceDirectoryName);
	INT iSourceDirectoryNameLen = (INT)_tcslen(szSourceDirectoryName);
	DN_ASSERT(0 < iSourceDirectoryNameLen,	"Invalid!");
	DN_ASSERT(COUNT_OF(szSourceDirectoryName)-1 >= iSourceDirectoryNameLen,	"Invalid!");
	if (0 >= iSourceDirectoryNameLen) {
		DN_RETURN(1);
	}

	if (_T('\\') != szSourceDirectoryName[iSourceDirectoryNameLen-1]) {
		if (iSourceDirectoryNameLen < COUNT_OF(szSourceDirectoryName)-2) {		// Including NULL character
			szSourceDirectoryName[iSourceDirectoryNameLen]		= _T('\\');
			szSourceDirectoryName[iSourceDirectoryNameLen+1]	= _T('\0');
			++iSourceDirectoryNameLen;
		}
		else {
			DN_RETURN(1);
		}
	}

	DWORD dwRetVal = RemoveWork(szSourceDirectoryName, bCheckFileExist);
	if (NOERROR != dwRetVal) {
		DN_RETURN(dwRetVal);
	}

	// Delete processing -> files inside directory already deleted by CopyWork()
	if (FALSE == ::RemoveDirectory(lpszSourceDirectoryName)) {
		DN_RETURN(::GetLastError());
	}

	return(NOERROR);
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDirectory::CheckFixDirectoryName
//*---------------------------------------------------------------
// DESC : Format source / destination directory names for Copy / Move
// PARM :	1 . lpszSourceDirectoryNameIn - Source directory (input)
//			2 . lpszTargetDirectoryNameIn - Destination directory (input)
//			3 . lpszSourceDirectoryNameOut - Source directory (output)
//			4 . iSourceDirectoryNameOutSize - Source directory buffer size (output)
//			5 . lpszTargetDirectoryNameOut - Destination directory (output)
//			6 . iTargetDirectoryNameOutSize - Destination directory buffer size (output)
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CDirectory::CheckFixDirectoryName(
	LPCTSTR lpszSourceDirectoryNameIn, 
	LPCTSTR lpszTargetDirectoryNameIn, 
	LPTSTR lpszSourceDirectoryNameOut, 
	const INT iSourceDirectoryNameOutSize,
	LPTSTR lpszTargetDirectoryNameOut,
	const INT iTargetDirectoryNameOutSize
	)
{
	DN_ASSERT(NULL != lpszSourceDirectoryNameIn,	"Invalid!");
	DN_ASSERT(NULL != lpszTargetDirectoryNameIn,	"Invalid!");
	DN_ASSERT(NULL != lpszSourceDirectoryNameOut,	"Invalid!");
	DN_ASSERT(0 < iSourceDirectoryNameOutSize,	"Invalid!");
	DN_ASSERT(NULL != lpszTargetDirectoryNameOut,	"Invalid!");
	DN_ASSERT(0 < iTargetDirectoryNameOutSize,	"Invalid!");
//	CHECK_STRING(lpszSourceDirectoryNameIn,			DF_DIR_MAX_PATH);
//	CHECK_STRING(lpszTargetDirectoryNameIn,			DF_DIR_MAX_PATH);

	// Validate parameters
	if (!lpszSourceDirectoryNameIn || !_tcscmp(lpszSourceDirectoryNameIn, _T(""))) {
		DN_RETURN(1);
	}
	if (!lpszTargetDirectoryNameIn || !_tcscmp(lpszTargetDirectoryNameIn, _T(""))) {
		DN_RETURN(1);
	}
	if (!lpszSourceDirectoryNameOut || !lpszTargetDirectoryNameOut) {
		DN_RETURN(1);
	}

	INT iSourceDirectoryNameLen = (INT)_tcslen(lpszSourceDirectoryNameIn);
	DN_ASSERT(0 < iSourceDirectoryNameLen,	"Invalid!");
	DN_ASSERT(iSourceDirectoryNameOutSize-1 >= iSourceDirectoryNameLen,	"Invalid!");
	if (0 >= iSourceDirectoryNameLen) {
		DN_RETURN(1);
	}
	STRNCPY(lpszSourceDirectoryNameOut, iSourceDirectoryNameOutSize, lpszSourceDirectoryNameIn);
	INT iTargetDirectoryNameLen = (INT)_tcslen(lpszTargetDirectoryNameIn);
	DN_ASSERT(0 < iTargetDirectoryNameLen,	"Invalid!");
	DN_ASSERT(iTargetDirectoryNameOutSize-1 >= iTargetDirectoryNameLen,	"Invalid!");
	if (0 >= iTargetDirectoryNameLen) {
		DN_RETURN(1);
	}
	STRNCPY(lpszTargetDirectoryNameOut, iTargetDirectoryNameOutSize, lpszTargetDirectoryNameIn);

	if (_T('\\') != lpszSourceDirectoryNameOut[iSourceDirectoryNameLen-1]) {
		if (iSourceDirectoryNameLen < iSourceDirectoryNameOutSize-2) {	// Including NULL character
			lpszSourceDirectoryNameOut[iSourceDirectoryNameLen]		= _T('\\');
			lpszSourceDirectoryNameOut[iSourceDirectoryNameLen+1]	= _T('\0');
			++iSourceDirectoryNameLen;
		}
		else {
			DN_RETURN(1);
		}
	}
	if (_T('\\') != lpszTargetDirectoryNameOut[iTargetDirectoryNameLen-1]) {
		if (iTargetDirectoryNameLen < iTargetDirectoryNameOutSize-2) {	// Including NULL character
			lpszTargetDirectoryNameOut[iTargetDirectoryNameLen]		= _T('\\');
			lpszTargetDirectoryNameOut[iTargetDirectoryNameLen+1]	= _T('\0');
			++iTargetDirectoryNameLen;
		}
		else {
			DN_RETURN(1);
		}
	}
	
	CStringSet aSourceDirectoryName;	// String for parsing source directory path
	if (2 <= iSourceDirectoryNameLen) {
		if (_T(':') == lpszSourceDirectoryNameOut[1]) {
			// Skip drive prefix if present
			aSourceDirectoryName = &lpszSourceDirectoryNameOut[2];
		}
		else {
			aSourceDirectoryName = lpszSourceDirectoryNameOut;
		}
	}
	else {
		aSourceDirectoryName = lpszSourceDirectoryNameOut;
	}

	CStringSet aSourceDirectoryToken1, aSourceDirectoryToken2;	// Strings for source directory tokens
	BOOL bDoLoop = TRUE;
	INT nStrLength = aSourceDirectoryName.GetLength();
	INT nStrIndex = 0;

	do {
		// Extract token from source directory name
		aSourceDirectoryToken1 = aSourceDirectoryName.Tokenize(m_szSourceDirectorySeperator, nStrIndex);
		if (!aSourceDirectoryToken1.IsEmpty()) {
			aSourceDirectoryToken2 = aSourceDirectoryToken1;
		}
		if (nStrLength <= nStrIndex) {
			// Successful parsing complete
			break;
		}
	}
	while(bDoLoop);

	// Append name to destination directory string if present
	if (!aSourceDirectoryToken2.IsEmpty()) {
		INT iTargetDirectoryNameLen1 = (INT)_tcslen(lpszTargetDirectoryNameOut);
		STRNCAT(lpszTargetDirectoryNameOut, iTargetDirectoryNameOutSize, aSourceDirectoryToken2.Get());
		STRNCAT(lpszTargetDirectoryNameOut, iTargetDirectoryNameOutSize, _T("\\"));
		INT iTargetDirectoryNameLen2 = (INT)_tcslen(lpszTargetDirectoryNameOut);
		DN_ASSERT(iTargetDirectoryNameLen2 == iTargetDirectoryNameLen1 + aSourceDirectoryToken2.GetLength() + 1,	"String Length Not Mach!");
		if (iTargetDirectoryNameLen2 != iTargetDirectoryNameLen1 + aSourceDirectoryToken2.GetLength() + 1) {
			DN_RETURN(1);
		}
	}

	return(NOERROR);
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDirectory::CopyWork
//*---------------------------------------------------------------
// DESC : Perform Copy / Move recursively
// PARM :	1 . lpszSourceDirectoryName - Source directory
//			2 . lpszTargetDirectoryName - Destination directory
//			3 . bDoErase - Remove source during operation (TRUE - Move / FALSE - Copy)
//			5 . bOverWrite - Overwrite existing (default FALSE)
//			6 . bSubDirectory - Search subdirectories (default FALSE)
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CDirectory::CopyWork(
	LPCTSTR lpszSourceDirectoryName, 
	LPCTSTR lpszTargetDirectoryName, 
	BOOL bDoErase, 
	BOOL bOverWrite, 
	BOOL bSubDirectory
   )
{
	DN_ASSERT(NULL != lpszSourceDirectoryName,	"Invalid!");
	DN_ASSERT(NULL != lpszTargetDirectoryName,	"Invalid!");
//	CHECK_STRING(lpszSourceDirectoryName,			DF_DIR_MAX_PATH);
//	CHECK_STRING(lpszTargetDirectoryName,			DF_DIR_MAX_PATH);
	
	// Assumes caller guarantees directory string validation and termination

	DWORD dwRetVal;

	// Create destination directory
	if (FALSE == ::CreateDirectory(lpszTargetDirectoryName, NULL)) {
		dwRetVal = ::GetLastError();
		if (ERROR_ALREADY_EXISTS != dwRetVal) {
			// Failed to create directory at specified path
			DN_RETURN(dwRetVal);
		}
	}

	// Search files/directories to copy/move in source directory
	TCHAR szSourceDirectoryFindFiles[DF_DIR_MAX_PATH] = { _T('\0'), };
	STRCPY(szSourceDirectoryFindFiles, COUNT_OF(szSourceDirectoryFindFiles), lpszSourceDirectoryName);
	STRNCAT(szSourceDirectoryFindFiles, COUNT_OF(szSourceDirectoryFindFiles), _T("*.*"));
	CDirectory aDirectory;
	dwRetVal = aDirectory.Begin(szSourceDirectoryFindFiles);
	if (NOERROR != dwRetVal) {
		DN_RETURN(dwRetVal);
	}

	while(NOERROR == dwRetVal) {
		// Perform copy operation
		if (aDirectory.IsDirectory()) {
			// Directory

			if (bSubDirectory &&
				_T('.') != aDirectory.GetFindData().cFileName[0]
				) 
			{
				// Reformat source and destination directory strings
				TCHAR szSourceDirectoryName[DF_DIR_MAX_PATH] = { _T('\0'), };
				TCHAR szTargetDirectoryName[DF_DIR_MAX_PATH] = { _T('\0'), };
				INT iDirectoryNameLen1, iDirectoryNameLen2;
				STRNCPY(szSourceDirectoryName, COUNT_OF(szSourceDirectoryName), lpszSourceDirectoryName);
				STRNCPY(szTargetDirectoryName, COUNT_OF(szTargetDirectoryName), lpszTargetDirectoryName);
				// Format source directory string
				iDirectoryNameLen1 = (INT)_tcslen(szSourceDirectoryName);
				STRCAT(szSourceDirectoryName, COUNT_OF(szSourceDirectoryName), aDirectory.GetFindData().cFileName);
				STRCAT(szSourceDirectoryName, COUNT_OF(szSourceDirectoryName), _T("\\"));
				iDirectoryNameLen2 = (INT)_tcslen(szSourceDirectoryName);
				DN_ASSERT(iDirectoryNameLen2 == iDirectoryNameLen1 + (INT)_tcslen(aDirectory.GetFindData().cFileName) + 1, "String Length Not Mach!");
				if (iDirectoryNameLen2 != iDirectoryNameLen1 + (INT)_tcslen(aDirectory.GetFindData().cFileName) + 1) {
					DN_RETURN(1);
				}
				// Format destination directory string
				iDirectoryNameLen1 = (INT)_tcslen(szTargetDirectoryName);
				STRCAT(szTargetDirectoryName, COUNT_OF(szTargetDirectoryName), aDirectory.GetFindData().cFileName);
				STRCAT(szTargetDirectoryName, COUNT_OF(szTargetDirectoryName), _T("\\"));
				iDirectoryNameLen2 = (INT)_tcslen(szTargetDirectoryName);
				DN_ASSERT(iDirectoryNameLen2 == iDirectoryNameLen1 + (INT)_tcslen(aDirectory.GetFindData().cFileName) + 1, "String Length Not Mach!");
				if (iDirectoryNameLen2 != iDirectoryNameLen1 + (INT)_tcslen(aDirectory.GetFindData().cFileName) + 1) {
					DN_RETURN(1);
				}

				// Process subdirectories recursively
				dwRetVal = CopyWork(
					szSourceDirectoryName, 
					szTargetDirectoryName, 
					bDoErase, 
					bOverWrite, 
					bSubDirectory
					);
				if (NOERROR != dwRetVal) {
					DN_RETURN(dwRetVal);
				}

				// Delete processing -> files inside directory already deleted by CopyWork()
				if (bDoErase &&
					FALSE == ::RemoveDirectory(szSourceDirectoryName)
					)
				{
					DN_RETURN(::GetLastError());
				}
			}
		}
		else {
			// File

			// Construct source and destination file strings
			TCHAR szSourceFileName[DF_DIR_MAX_PATH] = { _T('\0'), };
			TCHAR szTargetFileName[DF_DIR_MAX_PATH] = { _T('\0'), };
			INT iFileNameLen1, iFileNameLen2;
			STRNCPY(szSourceFileName, COUNT_OF(szSourceFileName), lpszSourceDirectoryName);
			STRNCPY(szTargetFileName, COUNT_OF(szTargetFileName), lpszTargetDirectoryName);
			// Construct source file string
			iFileNameLen1 = (INT)_tcslen(szSourceFileName);
			STRCAT(szSourceFileName, COUNT_OF(szSourceFileName), aDirectory.GetFindData().cFileName);
			iFileNameLen2 = (INT)_tcslen(szSourceFileName);
			DN_ASSERT(iFileNameLen2 == iFileNameLen1 + (INT)_tcslen(aDirectory.GetFindData().cFileName), "String Length Not Mach!");
			if (iFileNameLen2 != iFileNameLen1 + (INT)_tcslen(aDirectory.GetFindData().cFileName)) {
				DN_RETURN(1);
			}
			// Construct target file string
			iFileNameLen1 = (INT)_tcslen(szTargetFileName);
			STRCAT(szTargetFileName, COUNT_OF(szTargetFileName), aDirectory.GetFindData().cFileName);
			iFileNameLen2 = (INT)_tcslen(szTargetFileName);
			DN_ASSERT(iFileNameLen2 == iFileNameLen1 + (INT)_tcslen(aDirectory.GetFindData().cFileName), "String Length Not Mach!");
			if (iFileNameLen2 != iFileNameLen1 + (INT)_tcslen(aDirectory.GetFindData().cFileName)) {
				DN_RETURN(1);
			}

			// Copy file
			DWORD dwCopyFlag = (bOverWrite)?(0):(COPY_FILE_FAIL_IF_EXISTS);
			if (FALSE == ::CopyFileEx(szSourceFileName, szTargetFileName, NULL, NULL, FALSE, dwCopyFlag)) {
				dwRetVal = ::GetLastError();
				if (ERROR_FILE_EXISTS != dwRetVal &&
					ERROR_ALREADY_EXISTS != dwRetVal
					)
				{
					// Failed to create directory at specified path
					DN_RETURN(dwRetVal);
				}
			}
		
			// Delete processing
			if (bDoErase &&
				FALSE == ::DeleteFile(szSourceFileName)
				)
			{
				DN_RETURN(::GetLastError());
			}
		}

		dwRetVal = aDirectory.Next();
		if (NOERROR != dwRetVal && ERROR_NO_MORE_FILES != dwRetVal) {
			// Error occurred
			aDirectory.End();
			DN_RETURN(dwRetVal);
		}
	}

	aDirectory.End();

	return(NOERROR);
}


//*---------------------------------------------------------------
// TYPE : FUNCTION
// NAME : CDirectory::RemoveWork
//*---------------------------------------------------------------
// DESC : Perform Remove recursively
// PARM :	1 . lpszSourceDirectoryName - Source directory
//			2 . bCheckFileExist - Keep directory if files exist (default TRUE)
// RETV : NOERROR - Success / otherwise - Failure
// PRGM : B4nFter
//*---------------------------------------------------------------
DWORD CDirectory::RemoveWork(LPCTSTR lpszSourceDirectoryName, BOOL bCheckFileExist)
{
	DN_ASSERT(NULL != lpszSourceDirectoryName,	"Invalid!");
//	CHECK_STRING(lpszSourceDirectoryName,			DF_DIR_MAX_PATH);

	// Assumes caller guarantees directory string validation and termination
	
	DWORD dwRetVal;

	// Search files/directories to copy/move in source directory
	TCHAR szSourceDirectoryFindFiles[DF_DIR_MAX_PATH] = { _T('\0'), };
	STRCPY(szSourceDirectoryFindFiles, COUNT_OF(szSourceDirectoryFindFiles), lpszSourceDirectoryName);
	STRNCAT(szSourceDirectoryFindFiles, COUNT_OF(szSourceDirectoryFindFiles), _T("*.*"));
	CDirectory aDirectory;
	dwRetVal = aDirectory.Begin(szSourceDirectoryFindFiles);
	if (NOERROR != dwRetVal) {
		DN_RETURN(dwRetVal);
	}

	while(NOERROR == dwRetVal) {
		// Perform copy operation
		if (aDirectory.IsDirectory()) {
			// Directory

			if (_T('.') != aDirectory.GetFindData().cFileName[0]) {
				// Reformat source and destination directory strings
				TCHAR szSourceDirectoryName[DF_DIR_MAX_PATH] = { _T('\0'), };
				INT iDirectoryNameLen1, iDirectoryNameLen2;
				STRNCPY(szSourceDirectoryName, COUNT_OF(szSourceDirectoryName), lpszSourceDirectoryName);
				// Format source directory string
				iDirectoryNameLen1 = (INT)_tcslen(szSourceDirectoryName);
				STRCAT(szSourceDirectoryName, COUNT_OF(szSourceDirectoryName), aDirectory.GetFindData().cFileName);
				STRCAT(szSourceDirectoryName, COUNT_OF(szSourceDirectoryName), _T("\\"));
				iDirectoryNameLen2 = (INT)_tcslen(szSourceDirectoryName);
				DN_ASSERT(iDirectoryNameLen2 == iDirectoryNameLen1 + (INT)_tcslen(aDirectory.GetFindData().cFileName) + 1, "String Length Not Mach!");
				if (iDirectoryNameLen2 != iDirectoryNameLen1 + (INT)_tcslen(aDirectory.GetFindData().cFileName) + 1) {
					DN_RETURN(1);
				}

				// Process subdirectories recursively
				dwRetVal = RemoveWork(szSourceDirectoryName, bCheckFileExist);
				if (NOERROR != dwRetVal) {
					DN_RETURN(dwRetVal);
				}

				// Delete processing -> files inside directory already deleted by CopyWork()
				if (FALSE == ::RemoveDirectory(szSourceDirectoryName)) {
					DN_RETURN(::GetLastError());
				}
			}
		}
		else {
			// File

			if (bCheckFileExist) {
				// If option set, do not delete directory when files exist
				DN_RETURN(1);
			}

			// Construct source and destination file strings
			TCHAR szSourceFileName[DF_DIR_MAX_PATH] = { _T('\0'), };
			INT iFileNameLen1, iFileNameLen2;
			STRNCPY(szSourceFileName, COUNT_OF(szSourceFileName), lpszSourceDirectoryName);
			// Construct source file string
			iFileNameLen1 = (INT)_tcslen(szSourceFileName);
			STRCAT(szSourceFileName, COUNT_OF(szSourceFileName), aDirectory.GetFindData().cFileName);
			iFileNameLen2 = (INT)_tcslen(szSourceFileName);
			DN_ASSERT(iFileNameLen2 == iFileNameLen1 + (INT)_tcslen(aDirectory.GetFindData().cFileName), "String Length Not Mach!");
			if (iFileNameLen2 != iFileNameLen1 + (INT)_tcslen(aDirectory.GetFindData().cFileName)) {
				DN_RETURN(1);
			}
			
			// Delete processing
			if (FALSE == ::DeleteFile(szSourceFileName)) {
				DN_RETURN(::GetLastError());
			}
		}

		dwRetVal = aDirectory.Next();
		if (NOERROR != dwRetVal && ERROR_NO_MORE_FILES != dwRetVal) {
			// Error occurred
			aDirectory.End();
			DN_RETURN(dwRetVal);
		}
	}

	aDirectory.End();

	return(NOERROR);
}


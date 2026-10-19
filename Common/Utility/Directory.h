/*//===============================================================

	<< DIRECTORY >>

	FILE : DIRECTORY.H, DIRECTORY.CPP
	DESC : Directory management class
	INIT BUILT DATE : 2007. 07. 23
	LAST BUILT DATE : 2007. 08. 24

	Copyright (c) 2002~2007 B4nFter (b4nfter@gmail.com) and Co-Writers. All Rights Reserved.

*///===============================================================


#pragma once


///////////////////////////////////////////////////////////////////
//	INCLUDE
///////////////////////////////////////////////////////////////////

#include <WINDOWS.H>
#include <TCHAR.H>


///////////////////////////////////////////////////////////////////
//	DEFINE
///////////////////////////////////////////////////////////////////

#define DF_DIR_MAX_PATH		(1024)		// Used instead of MAX_PATH


///////////////////////////////////////////////////////////////////
//	DECLARATION
///////////////////////////////////////////////////////////////////

//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CDirectory
//*---------------------------------------------------------------
// DESC : Directory management class
// PRGM : B4nFter
//*---------------------------------------------------------------
class CDirectory
{

public:
	CDirectory();
	virtual ~CDirectory();

	DWORD Begin(LPCTSTR lpszDirectoryFileName);
	DWORD Next();
	VOID End();

	const WIN32_FIND_DATA& GetFindData() const { return(m_stFindData); }
	BOOL IsDirectory() const { return((FILE_ATTRIBUTE_DIRECTORY & GetFindData().dwFileAttributes)?(TRUE):(FALSE)); }

	BOOL IsOpen() const { return((INVALID_HANDLE_VALUE != m_hFind)?(TRUE):(FALSE)); }		// _DEBUG

	static DWORD Copy(
		LPCTSTR lpszSourceDirectoryName, 
		LPCTSTR lpszTargetDirectoryName, 
		BOOL bOverWrite = FALSE, 
		BOOL bSubDirectory = FALSE
		);
	static DWORD Move(
		LPCTSTR lpszSourceDirectoryName, 
		LPCTSTR lpszTargetDirectoryName, 
		BOOL bOverWrite = FALSE, 
		BOOL bSubDirectory = FALSE
		);
	static DWORD Rename(LPCTSTR lpszSourceDirectoryName, LPCTSTR lpszTargetDirectoryName);
	static DWORD Remove(LPCTSTR lpszSourceDirectoryName, BOOL bCheckFileExist = TRUE);

private:
	VOID Reset();

	static DWORD CheckFixDirectoryName(
		LPCTSTR lpszSourceDirectoryNameIn, 
		LPCTSTR lpszTargetDirectoryNameIn, 
		LPTSTR lpszSourceDirectoryNameOut, 
		const INT iSourceDirectoryNameOutSize,
		LPTSTR lpszTargetDirectoryNameOut,
		const INT iTargetDirectoryNameOutSize
		);
	static DWORD CopyWork(
		LPCTSTR lpszSourceDirectoryName, 
		LPCTSTR lpszTargetDirectoryName, 
		BOOL bDoErase, 
		BOOL bOverWrite = FALSE, 
		BOOL bSubDirectory = FALSE
		);
	static DWORD RemoveWork(LPCTSTR lpszSourceDirectoryName, BOOL bCheckFileExist = FALSE);

private :
	WIN32_FIND_DATA m_stFindData;
	HANDLE m_hFind;

	static const TCHAR m_szSourceDirectorySeperator[3];
};


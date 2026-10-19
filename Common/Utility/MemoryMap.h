/*//===============================================================

	<< MEMORY MAP >>

	FILE : MEMORYMAP.H, MEMORYMAP.CPP
	DESC : Memory-mapped file management class
	INIT BUILT DATE : 2005. 12. 11
	LAST BUILT DATE : 2005. 12. 11

	P.S.> 
		- Read-only memory map for accessing existing files
		- If creating a new file or file size is 0, CreateFileMapping may fail; check file size

	Copyright (c) 2002~2009 B4nFter (b4nfter@gmail.com) and Co-Writers. All Rights Reserved.

*///===============================================================


#pragma once


///////////////////////////////////////////////////////////////////
//	INCLUDE
///////////////////////////////////////////////////////////////////

#include <WINDOWS.H>


///////////////////////////////////////////////////////////////////
//	DEFINE
///////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////
//	DECLARATION
///////////////////////////////////////////////////////////////////

//*---------------------------------------------------------------
// TYPE : CLASS
// NAME : CMemoryMap
//*---------------------------------------------------------------
// DESC : Memory-mapped file management class
// PRGM : B4nFter
//*---------------------------------------------------------------
class CMemoryMap
{

public:
	CMemoryMap();
	~CMemoryMap();

	BOOL Open(
		LPCTSTR lpszFileName, 
		DWORD dwFileOffsetHigh = 0, 
		DWORD dwFileOffsetLow = 0, 
		SIZE_T dwNumberOfBytesToMap = 0,
		LPCTSTR lpszMemoryMapName = NULL, 
		DWORD dwDesiredAccess = GENERIC_READ, 
		DWORD dwCreationDisposition = OPEN_EXISTING
		);
	VOID Close();

	BOOL ChangeMapView(
		DWORD dwFileOffsetHigh = 0, 
		DWORD dwFileOffsetLow = 0, 
		SIZE_T dwNumberOfBytesToMap = 0
		);
	BOOL Flush();

	LPVOID GetBaseAddress();
	UINT64 GetSize();

private:
	HANDLE m_hFile;
	HANDLE m_hMemoryMap;

	LPVOID m_lpBaseAddr;
	DWORD m_dwSizeLow;
	DWORD m_dwSizeHigh;
};


#pragma once

#include <list>
#include <vector>
#include <map>
#include "Singleton.h"
#include "CriticalSection.h"
#include "StringUtil.h"

#define PACKING_FILE_STRING	"EyedentityGames Packing File 0.1"
#define PACKING_FILE_VERSION	11
#define PACKING_FILE_NOCHECKSUM_VERSION 10
#define PACKING_HEADER_RESERVED	( 1024 - sizeof( SPackingFileHeader ) )
#define DEFAULT_PACKING_FILE_SIZE	512 * 1024 * 1024

struct SPackingFileHeader
{
	char szHeaderString[ 256 ];
	int nVersion;
	int nFileCount;
	DWORD dwFileInfoOffset;
	bool bRequireHeaderWrite;
	char cPadding[ 3 ];
};

//----------------------------------------------------------------------------------------
struct SPackingFileInfo
{
	char szFileName[ _MAX_FNAME ];
	DWORD dwCompressSize;
	DWORD dwOriginalSize;
	DWORD dwAllocSize;
	DWORD dwOffset;
	DWORD dwSeedValue;
	DWORD dwChecksum;
	char cReserved[ 36 ];
};

class CEtFileHandle
{
	friend class CEtPackingFile;
	friend class CEtFileSystem;
public:
	CEtFileHandle();
	virtual ~CEtFileHandle();
	SPackingFileInfo *GetFileContext() { return &m_FileInfo; }

protected:
	SPackingFileInfo m_FileInfo;
	char *m_pData;
	DWORD m_dwCurPos;

public:
	DWORD		Read(void* pBuff, DWORD nSize);
	int			Seek(int lOffset, int iOrigin);
	bool		ExportFile();

};


//------------------------------------------------------------------------------------

// 빈공간 주소 정보
class CPatchCallback
{
public:
	enum
	{
		None = 0,
		SrcPackOpenFailed,		// 패치할 소스팩을 열지 못했다.
		SrcPackFileSizeZero,	// 소스팩의 파일이 없다. 
		SrcPackFileNotFound,	// 소스팩에서 파일을 찾을수 없다. 
		DstPackAddFailed,		// 대상팩에 파일 추가가 실패했다.
		PatchFailed,			// 패치도중 실패했다.

	};
	virtual void OnPatch(int nCurrentCnt, int nMaxCount, CFileNameString szFilename) { }
	virtual void OnError(int nErrorCode, CFileNameString szMsg) { }
};

class CEtFileSystemLog
{
public:
	virtual void Log(const CHAR* fmt, ...) { }
};


class CEtPackingFile
{
public:
	CEtPackingFile();
	virtual ~CEtPackingFile();

public:
	const char *GetCurDir() { return m_strCurDir; }
	void SetRootPath( const char *szPath );

	DWORD CalcChecksum( int nFileIndex );
	void GenerateChecksum();

	void	CloseFileSystem();
	bool	OpenFileSystem(const char* strPath, bool bReadOnly = false );
	bool	NewFileSystem(const char* strPath);
	bool	OptimizeFileSystem(const char* strPath);
	DWORD	GetFileSystemSize();

	int		GetFileCount() { return ( int )m_vecPackingFileInfo.size(); }
	SPackingFileInfo *GetFileInfo( int nIndex ) { return ( SPackingFileInfo * )&m_vecPackingFileInfo[ nIndex ]; }
	void GetFileInfoListCurDir( std::vector< SPackingFileInfo * > &vecFileInfo );
	void GetDirListCurDir( std::vector< std::string > &vecDirList );
	// 현재 패킹 파일에 패치 한다. 
	bool	Patch(const char* strPatchPath, CPatchCallback* pCallpack, std::vector< CFileNameString > *pvecSkipList );

	void	SetLogger(CEtFileSystemLog* pLog) { m_pLog = pLog; }

public:
	void	CloseFile( CEtFileHandle* pFileHandle ) { SAFE_DELETE( pFileHandle ); }
	CEtFileHandle *OpenFile(const char *strPath);
	CEtFileHandle *OpenOnly( const char *strPath );

	int 	FindFile( const char *pFileName );
	void	AddPackingMap( int nFileInfoIndex );
	void	RemovePackingMap( int nFileInfoIndex );
	void	GeneratePackingMap();
	int		FindSuitableEmptySpace( DWORD dwSize );
	bool	AddFile(const char* strPath);
	bool	AddFile(const char* strName, char *pData, DWORD nSize);
	bool	PatchFile( CEtFileHandle *pFileHandle );
	bool	PatchFileIndex( CEtFileHandle *pFileHandle, int nFileIndex, BOOL bSaveFileInfo = TRUE );
	int		ReservePatchFile( SPackingFileInfo *pFileInfo );
	void	WriteReserveFileInfo();
	void	RemoveFileInfo( int nFileIndex );

	bool	Remove(const char* strName);
	bool	Rename(const char* strName, const char* strRename);

public:
	bool	ChangeDir(const char* strPath);
	void	GetNameOnly(char* strDst, const char* strPath);
	void	GetPathOnly(char* strDst, const char* strPath);
private:
	void	SetCurDir(const char* pTok);
	void	GetSafeName(char* strDst, const char* strName);

private:
	void		_Encode(IN BYTE* pBuffer, int nBufSize, DWORD nCode);
	void		_Decode(IN BYTE* pBuffer, int nBufSize, DWORD nCode);

	// 이 함수들은 Win32 API 가 길어서 타이핑 하기가 귀찮아서.. 
	bool		_Read(HANDLE hFile, IN void* pBuffer, DWORD ToReadSize);
	bool		_Write(HANDLE hFile, IN void* pBuffer, DWORD ToWriteSize);
	LONGLONG	_Seek(HANDLE hFile, LONGLONG nDistance, DWORD SeekType);
	
	// string 관련
	void		_Tokenize( const std::string& str, std::vector<std::string>& tokens, const std::string& delimiters /* = " " */ );
	void		_AllReplace( std::string& str, std::string& szOld, std::string& szNew );


protected:

	bool				m_bIsReadOnly;
	HANDLE				m_hFile;
	SPackingFileHeader	m_PackingFileHeader;
	char				m_strCurDir[_MAX_PATH];
	CFileNameString			m_strPackingFileName;
	CFileNameString			m_szRootPath;

	std::vector< SPackingFileInfo > m_vecPackingFileInfo;
	std::map< INT64, int > m_mapPackingFileIndex;

	CEtFileSystemLog*	m_pLog;
};


class CEtFileSystem : public CSingleton<CEtFileSystem>
{
public:
	CEtFileSystem( bool bDynamicPath = true );
	virtual ~CEtFileSystem();
	
	void	AddPackingFolder(const char* szPackingFileName, const char* szExt = "pak" );
	void	AddPackingFolder(const WCHAR* szPackingFileName, const char* szExt = "pak" );	// 처음 루트폴더 처리를 위해 추가.
	bool	AddPackingFile(const char* szPackingFileName, const char *szRootPath);
	void	RemoveAll();
	
	void FindFileListInFolder( const char *szFolderName, const char *szExt, std::vector<CFileNameString> &szVecResult);

	CEtFileHandle *OpenFile( const char* strPath, bool bOpenOnly = false );
	void	CloseFile(CEtFileHandle* pFH);
	CEtPackingFile *FindFile( const char *pFileName, int &nFindIndex );
	CFileNameString GetFullName( const char *szFileName, bool *bFind = NULL );
	CFileNameString GetFullPath( const char *szPath );
	void FindFullPathList( const char *szPath, std::vector<CFileNameString> &szVecResult );

	void AddResourcePath( const char *szPath, bool bIncludeSubDir = false );
	void RemoveResourcePath( const char *szPath, bool bIncludeSubDir = false );

	bool IsEmpty() {return m_PackingFileMap.empty() ;}

protected:
	void CacheFileList( int nIndex, bool bAdd );

private:
	std::map< CFileNameString, CEtPackingFile * >		m_PackingFileMap;

	struct OffsetStruct {
		std::vector<CFileNameString> szVecFileList;
	};

	std::map< std::string, std::vector<std::string> >	m_szMapCacheFileListInFolder;

	CSyncLock m_SyncLock;
	bool m_bDynamicPath;
};
#pragma once

#include "EtFileSystem.h"
#include "HTTPClient.h"

// DnLauncher Download Patch Thread

#ifdef _USE_RTPATCH
#define  MAX_MESSAGES 10
#endif // _USE_RTPATCH

// CThread Class
class CThread
{
public:
	CThread();
	virtual ~CThread();

	BOOL Start();
	BOOL Terminate( DWORD nExitCode );
	void SetThreadName( DWORD dwThreadID, const char* szThreadName );
	BOOL WaitForTerminate( DWORD nTimeout = INFINITE );
	HANDLE const GetThreadHandle() { return m_hHandleThread; }

protected:
	virtual	void Run() = 0;
	HANDLE	m_hHandleThread;
	DWORD	m_nThreadID;
	BOOL	m_bThreadLoop;

	typedef struct tagTHREADNAME_INFO 
	{ 
		DWORD dwType;		// must be 0x1000 
		LPCSTR szName;		// pointer to name (in user addr space) 
		DWORD dwThreadID;	// thread ID (-1=caller thread) 
		DWORD dwFlags;		// reserved for future use, must be zero 
	} THREADNAME_INFO; 

private:
	static DWORD WINAPI _Runner( LPVOID pParam );
};

// CDnPatchDownloadThread Class
enum PatchReturn
{
	PR_FAIL = 0,
	PR_OK,
	PR_LAUNCHER_PATCH,
	PR_FULLPATCH,
	PR_TERMINATE,
};

enum FirstPatchReturn
{
	FPR_FAIL = 0 ,
	FPR_OK ,
	FPR_LAUNCHER_PATCH,
	FPR_NEED_FULLPATCH,

	FPR_MAX
};

#define WM_STATUS_MSG							WM_APP+101	// Patch status message

enum DownloadPatchState
{
	PATCH_NONE = 0,
	PATCH_CHECK_VERSION,			// Checking version
	PATCH_CHECK_VERSION_FAILED,		// Version check failed
	PATCH_DOWNLOAD_DATA,			// Downloading patch data
	PATCH_DOWNLOAD_DATA_FAILED,		// Download patch data failed
	PATCH_MD5_CHECK,				// Checking patch file MD5 checksum
	PATCH_MD5_CHECK_FAILED,			// Patch file MD5 checksum verification failed
	PATCH_APPLY_PAK_FILE,			// Applying patch to PAK archive
	PATCH_APPLY_PAK_FILE_FAILED,	// Applying patch to PAK archive failed
	PATCH_APPLY_PAK_FILE_END,		// Finished applying patch to PAK archive
	PATCH_COMPLETE,					// Patch complete
	PATCH_LAUNCHER,					// Launcher self-update patch
	PATCH_FAILED,					// Patch failed
	PATCH_TERMINATE					// Patch thread terminated
};

struct stDownloadInfoUpdateData
{
	CString m_strFileName;
	__int64	m_nFileSize;
	__int64	m_nDownloadProgressMin;
	__int64	m_nDownloadProgressMax;
	int		m_nCurrentFileCount;
	int		m_nTotalFileCount;
	float	m_fDownloadRate;

	stDownloadInfoUpdateData() : m_nFileSize( 0 ), m_nDownloadProgressMin( 0 ), m_nDownloadProgressMax( 0 ), 
		m_nCurrentFileCount( 0 ), m_nTotalFileCount( 0 ), m_fDownloadRate( 0.0f ) {}
};

enum FileCheck{ FILE_FALSE = 0, FIlE_OK, FIlE_EXIST };

#ifdef _USE_SPLIT_COMPRESS_FILE
struct RARHeaderData
{
	char         ArcName[260];
	char         FileName[260];
	unsigned int Flags;
	unsigned int PackSize;
	unsigned int UnpSize;
	unsigned int HostOS;
	unsigned int FileCRC;
	unsigned int FileTime;
	unsigned int UnpVer;
	unsigned int Method;
	unsigned int FileAttr;
	char         *CmtBuf;
	unsigned int CmtBufSize;
	unsigned int CmtSize;
	unsigned int CmtState;
};

struct RAROpenArchiveDataEx
{
	char         *ArcName;
	wchar_t      *ArcNameW;
	unsigned int OpenMode;
	unsigned int OpenResult;
	char         *CmtBuf;
	unsigned int CmtBufSize;
	unsigned int CmtSize;
	unsigned int CmtState;
	unsigned int Flags;
	unsigned int Reserved[32];
};
#endif // _USE_SPLIT_COMPRESS_FILE



class CDnFistPatchDownloadThread : public CPatchCallback, public CThread
{
public:
	CDnFistPatchDownloadThread();
	virtual ~CDnFistPatchDownloadThread();
	
	virtual void Run();
	void		SetWindowHandle( HWND hWnd ){ m_hWnd = hWnd; }
	void		TerminateThread()			{ m_bTerminateThread = true; }
	BOOL		IsThreadEnd()				{ return m_bTerminateThread; }

	FirstPatchReturn BegineModulePatch();									// Begin FirstPatch (module & launcher patch)
	int			ParsingModuleList();										// Parse module list
	int			ChangeModuleFiles(int nVer);								// Replace module files
	BOOL		DownLoadModulePatch( int nVersion );						// Download module patch files
	BOOL		PatchLauncherFiles( int nVersion );							// Download and apply launcher update
	BOOL		ProcessFullVersionPatch();									// Process full version patch
	void		ProcessRebootLauncher();									// Restart launcher
	BOOL		SaveModuleVersionToPak( int nVersion );						// Save Version.cfg to PAK archive
	BOOL		SaveModuleVersionFile( CString& szFilePath, int nVersion ); // Save Version.cfg to file
	BOOL		SaveModuleVersionFileWithOutPakSave( CString& szFilePath, int nVersion );
	void		CloseThread();

private:
	HWND		m_hWnd;								// Window handle
	BOOL		m_bTerminateThread;					// Thread cancellation flag
	CString		m_strFirstPatchURLPath;				// FirstPatch base URL endpoint
	CString		m_strPatchListFile;					// Patch list file path
	std::vector<std::string>	m_vecCopyList;		// Files to copy
	std::vector<std::string>	m_vecDeleteList;	// Files to delete
};



class CDnPatchDownloadThread : public CPatchCallback, public CThread
{
public:
	CDnPatchDownloadThread();
	virtual ~CDnPatchDownloadThread();
	void SetWindowHandle( HWND hWnd ) { m_hWnd = hWnd; }

	virtual void Run();
	void TerminateThread() { m_bTerminateThread = true; }

private:
	PatchReturn BeginPatch();				// Begin patch execution

	// Download
	BOOL DownLoadPatch( int nVersion );						// Download patch files

#ifdef _USE_SPLIT_COMPRESS_FILE
	HRESULT URLDownload( LPCTSTR strPatchFileUrl, LPCTSTR strFilePath, LPCTSTR strFileName, 
						BOOL bSplitDownload = FALSE, DWORD dwAlreadyDownloadSize = 0, DWORD dwRemainDownloadFileSize = 0 );		// Download patch file over HTTP
	FileCheck CheckPatchFile( HINTERNET hInternetSession, LPCTSTR strFileName,
							CFile& file, DWORD& dwDownloadFileSize, BOOL bSplitDownload = FALSE );								// Verify patch file
#else // _USE_SPLIT_COMPRESS_FILE
	HRESULT URLDownload( LPCTSTR strPatchFileUrl, LPCTSTR strFilePath, LPCTSTR strFileName );	// Download patch file over HTTP
	FileCheck CheckPatchFile( HINTERNET hInternetSession, LPCTSTR strFileName,
							CFile& file, DWORD& dwDownloadFileSize );							// Verify patch file
#endif // _USE_SPLIT_COMPRESS_FILE

	DWORD GetDownloadFileSize( HINTERNET hInternetSession, CString strHttpPath );				// Query download file size via HTTP header
	BOOL GetMD5Checksum();																		// Verify downloaded file integrity via MD5 checksum

	// Apply Packing File
	PatchReturn PreApplyPakPatch();									// Pre-process patch files (index sorting, space reservation)
	PatchReturn ApplyPakPatch();									// Apply patch to PAK archives
	PatchReturn ApplyDeleteList( CEtPackingFile& PatchSource );		// Delete files from PAK archive
	PatchReturn ApplyPatchList( CEtPackingFile& PatchSource );		// Patch files in PAK archive
	PatchReturn ApplyCopyList( CEtPackingFile& PatchSource );		// Copy files to PAK archive
	PatchReturn GetPackingFile();									// Open destination PAK archive
	BOOL LoadPatchList();											// Parse patch list file
	PatchReturn PatchFileExist( int nPatchFileCount, CEtPackingFile& PatchSource, SPackingFileInfo* pFileInfo, BOOL& bPatch );
	PatchReturn PatchFileSuitableSpace( CEtPackingFile& PatchSource, SPackingFileInfo* pFileInfo, BOOL& bPatch );
	void PatchFileReserve( int nPatchFileCount, SPackingFileInfo* pFileInfo );

	void SendStatusMsg( DownloadPatchState nID );				// Post status message to dialog window

	BOOL ProcessFullVersionPatch();								// Process full version patch
	BOOL SaveVersionFile( CString& szFilePath, int nVersion );	// Save updated Version.cfg file
	BOOL SaveNewVersionToPak( int nVersion );					// Write updated Version.cfg into PAK archive

	void RecordFileExceptionLog( CFileException& e );

#ifdef _USE_RTPATCH
	BOOL ExportFile( CEtPackingFile& PakFile, const char* pExportFileName, const char* pCreateFilePath );	// Extract file from PAK archive
	PatchReturn ApplyRTPatch( CEtPackingFile& PatchSource, CEtPackingFile& RTPatchSource );					// Apply RTPatch binary diff to PAK archive
	static LPVOID CALLBACK EXPORT RTPatchCALLBACK( UINT Id, LPVOID Param );
#endif // _USE_RTPATCH
#ifdef _FIRST_PATCH
	BOOL CheckExistFirstPatch( int nVersion );
#endif // _FIRST_PATCH

#ifdef _USE_SPLIT_COMPRESS_FILE
	HRESULT DownLoadSplitFile( CString strUrl, int nVersion );
	DWORD GetSplitFileSizeList( CString strUrl, int nVersion, int nSplitCount, int nSplitCountCipher, std::vector<DWORD>& vecSplitFileSizeList );
	int LoadSplitCount( CString& szFilePath );
	HRESULT UnRARArchive( CString strPath, CString strRARFile );
#endif // _USE_SPLIT_COMPRESS_FILE

private:
	HINTERNET	m_hHttpConnection;		// Http Connection Handle

	DWORD		m_dwTempFileLength;		// Downloaded temporary file length
	DWORD		m_dwDownloadFileLength;	// Current file downloaded length
	DWORD		m_dwTotalFileLength;	// Current file total length
	DWORD		m_dwTotalBytes;			// Cumulative downloaded bytes

	CString		m_strPatchFileUrl;		// Remote patch file URL
	CString		m_strPatchFileLocal;	// Local temporary file path (.tmp -> .pak)
	CString		m_strPatchFile;			// Final patch file path (.pak)
	CString		m_strPatchListFile;		// Patch list file path

	float		m_fRate;				// Download Rate
	float		m_fPercent;				// Download Percent

	DownloadPatchState m_emDownPatchState;	// Current download patch state
	
	HWND		m_hWnd;					// Dialog window handle
	BOOL		m_bTerminateThread;		// Thread cancellation flag

	std::vector<CEtPackingFile*>	m_vecPackingFile;		// Target PAK archives
	std::vector<std::string>		m_vecDeleteList;		// Files to delete
	std::vector<std::string>		m_vecPatchList;			// Files to patch
	std::vector<std::string>		m_vecCopyList;			// Files to copy
	struct stFileIndexSet
	{
		DWORD m_dwPakFileNum;
		DWORD m_dwPatchFileIndex;
		DWORD m_dwReserveFileIndex;
	};

	std::vector<stFileIndexSet>		m_vecReserveIndex;		// Reserved file indices in PAK archives

	int			m_nCurPatchCount;		// Current patch count
	int			m_nTotalPatchCount;		// Total patch count

#ifdef _USE_RTPATCH
	std::string	m_strRTPatchTempFolder;		// RTPatch temporary folder
#endif // _USE_RTPATCH

#ifdef _USE_SPLIT_COMPRESS_FILE
	HINSTANCE	hUnrarDLL;					// Unrar DLL handle

	HANDLE (WINAPI *OpenArchiveEx)( RAROpenArchiveDataEx* pArchiveData );
	int    (WINAPI *CloseArchive)( HANDLE hArcData );
	int    (WINAPI *ReadRARHeader)( HANDLE hArcData, RARHeaderData *pHeaderData );
	int    (WINAPI *ProcessRARFile)( HANDLE hArcData, int iOperation, char* strDestFolder, char* strDestName );
#endif // _USE_SPLIT_COMPRESS_FILE
};

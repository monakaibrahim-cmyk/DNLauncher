//////////////////////////////////////////////////////////////////////////
// CHttpDownload - HTTP File Download Class
//////////////////////////////////////////////////////////////////////////

#pragma once

#include <afxsock.h>
#include <afxinet.h>

class CHttpDownload
{
public:
	CHttpDownload();
	virtual ~CHttpDownload();

	enum { HTTPDOWNLOAD_SUCCESS = 0, HTTPDOWNLOAD_ERROR, HTTPDOWNLOAD_ALREADY_DOWNLOAD, HTTPDOWNLOAD_TERMINATE };
public:
	int DownloadFile( HINTERNET hInternetSession, CString strHttpPath, CString strLocalPath );
	void SetExit( BOOL bExit ) { m_bExit = bExit; }
	BOOL IsExit() { return m_bExit; }

	DWORD GetTotalFileSize() { return m_dwTotalFileLength; }
	DWORD GetTotalDownloadBytes() { return m_dwTotalBytes; }
	float GetDownloadRate() { return m_fRate; }
	float GetDownloadPercent() { return m_fPercent; }

	void Reset();

private:
	DWORD GetDownloadFileSize( HINTERNET hInternetSession, CString strHttpPath );
	BOOL GetMD5Checksum();

private:
	HINTERNET m_hHttpConnection;	// Http Connection Handle

	DWORD m_dwTempFileLength;		// Currently downloaded temp file size
	DWORD m_dwDownloadFileLength;	// Remaining file size to download
	DWORD m_dwTotalFileLength;		// Total file size
	DWORD m_dwTotalBytes;			// Total downloaded bytes

	CString m_strHttpPath;			// HTTP source URL
	CString m_strLocalPath;			// Local target path

	float m_fRate;					// Download Rate
	float m_fPercent;				// Download Percent

	BOOL m_bExit;					// Exit Flag
};
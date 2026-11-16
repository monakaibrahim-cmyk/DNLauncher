#pragma once

#include <afxwin.h>
#include <wininet.h>

/**
 * @brief HTTP file downloader with Range resume and .MD5 sidecar verification.
 *
 * Reconstructed from DnAutoUpdate.exe:
 *   - Class: CHttpDownload (vtable 0x0043ECF0, singleton at 0x0044C818)
 *   - Methods: 0x00401000..0x00401DA1
 */
class CHttpDownload
{
public:
    enum DownloadResult
    {
        DOWNLOAD_SUCCESS        = 0,
        DOWNLOAD_ERROR          = 1,
        DOWNLOAD_ALREADY_EXISTS = 2,
        DOWNLOAD_STOPPED        = 3
    };

    CHttpDownload();
    virtual ~CHttpDownload();

    void Reset();
    int DownloadFile(HINTERNET hSession, CString strUrl, CString strSavePath);
    DWORD GetHttpFileSize(HINTERNET hSession, CString strUrl);
    BOOL CheckMD5();

    static BOOL DelFile(LPCTSTR szFilePath);

public:
    HINTERNET m_hInternetFile;       // +0x04 (0x0044C81C)
    DWORD     m_dwTempFileLength;    // +0x08 (0x0044C820)
    DWORD     m_dwContentLength;     // +0x0C (0x0044C824)
    DWORD     m_dwTotalFileSize;     // +0x10 (0x0044C828)
    DWORD     m_dwReadSize;          // +0x14 (0x0044C82C)
    CString   m_strUrl;              // +0x18 (0x0044C830)
    CString   m_strDownloadFilePath; // +0x1C (0x0044C834)
    float     m_fDownloadRate;       // +0x20 (0x0044C838) KB/s
    float     m_fPercent;            // +0x24 (0x0044C83C) 0..100
    BOOL      m_bStop;               // +0x28 (0x0044C840)
};

extern CHttpDownload g_HttpDownload;

#include "stdafx.h"
#include "HttpDownload.h"
#include "../Common/MD5Checksum.h"
#include <urlmon.h>
#include <mmsystem.h>

CHttpDownload g_HttpDownload;

// ---------------------------------------------------------------------------
// 0x00401000: DelFile — retries deleting a read-only/locked file for up to 5s
// ---------------------------------------------------------------------------
BOOL CHttpDownload::DelFile(LPCTSTR szFilePath)
{
    if (szFilePath == NULL || szFilePath[0] == _T('\0')) {
        return FALSE;
    }

    if (::GetFileAttributes(szFilePath) == INVALID_FILE_ATTRIBUTES) {
        return TRUE;
    }

    DWORD dwStartTime = ::timeGetTime();
    while (!::DeleteFile(szFilePath)) {
        DWORD dwAttrs = ::GetFileAttributes(szFilePath);
        if (dwAttrs == INVALID_FILE_ATTRIBUTES) {
            return TRUE;
        }
        if (dwAttrs & FILE_ATTRIBUTE_READONLY) {
            ::SetFileAttributes(szFilePath, dwAttrs & ~FILE_ATTRIBUTE_READONLY);
        }
        ::Sleep(10);
        if (::timeGetTime() - dwStartTime >= 5000) {
            return FALSE;
        }
    }
    return TRUE;
}

// ---------------------------------------------------------------------------
// 0x00401070: CHttpDownload::CHttpDownload
// ---------------------------------------------------------------------------
CHttpDownload::CHttpDownload()
    : m_hInternetFile(NULL)
    , m_dwTempFileLength(0)
    , m_dwContentLength(0)
    , m_dwTotalFileSize(0)
    , m_dwReadSize(0)
    , m_fDownloadRate(0.0f)
    , m_fPercent(0.0f)
    , m_bStop(FALSE)
{
}

// ---------------------------------------------------------------------------
// 0x00401120: CHttpDownload::~CHttpDownload
// ---------------------------------------------------------------------------
CHttpDownload::~CHttpDownload()
{
    Reset();
}

void CHttpDownload::Reset()
{
    if (m_hInternetFile != NULL) {
        ::InternetCloseHandle(m_hInternetFile);
        m_hInternetFile = NULL;
    }
    m_fDownloadRate    = 0.0f;
    m_fPercent         = 0.0f;
    m_dwTempFileLength = 0;
    m_dwContentLength  = 0;
    m_dwTotalFileSize  = 0;
    m_dwReadSize       = 0;
    m_bStop            = FALSE;
}

// ---------------------------------------------------------------------------
// 0x00401790: CHttpDownload::GetHttpFileSize
// ---------------------------------------------------------------------------
DWORD CHttpDownload::GetHttpFileSize(HINTERNET hSession, CString strUrl)
{
    if (hSession == NULL || strUrl.IsEmpty()) {
        return 0;
    }

    HINTERNET hFile = ::InternetOpenUrl(
        hSession,
        strUrl,
        NULL,
        0,
        INTERNET_FLAG_RELOAD | INTERNET_FLAG_DONT_CACHE,
        0);
    if (hFile == NULL) {
        return 0;
    }

    TCHAR szStatusCode[32] = { 0 };
    DWORD dwStatusSize = sizeof(szStatusCode);
    DWORD dwIndex = 0;
    if (::HttpQueryInfo(hFile, HTTP_QUERY_STATUS_CODE, szStatusCode, &dwStatusSize, &dwIndex)) {
        int nStatus = _ttoi(szStatusCode);
        if (nStatus >= 400) {
            ::InternetCloseHandle(hFile);
            return 0;
        }
    }

    TCHAR szContentLen[64] = { 0 };
    DWORD dwLenSize = sizeof(szContentLen);
    dwIndex = 0;
    DWORD dwFileSize = 0;
    if (::HttpQueryInfo(hFile, HTTP_QUERY_CONTENT_LENGTH, szContentLen, &dwLenSize, &dwIndex)) {
        dwFileSize = static_cast<DWORD>(_ttoi(szContentLen));
    }

    ::InternetCloseHandle(hFile);
    return dwFileSize;
}

// ---------------------------------------------------------------------------
// 0x004018D0: CHttpDownload::CheckMD5
// Downloads <m_strUrl>.MD5 and compares with CMD5Checksum::GetMD5(m_strDownloadFilePath).
// ---------------------------------------------------------------------------
BOOL CHttpDownload::CheckMD5()
{
    CString strMd5Url  = m_strUrl + _T(".MD5");
    CString strMd5Path = m_strDownloadFilePath + _T(".MD5");

    DelFile(strMd5Path);

    HRESULT hr = E_FAIL;
    for (int nTry = 0; nTry < 3; ++nTry) {
        ::DeleteUrlCacheEntry(strMd5Url);
        hr = ::URLDownloadToFile(NULL, strMd5Url, strMd5Path, 0, NULL);
        if (SUCCEEDED(hr) && ::GetFileAttributes(strMd5Path) != INVALID_FILE_ATTRIBUTES) {
            break;
        }
    }

    if (FAILED(hr) || ::GetFileAttributes(strMd5Path) == INVALID_FILE_ATTRIBUTES) {
        return FALSE;
    }

    CFile fileMd5;
    if (!fileMd5.Open(strMd5Path, CFile::modeRead | CFile::shareDenyNone)) {
        DelFile(strMd5Path);
        return FALSE;
    }

    ULONGLONG ullLen = fileMd5.GetLength();
    if (ullLen == 0 || ullLen > 1024) {
        fileMd5.Close();
        DelFile(strMd5Path);
        return FALSE;
    }

    char szBuf[1025] = { 0 };
    UINT uRead = fileMd5.Read(szBuf, static_cast<UINT>(ullLen));
    fileMd5.Close();
    DelFile(strMd5Path);

    szBuf[uRead] = '\0';
    CString strRemoteMd5(szBuf);
    strRemoteMd5.Trim();
    if (strRemoteMd5.GetLength() > 32) {
        strRemoteMd5 = strRemoteMd5.Left(32);
    }

    CString strLocalMd5 = CMD5Checksum::GetMD5(m_strDownloadFilePath);
    return (strLocalMd5.CompareNoCase(strRemoteMd5) == 0) ? TRUE : FALSE;
}

// ---------------------------------------------------------------------------
// 0x004011A0: CHttpDownload::DownloadFile
// ---------------------------------------------------------------------------
int CHttpDownload::DownloadFile(HINTERNET hSession, CString strUrl, CString strSavePath)
{
    m_strUrl              = strUrl;
    m_strDownloadFilePath = strSavePath + _T(".tmp");

    DWORD dwHttpFileSize = GetHttpFileSize(hSession, strUrl);
    if (dwHttpFileSize == 0) {
        return DOWNLOAD_ERROR;
    }

    // Check if the completed file already exists with matching size (0x00401230)
    CFile fileExist;
    if (fileExist.Open(strSavePath, CFile::modeRead | CFile::shareDenyNone)) {
        ULONGLONG ullExistSize = fileExist.GetLength();
        fileExist.Close();
        if (static_cast<DWORD>(ullExistSize) == dwHttpFileSize) {
            m_dwTotalFileSize = dwHttpFileSize;
            m_dwReadSize      = dwHttpFileSize;
            m_fPercent        = 100.0f;
            return DOWNLOAD_ALREADY_EXISTS;
        }
        DelFile(strSavePath);
    }

    // Open or create the .tmp partial download file (0x004012C0)
    CFile fileTemp;
    if (fileTemp.Open(m_strDownloadFilePath, CFile::modeWrite | CFile::shareExclusive)) {
        m_dwTempFileLength = static_cast<DWORD>(fileTemp.GetLength());
        if (m_dwTempFileLength > dwHttpFileSize) {
            fileTemp.Close();
            DelFile(m_strDownloadFilePath);
            m_dwTempFileLength = 0;
        }
    } else {
        m_dwTempFileLength = 0;
    }

    if (m_dwTempFileLength == 0) {
        if (!fileTemp.Open(m_strDownloadFilePath, CFile::modeCreate | CFile::modeWrite | CFile::shareExclusive)) {
            return DOWNLOAD_ERROR;
        }
    }

    // If the .tmp file has not yet reached the full size, stream remaining bytes via HTTP Range
    if (m_dwTempFileLength < dwHttpFileSize) {
        CString strHeader;
        strHeader.Format(
            _T("Range:bytes=%d-\r\nCache-Control:no-cache\r\nPragma:no-cache"),
            m_dwTempFileLength);

        m_hInternetFile = ::InternetOpenUrl(
            hSession,
            m_strUrl,
            strHeader,
            static_cast<DWORD>(strHeader.GetLength()),
            INTERNET_FLAG_RELOAD | INTERNET_FLAG_DONT_CACHE | INTERNET_FLAG_PRAGMA_NOCACHE,
            0);
        if (m_hInternetFile == NULL) {
            fileTemp.Close();
            return DOWNLOAD_ERROR;
        }

        TCHAR szStatusCode[32] = { 0 };
        DWORD dwStatusSize = sizeof(szStatusCode);
        DWORD dwIndex = 0;
        if (::HttpQueryInfo(m_hInternetFile, HTTP_QUERY_STATUS_CODE, szStatusCode, &dwStatusSize, &dwIndex)) {
            int nStatus = _ttoi(szStatusCode);
            if (nStatus >= 400) {
                fileTemp.Close();
                ::InternetCloseHandle(m_hInternetFile);
                m_hInternetFile = NULL;
                return DOWNLOAD_ERROR;
            }
        }

        TCHAR szContentLen[64] = { 0 };
        DWORD dwLenSize = sizeof(szContentLen);
        dwIndex = 0;
        if (::HttpQueryInfo(m_hInternetFile, HTTP_QUERY_CONTENT_LENGTH, szContentLen, &dwLenSize, &dwIndex)) {
            m_dwContentLength = static_cast<DWORD>(_ttoi(szContentLen));
        } else {
            m_dwContentLength = dwHttpFileSize - m_dwTempFileLength;
        }

        m_dwTotalFileSize = m_dwContentLength + m_dwTempFileLength;
        m_dwReadSize      = m_dwTempFileLength;

        fileTemp.SeekToEnd();

        BYTE  byBuffer[8192];
        DWORD dwStartTick   = ::timeGetTime();
        DWORD dwBytesInTick = 0;

        while (!m_bStop) {
            DWORD dwAvail = 0;
            if (!::InternetQueryDataAvailable(m_hInternetFile, &dwAvail, 0, 0)) {
                fileTemp.Close();
                ::InternetCloseHandle(m_hInternetFile);
                m_hInternetFile = NULL;
                return DOWNLOAD_ERROR;
            }

            DWORD dwToRead = (dwAvail > sizeof(byBuffer)) ? sizeof(byBuffer) : dwAvail;
            if (dwToRead == 0) {
                dwToRead = sizeof(byBuffer);
            }

            DWORD dwBytesRead = 0;
            if (!::InternetReadFile(m_hInternetFile, byBuffer, dwToRead, &dwBytesRead)) {
                fileTemp.Close();
                ::InternetCloseHandle(m_hInternetFile);
                m_hInternetFile = NULL;
                return DOWNLOAD_ERROR;
            }

            if (dwBytesRead == 0) {
                break;
            }

            fileTemp.Write(byBuffer, dwBytesRead);
            m_dwReadSize  += dwBytesRead;
            dwBytesInTick += dwBytesRead;

            DWORD dwNow     = ::timeGetTime();
            DWORD dwElapsed = dwNow - dwStartTick;
            if (dwElapsed > 0) {
                m_fDownloadRate = (static_cast<float>(dwBytesInTick) / 1024.0f) /
                                  (static_cast<float>(dwElapsed) / 1000.0f);
            }
            if (m_dwTotalFileSize > 0) {
                m_fPercent = (static_cast<float>(m_dwReadSize) * 100.0f) /
                             static_cast<float>(m_dwTotalFileSize);
            }
        }

        fileTemp.Close();
        ::InternetCloseHandle(m_hInternetFile);
        m_hInternetFile = NULL;

        if (m_bStop) {
            return DOWNLOAD_STOPPED;
        }
    } else {
        fileTemp.Close();
        m_dwTotalFileSize = dwHttpFileSize;
        m_dwReadSize      = dwHttpFileSize;
        m_fPercent        = 100.0f;
    }

    // Verify .MD5 sidecar before committing .tmp -> final path (0x00401690)
    if (!CheckMD5()) {
        DelFile(m_strDownloadFilePath);
        return DOWNLOAD_ERROR;
    }

    DelFile(strSavePath);
    try {
        CFile::Rename(m_strDownloadFilePath, strSavePath);
    } catch (CFileException* pEx) {
        pEx->Delete();
        return DOWNLOAD_ERROR;
    }

    return DOWNLOAD_SUCCESS;
}

#include "stdafx.h"
#include <wininet.h>
#include <shellapi.h>
#include <algorithm>
#include "Patcher/DnPatchThread.h"
#include "Patcher/DnPatchInfo.h"
#include "Common/LogWnd.h"
#include "Common/MD5Checksum.h"
#include "EtFileSystem/EtFileSystem.h"

#pragma comment(lib, "wininet.lib")

namespace
{
const DWORD kMaxPakSizeBytes = 0x20000000; // 512 MB cap matching DNLauncher @ 0x00413c80
const TCHAR* const kUserAgent = _T("DNLauncher");

std::string TrimCopyA(const char* szText)
{
    if (szText == NULL) return std::string();
    std::string s(szText);
    while (!s.empty() && (s.back() == '\r' || s.back() == '\n' || s.back() == ' ' || s.back() == '\t'))
    {
        s.pop_back();
    }
    size_t start = 0;
    while (start < s.size() && (s[start] == ' ' || s[start] == '\t'))
    {
        ++start;
    }
    return s.substr(start);
}

void NormalizeSlashesForFsA(std::string& s)
{
    while (!s.empty() && (s[0] == '\\' || s[0] == '/'))
    {
        s.erase(s.begin());
    }
    std::replace(s.begin(), s.end(), '/', '\\');
}
} // namespace

CDnPatchDownloadThread::CDnPatchDownloadThread()
    : m_hNotifyWnd(NULL)
    , m_nPatchState(PATCH_STATE_NONE)
    , m_bStop(FALSE)
    , m_bRequireMd5(true)
{
}

CDnPatchDownloadThread::~CDnPatchDownloadThread()
{
    CloseResourcePaks();
}

void CDnPatchDownloadThread::SetNotifyHwnd(HWND hWnd)
{
    m_hNotifyWnd = hWnd;
}

void CDnPatchDownloadThread::RequestStop()
{
    ::InterlockedExchange(&m_bStop, TRUE);
}

void CDnPatchDownloadThread::GetProgress(SPatchProgressInfo& outInfo) const
{
    ScopeLock<CSyncLock> lock(const_cast<CSyncLock&>(m_csProgress));
    outInfo = m_Progress;
}

void CDnPatchDownloadThread::PostStatus(EPatchStatusState state)
{
    m_nPatchState = static_cast<int>(state);
    if (m_hNotifyWnd != NULL && ::IsWindow(m_hNotifyWnd))
    {
        ::PostMessage(m_hNotifyWnd, WM_PATCH_STATUS, static_cast<WPARAM>(state), 0);
    }
}

void CDnPatchDownloadThread::ResetProgress(LONGLONG nCurrent, LONGLONG nTotal)
{
    ScopeLock<CSyncLock> lock(m_csProgress);
    m_Progress.nCurrentBytes = nCurrent;
    m_Progress.nTotalBytes = nTotal;
    m_Progress.fDownloadSpeedBytesPerSec = 0.0f;
}

CStringA CDnPatchDownloadThread::ToAnsi(const CString& str)
{
    return CStringA(CT2A(str));
}

void CDnPatchDownloadThread::EnsureParentDirectoriesA(const char* szFilePath)
{
    if (szFilePath == NULL) return;
    std::string path(szFilePath);
    for (size_t i = 0; i < path.size(); ++i)
    {
        if (path[i] == '\\' || path[i] == '/')
        {
            std::string dir = path.substr(0, i);
            if (!dir.empty() && dir.back() != ':')
            {
                ::CreateDirectoryA(dir.c_str(), NULL);
            }
        }
    }
}

bool CDnPatchDownloadThread::WaitForFileRemove(const TCHAR* szFilePath, int nRetries)
{
    if (::GetFileAttributes(szFilePath) == INVALID_FILE_ATTRIBUTES)
    {
        return true;
    }
    for (int i = 0; i < nRetries; ++i)
    {
        if (::DeleteFile(szFilePath))
        {
            return true;
        }
        ::Sleep(100);
    }
    return ::GetFileAttributes(szFilePath) == INVALID_FILE_ATTRIBUTES;
}

void CDnPatchDownloadThread::Run()
{
    LogWnd::Log(LogWnd::LogLevel::Info, _T("Patch Start!"));
    if (m_hNotifyWnd == NULL)
    {
        return;
    }

    ::InterlockedExchange(&m_bStop, FALSE);
    const int result = BeginPatch();

    switch (result)
    {
    case BEGIN_FAILED:
        LogWnd::Log(LogWnd::LogLevel::Error, _T("Patch Failed!"));
        PostStatus(PATCH_STATE_FAILED);
        break;
    case BEGIN_SUCCESS:
        LogWnd::Log(LogWnd::LogLevel::Info, _T("Patch Success!"));
        PostStatus(PATCH_STATE_COMPLETE);
        break;
    case BEGIN_LAUNCHER_PATCHED:
    {
        LogWnd::Log(LogWnd::LogLevel::Info, _T("Launcher Restart because Launcher Patched."));
        CDnPatchInfo& info = CDnPatchInfo::GetInstance();
        CString exePath = info.m_strClientPath + _T("\\DnLauncher.exe");
        HANDLE hExe = ::CreateFile(exePath, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
        bool isPeExecutable = false;
        if (hExe != INVALID_HANDLE_VALUE)
        {
            char mz[2] = {};
            DWORD dwRead = 0;
            if (::ReadFile(hExe, mz, 2, &dwRead, NULL) && dwRead == 2 && mz[0] == 'M' && mz[1] == 'Z')
            {
                isPeExecutable = true;
            }
            ::CloseHandle(hExe);
        }
        if (isPeExecutable)
        {
            ::ShellExecute(m_hNotifyWnd, NULL, exePath, ::GetCommandLine(), NULL, SW_SHOWNORMAL);
        }
        PostStatus(PATCH_STATE_LAUNCHER_RESTARTING);
        break;
    }
    case BEGIN_FULL_VERSION_ERR:
        LogWnd::Log(LogWnd::LogLevel::Error, _T("ProcessFullVersionPatch"));
        PostStatus(PATCH_STATE_VERSION_FAILED);
        break;
    case BEGIN_TERMINATED:
        LogWnd::Log(LogWnd::LogLevel::Warning, _T("Patch Terminate!"));
        PostStatus(PATCH_STATE_TERMINATED);
        break;
    default:
        break;
    }
}

int CDnPatchDownloadThread::BeginPatch()
{
    LogWnd::Log(LogWnd::LogLevel::Info, _T("BeginPatch - Start"));
    PostStatus(PATCH_STATE_CONNECTING);

    CDnPatchInfo& info = CDnPatchInfo::GetInstance();
    const int clientVer = info.m_nClientVersion;
    const int serverVer = info.m_nServerVersion;
    LogWnd::Log(LogWnd::LogLevel::Info, _T("Patch Check Version (Client Ver:%d, Server Ver:%d)"), clientVer, serverVer);

    if (clientVer == -1 || serverVer == -1)
    {
        LogWnd::Log(LogWnd::LogLevel::Error, _T("Version Check Failed Run Fullpatch Process"));
        PostStatus(PATCH_STATE_VERSION_FAILED);
        return BEGIN_FAILED;
    }

    if (clientVer == serverVer)
    {
        return BEGIN_SUCCESS;
    }
    if (clientVer > serverVer)
    {
        return BEGIN_FULL_VERSION_ERR;
    }

    const int totalSteps = serverVer - clientVer;
    int finalResult = BEGIN_SUCCESS;

    for (int ver = clientVer + 1; ver <= serverVer; ++ver)
    {
        if (m_bStop)
        {
            return BEGIN_TERMINATED;
        }

        {
            ScopeLock<CSyncLock> lock(m_csProgress);
            m_Progress.nCurrentBytes = 0;
            m_Progress.nTotalBytes = 100;
            m_Progress.nDownloadFileSizeBytes = 0;
            m_Progress.nCurrentPatchIndex = ver - clientVer;
            m_Progress.nCurrentVersion = ver;
            m_Progress.nTotalPatchCount = totalSteps;
            m_Progress.fDownloadSpeedBytesPerSec = 0.0f;
        }

        PostStatus(PATCH_STATE_DOWNLOADING);
        bool downloaded = false;
        for (int attempt = 0; attempt < 3; ++attempt)
        {
            if (m_bStop)
            {
                return BEGIN_TERMINATED;
            }
            if (DownloadPatch(ver))
            {
                downloaded = true;
                break;
            }
            PostStatus(PATCH_STATE_DOWNLOADING);
        }

        if (!downloaded)
        {
            LogWnd::Log(LogWnd::LogLevel::Error, _T("%d Version Patch Download Failed!"), ver);
            return BEGIN_FAILED;
        }

        if (m_bStop)
        {
            return BEGIN_TERMINATED;
        }

        ResetProgress(0, 100);
        PostStatus(PATCH_STATE_APPLYING);

        const int applyRes = ApplyPakPatch(ver);
        if (applyRes == 4) // interrupted
        {
            return BEGIN_TERMINATED;
        }
        if (applyRes != 1 && applyRes != 2)
        {
            LogWnd::Log(LogWnd::LogLevel::Error, _T("%d Version Patch Apply Failed!"), ver);
            PostStatus(PATCH_STATE_APPLY_FAILED);
            return BEGIN_FULL_VERSION_ERR;
        }

        // Remove patch artifacts after successful apply
        CString pakPath, txtPath;
        pakPath.Format(_T("%s\\Patch%08d.pak"), static_cast<const TCHAR*>(info.m_strClientPath), ver);
        txtPath.Format(_T("%s\\Patch%08d.txt"), static_cast<const TCHAR*>(info.m_strClientPath), ver);
        WaitForFileRemove(pakPath);
        WaitForFileRemove(txtPath);

        LogWnd::Log(LogWnd::LogLevel::Info, _T("%d Version Patch Apply Success!"), ver);
        info.SaveVersionFile(ver, info.m_nModuleVersion);
        PostStatus(PATCH_STATE_STEP_DONE);

        if (applyRes == 2)
        {
            finalResult = BEGIN_LAUNCHER_PATCHED;
            break;
        }
    }

    LogWnd::Log(LogWnd::LogLevel::Info, _T("BeginPatch - End"));
    return finalResult;
}

bool CDnPatchDownloadThread::DownloadPatch(int nPatchVersion)
{
    LogWnd::Log(LogWnd::LogLevel::Info, _T("Patch Step 1 - DownloadPatch Start"));
    CDnPatchInfo& info = CDnPatchInfo::GetInstance();

    CString folderUrl;
    folderUrl.Format(_T("%s%08d/"), static_cast<const TCHAR*>(info.m_strPatchUrl), nPatchVersion);

    CString pakFileName, txtFileName;
    pakFileName.Format(_T("Patch%08d.pak"), nPatchVersion);
    txtFileName.Format(_T("Patch%08d.txt"), nPatchVersion);

    const CString pakUrl = folderUrl + pakFileName;
    const CString txtUrl = folderUrl + txtFileName;
    const CString localPak = info.m_strClientPath + _T("\\") + pakFileName;
    const CString localTxt = info.m_strClientPath + _T("\\") + txtFileName;

    LogWnd::Log(LogWnd::LogLevel::Info, _T("Patch PackFile Download Start [%s]"), static_cast<const TCHAR*>(pakUrl));
    if (!URLDownload(pakUrl, localPak))
    {
        LogWnd::Log(LogWnd::LogLevel::Error, _T("PackFile Download Failed!"));
        return false;
    }

    LogWnd::Log(LogWnd::LogLevel::Info, _T("Download txt File"));
    if (!URLDownload(txtUrl, localTxt))
    {
        LogWnd::Log(LogWnd::LogLevel::Error, _T("Download txt File Failed!"));
        return false;
    }

    LogWnd::Log(LogWnd::LogLevel::Info, _T("Download txt File Success"));
    LogWnd::Log(LogWnd::LogLevel::Info, _T("Patch Step 1 - DownloadPatch End"));
    return true;
}

bool CDnPatchDownloadThread::QueryRemoteFileSize(HINTERNET hSession, const CString& strUrl, LONGLONG& nOutSize)
{
    nOutSize = -1;
    const DWORD flags = INTERNET_FLAG_RELOAD | INTERNET_FLAG_NO_CACHE_WRITE | INTERNET_FLAG_PRAGMA_NOCACHE;
    HINTERNET hUrl = ::InternetOpenUrl(hSession, strUrl, _T("Cache-Control: no-cache\r\n"), ~0UL, flags, 0);
    if (hUrl == NULL)
    {
        return false;
    }

    DWORD dwStatus = 0;
    DWORD dwStatusLen = sizeof(dwStatus);
    if (::HttpQueryInfo(hUrl, HTTP_QUERY_STATUS_CODE | HTTP_QUERY_FLAG_NUMBER, &dwStatus, &dwStatusLen, NULL))
    {
        if (dwStatus >= 400)
        {
            ::InternetCloseHandle(hUrl);
            return false;
        }
    }

    TCHAR szLenBuf[64] = {};
    DWORD dwBufLen = sizeof(szLenBuf);
    if (::HttpQueryInfo(hUrl, HTTP_QUERY_CONTENT_LENGTH, szLenBuf, &dwBufLen, NULL))
    {
        nOutSize = _ttoi64(szLenBuf);
    }

    ::InternetCloseHandle(hUrl);
    return true;
}

bool CDnPatchDownloadThread::FetchMd5Digest(const CString& strMd5Url, CString& strOutHex)
{
    strOutHex.Empty();
    HINTERNET hSession = ::InternetOpen(kUserAgent, INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
    if (hSession == NULL)
    {
        return false;
    }

    const DWORD flags = INTERNET_FLAG_RELOAD | INTERNET_FLAG_NO_CACHE_WRITE | INTERNET_FLAG_PRAGMA_NOCACHE;
    HINTERNET hUrl = ::InternetOpenUrl(hSession, strMd5Url, NULL, 0, flags, 0);
    if (hUrl == NULL)
    {
        ::InternetCloseHandle(hSession);
        return false;
    }

    DWORD dwStatus = 0;
    DWORD dwStatusLen = sizeof(dwStatus);
    if (::HttpQueryInfo(hUrl, HTTP_QUERY_STATUS_CODE | HTTP_QUERY_FLAG_NUMBER, &dwStatus, &dwStatusLen, NULL) && dwStatus >= 400)
    {
        ::InternetCloseHandle(hUrl);
        ::InternetCloseHandle(hSession);
        return false;
    }

    char buf[256] = {};
    DWORD dwRead = 0;
    std::string raw;
    while (::InternetReadFile(hUrl, buf, sizeof(buf) - 1, &dwRead) && dwRead > 0)
    {
        raw.append(buf, dwRead);
        if (raw.size() >= 256) break;
    }

    ::InternetCloseHandle(hUrl);
    ::InternetCloseHandle(hSession);

    // Extract leading 32 hex chars (handles both raw digest and "<md5>  <filename>")
    std::string trimmed = TrimCopyA(raw.c_str());
    size_t sp = trimmed.find_first_of(" \t\r\n");
    if (sp != std::string::npos)
    {
        trimmed = trimmed.substr(0, sp);
    }
    if (trimmed.size() != 32)
    {
        return false;
    }

    strOutHex = CString(trimmed.c_str());
    return true;
}

bool CDnPatchDownloadThread::URLDownload(const CString& strUrl, const CString& strDestPath)
{
    LogWnd::Log(LogWnd::LogLevel::Info, _T("URLDownload Start"));
    HINTERNET hSession = ::InternetOpen(kUserAgent, INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
    if (hSession == NULL)
    {
        LogWnd::Log(LogWnd::LogLevel::Error, _T("Internet Session Open Failed!"));
        return false;
    }

    LONGLONG remoteTotal = -1;
    if (!QueryRemoteFileSize(hSession, strUrl, remoteTotal))
    {
        LogWnd::Log(LogWnd::LogLevel::Error, _T("Download File Is Not Exist!"));
        ::InternetCloseHandle(hSession);
        return false;
    }

    const CString tmpPath = strDestPath + _T(".tmp");
    LONGLONG existingBytes = 0;

    HANDLE hExisting = ::CreateFile(tmpPath, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hExisting != INVALID_HANDLE_VALUE)
    {
        LARGE_INTEGER li = {};
        if (::GetFileSizeEx(hExisting, &li))
        {
            existingBytes = li.QuadPart;
        }
        ::CloseHandle(hExisting);

        if (remoteTotal >= 0 && existingBytes > remoteTotal)
        {
            LogWnd::Log(LogWnd::LogLevel::Warning, _T("Already Exist Download Temp File But Delete Wrong File!"));
            WaitForFileRemove(tmpPath);
            existingBytes = 0;
        }
        else if (remoteTotal >= 0 && existingBytes == remoteTotal)
        {
            LogWnd::Log(LogWnd::LogLevel::Info, _T("Already Exist Download Temp File!"));
        }
    }

    bool needTransfer = !(remoteTotal >= 0 && existingBytes == remoteTotal);
    if (needTransfer)
    {
        CString headers;
        if (existingBytes > 0)
        {
            headers.Format(_T("Range:bytes=%I64d-\r\nCache-Control:no-cache\r\nPragma:no-cache\r\n"), existingBytes);
        }
        else
        {
            headers = _T("Cache-Control:no-cache\r\nPragma:no-cache\r\n");
        }

        const DWORD flags = INTERNET_FLAG_RELOAD | INTERNET_FLAG_NO_CACHE_WRITE | INTERNET_FLAG_PRAGMA_NOCACHE;
        HINTERNET hUrl = ::InternetOpenUrl(hSession, strUrl, headers, headers.GetLength(), flags, 0);
        if (hUrl == NULL)
        {
            LogWnd::Log(LogWnd::LogLevel::Error, _T("Http Connection Open Failed!"));
            ::InternetCloseHandle(hSession);
            return false;
        }

        DWORD dwStatus = 0;
        DWORD dwStatusLen = sizeof(dwStatus);
        ::HttpQueryInfo(hUrl, HTTP_QUERY_STATUS_CODE | HTTP_QUERY_FLAG_NUMBER, &dwStatus, &dwStatusLen, NULL);

        // If server ignored Range and sent full 200 response, overwrite from offset 0
        if (existingBytes > 0 && dwStatus == 200)
        {
            existingBytes = 0;
        }

        TCHAR szRemainLen[64] = {};
        DWORD dwRemainLen = sizeof(szRemainLen);
        LONGLONG totalExpected = remoteTotal;
        if (::HttpQueryInfo(hUrl, HTTP_QUERY_CONTENT_LENGTH, szRemainLen, &dwRemainLen, NULL))
        {
            LONGLONG partLen = _ttoi64(szRemainLen);
            if (partLen >= 0)
            {
                totalExpected = existingBytes + partLen;
            }
        }

        HANDLE hOut = ::CreateFile(
            tmpPath,
            GENERIC_WRITE,
            0,
            NULL,
            (existingBytes > 0) ? OPEN_EXISTING : CREATE_ALWAYS,
            FILE_ATTRIBUTE_NORMAL,
            NULL);
        if (hOut == INVALID_HANDLE_VALUE)
        {
            LogWnd::Log(LogWnd::LogLevel::Error, _T("Downloaded Temp File Open Failed!"));
            ::InternetCloseHandle(hUrl);
            ::InternetCloseHandle(hSession);
            return false;
        }

        if (existingBytes > 0)
        {
            LARGE_INTEGER liMove = {};
            liMove.QuadPart = existingBytes;
            ::SetFilePointerEx(hOut, liMove, NULL, FILE_BEGIN);
        }

        LONGLONG downloaded = existingBytes;
        const DWORD startTick = ::GetTickCount();
        const bool isPakDownload = (strDestPath.Right(4).CompareNoCase(_T(".pak")) == 0);
        char ioBuf[32768];

        {
            ScopeLock<CSyncLock> lock(m_csProgress);
            m_Progress.nCurrentBytes = downloaded;
            m_Progress.nTotalBytes = (totalExpected > 0) ? totalExpected : 0;
            if (isPakDownload && totalExpected > 0)
            {
                m_Progress.nDownloadFileSizeBytes = totalExpected;
            }
        }

        bool ioError = false;
        while (!m_bStop)
        {
            DWORD dwAvail = 0;
            if (!::InternetQueryDataAvailable(hUrl, &dwAvail, 0, 0))
            {
                LogWnd::Log(LogWnd::LogLevel::Error, _T("InternetQueryDataAvailable : data not available!"));
                ioError = true;
                break;
            }
            if (dwAvail == 0)
            {
                break;
            }

            DWORD toRead = min(dwAvail, static_cast<DWORD>(sizeof(ioBuf)));
            DWORD dwRead = 0;
            if (!::InternetReadFile(hUrl, ioBuf, toRead, &dwRead))
            {
                LogWnd::Log(LogWnd::LogLevel::Error, _T("InternetReadFile : reading file fail!"));
                ioError = true;
                break;
            }
            if (dwRead == 0)
            {
                break;
            }

            DWORD dwWritten = 0;
            if (!::WriteFile(hOut, ioBuf, dwRead, &dwWritten, NULL) || dwWritten != dwRead)
            {
                ioError = true;
                break;
            }

            downloaded += dwRead;
            DWORD nowTick = ::GetTickCount();
            float speed = 0.0f;
            if (nowTick > startTick)
            {
                const float secs = static_cast<float>(nowTick - startTick) / 1000.0f;
                if (secs > 0.0f)
                {
                    speed = static_cast<float>(downloaded - existingBytes) / secs;
                }
            }

            ScopeLock<CSyncLock> lock(m_csProgress);
            m_Progress.nCurrentBytes = downloaded;
            m_Progress.nTotalBytes = (totalExpected > 0) ? totalExpected : downloaded;
            if (isPakDownload && m_Progress.nTotalBytes > 0)
            {
                m_Progress.nDownloadFileSizeBytes = m_Progress.nTotalBytes;
            }
            m_Progress.fDownloadSpeedBytesPerSec = speed;
        }

        ::CloseHandle(hOut);
        ::InternetCloseHandle(hUrl);

        if (m_bStop || ioError)
        {
            ::InternetCloseHandle(hSession);
            return false;
        }

        LogWnd::Log(LogWnd::LogLevel::Info, _T("Download File Success"));
    }

    ::InternetCloseHandle(hSession);

    // MD5 Verification
    if (m_bRequireMd5)
    {
        LogWnd::Log(LogWnd::LogLevel::Info, _T("MD5 Check Start"));
        CString expectedMd5;
        const CString md5Url = strUrl + _T(".MD5");
        if (!FetchMd5Digest(md5Url, expectedMd5))
        {
            LogWnd::Log(LogWnd::LogLevel::Error, _T("MD5 Check File Download Failed!"));
            return false;
        }

        CString actualMd5 = CMD5Checksum::GetMD5(tmpPath);
        if (actualMd5.CompareNoCase(expectedMd5) != 0)
        {
            LogWnd::Log(LogWnd::LogLevel::Error, _T("MD5 Check Failed!"));
            WaitForFileRemove(tmpPath);
            return false;
        }
        LogWnd::Log(LogWnd::LogLevel::Info, _T("MD5 Check Success"));
    }

    WaitForFileRemove(strDestPath);
    if (!::MoveFileEx(tmpPath, strDestPath, MOVEFILE_REPLACE_EXISTING))
    {
        return false;
    }

    LogWnd::Log(LogWnd::LogLevel::Info, _T("URLDownload End"));
    return true;
}

bool CDnPatchDownloadThread::LoadPatchTxt(const CString& strTxtPath)
{
    m_vecDeleteList.clear();
    m_vecCopyList.clear();

    HANDLE hFile = ::CreateFile(strTxtPath, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hFile == INVALID_HANDLE_VALUE)
    {
        LogWnd::Log(LogWnd::LogLevel::Error, _T("%s File Not Found"), static_cast<const TCHAR*>(strTxtPath));
        return false;
    }

    DWORD dwSize = ::GetFileSize(hFile, NULL);
    std::vector<char> buf(dwSize + 2, 0);
    DWORD dwRead = 0;
    if (dwSize > 0)
    {
        ::ReadFile(hFile, buf.data(), dwSize, &dwRead, NULL);
    }
    ::CloseHandle(hFile);

    std::string content(buf.data(), dwRead);
    size_t pos = 0;
    while (pos < content.size())
    {
        size_t eol = content.find_first_of("\r\n", pos);
        if (eol == std::string::npos)
        {
            eol = content.size();
        }

        std::string line = TrimCopyA(content.substr(pos, eol - pos).c_str());
        pos = eol + 1;
        if (line.empty()) continue;

        if (line.size() >= 2 && (line[0] == 'C' || line[0] == 'D') && (line[1] == ' ' || line[1] == '\t'))
        {
            std::string entry = TrimCopyA(line.c_str() + 2);
            if (!entry.empty())
            {
                if (line[0] == 'C')
                {
                    m_vecCopyList.push_back(entry);
                }
                else
                {
                    m_vecDeleteList.push_back(entry);
                }
            }
        }
        else
        {
            LogWnd::Log(LogWnd::LogLevel::Warning, _T("Invalid Patch Code in %s"), static_cast<const TCHAR*>(strTxtPath));
        }
    }

    return true;
}

bool CDnPatchDownloadThread::OpenResourcePaks()
{
    CloseResourcePaks();

    CDnPatchInfo& info = CDnPatchInfo::GetInstance();
    const CString pattern = info.m_strClientPath + _T("\\Resource*.pak");
    WIN32_FIND_DATA fd = {};
    HANDLE hFind = ::FindFirstFile(pattern, &fd);
    if (hFind == INVALID_HANDLE_VALUE)
    {
        return true; // No pre-existing Resource*.pak yet; CopyList/PatchList will create Resource00.pak
    }

    std::vector<CString> pakPaths;
    do
    {
        if ((fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) == 0)
        {
            pakPaths.push_back(info.m_strClientPath + _T("\\") + fd.cFileName);
        }
    } while (::FindNextFile(hFind, &fd));
    ::FindClose(hFind);

    std::sort(pakPaths.begin(), pakPaths.end());

    for (size_t i = 0; i < pakPaths.size(); ++i)
    {
        CEtPackingFile* pPak = new CEtPackingFile();
        CStringA pathA = ToAnsi(pakPaths[i]);
        if (pPak->OpenFileSystem(pathA, false))
        {
            m_vecPackingFile.push_back(pPak);
        }
        else
        {
            LogWnd::Log(LogWnd::LogLevel::Error, _T("%s Packing File System Open Failed!"), static_cast<const TCHAR*>(pakPaths[i]));
            delete pPak;
        }
    }

    return true;
}

void CDnPatchDownloadThread::CloseResourcePaks()
{
    for (size_t i = 0; i < m_vecPackingFile.size(); ++i)
    {
        if (m_vecPackingFile[i] != NULL)
        {
            m_vecPackingFile[i]->CloseFileSystem();
            delete m_vecPackingFile[i];
            m_vecPackingFile[i] = NULL;
        }
    }
    m_vecPackingFile.clear();
}

bool CDnPatchDownloadThread::IsInCopyList(const char* szFileName) const
{
    if (szFileName == NULL) return false;
    std::string needle = szFileName;
    NormalizeSlashesForFsA(needle);

    for (size_t i = 0; i < m_vecCopyList.size(); ++i)
    {
        std::string item = m_vecCopyList[i];
        NormalizeSlashesForFsA(item);
        if (_stricmp(item.c_str(), needle.c_str()) == 0)
        {
            return true;
        }
    }
    return false;
}

CEtPackingFile* CDnPatchDownloadThread::FindOrCreateWritablePak()
{
    for (size_t i = 0; i < m_vecPackingFile.size(); ++i)
    {
        CEtPackingFile* pPak = m_vecPackingFile[i];
        if (pPak != NULL && pPak->GetHeader().dwFileInfoOffset < kMaxPakSizeBytes)
        {
            return pPak;
        }
    }

    CDnPatchInfo& info = CDnPatchInfo::GetInstance();
    int index = static_cast<int>(m_vecPackingFile.size());
    CString pakPath;
    while (true)
    {
        pakPath.Format(_T("%s\\Resource%02d.pak"), static_cast<const TCHAR*>(info.m_strClientPath), index);
        if (::GetFileAttributes(pakPath) == INVALID_FILE_ATTRIBUTES)
        {
            break;
        }
        ++index;
    }

    CEtPackingFile* pNewPak = new CEtPackingFile();
    CStringA pathA = ToAnsi(pakPath);
    if (!pNewPak->NewFileSystem(pathA))
    {
        delete pNewPak;
        return NULL;
    }
    m_vecPackingFile.push_back(pNewPak);
    return pNewPak;
}

bool CDnPatchDownloadThread::ApplyDeleteList()
{
    LogWnd::Log(LogWnd::LogLevel::Info, _T("ApplyDeleteList"));
    for (size_t i = 0; i < m_vecDeleteList.size(); ++i)
    {
        if (m_bStop) return false;

        const char* name = m_vecDeleteList[i].c_str();
        LogWnd::Log(LogWnd::LogLevel::Info, _T("Delete File Name: [%S]"), name);

        for (size_t p = 0; p < m_vecPackingFile.size(); ++p)
        {
            if (m_vecPackingFile[p]->FindFile(name) != -1)
            {
                if (!m_vecPackingFile[p]->Remove(name))
                {
                    LogWnd::Log(LogWnd::LogLevel::Error, _T("Remove File Failed!"));
                    return false;
                }
            }
        }
    }
    return true;
}

bool CDnPatchDownloadThread::ApplyPatchList(CEtPackingFile& patchPak)
{
    LogWnd::Log(LogWnd::LogLevel::Info, _T("ApplyPatchList"));

    const int fileCount = patchPak.GetFileCount();
    std::vector<int> patchIndices;
    for (int i = 0; i < fileCount; ++i)
    {
        const SPackingFileInfo* pInfo = patchPak.GetFileInfo(i);
        if (pInfo == NULL || pInfo->dwCompressSize == 0) continue;
        if (IsInCopyList(pInfo->szFileName)) continue;
        patchIndices.push_back(i);
    }

    const int totalCount = static_cast<int>(patchIndices.size());
    ResetProgress(0, totalCount > 0 ? totalCount : 1);

    for (size_t idx = 0; idx < patchIndices.size(); ++idx)
    {
        if (m_bStop) return false;

        const SPackingFileInfo* pInfo = patchPak.GetFileInfo(patchIndices[idx]);
        if (pInfo == NULL) continue;

        LogWnd::Log(LogWnd::LogLevel::Info, _T("Patch File Name: [%S]"), pInfo->szFileName);

        // Locate existing archive containing file, or assign writable pack
        CEtPackingFile* pTargetPak = NULL;
        for (size_t p = 0; p < m_vecPackingFile.size(); ++p)
        {
            if (m_vecPackingFile[p]->FindFile(pInfo->szFileName) != -1)
            {
                pTargetPak = m_vecPackingFile[p];
                pTargetPak->Remove(pInfo->szFileName);
                break;
            }
        }
        if (pTargetPak == NULL)
        {
            pTargetPak = FindOrCreateWritablePak();
        }
        if (pTargetPak == NULL)
        {
            LogWnd::Log(LogWnd::LogLevel::Error, _T("Patch File Failed!"));
            return false;
        }

        if (pInfo->dwOriginalSize == 0)
        {
            if (!pTargetPak->AddFile(pInfo->szFileName, "", 0))
            {
                LogWnd::Log(LogWnd::LogLevel::Error, _T("Patch File Failed!"));
                return false;
            }
        }
        else
        {
            CEtFileHandle* pHandle = patchPak.OpenOnlyCompressFile(pInfo->szFileName);
            if (pHandle == NULL)
            {
                LogWnd::Log(LogWnd::LogLevel::Error, _T("Reserve File GetFileInfo Failed!"));
                return false;
            }

            const int reservedIdx = pTargetPak->ReservePatchFile(pHandle);
            bool patched = false;
            if (reservedIdx >= 0)
            {
                patched = pTargetPak->PatchFileData(
                    reservedIdx,
                    0,
                    pHandle->GetData(),
                    static_cast<int>(pHandle->GetCompressSize()));
                if (!patched)
                {
                    pTargetPak->CancelReservePatchFile(reservedIdx);
                }
            }
            delete pHandle;

            if (!patched)
            {
                LogWnd::Log(LogWnd::LogLevel::Error, _T("Patch File Failed!"));
                return false;
            }
        }

        ScopeLock<CSyncLock> lock(m_csProgress);
        m_Progress.nCurrentBytes = static_cast<LONGLONG>(idx + 1);
        m_Progress.nTotalBytes = totalCount;
    }

    return true;
}

int CDnPatchDownloadThread::ApplyCopyList(CEtPackingFile& patchPak)
{
    LogWnd::Log(LogWnd::LogLevel::Info, _T("ApplyCopyList"));
    CDnPatchInfo& info = CDnPatchInfo::GetInstance();
    bool bLauncherPatched = false;
    const CStringA clientDirA = ToAnsi(info.m_strClientPath);

    for (size_t i = 0; i < m_vecCopyList.size(); ++i)
    {
        if (m_bStop) return 4;

        std::string relName = m_vecCopyList[i];
        LogWnd::Log(LogWnd::LogLevel::Info, _T("Copy File Name: [%S]"), relName.c_str());

        std::string fsRel = relName;
        NormalizeSlashesForFsA(fsRel);

        CEtFileHandle* pHandle = patchPak.OpenFile(relName.c_str(), false);
        if (pHandle == NULL && fsRel != relName)
        {
            pHandle = patchPak.OpenFile(fsRel.c_str(), false);
        }
        if (pHandle == NULL)
        {
            std::string withSlash = "\\" + fsRel;
            pHandle = patchPak.OpenFile(withSlash.c_str(), false);
        }
        if (pHandle == NULL)
        {
            LogWnd::Log(LogWnd::LogLevel::Error, _T("%S File Copy Failed!"), relName.c_str());
            return 0;
        }

        if (_stricmp(fsRel.c_str(), "DnLauncher.exe") == 0)
        {
            LogWnd::Log(LogWnd::LogLevel::Info, _T("Apply Launcher Patch"));
            const CString curExe = info.m_strClientPath + _T("\\DnLauncher.exe");
            const CString tmpExe = info.m_strClientPath + _T("\\dnlauncher.tmp");
            WaitForFileRemove(tmpExe);
            if (::GetFileAttributes(curExe) != INVALID_FILE_ATTRIBUTES)
            {
                if (!::MoveFile(curExe, tmpExe))
                {
                    LogWnd::Log(LogWnd::LogLevel::Error, _T("Launcher Patch Failed!"));
                    delete pHandle;
                    return 0;
                }
            }
            bLauncherPatched = true;
        }

        std::string destPathA = std::string(clientDirA.GetString()) + "\\" + fsRel;
        EnsureParentDirectoriesA(destPathA.c_str());

        const bool exported = pHandle->ExportFile(destPathA.c_str());
        delete pHandle;
        if (!exported)
        {
            LogWnd::Log(LogWnd::LogLevel::Error, _T("%S File Copy Failed! (%lu)"), fsRel.c_str(), ::GetLastError());
            return 0;
        }
    }

    return bLauncherPatched ? 2 : 1;
}

int CDnPatchDownloadThread::ApplyPakPatch(int nPatchVersion)
{
    LogWnd::Log(LogWnd::LogLevel::Info, _T("Patch Step 2 - PreApplyPakPatch Start"));

    CDnPatchInfo& info = CDnPatchInfo::GetInstance();
    CString pakPath, txtPath;
    pakPath.Format(_T("%s\\Patch%08d.pak"), static_cast<const TCHAR*>(info.m_strClientPath), nPatchVersion);
    txtPath.Format(_T("%s\\Patch%08d.txt"), static_cast<const TCHAR*>(info.m_strClientPath), nPatchVersion);

    if (!LoadPatchTxt(txtPath))
    {
        return 0;
    }

    CEtPackingFile patchPak;
    CStringA pakPathA = ToAnsi(pakPath);
    if (!patchPak.OpenFileSystem(pakPathA, true))
    {
        LogWnd::Log(LogWnd::LogLevel::Error, _T("*.pak File Not Found!"));
        return 0;
    }

    OpenResourcePaks();
    LogWnd::Log(LogWnd::LogLevel::Info, _T("Patch Step 2 - PreApplyPakPatch End"));

    LogWnd::Log(LogWnd::LogLevel::Info, _T("Patch Step 3 - ApplyPakPatch Start"));
    if (!ApplyDeleteList())
    {
        patchPak.CloseFileSystem();
        CloseResourcePaks();
        return m_bStop ? 4 : 0;
    }

    if (!ApplyPatchList(patchPak))
    {
        patchPak.CloseFileSystem();
        CloseResourcePaks();
        return m_bStop ? 4 : 0;
    }

    const int copyRes = ApplyCopyList(patchPak);
    patchPak.CloseFileSystem();
    CloseResourcePaks();

    LogWnd::Log(LogWnd::LogLevel::Info, _T("Patch Step 3 - ApplyPakPatch End"));
    return copyRes;
}

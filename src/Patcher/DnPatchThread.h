#pragma once

#include <vector>
#include <wininet.h>
#include "Common/CriticalSection.h"
#include "Common/Thread.h"

class CEtPackingFile;

#ifndef WM_PATCH_STATUS
#define WM_PATCH_STATUS (WM_APP + 0x65) // 0x8065
#endif

/**
 * @brief Patch workflow states posted via WM_PATCH_STATUS (0x8065) in wParam.
 */
enum EPatchStatusState
{
    PATCH_STATE_NONE                 = 0,
    PATCH_STATE_CONNECTING           = 1,  // IDS 1005
    PATCH_STATE_VERSION_FAILED       = 2,  // IDS 1006
    PATCH_STATE_DOWNLOADING          = 3,  // IDS 1007
    PATCH_STATE_VERIFYING            = 4,  // IDS 1008
    PATCH_STATE_PREPARING            = 5,  // IDS 1009
    PATCH_STATE_DELETING             = 6,  // IDS 1010
    PATCH_STATE_APPLYING             = 7,  // IDS 1011
    PATCH_STATE_APPLY_FAILED         = 8,  // IDS 1012
    PATCH_STATE_STEP_DONE            = 9,  // -1
    PATCH_STATE_COMPLETE             = 10, // IDS 1014
    PATCH_STATE_LAUNCHER_RESTARTING  = 11, // -1
    PATCH_STATE_FAILED               = 12, // IDS 1015
    PATCH_STATE_TERMINATED           = 13  // IDS 1016
};

/**
 * @brief Thread-safe snapshot of active download and patch application progress.
 */
struct SPatchProgressInfo
{
    LONGLONG nCurrentBytes;
    LONGLONG nTotalBytes;
    LONGLONG nDownloadFileSizeBytes;
    int      nCurrentPatchIndex;
    int      nCurrentVersion;
    int      nTotalPatchCount;
    float    fDownloadSpeedBytesPerSec;

    SPatchProgressInfo()
        : nCurrentBytes(0)
        , nTotalBytes(0)
        , nDownloadFileSizeBytes(0)
        , nCurrentPatchIndex(0)
        , nCurrentVersion(0)
        , nTotalPatchCount(0)
        , fDownloadSpeedBytesPerSec(0.0f)
    {
    }
};

/**
 * @brief Background worker thread that downloads, MD5-verifies, and applies Dragon Nest .pak patches.
 */
class CDnPatchDownloadThread : public CThread
{
public:
    CDnPatchDownloadThread();
    virtual ~CDnPatchDownloadThread();

    /** @brief Sets the window receiving WM_PATCH_STATUS notifications. */
    void SetNotifyHwnd(HWND hWnd);

    /** @brief Signals graceful cancellation of downloads and patch application. */
    void RequestStop();

    /** @brief Copies the latest thread-safe download/apply progress snapshot. */
    void GetProgress(SPatchProgressInfo& outInfo) const;

    /** @brief Returns current EPatchStatusState value. */
    int GetPatchState() const { return m_nPatchState; }

    /** @brief Toggles MD5 verification enforcement when .MD5 sidecar is checked (default true). */
    void SetRequireMd5(bool bRequire) { m_bRequireMd5 = bRequire; }

    /** @brief Downloads strUrl to strDestPath using WinINet with .tmp resume and MD5 verification. */
    bool URLDownload(const CString& strUrl, const CString& strDestPath);

    /** @brief Applies an already downloaded Patch%08d.pak + Patch%08d.txt pair to client archives. */
    int ApplyPakPatch(int nPatchVersion);

    virtual void Run() override;

protected:
    enum EBeginPatchResult
    {
        BEGIN_FAILED           = 0,
        BEGIN_SUCCESS          = 1,
        BEGIN_LAUNCHER_PATCHED = 2,
        BEGIN_FULL_VERSION_ERR = 3,
        BEGIN_TERMINATED       = 4
    };

    struct SReservedPatchEntry
    {
        size_t nPakIndex;
        int    nHandleIndex;
        int    nReservedSlot;
    };

    void PostStatus(EPatchStatusState state);
    void ResetProgress(LONGLONG nCurrent = 0, LONGLONG nTotal = 0);
    int  BeginPatch();
    bool DownloadPatch(int nPatchVersion);
    bool FetchMd5Digest(const CString& strMd5Url, CString& strOutHex);
    bool QueryRemoteFileSize(HINTERNET hSession, const CString& strUrl, LONGLONG& nOutSize);
    bool LoadPatchTxt(const CString& strTxtPath);

    bool OpenResourcePaks();
    void CloseResourcePaks();
    bool ApplyDeleteList();
    bool ApplyPatchList(CEtPackingFile& patchPak);
    int  ApplyCopyList(CEtPackingFile& patchPak);
    CEtPackingFile* FindOrCreateWritablePak();
    bool IsInCopyList(const char* szFileName) const;

    static CStringA ToAnsi(const CString& str);
    static void EnsureParentDirectoriesA(const char* szFilePath);
    static bool WaitForFileRemove(const TCHAR* szFilePath, int nRetries = 10);

protected:
    HWND  m_hNotifyWnd;
    int   m_nPatchState;
    volatile LONG m_bStop;
    bool  m_bRequireMd5;

    mutable CSyncLock m_csProgress;
    SPatchProgressInfo m_Progress;

    std::vector<CEtPackingFile*> m_vecPackingFile;
    std::vector<std::string>     m_vecDeleteList;
    std::vector<std::string>     m_vecCopyList;
};

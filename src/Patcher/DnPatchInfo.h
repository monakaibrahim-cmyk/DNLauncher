#pragma once

#include <vector>

/** @brief Login endpoint entry parsed from PatchConfigList.xml. */
struct SLoginServerInfo
{
    CString strAddr;
    WORD wPort;

    SLoginServerInfo() : wPort(0) {}
};

/** @brief Partition/server world entry within a channel in PatchConfigList.xml. */
struct SPartitionInfo
{
    int nPartitionId;
    CString strPartitionName;
    BOOL bOpen;
    BOOL bNew;
    CString strGuidepageUrl;
    CString strHomepageUrl;
    CString strVersionUrl;
    CString strPatchUrl;
    CString strStateTest;
    std::vector<SLoginServerInfo> vecLoginServer;

    SPartitionInfo()
        : nPartitionId(0)
        , bOpen(TRUE)
        , bNew(FALSE)
    {
    }
};

/** @brief Regional/service channel entry in PatchConfigList.xml. */
struct SChannelListData
{
    CString strChannelName;
    CString strGuidepageUrl;
    CString strHomepageUrl;
    CString strVersionUrl;
    CString strPatchUrl;
    CString strStateTest;
    std::vector<SPartitionInfo> vecPartition;
};

/**
 * @brief Central configuration, version state, and channel/partition metadata manager.
 */
class CDnPatchInfo
{
public:
    static CDnPatchInfo& GetInstance();

    /** @brief Initializes working paths, CLI parameters, language, XML config, and versions. */
    bool Init(const TCHAR* szCmdLine = NULL);

    /** @brief Parses launcher CLI overrides (urlpatch:, urlversion:, homepage:, ip:, etc.). */
    void ParseCommandLine(const CString& strCmdLine);

    /** @brief Parses LocalURL.ini fallback patch URL if present in the client directory. */
    bool ParseLocalUrlIni(const CString& strIniPath);

    /** @brief Parses a PatchConfigList XML file into channel and partition descriptors. */
    bool ParsePatchConfigXml(const char* szXmlFilePath);

    /** @brief Downloads PatchConfigList.xml and parses it into channel descriptors. */
    bool LoadPatchConfigList();

    /** @brief Loads client and server version numbers. */
    bool LoadPatchVersionInfo();

    /** @brief Loads client Version/Module from Resource00.pak\\version.cfg or Version.cfg. */
    bool LoadClientVersion();

    /** @brief Downloads and parses PatchInfoServer.cfg for the latest server version. */
    bool LoadServerVersion();

    /** @brief Saves Version.cfg on disk and updates \\version.cfg inside Resource00.pak if present. */
    bool SaveVersionFile(int nVersion, int nModule = 0);

    /** @brief Selects active channel and partition and updates effective URLs/login endpoints. */
    bool SelectChannelAndPartition(int nChannelIndex, int nPartitionIndex);

    /** @brief Sets language from Win32 LANGID (English=0, Vietnamese/0x2A=10000). */
    void SetLanguage(LANGID langId);

    /** @brief Sets language from string code ("ENG" -> 0, "VNM" -> 10000). */
    void SetLanguageByName(const CString& strLanguage);

    /** @brief Loads localized resource string using current m_nLanguageOffset. */
    CString GetString(UINT nBaseId) const;

    /** @brief Formats command-line parameters passed to DragonNest.exe / DragonNest_x64.exe. */
    CString GetGameLaunchParameters(bool bUseDx11) const;

    /** @brief Formats DnAutoUpdate.exe handoff parameters ("%s|%s|%d-%d") when m_nNextVersion > m_nServerVersion. */
    CString GetAutoUpdateParameters() const;

    /** @brief Checks if the OS is 64-bit capable via IsWow64Process. */
    static bool Is64BitOS();

public:
    CString m_strClientPath;
    CString m_strPatchUrl;
    CString m_strVersionUrl;
    CString m_strHomepageUrl;
    CString m_strGuidepageUrl;
    CString m_strStateText;
    CString m_strLoginIp;
    WORD m_wLoginPort;
    CString m_strLoginPortList;
    CString m_strLanguageParam;
    CString m_strCustomChannel;
    CString m_strCustomConfig;

    int m_nLanguageOffset;
    int m_nClientVersion;
    int m_nServerVersion;
    int m_nNextVersion;
    int m_nModuleVersion;
    int m_nErrorCode;

    int m_nSelectChannelIndex;
    int m_nSelectPartitionIndex;

    BOOL m_bInit;
    BOOL m_bFirstPatch;
    BOOL m_bUseCommandLinePatch;
    BOOL m_bEnablePatchVersionCheck;

    std::vector<SChannelListData> m_vecChannelList;

private:
    CDnPatchInfo();
    ~CDnPatchInfo();
    CDnPatchInfo(const CDnPatchInfo&) = delete;
    CDnPatchInfo& operator=(const CDnPatchInfo&) = delete;

    static CString EnsureTrailingSlash(const CString& strUrl);
    static CString Utf8ToWide(const char* szText);
    static int ParseVersionBuffer(const char* pData, DWORD dwSize, int& nOutVersion, int& nOutModule);
    bool DownloadSmallFile(const CString& strUrl, const CString& strLocalPath);
};

// ---------------------------------------------------------------------------
// DnFirstPatchInfo — singleton tracking first-patch / Launcher module version
// Reconstructed from DNLauncher.exe 0x00404100..0x004045CF (vtable 0x004AC3E8)
// ---------------------------------------------------------------------------
class DnFirstPatchInfo
{
public:
    static DnFirstPatchInfo& GetInstance();

    virtual ~DnFirstPatchInfo();

    void Reset();

    int  GetLocalModuleVersion() const { return m_nLocalModuleVersion; }
    void SetLocalModuleVersion(int nVer) { m_nLocalModuleVersion = nVer; }

    int  GetServerModuleVersion() const { return m_nServerModuleVersion; }
    void SetServerModuleVersion(int nVer) { m_nServerModuleVersion = nVer; }

    BOOL IsPatchChanged() const { return m_bPatchChanged; }
    void SetPatchChanged(BOOL bChanged) { m_bPatchChanged = bChanged; }

    int  GetFirstPatchStatus() const { return m_nFirstPatchStatus; }
    void SetFirstPatchStatus(int nStatus) { m_nFirstPatchStatus = nStatus; }

    int  GetFirstPatchProcess() const { return m_nFirstPatchProcess; }
    void SetFirstPatchProcess(int nProc) { m_nFirstPatchProcess = nProc; }

    const CString& GetPatchUrl() const { return m_strPatchUrl; }
    void SetPatchUrl(LPCTSTR szUrl) { m_strPatchUrl = szUrl ? szUrl : _T(""); }

    const CString& GetBaseDir() const { return m_strBaseDir; }
    void SetBaseDir(LPCTSTR szDir) { m_strBaseDir = szDir ? szDir : _T(""); }

    const std::vector<std::string>& GetCopyList() const { return m_vecCopyList; }
    const std::vector<std::string>& GetDeleteList() const { return m_vecDeleteList; }

private:
    DnFirstPatchInfo();

    CString                  m_strPatchUrl;          // +0x04
    CString                  m_strBaseDir;           // +0x08
    std::vector<std::string> m_vecDeleteList;        // +0x0C..+0x18
    std::vector<std::string> m_vecCopyList;          // +0x1C..+0x28
    int                      m_nLocalModuleVersion;  // +0x2C
    int                      m_nServerModuleVersion; // +0x30
    BOOL                     m_bPatchChanged;        // +0x34
    int                      m_nFirstPatchStatus;    // +0x38
    int                      m_nFirstPatchProcess;   // +0x3C (init 3)
};


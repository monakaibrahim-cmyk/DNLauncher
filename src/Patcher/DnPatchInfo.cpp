#include "stdafx.h"
#include "Patcher/DnPatchInfo.h"
#define DN_REGION_URLS_ONLY
#include "Launcher/DnRegionConfig.h"

#include <urlmon.h>
#include <wininet.h>
#include "Common/LogWnd.h"
#include "EtFileSystem/EtFileSystem.h"
#include "tinyxml.h"

#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "wininet.lib")

namespace
{
const TCHAR* const kDefaultPatchUrl = DN_DEFAULT_PATCH_URL;

bool ExtractTokenAfterPrefix(const CString& token, const TCHAR* prefix, CString& outValue)
{
    const int prefixLen = lstrlen(prefix);
    if (token.GetLength() >= prefixLen && _tcsnicmp(token, prefix, prefixLen) == 0)
    {
        outValue = token.Mid(prefixLen);
        outValue.Trim(_T("\" "));
        return true;
    }
    return false;
}

void ApplyEndpointTags(const TiXmlElement* pElem, SPartitionInfo& part)
{
    for (const TiXmlElement* child = pElem->FirstChildElement(); child != NULL; child = child->NextSiblingElement())
    {
        const char* tag = child->Value();
        if (tag == NULL) continue;

        if (_stricmp(tag, "guidepage") == 0)
        {
            const char* addr = child->Attribute("addr");
            if (addr != NULL) part.strGuidepageUrl = CString(CA2W(addr, CP_UTF8));
        }
        else if (_stricmp(tag, "homepage") == 0)
        {
            const char* addr = child->Attribute("addr");
            if (addr != NULL) part.strHomepageUrl = CString(CA2W(addr, CP_UTF8));
        }
        else if (_stricmp(tag, "version") == 0)
        {
            const char* addr = child->Attribute("addr");
            if (addr != NULL) part.strVersionUrl = CString(CA2W(addr, CP_UTF8));
        }
        else if (_stricmp(tag, "update") == 0)
        {
            const char* addr = child->Attribute("addr");
            if (addr != NULL) part.strPatchUrl = CString(CA2W(addr, CP_UTF8));
        }
        else if (_stricmp(tag, "statetest") == 0)
        {
            const char* text = child->Attribute("addr");
            if (text == NULL) text = child->GetText();
            if (text != NULL) part.strStateTest = CString(CA2W(text, CP_UTF8));
        }
        else if (_stricmp(tag, "login") == 0)
        {
            SLoginServerInfo login;
            const char* addr = child->Attribute("addr");
            if (addr != NULL) login.strAddr = CString(CA2W(addr, CP_UTF8));
            int port = 0;
            child->QueryIntAttribute("port", &port);
            login.wPort = static_cast<WORD>(port);
            if (!login.strAddr.IsEmpty())
            {
                part.vecLoginServer.push_back(login);
            }
        }
    }
}
} // namespace

CDnPatchInfo& CDnPatchInfo::GetInstance()
{
    static CDnPatchInfo instance;
    return instance;
}

CDnPatchInfo::CDnPatchInfo()
    : m_strPatchUrl(kDefaultPatchUrl)
    , m_strLanguageParam(_T("ENG"))
    , m_strCustomConfig(_T("PatchConfigList.xml"))
    , m_wLoginPort(14300)
    , m_nLanguageOffset(0)
    , m_nClientVersion(-1)
    , m_nServerVersion(-1)
    , m_nNextVersion(0)
    , m_nModuleVersion(0)
    , m_nErrorCode(0)
    , m_nSelectChannelIndex(0)
    , m_nSelectPartitionIndex(0)
    , m_bInit(FALSE)
    , m_bFirstPatch(FALSE)
    , m_bUseCommandLinePatch(FALSE)
    , m_bEnablePatchVersionCheck(TRUE)
{
    TCHAR szDir[MAX_PATH] = {};
    ::GetCurrentDirectory(MAX_PATH, szDir);
    m_strClientPath = szDir;
}

CDnPatchInfo::~CDnPatchInfo()
{
}

CString CDnPatchInfo::EnsureTrailingSlash(const CString& strUrl)
{
    if (strUrl.IsEmpty())
    {
        return strUrl;
    }
    TCHAR lastChar = strUrl[strUrl.GetLength() - 1];
    if (lastChar != _T('/') && lastChar != _T('\\'))
    {
        return strUrl + _T('/');
    }
    return strUrl;
}

CString CDnPatchInfo::Utf8ToWide(const char* szText)
{
    if (szText == NULL)
    {
        return CString();
    }
    return CString(CA2W(szText, CP_UTF8));
}

bool CDnPatchInfo::Init(const TCHAR* szCmdLine)
{
    LogWnd::Log(LogWnd::LogLevel::Info, _T("PatchInfo Init Start!"));

    m_bInit = FALSE;
    m_bFirstPatch = FALSE;
    m_bUseCommandLinePatch = FALSE;
    m_vecChannelList.clear();
    m_strPatchUrl = kDefaultPatchUrl;
    m_strVersionUrl.Empty();

    TCHAR szCurDir[MAX_PATH] = {};
    ::GetCurrentDirectory(MAX_PATH, szCurDir);
    m_strClientPath = szCurDir;

    SetLanguage(::GetUserDefaultLangID());

    const CString localIni = m_strClientPath + _T("\\LocalURL.ini");
    ParseLocalUrlIni(localIni);

    CString cmd = (szCmdLine != NULL) ? CString(szCmdLine) : CString(::GetCommandLine());
    ParseCommandLine(cmd);

    if (!m_bUseCommandLinePatch)
    {
        if (!LoadPatchConfigList())
        {
            LogWnd::Log(LogWnd::LogLevel::Warning, _T("PatchConfigList load skipped or failed; using base URLs."));
        }
        if (!m_vecChannelList.empty())
        {
            SelectChannelAndPartition(m_nSelectChannelIndex, m_nSelectPartitionIndex);
        }
    }

    LoadPatchVersionInfo();
    m_bInit = TRUE;
    LogWnd::Log(LogWnd::LogLevel::Info, _T("PatchInfo Init Success!"));
    return true;
}

void CDnPatchInfo::ParseCommandLine(const CString& strCmdLine)
{
    int curPos = 0;
    while (curPos < strCmdLine.GetLength())
    {
        while (curPos < strCmdLine.GetLength() && _istspace(strCmdLine[curPos]))
        {
            ++curPos;
        }
        if (curPos >= strCmdLine.GetLength()) break;

        CString token;
        if (strCmdLine[curPos] == _T('"'))
        {
            ++curPos;
            int endQuote = strCmdLine.Find(_T('"'), curPos);
            if (endQuote < 0)
            {
                token = strCmdLine.Mid(curPos);
                curPos = strCmdLine.GetLength();
            }
            else
            {
                token = strCmdLine.Mid(curPos, endQuote - curPos);
                curPos = endQuote + 1;
            }
        }
        else
        {
            int nextSpace = curPos;
            while (nextSpace < strCmdLine.GetLength() && !_istspace(strCmdLine[nextSpace]))
            {
                ++nextSpace;
            }
            token = strCmdLine.Mid(curPos, nextSpace - curPos);
            curPos = nextSpace;
        }

        CString value;
        if (ExtractTokenAfterPrefix(token, _T("urlpatch:"), value))
        {
            m_strPatchUrl = EnsureTrailingSlash(value);
            m_bUseCommandLinePatch = TRUE;
        }
        else if (ExtractTokenAfterPrefix(token, _T("urlversion:"), value))
        {
            m_strVersionUrl = EnsureTrailingSlash(value);
        }
        else if (ExtractTokenAfterPrefix(token, _T("guidepage:"), value))
        {
            m_strGuidepageUrl = value;
        }
        else if (ExtractTokenAfterPrefix(token, _T("homepage:"), value))
        {
            m_strHomepageUrl = value;
        }
        else if (ExtractTokenAfterPrefix(token, _T("ip:"), value))
        {
            m_strLoginIp = value;
        }
        else if (ExtractTokenAfterPrefix(token, _T("port:"), value))
        {
            m_wLoginPort = static_cast<WORD>(_ttoi(value));
            m_strLoginPortList = value;
        }
        else if (ExtractTokenAfterPrefix(token, _T("language:"), value))
        {
            SetLanguageByName(value);
        }
        else if (ExtractTokenAfterPrefix(token, _T("CustomChannel:"), value) ||
                 ExtractTokenAfterPrefix(token, _T("CustomChannel="), value))
        {
            m_strCustomChannel = value;
        }
        else if (ExtractTokenAfterPrefix(token, _T("CustomConfig:"), value) ||
                 ExtractTokenAfterPrefix(token, _T("CustomConfig="), value))
        {
            m_strCustomConfig = value;
        }
    }

    if (m_strVersionUrl.IsEmpty() && !m_strPatchUrl.IsEmpty())
    {
        m_strVersionUrl = EnsureTrailingSlash(m_strPatchUrl);
    }
}

bool CDnPatchInfo::ParseLocalUrlIni(const CString& strIniPath)
{
    if (::GetFileAttributes(strIniPath) == INVALID_FILE_ATTRIBUTES)
    {
        return false;
    }

    bool bFoundIniKeys = false;
    TCHAR szBuf[1024] = {};
    if (::GetPrivateProfileString(_T("URL"), _T("PatchURL"), _T(""), szBuf, _countof(szBuf), strIniPath) > 0)
    {
        m_strPatchUrl = EnsureTrailingSlash(szBuf);
        bFoundIniKeys = true;
    }
    if (::GetPrivateProfileString(_T("URL"), _T("VersionURL"), _T(""), szBuf, _countof(szBuf), strIniPath) > 0)
    {
        m_strVersionUrl = EnsureTrailingSlash(szBuf);
        bFoundIniKeys = true;
    }
    if (::GetPrivateProfileString(_T("URL"), _T("GuidePage"), _T(""), szBuf, _countof(szBuf), strIniPath) > 0)
    {
        m_strGuidepageUrl = szBuf;
        bFoundIniKeys = true;
    }
    if (::GetPrivateProfileString(_T("URL"), _T("HomePage"), _T(""), szBuf, _countof(szBuf), strIniPath) > 0)
    {
        m_strHomepageUrl = szBuf;
        bFoundIniKeys = true;
    }

    // Also support original DNLauncher.exe (0x0040a8d9..0x0040a953) raw token / fscanf("%s") format
    // (bare URL or urlpatch:/urlversion:/guidepage:/homepage:/ip:/port: tokens)
    HANDLE hFile = ::CreateFile(strIniPath, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hFile != INVALID_HANDLE_VALUE)
    {
        DWORD dwSize = ::GetFileSize(hFile, NULL);
        if (dwSize > 0 && dwSize != INVALID_FILE_SIZE && dwSize < 65536)
        {
            std::vector<char> raw(dwSize + 1, 0);
            DWORD dwRead = 0;
            if (::ReadFile(hFile, raw.data(), dwSize, &dwRead, NULL) && dwRead > 0)
            {
                CString strContent = Utf8ToWide(raw.data());
                int linePos = 0;
                while (linePos < strContent.GetLength())
                {
                    int nextLine = strContent.Find(_T('\n'), linePos);
                    CString line = (nextLine < 0)
                        ? strContent.Mid(linePos)
                        : strContent.Mid(linePos, nextLine - linePos);
                    linePos = (nextLine < 0) ? strContent.GetLength() : (nextLine + 1);

                    line.Trim();
                    if (line.IsEmpty() || line[0] == _T('[') || line[0] == _T(';') || line[0] == _T('#'))
                    {
                        continue;
                    }

                    // Skip standard INI key=value lines already handled by GetPrivateProfileString
                    int eqPos = line.Find(_T('='));
                    int colonPos = line.Find(_T(':'));
                    if (eqPos > 0 && (colonPos < 0 || eqPos < colonPos))
                    {
                        continue;
                    }

                    if (_tcsnicmp(line, _T("http://"), 7) == 0 || _tcsnicmp(line, _T("https://"), 8) == 0)
                    {
                        // Bare URL token in LocalURL.ini (0x0040a90a fscanf("%s"))
                        CString bareUrl = line;
                        int spacePos = bareUrl.FindOneOf(_T(" \t\r\n"));
                        if (spacePos > 0)
                        {
                            bareUrl = bareUrl.Left(spacePos);
                        }
                        if (bareUrl.Right(4).CompareNoCase(_T(".xml")) == 0)
                        {
                            int lastSlash = bareUrl.ReverseFind(_T('/'));
                            if (lastSlash > 7)
                            {
                                m_strPatchUrl = EnsureTrailingSlash(bareUrl.Left(lastSlash + 1));
                                m_strCustomConfig = bareUrl.Mid(lastSlash + 1);
                            }
                            else
                            {
                                m_strPatchUrl = EnsureTrailingSlash(bareUrl);
                            }
                        }
                        else
                        {
                            m_strPatchUrl = EnsureTrailingSlash(bareUrl);
                        }
                    }
                    else
                    {
                        ParseCommandLine(line);
                    }
                }
            }
        }
        ::CloseHandle(hFile);
    }

    if (m_strVersionUrl.IsEmpty() && !m_strPatchUrl.IsEmpty())
    {
        m_strVersionUrl = EnsureTrailingSlash(m_strPatchUrl);
    }
    (void)bFoundIniKeys;
    return true;
}

void CDnPatchInfo::SetLanguage(LANGID langId)
{
    const WORD primary = PRIMARYLANGID(langId);
    if (primary == LANG_VIETNAMESE) // 0x2A
    {
        m_strLanguageParam = _T("VNM");
        m_nLanguageOffset = 10000;
    }
    else
    {
        m_strLanguageParam = _T("ENG");
        m_nLanguageOffset = 0;
    }
}

void CDnPatchInfo::SetLanguageByName(const CString& strLanguage)
{
    if (strLanguage.CompareNoCase(_T("VNM")) == 0)
    {
        m_strLanguageParam = _T("VNM");
        m_nLanguageOffset = 10000;
    }
    else
    {
        m_strLanguageParam = _T("ENG");
        m_nLanguageOffset = 0;
    }
}

CString CDnPatchInfo::GetString(UINT nBaseId) const
{
    CString strResult;
    if (m_nLanguageOffset > 0)
    {
        if (strResult.LoadString(nBaseId + static_cast<UINT>(m_nLanguageOffset)))
        {
            return strResult;
        }
    }
    strResult.LoadString(nBaseId);
    return strResult;
}

bool CDnPatchInfo::ParsePatchConfigXml(const char* szXmlFilePath)
{
    if (szXmlFilePath == NULL)
    {
        return false;
    }

    TiXmlDocument doc;
    if (!doc.LoadFile(szXmlFilePath))
    {
        LogWnd::Log(LogWnd::LogLevel::Error, _T("%S Files - Parsing Failed."), szXmlFilePath);
        m_nErrorCode = 6;
        return false;
    }

    m_vecChannelList.clear();

    const TiXmlElement* pRoot = doc.RootElement();
    if (pRoot == NULL)
    {
        m_nErrorCode = 6;
        return false;
    }

    auto parseChannelElement = [&](const TiXmlElement* pChElem)
    {
        SChannelListData ch;
        const char* chName = pChElem->Attribute("channel_name");
        if (chName != NULL) ch.strChannelName = Utf8ToWide(chName);

        SPartitionInfo channelDefaults;
        ApplyEndpointTags(pChElem, channelDefaults);
        ch.strGuidepageUrl = channelDefaults.strGuidepageUrl;
        ch.strHomepageUrl = channelDefaults.strHomepageUrl;
        ch.strVersionUrl = channelDefaults.strVersionUrl;
        ch.strPatchUrl = channelDefaults.strPatchUrl;
        ch.strStateTest = channelDefaults.strStateTest;

        for (const TiXmlElement* pLocal = pChElem->FirstChildElement("Local");
             pLocal != NULL;
             pLocal = pLocal->NextSiblingElement("Local"))
        {
            SPartitionInfo part = channelDefaults;
            part.vecLoginServer.clear();

            const char* localName = pLocal->Attribute("local_name");
            if (localName != NULL) part.strPartitionName = Utf8ToWide(localName);

            int val = 0;
            if (pLocal->QueryIntAttribute("partitionid", &val) == TIXML_SUCCESS)
                part.nPartitionId = val;
            if (pLocal->QueryIntAttribute("open", &val) == TIXML_SUCCESS)
                part.bOpen = (val != 0);
            if (pLocal->QueryIntAttribute("new", &val) == TIXML_SUCCESS)
                part.bNew = (val != 0);

            ApplyEndpointTags(pLocal, part);
            ch.vecPartition.push_back(part);
        }

        if (ch.vecPartition.empty() && (!channelDefaults.vecLoginServer.empty() || !ch.strPatchUrl.IsEmpty()))
        {
            channelDefaults.strPartitionName = ch.strChannelName;
            ch.vecPartition.push_back(channelDefaults);
        }

        m_vecChannelList.push_back(ch);
    };

    if (_stricmp(pRoot->Value(), "ChannelList") == 0)
    {
        parseChannelElement(pRoot);
    }
    else
    {
        for (const TiXmlElement* pCh = pRoot->FirstChildElement("ChannelList");
             pCh != NULL;
             pCh = pCh->NextSiblingElement("ChannelList"))
        {
            parseChannelElement(pCh);
        }
    }

    return !m_vecChannelList.empty();
}

bool CDnPatchInfo::SelectChannelAndPartition(int nChannelIndex, int nPartitionIndex)
{
    if (nChannelIndex < 0 || nChannelIndex >= static_cast<int>(m_vecChannelList.size()))
    {
        return false;
    }
    const SChannelListData& ch = m_vecChannelList[nChannelIndex];
    if (nPartitionIndex < 0 || nPartitionIndex >= static_cast<int>(ch.vecPartition.size()))
    {
        return false;
    }

    m_nSelectChannelIndex = nChannelIndex;
    m_nSelectPartitionIndex = nPartitionIndex;

    const SPartitionInfo& part = ch.vecPartition[nPartitionIndex];
    if (!part.strHomepageUrl.IsEmpty()) m_strHomepageUrl = part.strHomepageUrl;
    if (!part.strGuidepageUrl.IsEmpty()) m_strGuidepageUrl = part.strGuidepageUrl;
    if (!part.strVersionUrl.IsEmpty()) m_strVersionUrl = EnsureTrailingSlash(part.strVersionUrl);
    if (!part.strPatchUrl.IsEmpty()) m_strPatchUrl = EnsureTrailingSlash(part.strPatchUrl);
    if (!part.strStateTest.IsEmpty()) m_strStateText = part.strStateTest;

    if (part.vecLoginServer.empty())
    {
        LogWnd::Log(LogWnd::LogLevel::Error, _T("LoginServerList is Empty!"));
        m_nErrorCode = 9;
        return false;
    }

    m_strLoginIp.Empty();
    m_strLoginPortList.Empty();
    m_wLoginPort = part.vecLoginServer[0].wPort;

    for (size_t i = 0; i < part.vecLoginServer.size(); ++i)
    {
        CString portStr;
        portStr.Format(_T("%u"), static_cast<unsigned>(part.vecLoginServer[i].wPort));
        if (i > 0)
        {
            m_strLoginIp += _T(";");
            m_strLoginPortList += _T(";");
        }
        m_strLoginIp += part.vecLoginServer[i].strAddr;
        m_strLoginPortList += portStr;
    }

    return true;
}

bool CDnPatchInfo::DownloadSmallFile(const CString& strUrl, const CString& strLocalPath)
{
    ::DeleteUrlCacheEntry(strUrl);
    HRESULT hr = ::URLDownloadToFile(NULL, strUrl, strLocalPath, 0, NULL);
    return SUCCEEDED(hr) && ::GetFileAttributes(strLocalPath) != INVALID_FILE_ATTRIBUTES;
}

bool CDnPatchInfo::LoadPatchConfigList()
{
    const CString fileName = m_strCustomConfig.IsEmpty() ? CString(_T("PatchConfigList.xml")) : m_strCustomConfig;
    const CString localXml = m_strClientPath + _T("\\") + fileName;

    LogWnd::Log(LogWnd::LogLevel::Info, _T("DownLoad PatchConfigList (FileName %s)"), static_cast<const TCHAR*>(fileName));

    const CString url = EnsureTrailingSlash(m_strPatchUrl) + fileName;
    if (!DownloadSmallFile(url, localXml))
    {
        // Allow local offline XML if already present
        if (::GetFileAttributes(localXml) == INVALID_FILE_ATTRIBUTES)
        {
            return false;
        }
    }

    LogWnd::Log(LogWnd::LogLevel::Info, _T("Parsing PatchConfigList"));
    CStringA xmlPathA(localXml);
    bool ok = ParsePatchConfigXml(xmlPathA);
    ::DeleteFile(localXml);
    return ok;
}

int CDnPatchInfo::ParseVersionBuffer(const char* pData, DWORD dwSize, int& nOutVersion, int& nOutModule)
{
    if (pData == NULL || dwSize == 0)
    {
        return -1;
    }

    std::string content(pData, dwSize);
    size_t pos = 0;
    int parsedVersion = -1;
    while (pos < content.size())
    {
        size_t eol = content.find_first_of("\r\n", pos);
        if (eol == std::string::npos)
        {
            eol = content.size();
        }
        std::string line = content.substr(pos, eol - pos);
        pos = eol + 1;

        char szKey[128] = {};
        char szVal[128] = {};
        if (sscanf_s(line.c_str(), "%127s %127s", szKey, static_cast<unsigned>(sizeof(szKey)), szVal, static_cast<unsigned>(sizeof(szVal))) == 2)
        {
            if (_stricmp(szKey, "version") == 0)
            {
                parsedVersion = atoi(szVal);
                nOutVersion = parsedVersion;
            }
            else if (_stricmp(szKey, "module") == 0)
            {
                nOutModule = atoi(szVal);
            }
        }
    }
    return parsedVersion;
}

bool CDnPatchInfo::LoadPatchVersionInfo()
{
    LogWnd::Log(LogWnd::LogLevel::Info, _T("LoadPatchVersionInfo"));
    LoadClientVersion();
    LoadServerVersion();
    LogWnd::Log(LogWnd::LogLevel::Info, _T("LoadPatchVersionInfo Complete : Client Ver[%d] / Server Ver[%d]"),
        m_nClientVersion, m_nServerVersion);
    return (m_nClientVersion != -1 && m_nServerVersion != -1);
}

bool CDnPatchInfo::LoadClientVersion()
{
    m_nClientVersion = -1;
    int parsedModule = -1;

    // 1. Try loose Version.cfg first if present
    const CString versionCfgPath = m_strClientPath + _T("\\Version.cfg");
    HANDLE hFile = ::CreateFile(versionCfgPath, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hFile != INVALID_HANDLE_VALUE)
    {
        DWORD dwSize = ::GetFileSize(hFile, NULL);
        if (dwSize > 0 && dwSize != INVALID_FILE_SIZE && dwSize < 65536)
        {
            std::vector<char> buf(dwSize + 1, 0);
            DWORD dwRead = 0;
            if (::ReadFile(hFile, buf.data(), dwSize, &dwRead, NULL))
            {
                ParseVersionBuffer(buf.data(), dwRead, m_nClientVersion, parsedModule);
            }
        }
        ::CloseHandle(hFile);
        if (m_nClientVersion >= 0)
        {
            m_nModuleVersion = (parsedModule >= 0) ? parsedModule : m_nClientVersion;
            DnFirstPatchInfo::GetInstance().SetLocalModuleVersion(m_nModuleVersion);
            return true;
        }
    }

    // 2. Fallback to Resource00.pak\version.cfg
    const CString resPakPath = m_strClientPath + _T("\\Resource00.pak");
    if (::GetFileAttributes(resPakPath) != INVALID_FILE_ATTRIBUTES)
    {
        CStringA resPakPathA(resPakPath);
        CEtPackingFile pak;
        if (pak.OpenFileSystem(resPakPathA, true))
        {
            CEtFileHandle* pVerFile = pak.OpenFile("\\version.cfg");
            if (pVerFile == NULL)
            {
                pVerFile = pak.OpenFile("version.cfg");
            }
            if (pVerFile != NULL)
            {
                ParseVersionBuffer(pVerFile->GetData(), pVerFile->GetOriginalSize(), m_nClientVersion, parsedModule);
                delete pVerFile;
            }
            pak.CloseFileSystem();
        }
        else
        {
            LogWnd::Log(LogWnd::LogLevel::Error, _T("Fail to Read Resource Pak"));
        }
    }

    if (m_nClientVersion < 0)
    {
        DnFirstPatchInfo::GetInstance().SetLocalModuleVersion(-1);
        DnFirstPatchInfo::GetInstance().SetFirstPatchStatus(1);
        LogWnd::Log(LogWnd::LogLevel::Error, _T("Fail to load client version"));
        return false;
    }

    m_nModuleVersion = (parsedModule >= 0) ? parsedModule : m_nClientVersion;
    DnFirstPatchInfo::GetInstance().SetLocalModuleVersion(m_nModuleVersion);
    return true;
}

bool CDnPatchInfo::LoadServerVersion()
{
    m_nServerVersion = -1;
    CString baseUrl = m_strVersionUrl.IsEmpty() ? m_strPatchUrl : m_strVersionUrl;
    const CString url = EnsureTrailingSlash(baseUrl) + _T("PatchInfoServer.cfg");
    const CString localTmp = m_strClientPath + _T("\\PatchInfoServer.cfg");

    bool fetched = false;
    for (int attempt = 0; attempt < 3; ++attempt)
    {
        if (DownloadSmallFile(url, localTmp))
        {
            fetched = true;
            break;
        }
    }

    if (!fetched && ::GetFileAttributes(localTmp) == INVALID_FILE_ATTRIBUTES)
    {
        LogWnd::Log(LogWnd::LogLevel::Error, _T("PatchInfoServer.cfg download Failed!"));
        return false;
    }

    HANDLE hFile = ::CreateFile(localTmp, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hFile != INVALID_HANDLE_VALUE)
    {
        DWORD dwSize = ::GetFileSize(hFile, NULL);
        if (dwSize > 0 && dwSize != INVALID_FILE_SIZE && dwSize < 65536)
        {
            std::vector<char> buf(dwSize + 1, 0);
            DWORD dwRead = 0;
            if (::ReadFile(hFile, buf.data(), dwSize, &dwRead, NULL))
            {
                int unusedModule = m_nModuleVersion;
                ParseVersionBuffer(buf.data(), dwRead, m_nServerVersion, unusedModule);
            }
        }
        ::CloseHandle(hFile);
    }

    ::DeleteFile(localTmp);
    return (m_nServerVersion >= 0);
}

bool CDnPatchInfo::SaveVersionFile(int nVersion, int nModule)
{
    if (nModule <= 0)
    {
        int nFirstMod = DnFirstPatchInfo::GetInstance().GetLocalModuleVersion();
        nModule = (nFirstMod > 0) ? nFirstMod : nVersion;
    }
    m_nClientVersion = nVersion;
    m_nModuleVersion = nModule;
    DnFirstPatchInfo::GetInstance().SetLocalModuleVersion(nModule);

    char szBuf[256] = {};
    sprintf_s(szBuf, "Version %d\r\nModule %d", nVersion, nModule);
    const int len = static_cast<int>(strlen(szBuf));

    const CString versionCfgPath = m_strClientPath + _T("\\Version.cfg");
    HANDLE hFile = ::CreateFile(versionCfgPath, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hFile == INVALID_HANDLE_VALUE)
    {
        LogWnd::Log(LogWnd::LogLevel::Error, _T("Save Version File Failed!"));
        return false;
    }

    DWORD dwWritten = 0;
    BOOL ok = ::WriteFile(hFile, szBuf, static_cast<DWORD>(len), &dwWritten, NULL);
    ::CloseHandle(hFile);

    // Also synchronize Resource00.pak\version.cfg if present
    const CString resPakPath = m_strClientPath + _T("\\Resource00.pak");
    if (::GetFileAttributes(resPakPath) != INVALID_FILE_ATTRIBUTES)
    {
        CStringA resPakPathA(resPakPath);
        CEtPackingFile pak;
        if (pak.OpenFileSystem(resPakPathA, false))
        {
            pak.AddFile("\\version.cfg", szBuf, len);
            pak.CloseFileSystem();
        }
    }

    return ok != FALSE;
}

bool CDnPatchInfo::Is64BitOS()
{
    typedef BOOL(WINAPI* LPFN_ISWOW64PROCESS)(HANDLE, PBOOL);
    LPFN_ISWOW64PROCESS fnIsWow64Process = reinterpret_cast<LPFN_ISWOW64PROCESS>(
        ::GetProcAddress(::GetModuleHandle(_T("kernel32")), "IsWow64Process"));
    if (fnIsWow64Process != NULL)
    {
        BOOL bIsWow64 = FALSE;
        if (fnIsWow64Process(::GetCurrentProcess(), &bIsWow64) && bIsWow64)
        {
            return true;
        }
    }
    return false;
}

CString CDnPatchInfo::GetGameLaunchParameters(bool bUseDx11) const
{
    CString portText = m_strLoginPortList;
    if (portText.IsEmpty())
    {
        portText.Format(_T("%u"), static_cast<unsigned>(m_wLoginPort));
    }

    CString params;
    params.Format(
        _T("/ip:%s /port:%s /Lver:%d /use_packing /language:%s /patchver:%d /patchurl:%s"),
        static_cast<const TCHAR*>(m_strLoginIp),
        static_cast<const TCHAR*>(portText),
        m_nClientVersion,
        static_cast<const TCHAR*>(m_strLanguageParam),
        m_nClientVersion,
        static_cast<const TCHAR*>(m_strPatchUrl));

    if (bUseDx11)
    {
        params += _T(" /bgfx");
    }
    return params;
}

CString CDnPatchInfo::GetAutoUpdateParameters() const
{
    // Reconstructed from DNLauncher.exe 0x00420ce0..0x00420ea0 ("%s|%s|%d-%d" at 0x004b3904)
    CString params;
    params.Format(
        _T("%s|%s|%d-%d"),
        static_cast<const TCHAR*>(m_strPatchUrl),
        static_cast<const TCHAR*>(m_strClientPath),
        m_nServerVersion + 1,
        m_nNextVersion);
    return params;
}

// ---------------------------------------------------------------------------
// DnFirstPatchInfo implementation (0x00404100..0x004045CF)
// ---------------------------------------------------------------------------
DnFirstPatchInfo& DnFirstPatchInfo::GetInstance()
{
    static DnFirstPatchInfo s_instance;
    return s_instance;
}

DnFirstPatchInfo::DnFirstPatchInfo()
    : m_nLocalModuleVersion(0)
    , m_nServerModuleVersion(0)
    , m_bPatchChanged(FALSE)
    , m_nFirstPatchStatus(0)
    , m_nFirstPatchProcess(3)
{
}

DnFirstPatchInfo::~DnFirstPatchInfo()
{
    m_vecCopyList.clear();
    m_vecDeleteList.clear();
}

void DnFirstPatchInfo::Reset()
{
    m_strPatchUrl.Empty();
    m_strBaseDir.Empty();
    m_vecDeleteList.clear();
    m_vecCopyList.clear();
    m_nLocalModuleVersion = 0;
    m_nServerModuleVersion = 0;
    m_bPatchChanged = FALSE;
    m_nFirstPatchStatus = 0;
    m_nFirstPatchProcess = 3;
}


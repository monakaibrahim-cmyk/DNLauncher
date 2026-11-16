#include "stdafx.h"
#include "Launcher/DnOptionData.h"

#include <shlobj.h>
#include <algorithm>
#include "Patcher/DnPatchInfo.h"

namespace
{
bool ResolutionLess(const SResolutionMode& a, const SResolutionMode& b)
{
    if (a.nWidth != b.nWidth)
    {
        return a.nWidth < b.nWidth;
    }
    return a.nHeight < b.nHeight;
}
} // namespace

CDnOptionData& CDnOptionData::GetInstance()
{
    static CDnOptionData s_instance;
    return s_instance;
}

CDnOptionData::CDnOptionData()
    : m_nWidth(1280)
    , m_nHeight(800)
    , m_nGraphicQuality(0)
    , m_nTextureQuality(0)
    , m_nWindowMode(0)
    , m_bVSync(FALSE)
    , m_nLanguageID(0)
    , m_bUseDX11(FALSE)
{
    ApplyDefaultResolution();
    EnumerateDisplayModes();
}

CDnOptionData::~CDnOptionData()
{
}

void CDnOptionData::StripSurroundingWhitespace(std::string& s)
{
    const size_t first = s.find_first_not_of(" \t\r\n");
    if (first == std::string::npos)
    {
        s.clear();
        return;
    }
    const size_t last = s.find_last_not_of(" \t\r\n");
    s = s.substr(first, last - first + 1);
}

void CDnOptionData::EnsureDirectoryRecursive(const CString& strDir)
{
    if (strDir.IsEmpty())
    {
        return;
    }
    ::SHCreateDirectoryEx(NULL, strDir, NULL);
}

CString CDnOptionData::GetDefaultConfigDir() const
{
    TCHAR szDocs[MAX_PATH] = { 0 };
    if (SUCCEEDED(::SHGetFolderPath(NULL, CSIDL_PERSONAL, NULL, SHGFP_TYPE_CURRENT, szDocs)) && szDocs[0] != _T('\0'))
    {
        CString strPath = szDocs;
        strPath.TrimRight(_T("\\/"));
        strPath += _T("\\DragonNest\\Config");
        return strPath;
    }

    TCHAR szExe[MAX_PATH] = { 0 };
    ::GetModuleFileName(NULL, szExe, MAX_PATH);
    CString strExeDir = szExe;
    int slash = strExeDir.ReverseFind(_T('\\'));
    if (slash > 0)
    {
        strExeDir = strExeDir.Left(slash);
    }
    return strExeDir + _T("\\Config");
}

CString CDnOptionData::GetDefaultConfigPath() const
{
    if (!m_strConfigPathOverride.IsEmpty())
    {
        return m_strConfigPathOverride;
    }
    return GetDefaultConfigDir() + _T("\\Config.ini");
}

void CDnOptionData::SetConfigPathOverride(const CString& strConfigPath)
{
    m_strConfigPathOverride = strConfigPath;
}

void CDnOptionData::ApplyDefaultResolution()
{
    const int cx = ::GetSystemMetrics(SM_CXSCREEN);
    const int cy = ::GetSystemMetrics(SM_CYSCREEN);
    if (cx > 0 && cy > 0 && (static_cast<double>(cy) / static_cast<double>(cx)) > 0.7)
    {
        m_nWidth = 1024;
        m_nHeight = 768;
    }
    else
    {
        m_nWidth = 1280;
        m_nHeight = 800;
    }
}

void CDnOptionData::EnumerateDisplayModes()
{
    m_vecResolutionList.clear();

    DEVMODE dm = { 0 };
    dm.dmSize = sizeof(dm);
    for (DWORD i = 0; ::EnumDisplaySettings(NULL, i, &dm); ++i)
    {
        if (dm.dmBitsPerPel == 32 && dm.dmPelsWidth >= 1024 && dm.dmPelsHeight >= 768)
        {
            SResolutionMode mode(static_cast<int>(dm.dmPelsWidth), static_cast<int>(dm.dmPelsHeight));
            if (std::find(m_vecResolutionList.begin(), m_vecResolutionList.end(), mode) == m_vecResolutionList.end())
            {
                m_vecResolutionList.push_back(mode);
            }
        }
        ZeroMemory(&dm, sizeof(dm));
        dm.dmSize = sizeof(dm);
    }

    if (m_vecResolutionList.empty())
    {
        const int cx = ::GetSystemMetrics(SM_CXSCREEN);
        const int cy = ::GetSystemMetrics(SM_CYSCREEN);
        if (cx >= 1024 && cy >= 768)
        {
            m_vecResolutionList.push_back(SResolutionMode(cx, cy));
        }
        if (m_nWidth >= 1024 && m_nHeight >= 768)
        {
            SResolutionMode def(m_nWidth, m_nHeight);
            if (std::find(m_vecResolutionList.begin(), m_vecResolutionList.end(), def) == m_vecResolutionList.end())
            {
                m_vecResolutionList.push_back(def);
            }
        }
        if (m_vecResolutionList.empty())
        {
            m_vecResolutionList.push_back(SResolutionMode(1024, 768));
            m_vecResolutionList.push_back(SResolutionMode(1280, 800));
        }
    }

    std::sort(m_vecResolutionList.begin(), m_vecResolutionList.end(), ResolutionLess);
}

bool CDnOptionData::ParseConfigLine(const char* szKey, const char* szValue)
{
    if (szKey == NULL || szValue == NULL)
    {
        return false;
    }

    if (_stricmp(szKey, "Width") == 0)
    {
        m_nWidth = atoi(szValue);
        return true;
    }
    if (_stricmp(szKey, "Height") == 0)
    {
        m_nHeight = atoi(szValue);
        return true;
    }
    if (_stricmp(szKey, "GraphicQuality") == 0)
    {
        m_nGraphicQuality = atoi(szValue);
        return true;
    }
    if (_stricmp(szKey, "TextureQuality") == 0)
    {
        m_nTextureQuality = atoi(szValue);
        return true;
    }
    if (_stricmp(szKey, "WindowMode") == 0)
    {
        m_nWindowMode = atoi(szValue);
        return true;
    }
    if (_stricmp(szKey, "VSync") == 0)
    {
        m_bVSync = (atoi(szValue) != 0) ? TRUE : FALSE;
        return true;
    }
    if (_stricmp(szKey, "LanguageID") == 0)
    {
        m_nLanguageID = atoi(szValue);
        CDnPatchInfo::GetInstance().SetLanguage(static_cast<LANGID>(m_nLanguageID));
        return true;
    }
    if (_stricmp(szKey, "UseDX11") == 0)
    {
        m_bUseDX11 = (atoi(szValue) != 0) ? TRUE : FALSE;
        return true;
    }

    return false;
}

bool CDnOptionData::LoadConfig(const TCHAR* szConfigPath)
{
    m_vecExtraOptions.clear();

    CString strPath = (szConfigPath != NULL && szConfigPath[0] != _T('\0'))
        ? CString(szConfigPath)
        : GetDefaultConfigPath();

    CStringA strPathA(CW2A(strPath, CP_ACP));
    FILE* fp = NULL;
    if (fopen_s(&fp, strPathA.GetString(), "rt") != 0 || fp == NULL)
    {
        ApplyDefaultResolution();
        return false;
    }

    char lineBuf[512] = { 0 };
    while (fgets(lineBuf, sizeof(lineBuf), fp) != NULL)
    {
        std::string line(lineBuf);
        StripSurroundingWhitespace(line);
        if (line.empty() || line[0] == ';' || line[0] == '#' || line[0] == '[')
        {
            continue;
        }

        // Support both whitespace-delimited ("Width 1280") and "=" syntax ("Width=1280")
        size_t sep = line.find_first_of(" \t=");
        if (sep == std::string::npos)
        {
            continue;
        }

        std::string key = line.substr(0, sep);
        std::string val = line.substr(sep + 1);
        StripSurroundingWhitespace(key);
        if (!val.empty() && val[0] == '=')
        {
            val.erase(0, 1);
        }
        StripSurroundingWhitespace(val);
        if (key.empty() || val.empty())
        {
            continue;
        }

        if (!ParseConfigLine(key.c_str(), val.c_str()))
        {
            m_vecExtraOptions.push_back(std::make_pair(key, val));
        }
    }

    fclose(fp);

    if (m_nWidth == 0 || m_nHeight == 0)
    {
        ApplyDefaultResolution();
    }
    if (m_nWidth < 1024)
    {
        m_nWidth = 1024;
        m_nHeight = 768;
    }

    return true;
}

bool CDnOptionData::SaveConfig(const TCHAR* szConfigPath) const
{
    CString strPath = (szConfigPath != NULL && szConfigPath[0] != _T('\0'))
        ? CString(szConfigPath)
        : GetDefaultConfigPath();

    int slash = strPath.ReverseFind(_T('\\'));
    if (slash > 0)
    {
        EnsureDirectoryRecursive(strPath.Left(slash));
    }

    CStringA strPathA(CW2A(strPath, CP_ACP));
    FILE* fp = NULL;
    if (fopen_s(&fp, strPathA.GetString(), "wt") != 0 || fp == NULL)
    {
        return false;
    }

    fprintf(fp, "Width %d\n", m_nWidth);
    fprintf(fp, "Height %d\n", m_nHeight);
    fprintf(fp, "GraphicQuality %d\n", m_nGraphicQuality);
    fprintf(fp, "TextureQuality %d\n", m_nTextureQuality);
    fprintf(fp, "WindowMode %d\n", m_nWindowMode);
    fprintf(fp, "VSync %d\n", m_bVSync ? 1 : 0);
    fprintf(fp, "LanguageID %d\n", m_nLanguageID);
    fprintf(fp, "UseDX11 %d\n", m_bUseDX11 ? 1 : 0);

    for (size_t i = 0; i < m_vecExtraOptions.size(); ++i)
    {
        fprintf(fp, "%s %s\n",
            m_vecExtraOptions[i].first.c_str(),
            m_vecExtraOptions[i].second.c_str());
    }

    fclose(fp);
    return true;
}

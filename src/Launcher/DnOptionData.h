#pragma once

#include <string>
#include <utility>
#include <vector>

/** @brief Display resolution candidate entry for Config.ini and Option dialog. */
struct SResolutionMode
{
    int nWidth;
    int nHeight;

    SResolutionMode() : nWidth(0), nHeight(0) {}
    SResolutionMode(int w, int h) : nWidth(w), nHeight(h) {}

    bool operator==(const SResolutionMode& rhs) const
    {
        return nWidth == rhs.nWidth && nHeight == rhs.nHeight;
    }
};

/**
 * @brief Singleton managing DragonNest\Config\Config.ini settings and supported resolutions.
 */
class CDnOptionData
{
public:
    static CDnOptionData& GetInstance();

    /** @brief Returns the default configuration folder (%MYDOCUMENTS%\DragonNest\Config). */
    CString GetDefaultConfigDir() const;

    /** @brief Returns the default full path to Config.ini (or test override if set). */
    CString GetDefaultConfigPath() const;

    /** @brief Overrides the default Config.ini path (used by non-destructive tests). */
    void SetConfigPathOverride(const CString& strConfigPath);

    /** @brief Loads Config.ini values (defaults to GetDefaultConfigPath() if NULL). */
    bool LoadConfig(const TCHAR* szConfigPath = NULL);

    /** @brief Saves Config.ini values cleanly while preserving unrecognized key-value pairs. */
    bool SaveConfig(const TCHAR* szConfigPath = NULL) const;

    /** @brief Enumerates supported 32-bit display modes >= 1024x768 via EnumDisplaySettings. */
    void EnumerateDisplayModes();

    /** @brief Computes default aspect-aware fallback resolution (1024x768 or 1280x800). */
    void ApplyDefaultResolution();

    /** @brief Parses a single "Key Value" or "Key=Value" line from Config.ini. */
    bool ParseConfigLine(const char* szKey, const char* szValue);

public:
    int  m_nWidth;
    int  m_nHeight;
    int  m_nGraphicQuality;
    int  m_nTextureQuality;
    int  m_nWindowMode;
    BOOL m_bVSync;
    int  m_nLanguageID;
    BOOL m_bUseDX11;

    std::vector<SResolutionMode> m_vecResolutionList;
    std::vector<std::pair<std::string, std::string> > m_vecExtraOptions;
    CString m_strConfigPathOverride;

private:
    CDnOptionData();
    ~CDnOptionData();
    CDnOptionData(const CDnOptionData&) = delete;
    CDnOptionData& operator=(const CDnOptionData&) = delete;

    static void EnsureDirectoryRecursive(const CString& strDir);
    static void StripSurroundingWhitespace(std::string& s);
};

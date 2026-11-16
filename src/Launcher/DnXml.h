#pragma once

#include <map>

/**
 * @brief Layout descriptor parsed from a <ContrlListData> node in XML resources (17000..17002).
 */
struct SControlLayoutInfo
{
    int     nEnum;
    int     nType;
    CRect   rcPos;
    CString strName;
    CString strImgPath;

    SControlLayoutInfo()
        : nEnum(-1)
        , nType(0)
        , rcPos(0, 0, 0, 0)
    {
    }
};

/**
 * @brief Loads dialog control coordinates from embedded XML layout resources (17000/17001/17002).
 */
class ControlPositionManager
{
public:
    ControlPositionManager();
    ~ControlPositionManager();

    /** @brief Loads layout entries from a custom "XML" resource in the current module. */
    bool LoadXml(UINT nResID);

    /** @brief Parses layout entries directly from an in-memory XML buffer. */
    bool LoadXmlMemory(const char* pData, int nSize);

    /** @brief Parses layout entries from a standalone XML file on disk. */
    bool LoadXmlFile(const char* szFilePath);

    /** @brief Clears all loaded layout entries. */
    void Clear();

    /** @brief Returns whether an entry exists for the given Enum index. */
    bool HasControl(int nEnum) const;

    /** @brief Retrieves the bounding rectangle for a given Enum index. */
    CRect GetControlRect(int nEnum) const;

    /** @brief Retrieves full layout metadata for a given Enum index. */
    bool GetControlInfo(int nEnum, SControlLayoutInfo& outInfo) const;

    /** @brief Repositions a child dialog control using its corresponding XML Enum rectangle. */
    bool MoveControl(CWnd* pParent, int nDlgItemId, int nEnum, BOOL bRepaint = TRUE) const;

    /** @brief Returns the number of parsed control entries. */
    int GetCount() const { return static_cast<int>(m_mapControls.size()); }

private:
    static bool ParseRectPos(const char* szRectPos, CRect& outRect);
    bool ParseXmlDocument(const class TiXmlDocument& doc);

    std::map<int, SControlLayoutInfo> m_mapControls;
};

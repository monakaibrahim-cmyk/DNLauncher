#include "stdafx.h"
#include "Launcher/DnXml.h"

#include <string>
#include "tinyxml.h"

ControlPositionManager::ControlPositionManager()
{
}

ControlPositionManager::~ControlPositionManager()
{
    Clear();
}

void ControlPositionManager::Clear()
{
    m_mapControls.clear();
}

bool ControlPositionManager::ParseRectPos(const char* szRectPos, CRect& outRect)
{
    if (szRectPos == NULL || *szRectPos == '\0')
    {
        return false;
    }

    int left = 0;
    int top = 0;
    int right = 0;
    int bottom = 0;
    if (sscanf_s(szRectPos, "%d.%d.%d.%d", &left, &top, &right, &bottom) != 4)
    {
        return false;
    }

    outRect.SetRect(left, top, right, bottom);
    return true;
}

bool ControlPositionManager::ParseXmlDocument(const TiXmlDocument& doc)
{
    Clear();

    const TiXmlElement* root = doc.FirstChildElement("document");
    if (root == NULL)
    {
        root = doc.RootElement();
    }
    if (root == NULL)
    {
        return false;
    }

    for (const TiXmlElement* node = root->FirstChildElement("ContrlListData");
         node != NULL;
         node = node->NextSiblingElement("ContrlListData"))
    {
        int nEnum = -1;
        if (node->QueryIntAttribute("Enum", &nEnum) != TIXML_SUCCESS || nEnum < 0)
        {
            continue;
        }

        SControlLayoutInfo info;
        info.nEnum = nEnum;
        node->QueryIntAttribute("Type", &info.nType);

        const char* rectAttr = node->Attribute("RectPos");
        if (!ParseRectPos(rectAttr, info.rcPos))
        {
            continue;
        }

        const char* nameAttr = node->Attribute("Name");
        if (nameAttr != NULL)
        {
            info.strName = CString(CA2W(nameAttr, CP_ACP));
        }

        const char* imgAttr = node->Attribute("ImgPath");
        if (imgAttr != NULL)
        {
            info.strImgPath = CString(CA2W(imgAttr, CP_ACP));
        }

        m_mapControls[nEnum] = info;
    }

    return !m_mapControls.empty();
}

bool ControlPositionManager::LoadXmlMemory(const char* pData, int nSize)
{
    if (pData == NULL || nSize <= 0)
    {
        return false;
    }

    std::string xmlCopy(pData, static_cast<size_t>(nSize));
    TiXmlDocument doc;
    doc.Parse(xmlCopy.c_str(), NULL, TIXML_ENCODING_LEGACY);
    if (doc.Error())
    {
        return false;
    }

    return ParseXmlDocument(doc);
}

bool ControlPositionManager::LoadXmlFile(const char* szFilePath)
{
    if (szFilePath == NULL || *szFilePath == '\0')
    {
        return false;
    }

    TiXmlDocument doc;
    if (!doc.LoadFile(szFilePath, TIXML_ENCODING_LEGACY))
    {
        return false;
    }

    return ParseXmlDocument(doc);
}

bool ControlPositionManager::LoadXml(UINT nResID)
{
    HINSTANCE hInst = ::AfxFindResourceHandle(MAKEINTRESOURCE(nResID), _T("XML"));
    if (hInst == NULL)
    {
        hInst = ::AfxGetResourceHandle();
    }

    HRSRC hRes = ::FindResource(hInst, MAKEINTRESOURCE(nResID), _T("XML"));
    if (hRes == NULL)
    {
        return false;
    }

    DWORD dwSize = ::SizeofResource(hInst, hRes);
    HGLOBAL hGlobal = ::LoadResource(hInst, hRes);
    if (hGlobal == NULL || dwSize == 0)
    {
        return false;
    }

    const char* pData = static_cast<const char*>(::LockResource(hGlobal));
    if (pData == NULL)
    {
        return false;
    }

    return LoadXmlMemory(pData, static_cast<int>(dwSize));
}

bool ControlPositionManager::HasControl(int nEnum) const
{
    return m_mapControls.find(nEnum) != m_mapControls.end();
}

CRect ControlPositionManager::GetControlRect(int nEnum) const
{
    std::map<int, SControlLayoutInfo>::const_iterator it = m_mapControls.find(nEnum);
    if (it == m_mapControls.end())
    {
        return CRect(0, 0, 0, 0);
    }
    return it->second.rcPos;
}

bool ControlPositionManager::GetControlInfo(int nEnum, SControlLayoutInfo& outInfo) const
{
    std::map<int, SControlLayoutInfo>::const_iterator it = m_mapControls.find(nEnum);
    if (it == m_mapControls.end())
    {
        return false;
    }
    outInfo = it->second;
    return true;
}

bool ControlPositionManager::MoveControl(CWnd* pParent, int nDlgItemId, int nEnum, BOOL bRepaint) const
{
    if (pParent == NULL)
    {
        return false;
    }

    CWnd* pCtrl = pParent->GetDlgItem(nDlgItemId);
    if (pCtrl == NULL || !::IsWindow(pCtrl->GetSafeHwnd()))
    {
        return false;
    }

    std::map<int, SControlLayoutInfo>::const_iterator it = m_mapControls.find(nEnum);
    if (it == m_mapControls.end())
    {
        return false;
    }

    const CRect& rc = it->second.rcPos;
    pCtrl->MoveWindow(rc.left, rc.top, rc.Width(), rc.Height(), bRepaint);
    if (rc.IsRectEmpty())
    {
        pCtrl->ShowWindow(SW_HIDE);
    }
    else
    {
        pCtrl->ShowWindow(SW_SHOW);
    }
    return true;
}

#pragma once

#ifndef DN_REGION_URLS_ONLY
#include "DnLauncherDlg.h"
#include "DnLauncherDlgSG.h"
#endif

/**
 * @file DnRegionConfig.h
 * @brief Regional preprocessor configuration (_SG, _US, _TWN, _KOR, _CHN, _JPN, _THAI, _IDN, _RUS, _EU).
 *
 * Eyedentity Games built regional Dragon Nest launchers from the same C++ codebase using
 * country/publisher preprocessor macros:
 *   - _SG   : SEA (Singapore / Malaysia / Philippines / Vietnam - Cherry Credits) [Default]
 *   - _US   : North America (Nexon America)
 *   - _TWN  : Taiwan / Hong Kong (Gamania)
 *   - _KOR  : Korea (Nexon Korea)
 *   - _CHN  : China (Shanda Games)
 *   - _JPN  : Japan (NHN Hangame)
 *   - _THAI : Thailand (Asiasoft)
 *   - _IDN  : Indonesia (Gemscool)
 *   - _RUS  : Russia (Mail.ru)
 *   - _EU   : Europe (eFusion / Shanda Games Europe)
 */

#if !defined(_SG) && !defined(_US) && !defined(_TWN) && !defined(_KOR) && \
    !defined(_CHN) && !defined(_JPN) && !defined(_THAI) && !defined(_IDN) && \
    !defined(_RUS) && !defined(_EU) && !defined(_BASE)
#define _SG 1
#endif

#ifndef DN_REGION_URLS_ONLY

// ---------------------------------------------------------------------------
// Regional Dialog & Service Module Subclasses for Non-SEA Publishers
// ---------------------------------------------------------------------------

class CDnServiceModuleUS : public IServiceModule
{
public:
    CDnServiceModuleUS() {}
    virtual ~CDnServiceModuleUS() {}
    virtual BOOL Initialize() { return TRUE; }
    virtual void Destroy() {}
};

class CDnLauncherDlgUS : public CDnLauncherDlg
{
public:
    explicit CDnLauncherDlgUS(CWnd* pParent = NULL) : CDnLauncherDlg(pParent) {}
    virtual ~CDnLauncherDlgUS() {}
};

class CDnServiceModuleTWN : public IServiceModule
{
public:
    CDnServiceModuleTWN() {}
    virtual ~CDnServiceModuleTWN() {}
    virtual BOOL Initialize() { return TRUE; }
    virtual void Destroy() {}
};

class CDnLauncherDlgTWN : public CDnLauncherDlg
{
public:
    explicit CDnLauncherDlgTWN(CWnd* pParent = NULL) : CDnLauncherDlg(pParent) {}
    virtual ~CDnLauncherDlgTWN() {}
};

class CDnServiceModuleKOR : public IServiceModule
{
public:
    CDnServiceModuleKOR() {}
    virtual ~CDnServiceModuleKOR() {}
    virtual BOOL Initialize() { return TRUE; }
    virtual void Destroy() {}
};

class CDnLauncherDlgKOR : public CDnLauncherDlg
{
public:
    explicit CDnLauncherDlgKOR(CWnd* pParent = NULL) : CDnLauncherDlg(pParent) {}
    virtual ~CDnLauncherDlgKOR() {}
};

#endif // !DN_REGION_URLS_ONLY

// ---------------------------------------------------------------------------
// Active Compile-Time Regional Selection
// ---------------------------------------------------------------------------

#if defined(_SG)
    #define DN_REGION_NAME                  _T("SG")
    #define DN_DEFAULT_PATCH_URL            _T("http://patchsea.dragonnest.com/Game/DragonNest/Patch/")
    #define DN_DEFAULT_PATCH_CONFIG_URL     _T("http://patchsea.dragonnest.com/Game/DragonNest/Patch/PatchConfigList.xml")
    #ifndef DN_REGION_URLS_ONLY
    typedef CDnLauncherDlgSG                DnActiveLauncherDlg;
    typedef CDnServiceModuleSG              DnActiveServiceModule;
    #endif
#elif defined(_US)
    #define DN_REGION_NAME                  _T("US")
    #define DN_DEFAULT_PATCH_URL            _T("https://patchus.dragonnest.com/Game/DragonNest/patch/")
    #define DN_DEFAULT_PATCH_CONFIG_URL     _T("https://patchus.dragonnest.com/Game/DragonNest/patch/PatchConfigList.xml")
    #ifndef DN_REGION_URLS_ONLY
    typedef CDnLauncherDlgUS                DnActiveLauncherDlg;
    typedef CDnServiceModuleUS              DnActiveServiceModule;
    #endif
#elif defined(_TWN)
    #define DN_REGION_NAME                  _T("TWN")
    #define DN_DEFAULT_PATCH_URL            _T("http://patch.dn.beanfun.com/Game/DragonNest/Patch/")
    #define DN_DEFAULT_PATCH_CONFIG_URL     _T("http://patch.dn.beanfun.com/Game/DragonNest/Patch/PatchConfigList.xml")
    #ifndef DN_REGION_URLS_ONLY
    typedef CDnLauncherDlgTWN               DnActiveLauncherDlg;
    typedef CDnServiceModuleTWN             DnActiveServiceModule;
    #endif
#elif defined(_KOR)
    #define DN_REGION_NAME                  _T("KOR")
    #define DN_DEFAULT_PATCH_URL            _T("http://patch.dragonnest.nexon.com/Game/DragonNest/Patch/")
    #define DN_DEFAULT_PATCH_CONFIG_URL     _T("http://patch.dragonnest.nexon.com/Game/DragonNest/Patch/PatchConfigList.xml")
    #ifndef DN_REGION_URLS_ONLY
    typedef CDnLauncherDlgKOR               DnActiveLauncherDlg;
    typedef CDnServiceModuleKOR             DnActiveServiceModule;
    #endif
#elif defined(_CHN)
    #define DN_REGION_NAME                  _T("CHN")
    #define DN_DEFAULT_PATCH_URL            _T("http://patch.dn.sdo.com/sndalist/")
    #define DN_DEFAULT_PATCH_CONFIG_URL     _T("http://patch.dn.sdo.com/sndalist/PatchConfigList.xml")
    #ifndef DN_REGION_URLS_ONLY
    typedef CDnLauncherDlg                  DnActiveLauncherDlg;
    typedef IServiceModule                  DnActiveServiceModule;
    #endif
#elif defined(_JPN)
    #define DN_REGION_NAME                  _T("JPN")
    #define DN_DEFAULT_PATCH_URL            _T("http://patch.dragonnest.hangame.co.jp/Game/DragonNest/Patch/")
    #define DN_DEFAULT_PATCH_CONFIG_URL     _T("http://patch.dragonnest.hangame.co.jp/Game/DragonNest/Patch/PatchConfigList.xml")
    #ifndef DN_REGION_URLS_ONLY
    typedef CDnLauncherDlg                  DnActiveLauncherDlg;
    typedef IServiceModule                  DnActiveServiceModule;
    #endif
#elif defined(_THAI)
    #define DN_REGION_NAME                  _T("THAI")
    #define DN_DEFAULT_PATCH_URL            _T("http://patch.dn.in.th/Game/DragonNest/Patch/")
    #define DN_DEFAULT_PATCH_CONFIG_URL     _T("http://patch.dn.in.th/Game/DragonNest/Patch/PatchConfigList.xml")
    #ifndef DN_REGION_URLS_ONLY
    typedef CDnLauncherDlg                  DnActiveLauncherDlg;
    typedef IServiceModule                  DnActiveServiceModule;
    #endif
#elif defined(_IDN)
    #define DN_REGION_NAME                  _T("IDN")
    #define DN_DEFAULT_PATCH_URL            _T("http://patch.dn.gemscool.com/Game/DragonNest/Patch/")
    #define DN_DEFAULT_PATCH_CONFIG_URL     _T("http://patch.dn.gemscool.com/Game/DragonNest/Patch/PatchConfigList.xml")
    #ifndef DN_REGION_URLS_ONLY
    typedef CDnLauncherDlg                  DnActiveLauncherDlg;
    typedef IServiceModule                  DnActiveServiceModule;
    #endif
#elif defined(_RUS)
    #define DN_REGION_NAME                  _T("RUS")
    #define DN_DEFAULT_PATCH_URL            _T("http://dl.dn.mail.ru/Game/DragonNest/Patch/")
    #define DN_DEFAULT_PATCH_CONFIG_URL     _T("http://dl.dn.mail.ru/Game/DragonNest/Patch/PatchConfigList.xml")
    #ifndef DN_REGION_URLS_ONLY
    typedef CDnLauncherDlg                  DnActiveLauncherDlg;
    typedef IServiceModule                  DnActiveServiceModule;
    #endif
#elif defined(_EU)
    #define DN_REGION_NAME                  _T("EU")
    #define DN_DEFAULT_PATCH_URL            _T("http://patch.dragonnest.eu/Game/DragonNest/Patch/")
    #define DN_DEFAULT_PATCH_CONFIG_URL     _T("http://patch.dragonnest.eu/Game/DragonNest/Patch/PatchConfigList.xml")
    #ifndef DN_REGION_URLS_ONLY
    typedef CDnLauncherDlg                  DnActiveLauncherDlg;
    typedef IServiceModule                  DnActiveServiceModule;
    #endif
#else
    #define DN_REGION_NAME                  _T("BASE")
    #define DN_DEFAULT_PATCH_URL            _T("http://patchsea.dragonnest.com/Game/DragonNest/Patch/")
    #define DN_DEFAULT_PATCH_CONFIG_URL     _T("http://patchsea.dragonnest.com/Game/DragonNest/Patch/PatchConfigList.xml")
    #ifndef DN_REGION_URLS_ONLY
    typedef CDnLauncherDlg                  DnActiveLauncherDlg;
    typedef IServiceModule                  DnActiveServiceModule;
    #endif
#endif

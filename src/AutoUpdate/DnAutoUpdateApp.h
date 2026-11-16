#pragma once

#include <afxwin.h>
#include <vector>

/**
 * @brief Root MFC CWinApp subclass for DnAutoUpdate.exe.
 *
 * Reconstructed from DnAutoUpdate.exe:
 *   - Class: CDnAutoUpdateApp (vtable 0x0043ED84, global instance at 0x0044C750)
 *   - Methods: 0x00402750..0x00402B3C
 */
class CDnAutoUpdateApp : public CWinApp
{
public:
    CDnAutoUpdateApp();
    virtual ~CDnAutoUpdateApp();

    virtual BOOL InitInstance() override;

    /**
     * @brief Parses the pipe-delimited command-line "%s|%s|%d-%d" into URL, client path, and version list.
     * Reconstructed from 0x0040283F..0x00402AB5.
     */
    static bool ParseCommandLineArgs(
        LPCTSTR           szCmdLine,
        CString&          strOutPatchUrl,
        CString&          strOutClientPath,
        std::vector<int>& vecOutPatchList);

    DECLARE_MESSAGE_MAP()
};

extern CDnAutoUpdateApp theApp;

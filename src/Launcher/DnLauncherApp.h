#pragma once

/**
 * @brief Root MFC CWinApp subclass for DNLauncher.exe.
 */
class CDnLauncherApp : public CWinApp
{
public:
    CDnLauncherApp();
    virtual ~CDnLauncherApp();

    virtual BOOL InitInstance() override;
    virtual int ExitInstance() override;

    /** @brief Checks if DirectX >= 9.0c is installed via DxDiag COM or d3d9.dll fallback. */
    static bool CheckDirectXVersion(CString& strOutVersion);

    /** @brief Checks whether a named executable process is currently running. */
    static bool IsProcessRunning(const TCHAR* szExeName);

protected:
    void RemoveUsedFile();

    DECLARE_MESSAGE_MAP()

private:
    HANDLE m_hInstanceMutex;
};

extern CDnLauncherApp theApp;

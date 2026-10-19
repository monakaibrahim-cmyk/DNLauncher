// Address: 0x00464c47
// Name: CWinApp::HideApplication
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CWinApp::HideApplication(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWinApp::HideApplication(CWinApp *this)

{
  CWnd::ShowWindow(*(CWnd **)(this + 0x20),0);
  ShowOwnedPopups(*(HWND *)(*(int *)(this + 0x20) + 0x20),0);
  CWnd::SetWindowPos(*(CWnd **)(this + 0x20),(CWnd *)&DAT_004ca7a8,0,0,0,0,0x13);
  return;
}


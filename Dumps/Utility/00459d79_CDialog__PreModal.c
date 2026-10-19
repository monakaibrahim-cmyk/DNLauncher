// Address: 0x00459d79
// Name: CDialog::PreModal
// Category: Utility


/* Library Function - Single Match
    protected: struct HWND__ * __thiscall CDialog::PreModal(void)
   
   Library: Visual Studio 2005 Release */

HWND__ * __thiscall CDialog::PreModal(CDialog *this)

{
  AFX_MODULE_STATE *pAVar1;
  HWND__ *pHVar2;
  
  pAVar1 = AfxGetModuleState();
  if (*(CWinApp **)(pAVar1 + 4) != (CWinApp *)0x0) {
    CWinApp::EnableModeless(*(CWinApp **)(pAVar1 + 4),0);
  }
  pHVar2 = (HWND__ *)0x0;
  if (*(int *)(this + 0x68) != 0) {
    pHVar2 = *(HWND__ **)(*(int *)(this + 0x68) + 0x20);
  }
  pHVar2 = CWnd::GetSafeOwner_(pHVar2,(HWND__ **)(this + 0x6c));
  AfxHookWindowCreate((CWnd *)this);
  return pHVar2;
}


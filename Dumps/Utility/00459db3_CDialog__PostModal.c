// Address: 0x00459db3
// Name: CDialog::PostModal
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CDialog::PostModal(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDialog::PostModal(CDialog *this)

{
  BOOL BVar1;
  AFX_MODULE_STATE *pAVar2;
  
  AfxUnhookWindowCreate();
  CWnd::Detach((CWnd *)this);
  BVar1 = IsWindow(*(HWND *)(this + 0x6c));
  if (BVar1 != 0) {
    EnableWindow(*(HWND *)(this + 0x6c),1);
  }
  *(undefined4 *)(this + 0x6c) = 0;
  pAVar2 = AfxGetModuleState();
  if (*(CWinApp **)(pAVar2 + 4) != (CWinApp *)0x0) {
    CWinApp::EnableModeless(*(CWinApp **)(pAVar2 + 4),1);
  }
  return;
}


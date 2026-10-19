// Address: 0x00458025
// Name: CWnd::OnDevModeChange
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CWnd::OnDevModeChange(wchar_t *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::OnDevModeChange(CWnd *this,wchar_t *param_1)

{
  CWinApp *this_00;
  AFX_MODULE_STATE *pAVar1;
  ulong uVar2;
  tagMSG *ptVar3;
  
  pAVar1 = AfxGetModuleState();
  this_00 = *(CWinApp **)(pAVar1 + 4);
  if ((this_00 != (CWinApp *)0x0) && (*(CWnd **)(this_00 + 0x20) == this)) {
    CWinApp::DevModeChange(this_00,param_1);
  }
  uVar2 = GetExStyle(this);
  if ((uVar2 & 0x40000000) == 0) {
    ptVar3 = GetCurrentMessage();
    SendMessageToDescendants
              (*(HWND__ **)(this + 0x20),ptVar3->message,ptVar3->wParam,ptVar3->lParam,1,1);
  }
  return;
}


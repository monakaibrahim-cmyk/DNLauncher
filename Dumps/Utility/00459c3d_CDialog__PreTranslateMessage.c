// Address: 0x00459c3d
// Name: CDialog::PreTranslateMessage
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CDialog::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CDialog::PreTranslateMessage(CDialog *this,tagMSG *param_1)

{
  int iVar1;
  CFrameWnd *pCVar2;
  uint uVar3;
  HWND hWnd;
  BOOL BVar4;
  
  iVar1 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  if (iVar1 == 0) {
    pCVar2 = CWnd::GetTopLevelFrame((CWnd *)this);
    if ((pCVar2 != (CFrameWnd *)0x0) && (*(int *)(pCVar2 + 0x68) != 0)) {
      return 0;
    }
    if ((((param_1->message != 0x100) ||
         (((param_1->wParam != 0x1b && (param_1->wParam != 3)) ||
          (uVar3 = GetWindowLongW(param_1->hwnd,-0x10), (uVar3 & 4) == 0)))) ||
        (iVar1 = _AfxCompareClassName(param_1->hwnd,L"Edit"), iVar1 == 0)) ||
       ((hWnd = GetDlgItem(*(HWND *)(this + 0x20),2), hWnd != (HWND)0x0 &&
        (BVar4 = IsWindowEnabled(hWnd), BVar4 == 0)))) {
      iVar1 = CWnd::PreTranslateInput((CWnd *)this,param_1);
      return iVar1;
    }
    SendMessageW(*(HWND *)(this + 0x20),0x111,2,0);
  }
  return 1;
}


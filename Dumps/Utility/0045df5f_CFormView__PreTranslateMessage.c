// Address: 0x0045df5f
// Name: CFormView::PreTranslateMessage
// Category: Utility


/* Library Function - Single Match
    protected: virtual int __thiscall CFormView::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CFormView::PreTranslateMessage(CFormView *this,tagMSG *param_1)

{
  int iVar1;
  CFrameWnd *pCVar2;
  CFormView *this_00;
  HWND pHVar3;
  
  iVar1 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  if (iVar1 == 0) {
    pCVar2 = CWnd::GetTopLevelFrame((CWnd *)this);
    this_00 = this;
    if ((pCVar2 == (CFrameWnd *)0x0) || (*(int *)(pCVar2 + 0x68) == 0)) {
      do {
        this_00 = (CFormView *)CWnd::GetParentFrame((CWnd *)this_00);
        if (this_00 == (CFormView *)0x0) {
          pHVar3 = GetWindow(*(HWND *)(this + 0x20),5);
          if (pHVar3 == (HWND)0x0) {
            return 0;
          }
          iVar1 = CWnd::PreTranslateInput((CWnd *)this,param_1);
          return iVar1;
        }
        iVar1 = (**(code **)(*(int *)this_00 + 0x100))(param_1);
      } while (iVar1 == 0);
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


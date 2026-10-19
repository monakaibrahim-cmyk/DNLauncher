// Address: 0x00419b10
// Name: FUN_00419b10
// Category: Launcher


void FUN_00419b10(void)

{
  HWND hWnd;
  BOOL BVar1;
  CObject *this;
  HMODULE pHVar2;
  CWnd *unaff_ESI;
  LPCWSTR unaff_retaddr;
  
  if (unaff_ESI == (CWnd *)0x0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = *(HWND *)(unaff_ESI + 0x20);
  }
  BVar1 = IsWindow(hWnd);
  if (BVar1 != 0) {
    CWnd::ModifyStyle(unaff_ESI,0x10000000,0,0);
    (**(code **)(*(int *)unaff_ESI + 0x60))();
    if (*(int *)(unaff_ESI + 0xe8) != 0) {
      if (*(int *)(unaff_ESI + 0xec) != 0) {
        FID_conflict_SetWindowTextW(*(HWND *)(unaff_ESI + 0x68),unaff_retaddr);
      }
      InvalidateRect(*(HWND *)(*(int *)(unaff_ESI + 0xe8) + 0x20),(RECT *)0x0,1);
      return;
    }
    this = FUN_00419bd0();
    if (this != (CObject *)0x0) {
      pHVar2 = (HMODULE)FUN_00452b55();
      if (pHVar2 != (HMODULE)0x0) {
        FUN_00402fa0(unaff_ESI + 0x60,pHVar2,0xe001);
      }
      CStatusBar::SetPaneText((CStatusBar *)this,0,*(wchar_t **)(unaff_ESI + 0x60),1);
      if (*(int *)(unaff_ESI + 0x5c) != 0) {
        CStatusBar::SetPaneText
                  ((CStatusBar *)this,*(int *)(unaff_ESI + 0x5c),*(wchar_t **)(unaff_ESI + 0x68),1);
      }
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    }
  }
  return;
}


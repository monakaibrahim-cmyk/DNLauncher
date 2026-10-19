// Address: 0x004716fb
// Name: CWnd::OnHelp
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CWnd::OnHelp(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::OnHelp(CWnd *this)

{
  HWND pHVar1;
  CWnd *pCVar2;
  LRESULT LVar3;
  
  for (pHVar1 = GetCapture(); pHVar1 != (HWND)0x0; pHVar1 = AfxGetParentOwner(pHVar1)) {
    LVar3 = SendMessageW(pHVar1,0x365,0,0);
    if (LVar3 != 0) {
      return;
    }
  }
  for (pHVar1 = GetFocus(); pHVar1 != (HWND)0x0; pHVar1 = AfxGetParentOwner(pHVar1)) {
    LVar3 = SendMessageW(pHVar1,0x365,0,0);
    if (LVar3 != 0) {
      return;
    }
  }
  pCVar2 = GetTopLevelParent(this);
  if (pCVar2 != (CWnd *)0x0) {
    pHVar1 = GetLastActivePopup(*(HWND *)(pCVar2 + 0x20));
    while( true ) {
      if (pHVar1 == (HWND)0x0) {
        SendMessageW(*(HWND *)(this + 0x20),0x111,0xe147,0);
        return;
      }
      LVar3 = SendMessageW(pHVar1,0x365,0,0);
      if (LVar3 != 0) break;
      pHVar1 = AfxGetParentOwner(pHVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}


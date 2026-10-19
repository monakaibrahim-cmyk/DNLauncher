// Address: 0x00460b02
// Name: CFrameWnd::ExitHelpMode
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::ExitHelpMode(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::ExitHelpMode(CFrameWnd *this)

{
  BOOL BVar1;
  HWND pHVar2;
  CFrameWnd *pCVar3;
  tagMSG local_1c;
  
  if (*(int *)(this + 0x68) != 0) {
    BVar1 = PeekMessageW(&local_1c,*(HWND *)(this + 0x20),0x367,0x367,3);
    if (BVar1 == 0) {
      PostMessageW(*(HWND *)(this + 0x20),0x367,0,0);
    }
    pHVar2 = GetCapture();
    if (pHVar2 == *(HWND *)(this + 0x20)) {
      ReleaseCapture();
    }
    pCVar3 = CWnd::GetTopLevelFrame((CWnd *)this);
    if (pCVar3 == (CFrameWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    *(undefined4 *)(this + 0x68) = 0;
    *(undefined4 *)(pCVar3 + 0x68) = 0;
    PostMessageW(*(HWND *)(this + 0x20),0x36a,0,0);
  }
  return;
}


// Address: 0x004606b6
// Name: CFrameWnd::ShowOwnedWindows
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CFrameWnd::ShowOwnedWindows(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::ShowOwnedWindows(CFrameWnd *this,int param_1)

{
  HWND hWnd;
  HWND__ *hWnd_00;
  CWnd *pCVar1;
  int iVar2;
  uint uVar3;
  UINT uCmd;
  
  uCmd = 5;
  hWnd = GetDesktopWindow();
  for (hWnd_00 = GetWindow(hWnd,uCmd); hWnd_00 != (HWND__ *)0x0; hWnd_00 = GetWindow(hWnd_00,2)) {
    pCVar1 = CWnd::FromHandlePermanent(hWnd_00);
    if (((pCVar1 != (CWnd *)0x0) && (*(HWND__ **)(this + 0x20) != hWnd_00)) &&
       (iVar2 = AfxIsDescendant(*(HWND__ **)(this + 0x20),hWnd_00), iVar2 != 0)) {
      uVar3 = GetWindowLongW(hWnd_00,-0x10);
      if (param_1 == 0) {
        if ((uVar3 & 0x18000000) == 0x10000000) {
          ShowWindow(hWnd_00,0);
          *(uint *)(pCVar1 + 0x3c) = *(uint *)(pCVar1 + 0x3c) | 2;
        }
      }
      else if ((((uVar3 & 0x18000000) == 0) && (((byte)pCVar1[0x3c] & 2) != 0)) &&
              (*(int *)(this + 0xb4) == 0)) {
        ShowWindow(hWnd_00,4);
        *(uint *)(pCVar1 + 0x3c) = *(uint *)(pCVar1 + 0x3c) & 0xfffffffd;
      }
    }
  }
  return;
}


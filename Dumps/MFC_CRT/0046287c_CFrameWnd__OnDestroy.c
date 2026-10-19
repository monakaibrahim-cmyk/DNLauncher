// Address: 0x0046287c
// Name: CFrameWnd::OnDestroy
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnDestroy(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::OnDestroy(CFrameWnd *this)

{
  HMENU hMenu;
  int iVar1;
  HMENU pHVar2;
  AFX_MODULE_STATE *pAVar3;
  
  DestroyDockBars(this);
  if (*(int *)(this + 0x5c) != 0) {
    hMenu = *(HMENU *)(this + 0x5c);
    pHVar2 = GetMenu(*(HWND *)(this + 0x20));
    if (pHVar2 != hMenu) {
      SetMenu(*(HWND *)(this + 0x20),hMenu);
    }
  }
  pAVar3 = AfxGetModuleState();
  iVar1 = *(int *)(pAVar3 + 4);
  if (((iVar1 != 0) && (*(CFrameWnd **)(iVar1 + 0x20) == this)) && (*(int *)(iVar1 + 0x6c) == 0)) {
    WinHelpW(*(HWND *)(this + 0x20),(LPCWSTR)0x0,2,0);
  }
  CWnd::OnDestroy((CWnd *)this);
  return;
}


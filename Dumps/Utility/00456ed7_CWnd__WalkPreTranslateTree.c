// Address: 0x00456ed7
// Name: CWnd::WalkPreTranslateTree
// Category: Utility


/* Library Function - Single Match
    public: static int __stdcall CWnd::WalkPreTranslateTree(struct HWND__ *,struct tagMSG *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int CWnd::WalkPreTranslateTree(HWND__ *param_1,tagMSG *param_2)

{
  CWnd *pCVar1;
  int iVar2;
  HWND__ *hWnd;
  
  hWnd = param_2->hwnd;
  while( true ) {
    if (hWnd == (HWND__ *)0x0) {
      return 0;
    }
    pCVar1 = FromHandlePermanent(hWnd);
    if ((pCVar1 != (CWnd *)0x0) &&
       (iVar2 = (**(code **)(*(int *)pCVar1 + 0x100))(param_2), iVar2 != 0)) break;
    if (hWnd == param_1) {
      return 0;
    }
    hWnd = GetParent(hWnd);
  }
  return 1;
}


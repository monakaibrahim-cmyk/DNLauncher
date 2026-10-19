// Address: 0x00457490
// Name: CWnd::SendMessageToDescendants
// Category: Utility


/* Library Function - Single Match
    public: static void __stdcall CWnd::SendMessageToDescendants(struct HWND__ *,unsigned
   int,unsigned int,long,int,int)
   
   Library: Visual Studio 2005 Release */

void CWnd::SendMessageToDescendants
               (HWND__ *param_1,uint param_2,uint param_3,long param_4,int param_5,int param_6)

{
  HWND__ *hWnd;
  CWnd *pCVar1;
  HWND pHVar2;
  
  for (hWnd = GetTopWindow(param_1); hWnd != (HWND__ *)0x0; hWnd = GetWindow(hWnd,2)) {
    if (param_6 == 0) {
      SendMessageW(hWnd,param_2,param_3,param_4);
    }
    else {
      pCVar1 = FromHandlePermanent(hWnd);
      if (pCVar1 != (CWnd *)0x0) {
        FUN_004571af(pCVar1,*(undefined4 *)(pCVar1 + 0x20),param_2,param_3,param_4);
      }
    }
    if (param_5 != 0) {
      pHVar2 = GetTopWindow(hWnd);
      if (pHVar2 != (HWND)0x0) {
        SendMessageToDescendants(hWnd,param_2,param_3,param_4,param_5,param_6);
      }
    }
  }
  return;
}


// Address: 0x004572a2
// Name: AfxWndProc
// Category: Utility


/* Library Function - Single Match
    long __stdcall AfxWndProc(struct HWND__ *,unsigned int,unsigned int,long)
   
   Library: Visual Studio 2005 Release
   dwNewLong parameter of SetWindowLongW
    */

long AfxWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  CWnd *pCVar2;
  
  if (param_2 == 0x360) {
    lVar1 = 1;
  }
  else {
    pCVar2 = CWnd::FromHandlePermanent(param_1);
    if ((pCVar2 == (CWnd *)0x0) || (*(HWND__ **)(pCVar2 + 0x20) != param_1)) {
      lVar1 = DefWindowProcW(param_1,param_2,param_3,param_4);
    }
    else {
      lVar1 = FUN_004571af(pCVar2,param_1,param_2,param_3,param_4);
    }
  }
  return lVar1;
}


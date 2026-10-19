// Address: 0x00456d16
// Name: CWnd::GetDescendantWindow
// Category: Utility


/* Library Function - Single Match
    public: static class CWnd * __stdcall CWnd::GetDescendantWindow(struct HWND__ *,int,int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

CWnd * CWnd::GetDescendantWindow(HWND__ *param_1,int param_2,int param_3)

{
  HWND hWnd;
  HWND pHVar1;
  CWnd *pCVar2;
  HWND__ *hWnd_00;
  
  hWnd = ::GetDlgItem(param_1,param_2);
  if (hWnd != (HWND)0x0) {
    pHVar1 = GetTopWindow(hWnd);
    if ((pHVar1 != (HWND)0x0) &&
       (pCVar2 = GetDescendantWindow(hWnd,param_2,param_3), pCVar2 != (CWnd *)0x0)) {
      return pCVar2;
    }
    if (param_3 == 0) {
      pCVar2 = FromHandle(hWnd);
      return pCVar2;
    }
    pCVar2 = FromHandlePermanent(hWnd);
    if (pCVar2 != (CWnd *)0x0) {
      return pCVar2;
    }
  }
  hWnd_00 = GetTopWindow(param_1);
  while( true ) {
    if (hWnd_00 == (HWND__ *)0x0) {
      return (CWnd *)0x0;
    }
    pCVar2 = GetDescendantWindow(hWnd_00,param_2,param_3);
    if (pCVar2 != (CWnd *)0x0) break;
    hWnd_00 = GetWindow(hWnd_00,2);
  }
  return pCVar2;
}


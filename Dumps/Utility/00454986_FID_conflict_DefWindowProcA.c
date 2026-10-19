// Address: 0x00454986
// Name: FID_conflict:DefWindowProcA
// Category: Utility


/* Library Function - Multiple Matches With Different Base Names
    protected: virtual long __thiscall CWnd::DefWindowProcA(unsigned int,unsigned int,long)
    protected: virtual long __thiscall CWnd::DefWindowProcW(unsigned int,unsigned int,long)
   
   Library: Visual Studio 2005 Release */

LRESULT FID_conflict_DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  int *piVar1;
  LRESULT LVar2;
  WNDPROC lpPrevWndFunc;
  int *in_ECX;
  
  lpPrevWndFunc = (WNDPROC)in_ECX[0x10];
  if (lpPrevWndFunc == (WNDPROC)0x0) {
    piVar1 = (int *)(**(code **)(*in_ECX + 0xf0))();
    lpPrevWndFunc = (WNDPROC)*piVar1;
    if (lpPrevWndFunc == (WNDPROC)0x0) {
      LVar2 = DefWindowProcW((HWND)in_ECX[8],(UINT)hWnd,Msg,wParam);
      return LVar2;
    }
  }
  LVar2 = CallWindowProcW(lpPrevWndFunc,(HWND)in_ECX[8],(UINT)hWnd,Msg,wParam);
  return LVar2;
}


// Address: 0x0045a694
// Name: CWnd::GetSafeOwner_
// Category: Utility


/* Library Function - Single Match
    public: static struct HWND__ * __stdcall CWnd::GetSafeOwner_(struct HWND__ *,struct HWND__ * *)
   
   Library: Visual Studio 2005 Release */

HWND__ * CWnd::GetSafeOwner_(HWND__ *param_1,HWND__ **param_2)

{
  HWND hWnd;
  int iVar1;
  uint uVar2;
  HWND pHVar3;
  HWND hWnd_00;
  BOOL BVar4;
  HWND hWnd_01;
  
  hWnd_01 = param_1;
  if (param_1 != (HWND__ *)0x0) goto LAB_0045a6c3;
  iVar1 = FUN_0045a654();
  if ((iVar1 == 0) && (iVar1 = FUN_0041c6c0(), iVar1 == 0)) {
    hWnd_01 = (HWND)0x0;
    pHVar3 = hWnd_01;
    hWnd_00 = hWnd_01;
  }
  else {
    for (hWnd_01 = *(HWND *)(iVar1 + 0x20); pHVar3 = hWnd_01, hWnd_00 = hWnd_01,
        hWnd_01 != (HWND)0x0; hWnd_01 = GetParent(hWnd_01)) {
LAB_0045a6c3:
      uVar2 = GetWindowLongW(hWnd_01,-0x10);
      pHVar3 = hWnd_01;
      hWnd_00 = hWnd_01;
      if ((uVar2 & 0x40000000) == 0) break;
    }
  }
  while (hWnd = pHVar3, hWnd != (HWND)0x0) {
    pHVar3 = GetParent(hWnd);
    hWnd_01 = hWnd;
  }
  if ((param_1 == (HWND__ *)0x0) && (hWnd_00 != (HWND)0x0)) {
    hWnd_00 = GetLastActivePopup(hWnd_00);
  }
  if (param_2 != (HWND__ **)0x0) {
    if (((hWnd_01 == (HWND)0x0) || (BVar4 = ::IsWindowEnabled(hWnd_01), BVar4 == 0)) ||
       (hWnd_01 == hWnd_00)) {
      *param_2 = (HWND__ *)0x0;
    }
    else {
      *param_2 = hWnd_01;
      ::EnableWindow(hWnd_01,0);
    }
  }
  return hWnd_00;
}


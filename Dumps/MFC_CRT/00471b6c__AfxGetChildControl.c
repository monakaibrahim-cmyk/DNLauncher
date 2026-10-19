// Address: 0x00471b6c
// Name: _AfxGetChildControl
// Category: MFC_CRT


/* Library Function - Single Match
    class CWnd * __stdcall _AfxGetChildControl(class CWnd *,class CWnd *)
   
   Library: Visual Studio 2005 Release */

CWnd * _AfxGetChildControl(CWnd *param_1,CWnd *param_2)

{
  uint uVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CWnd *pCVar4;
  
  pCVar3 = (CWnd *)0x0;
  pCVar4 = pCVar3;
  if (param_2 != (CWnd *)0x0) {
    do {
      pCVar4 = param_2;
      uVar1 = GetWindowLongW(*(HWND *)(pCVar4 + 0x20),-0x10);
      if ((uVar1 & 0xc0000000) != 0x40000000) {
        return pCVar3;
      }
      if (pCVar4 == param_1) {
        return pCVar3;
      }
      pHVar2 = GetParent(*(HWND *)(pCVar4 + 0x20));
      param_2 = CWnd::FromHandle(pHVar2);
      uVar1 = GetWindowLongW(*(HWND *)(param_2 + 0x20),-0x14);
      pCVar3 = pCVar4;
    } while ((uVar1 & 0x10000) == 0);
  }
  return pCVar4;
}


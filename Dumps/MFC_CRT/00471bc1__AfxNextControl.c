// Address: 0x00471bc1
// Name: _AfxNextControl
// Category: MFC_CRT


/* Library Function - Single Match
    class CWnd * __stdcall _AfxNextControl(class CWnd *,class CWnd *,unsigned int)
   
   Library: Visual Studio 2005 Release */

CWnd * _AfxNextControl(CWnd *param_1,CWnd *param_2,uint param_3)

{
  HWND pHVar1;
  CWnd *pCVar2;
  uint uVar3;
  BOOL BVar4;
  int iVar5;
  
  if (param_2 == (CWnd *)0x0) {
LAB_00471c6e:
    pHVar1 = GetTopWindow(*(HWND *)(param_1 + 0x20));
    pCVar2 = CWnd::FromHandle(pHVar1);
    if (pCVar2 == (CWnd *)0x0) {
      return param_1;
    }
  }
  else {
    pHVar1 = GetWindow(*(HWND *)(param_2 + 0x20),2);
    pCVar2 = CWnd::FromHandle(pHVar1);
    while (pCVar2 == (CWnd *)0x0) {
      pHVar1 = GetParent(*(HWND *)(param_2 + 0x20));
      pCVar2 = CWnd::FromHandle(pHVar1);
      param_2 = _AfxGetChildControl(param_1,pCVar2);
      if ((param_2 == (CWnd *)0x0) || (param_2 == param_1)) goto LAB_00471c6e;
      pHVar1 = GetWindow(*(HWND *)(param_2 + 0x20),2);
      pCVar2 = CWnd::FromHandle(pHVar1);
    }
    pHVar1 = GetWindow(*(HWND *)(param_2 + 0x20),2);
    pCVar2 = CWnd::FromHandle(pHVar1);
  }
  uVar3 = GetWindowLongW(*(HWND *)(pCVar2 + 0x20),-0x14);
  if ((uVar3 & 0x10000) != 0) {
    if ((((param_3 & 1) == 0) || (BVar4 = IsWindowVisible(*(HWND *)(pCVar2 + 0x20)), BVar4 != 0)) &&
       (((param_3 & 2) == 0 || (iVar5 = CWnd::IsWindowEnabled(pCVar2), iVar5 != 0)))) {
      param_1 = pCVar2;
      pCVar2 = (CWnd *)0x0;
    }
    pCVar2 = _AfxNextControl(param_1,pCVar2,param_3);
  }
  return pCVar2;
}


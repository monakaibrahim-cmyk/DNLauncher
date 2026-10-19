// Address: 0x00471d83
// Name: _AfxFindDlgItem
// Category: MFC_CRT


/* Library Function - Single Match
    class CWnd * __stdcall _AfxFindDlgItem(class CWnd *,unsigned long)
   
   Library: Visual Studio 2005 Release */

CWnd * _AfxFindDlgItem(CWnd *param_1,ulong param_2)

{
  CWnd *pCVar1;
  CWnd *pCVar2;
  ulong uVar3;
  
  pCVar1 = CWnd::GetDlgItem(param_1,param_2);
  if (pCVar1 == (CWnd *)0x0) {
    pCVar2 = _AfxNextControl(param_1,(CWnd *)0x0,1);
    pCVar1 = pCVar2;
    if (pCVar2 == param_1) {
      pCVar1 = (CWnd *)0x0;
    }
    else {
      do {
        uVar3 = CWnd::GetDlgCtrlID(pCVar1);
        if (uVar3 == param_2) {
          return pCVar1;
        }
        pCVar1 = _AfxNextControl(param_1,pCVar1,1);
      } while ((pCVar1 != (CWnd *)0x0) && (pCVar1 != pCVar2));
      pCVar1 = (CWnd *)0x0;
    }
  }
  return pCVar1;
}


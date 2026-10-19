// Address: 0x00471e27
// Name: _AfxRemoveDefaultButton
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall _AfxRemoveDefaultButton(class CWnd *,class CWnd *)
   
   Library: Visual Studio 2005 Release */

void _AfxRemoveDefaultButton(CWnd *param_1,CWnd *param_2)

{
  uint uVar1;
  CWnd *pCVar2;
  CWnd *pCVar3;
  
  if ((param_2 == (CWnd *)0x0) ||
     (uVar1 = GetWindowLongW(*(HWND *)(param_2 + 0x20),-0x14), (uVar1 & 0x10000) != 0)) {
    pCVar2 = _AfxNextControl(param_1,(CWnd *)0x0,3);
  }
  else {
    pCVar2 = _AfxGetChildControl(param_1,param_2);
  }
  pCVar3 = pCVar2;
  if (pCVar2 != (CWnd *)0x0) {
    do {
      COccManager::SetDefaultButton(pCVar3,0);
      pCVar3 = _AfxNextControl(param_1,pCVar3,0);
      if (pCVar3 == (CWnd *)0x0) {
        return;
      }
    } while (pCVar3 != pCVar2);
  }
  return;
}


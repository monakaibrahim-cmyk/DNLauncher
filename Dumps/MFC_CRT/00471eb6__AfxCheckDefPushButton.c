// Address: 0x00471eb6
// Name: _AfxCheckDefPushButton
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall _AfxCheckDefPushButton(class CWnd *,class CWnd *,class CWnd *)
   
   Library: Visual Studio 2005 Release */

void _AfxCheckDefPushButton(CWnd *param_1,CWnd *param_2,CWnd *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  CWnd *pCVar4;
  uint local_8;
  
  local_8 = 0;
  iVar1 = CWnd::IsChild(param_1,param_3);
  if (iVar1 == 0) {
    return;
  }
  if (param_3 != (CWnd *)0x0) {
    uVar2 = GetWindowLongW(*(HWND *)(param_3 + 0x20),-0x14);
    if ((uVar2 & 0x10000) != 0) {
      return;
    }
    local_8 = COccManager::GetDefBtnCode(param_3);
  }
  if (param_2 == param_3) {
    if ((local_8 & 0x20) == 0) {
      return;
    }
    if (param_2 == (CWnd *)0x0) goto LAB_00471f88;
    uVar3 = _AfxOriginalDefButton(param_1);
    pCVar4 = _AfxFindDlgItem(param_1,uVar3);
    if (((pCVar4 == (CWnd *)0x0) || (pCVar4 == param_3)) ||
       (uVar3 = COccManager::GetDefBtnCode(pCVar4), (uVar3 & 0x10) == 0)) goto LAB_00471f88;
LAB_00471f54:
    _AfxRemoveDefaultButton(param_1,pCVar4);
  }
  else {
    pCVar4 = param_3;
    if (((param_2 != (CWnd *)0x0) && (uVar3 = COccManager::GetDefBtnCode(param_2), uVar3 != 0)) ||
       ((param_3 != (CWnd *)0x0 && (local_8 != 0)))) goto LAB_00471f54;
  }
  if ((local_8 & 0x30) == 0) {
    uVar3 = _AfxOriginalDefButton(param_1);
    param_3 = _AfxFindDlgItem(param_1,uVar3);
    uVar3 = COccManager::GetDefBtnCode(param_3);
    if ((uVar3 & 0x20) == 0) {
      return;
    }
    iVar1 = CWnd::IsWindowEnabled(param_3);
    if (iVar1 == 0) {
      return;
    }
  }
LAB_00471f88:
  COccManager::SetDefaultButton(param_3,1);
  return;
}


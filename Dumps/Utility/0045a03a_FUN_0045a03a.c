// Address: 0x0045a03a
// Name: FUN_0045a03a
// Category: Utility


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool __thiscall FUN_0045a03a(void *this,LPCDLGTEMPLATEW param_1,int param_2,HINSTANCE param_3)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  int *piVar3;
  HWND hWndParent;
  bool bVar4;
  undefined1 local_4c [16];
  CDialogTemplate local_3c [16];
  int *local_2c;
  void *local_24;
  int local_20;
  ushort local_1c [2];
  HGLOBAL local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x45a046;
  local_24 = this;
  if (param_3 == (HINSTANCE)0x0) {
    pAVar1 = AfxGetModuleState();
    param_3 = *(HINSTANCE *)(pAVar1 + 0xc);
  }
  pAVar1 = AfxGetModuleState();
  piVar3 = *(int **)(pAVar1 + 0x3c);
  local_18 = (HGLOBAL)0x0;
  local_8 = 0;
  local_2c = piVar3;
  AfxEndDeferRegisterClass(0x10);
  AfxEndDeferRegisterClass(0x7c000);
  if (piVar3 != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)this + 300))(local_4c);
    if (iVar2 == 0) {
      return false;
    }
    param_1 = (LPCDLGTEMPLATEW)(**(code **)(*piVar3 + 0x14))(local_4c,param_1);
  }
  if (param_1 == (DLGTEMPLATE *)0x0) {
    return false;
  }
  piVar3 = (int *)FUN_00453ed1();
  FUN_004031d0(&local_20,piVar3);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_1c[0] = 0;
  local_1c[1] = 0;
  iVar2 = CDialogTemplate::GetFont
                    (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_20,local_1c);
  bVar4 = iVar2 == 0;
  if (DAT_004cab7c == 0) {
LAB_0045a120:
    if (!bVar4) goto LAB_0045a163;
  }
  else if (!bVar4) {
    iVar2 = GetSystemMetrics(0x2a);
    if (iVar2 == 0) goto LAB_0045a163;
    iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Compare
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
                       &local_20,L"MS Shell Dlg");
    bVar4 = iVar2 == 0;
    if (!bVar4) goto LAB_0045a163;
    if (local_1c[0] == 8) {
      local_1c[0] = 0;
      local_1c[1] = 0;
    }
    goto LAB_0045a120;
  }
  FUN_004698e8(local_3c,param_1);
  local_8._0_1_ = 2;
  CDialogTemplate::SetSystemFont(local_3c,local_1c[0]);
  local_18 = (HGLOBAL)FUN_004695ad((undefined4 *)local_3c);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0046959f((undefined4 *)local_3c);
  if (local_18 != (HGLOBAL)0x0) {
    param_1 = GlobalLock(local_18);
  }
LAB_0045a163:
  *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x10;
  AfxHookWindowCreate(this);
  if (param_2 == 0) {
    hWndParent = (HWND)0x0;
  }
  else {
    hWndParent = *(HWND *)(param_2 + 0x20);
  }
  CreateDialogIndirectParamW(param_3,param_1,hWndParent,AfxDlgProc,0);
  FUN_004031b0((undefined4 *)(local_20 + -0x10));
  local_8 = 0xffffffff;
  bVar4 = FUN_0045a1c7();
  return bVar4;
}


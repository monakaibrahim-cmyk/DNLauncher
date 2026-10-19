// Address: 0x0041eb50
// Name: FUN_0041eb50
// Category: Launcher


CDialog * FUN_0041eb50(CDialog *param_1)

{
  int *piVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  HICON pHVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049a16b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CDialog::CDialog(param_1,100,(CWnd *)0x0);
  *(undefined ***)param_1 = CDnLauncherDlg::vftable;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined ***)(param_1 + 0xac) = CFont::vftable;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  CWnd::CWnd((CWnd *)(param_1 + 200));
  *(undefined ***)(param_1 + 200) = CStatic::vftable;
  local_4._0_1_ = 3;
  CWnd::CWnd((CWnd *)(param_1 + 0x11c));
  *(undefined ***)(param_1 + 0x11c) = CStatic::vftable;
  local_4._0_1_ = 4;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  CWnd::CWnd((CWnd *)(param_1 + 400));
  *(undefined ***)(param_1 + 400) = CButton::vftable;
  local_4._0_1_ = 5;
  FUN_0041c6e0((CWnd *)(param_1 + 0x1e4));
  local_4._0_1_ = 6;
  FUN_0041c6e0((CWnd *)(param_1 + 0xaec));
  local_4._0_1_ = 7;
  FUN_0041c6e0((CWnd *)(param_1 + 0x13f4));
  local_4._0_1_ = 8;
  FUN_0041c6e0((CWnd *)(param_1 + 0x1cfc));
  local_4._0_1_ = 9;
  FUN_0041c6e0((CWnd *)(param_1 + 0x2604));
  local_4._0_1_ = 10;
  FUN_0041c6e0((CWnd *)(param_1 + 0x2f0c));
  *(undefined ***)(param_1 + 0x2f0c) = CCustomSkinButton::vftable;
  *(undefined4 *)(param_1 + 0x3814) = 0;
  local_4._0_1_ = 0xb;
  FUN_0041c6e0((CWnd *)(param_1 + 0x3818));
  *(undefined ***)(param_1 + 0x3818) = CCustomSkinButton::vftable;
  *(undefined4 *)(param_1 + 0x4120) = 0;
  local_4._0_1_ = 0xc;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x4128) = iVar2 + 0x10;
  local_4._0_1_ = 0xd;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x412c) = iVar2 + 0x10;
  local_4._0_1_ = 0xe;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x4130) = iVar2 + 0x10;
  local_4._0_1_ = 0xf;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x4134) = iVar2 + 0x10;
  local_4._0_1_ = 0x10;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x4138) = iVar2 + 0x10;
  local_4._0_1_ = 0x11;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x413c) = iVar2 + 0x10;
  local_4._0_1_ = 0x12;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x4140) = iVar2 + 0x10;
  local_4._0_1_ = 0x13;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x4144) = iVar2 + 0x10;
  local_4._0_1_ = 0x14;
  FUN_00419550((CWnd *)(param_1 + 0x4148));
  local_4._0_1_ = 0x15;
  FUN_00419550((CWnd *)(param_1 + 0x41ac));
  local_4._0_1_ = 0x16;
  FUN_00419550((CWnd *)(param_1 + 0x4210));
  local_4._0_1_ = 0x17;
  FUN_00419550((CWnd *)(param_1 + 0x4274));
  local_4._0_1_ = 0x18;
  FUN_00419550((CWnd *)(param_1 + 0x42d8));
  local_4._0_1_ = 0x19;
  FUN_00419550((CWnd *)(param_1 + 0x433c));
  local_4._0_1_ = 0x1a;
  FUN_00419550((CWnd *)(param_1 + 0x43a0));
  local_4._0_1_ = 0x1b;
  FUN_00419550((CWnd *)(param_1 + 0x4404));
  local_4._0_1_ = 0x1c;
  FUN_00419550((CWnd *)(param_1 + 0x4468));
  local_4 = CONCAT31(local_4._1_3_,0x1d);
  *(undefined4 *)(param_1 + 0x44cc) = 0xffffff;
  *(undefined4 *)(param_1 + 0x44d0) = 0;
  AfxGetModuleState();
  pAVar3 = AfxGetModuleState();
  pHVar4 = LoadIconW(*(HINSTANCE *)(pAVar3 + 0xc),(LPCWSTR)0x32);
  *(HICON *)(param_1 + 0x90) = pHVar4;
  FUN_00417b40((int)(param_1 + 0x74));
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN_0040a2b0();
  uVar5 = FUN_0040d680();
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  param_1[0x4124] = (CDialog)0x0;
  ExceptionList = local_c;
  return param_1;
}


// Address: 0x00422800
// Name: FUN_00422800
// Category: Launcher


CDialog * FUN_00422800(CDialog *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049a950;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041eb50(param_1);
  *(undefined ***)param_1 = CDnLauncherDlgSG::vftable;
  *(undefined4 *)(param_1 + 0x44dc) = 0;
  *(undefined ***)(param_1 + 0x44d8) = CFont::vftable;
  *(undefined4 *)(param_1 + 0x44e4) = 0;
  *(undefined ***)(param_1 + 0x44e0) = CFont::vftable;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  FUN_00419550((CWnd *)(param_1 + 0x44f0));
  local_4._0_1_ = 3;
  FUN_00419550((CWnd *)(param_1 + 0x4554));
  local_4._0_1_ = 4;
  FUN_00419550((CWnd *)(param_1 + 0x45b8));
  local_4._0_1_ = 5;
  FUN_00419550((CWnd *)(param_1 + 0x461c));
  local_4._0_1_ = 6;
  FUN_00419550((CWnd *)(param_1 + 0x4680));
  local_4._0_1_ = 7;
  FUN_00419550((CWnd *)(param_1 + 0x46e4));
  local_4._0_1_ = 8;
  FUN_00419550((CWnd *)(param_1 + 0x4748));
  local_4._0_1_ = 9;
  FUN_00419550((CWnd *)(param_1 + 0x47ac));
  local_4._0_1_ = 10;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x4810) = iVar2 + 0x10;
  local_4._0_1_ = 0xb;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x4814) = iVar2 + 0x10;
  local_4._0_1_ = 0xc;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x4818) = iVar2 + 0x10;
  local_4._0_1_ = 0xd;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x481c) = iVar2 + 0x10;
  local_4._0_1_ = 0xe;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x4820) = iVar2 + 0x10;
  local_4._0_1_ = 0xf;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x4824) = iVar2 + 0x10;
  local_4._0_1_ = 0x10;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x4828) = iVar2 + 0x10;
  local_4._0_1_ = 0x11;
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)(param_1 + 0x482c) = iVar2 + 0x10;
  local_4._0_1_ = 0x12;
  FUN_0041c6e0((CWnd *)(param_1 + 0x4830));
  local_4._0_1_ = 0x13;
  FUN_0041c6e0((CWnd *)(param_1 + 0x5138));
  local_4 = CONCAT31(local_4._1_3_,0x14);
  *(undefined4 *)(param_1 + 0x5a40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0x22;
  pvVar3 = thunk_FUN_00452728(0x220);
  *(void **)(param_1 + 0x88) = pvVar3;
  *(undefined4 *)(param_1 + 0x44e8) = 0xbcb4aa;
  *(undefined4 *)(param_1 + 0x44ec) = 0xffb3;
  ExceptionList = local_c;
  return param_1;
}


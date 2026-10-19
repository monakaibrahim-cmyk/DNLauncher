// Address: 0x00419740
// Name: FUN_00419740
// Category: Launcher


CWnd * FUN_00419740(CWnd *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004991f7;
  local_c = ExceptionList;
  uVar1 = DAT_004c3750 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_c;
  CWnd::CWnd(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = CSkinProgress::vftable;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))(uVar1);
  *(int *)(param_1 + 0x60) = iVar3 + 0x10;
  local_4._0_1_ = 1;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *(int *)(param_1 + 100) = iVar3 + 0x10;
  local_4._0_1_ = 2;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  *(int *)(param_1 + 0x68) = iVar3 + 0x10;
  local_4._0_1_ = 3;
  FUN_0045cd34((undefined4 *)(param_1 + 0xdc));
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00419900(param_3);
  ExceptionList = local_c;
  return param_1;
}


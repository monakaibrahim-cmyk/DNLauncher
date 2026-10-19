// Address: 0x00404da0
// Name: FUN_00404da0
// Category: Launcher


undefined4 FUN_00404da0(void)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  wchar_t *pwStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00499d30;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_00453ed1();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar5 = (**(code **)(*piVar4 + 0xc))(uVar3);
  pwStack_14 = (wchar_t *)(iVar5 + 0x10);
  iStack_4 = 0;
  FUN_0040a2b0();
  puVar6 = FUN_00416590(&iStack_10);
  iStack_4._0_1_ = 1;
  FUN_00403f30(&pwStack_14,(wchar_t *)*puVar6);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  piVar4 = (int *)(iStack_10 + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(iStack_10 + -0x10) + 4))((undefined4 *)(iStack_10 + -0x10));
  }
  pwVar2 = pwStack_14;
  FUN_00418f70(pwStack_14);
  AfxMessageBox(pwVar2,0,0);
  iStack_4 = 0xffffffff;
  pwVar1 = pwVar2 + -2;
  LOCK();
  iVar5 = *(int *)pwVar1;
  *(int *)pwVar1 = *(int *)pwVar1 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(pwVar2 + -8) + 4))(pwVar2 + -8);
  }
  ExceptionList = local_c;
  return 0;
}


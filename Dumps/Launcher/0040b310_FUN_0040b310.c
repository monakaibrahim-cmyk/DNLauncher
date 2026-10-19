// Address: 0x0040b310
// Name: FUN_0040b310
// Category: Launcher


int * FUN_0040b310(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00497a08;
  local_c = ExceptionList;
  uVar1 = DAT_004c3750 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))(uVar1);
  *param_1 = iVar3 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_c;
  return param_1;
}


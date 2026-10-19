// Address: 0x0042c2c0
// Name: FUN_0042c2c0
// Category: Launcher


undefined4 * FUN_0042c2c0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00497ddb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_0042ca10();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  ExceptionList = local_c;
  return param_1;
}


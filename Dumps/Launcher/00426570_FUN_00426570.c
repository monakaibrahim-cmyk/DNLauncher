// Address: 0x00426570
// Name: FUN_00426570
// Category: Launcher


undefined4 * FUN_00426570(undefined4 *param_1,void *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00497ae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00475b45(param_1);
  local_4 = 0;
  *param_1 = std::runtime_error::vftable;
  param_1[8] = 0;
  param_1[9] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00402980(param_1 + 3,param_2,0,0xffffffff);
  ExceptionList = local_c;
  return param_1;
}


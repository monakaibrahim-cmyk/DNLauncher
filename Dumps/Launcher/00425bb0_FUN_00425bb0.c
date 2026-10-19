// Address: 0x00425bb0
// Name: FUN_00425bb0
// Category: Launcher


undefined4 * FUN_00425bb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00498293;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = CFileStream::vftable;
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  local_4 = 1;
  param_1[1] = 0;
  FUN_00425ca0();
  ExceptionList = local_c;
  return param_1;
}


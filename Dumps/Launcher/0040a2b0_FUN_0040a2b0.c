// Address: 0x0040a2b0
// Name: FUN_0040a2b0
// Category: Launcher


undefined * FUN_0040a2b0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00499c4e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_004cc218 & 1) == 0) {
    DAT_004cc218 = DAT_004cc218 | 1;
    local_4 = 0;
    FUN_00409d50();
    _atexit((_func_4879 *)&LAB_0049b250);
  }
  ExceptionList = local_c;
  return &DAT_004cc198;
}


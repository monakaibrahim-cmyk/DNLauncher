// Address: 0x00407210
// Name: FUN_00407210
// Category: Launcher


undefined * FUN_00407210(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00498dbe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_004cc194 & 1) == 0) {
    DAT_004cc194 = DAT_004cc194 | 1;
    local_4 = 0;
    FUN_00407100();
    _atexit((_func_4879 *)&LAB_0049b240);
  }
  ExceptionList = local_c;
  return &DAT_004cc114;
}


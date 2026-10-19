// Address: 0x00404360
// Name: FUN_00404360
// Category: Launcher


undefined * FUN_00404360(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049877e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_004cc190 & 1) == 0) {
    DAT_004cc190 = DAT_004cc190 | 1;
    local_4 = 0;
    FUN_00404100();
    _atexit((_func_4879 *)&LAB_0049b180);
  }
  ExceptionList = local_c;
  return &DAT_004cc150;
}


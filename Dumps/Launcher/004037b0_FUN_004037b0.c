// Address: 0x004037b0
// Name: FUN_004037b0
// Category: Launcher


undefined4 * FUN_004037b0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004980de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_004cbca0 & 1) == 0) {
    DAT_004cbca0 = DAT_004cbca0 | 1;
    local_4 = 0;
    FUN_00401000();
    _atexit((_func_4879 *)&LAB_0049b170);
  }
  ExceptionList = local_c;
  return &DAT_004cbca4;
}


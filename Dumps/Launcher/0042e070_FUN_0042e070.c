// Address: 0x0042e070
// Name: FUN_0042e070
// Category: Launcher


undefined4 * __fastcall FUN_0042e070(int param_1)

{
  undefined4 *puVar1;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004993db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_00452728(0x78);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0042df70(this,puVar1);
  }
  local_4 = 0xffffffff;
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  FUN_0042e000(param_1);
  ExceptionList = local_c;
  return puVar1;
}


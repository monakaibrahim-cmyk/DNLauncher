// Address: 0x0042dec0
// Name: FUN_0042dec0
// Category: Launcher


undefined4 * __fastcall FUN_0042dec0(int param_1)

{
  undefined4 *puVar1;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049940b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_00452728(0x98);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else if (*(uint *)(param_1 + 0x38) < 0x10) {
    puVar1 = FUN_0042d920(this,puVar1);
  }
  else {
    puVar1 = FUN_0042d920(this,puVar1);
  }
  local_4 = 0xffffffff;
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  FUN_0042dde0(param_1);
  ExceptionList = local_c;
  return puVar1;
}


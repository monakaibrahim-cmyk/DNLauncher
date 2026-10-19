// Address: 0x0040f0d0
// Name: FUN_0040f0d0
// Category: Launcher


void __fastcall FUN_0040f0d0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00499471;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      FUN_0040e880(param_3);
    }
    param_3 = param_3 + 0xc;
  }
  ExceptionList = local_10;
  return;
}


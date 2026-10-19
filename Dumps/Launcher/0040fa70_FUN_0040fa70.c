// Address: 0x0040fa70
// Name: FUN_0040fa70
// Category: Launcher


undefined4 * __thiscall FUN_0040fa70(void *this,int param_1,undefined4 *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00499441;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; this != (void *)param_1; this = (void *)((int)this + 0x30)) {
    local_8 = 1;
    if (param_2 != (undefined4 *)0x0) {
      FUN_0040e880(param_2);
    }
    param_2 = param_2 + 0xc;
  }
  ExceptionList = local_10;
  return param_2;
}


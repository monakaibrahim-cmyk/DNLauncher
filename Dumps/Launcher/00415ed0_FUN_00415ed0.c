// Address: 0x00415ed0
// Name: FUN_00415ed0
// Category: Launcher


void __thiscall FUN_00415ed0(void *this,void *param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00497f01;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; this != (void *)0x0; this = (void *)((int)this + -1)) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      *(undefined4 *)((int)param_1 + 0x18) = 0xf;
      *(undefined4 *)((int)param_1 + 0x14) = 0;
      *(undefined1 *)((int)param_1 + 4) = 0;
      FUN_00402980(param_1,param_2,0,0xffffffff);
    }
    param_1 = (void *)((int)param_1 + 0x1c);
  }
  ExceptionList = local_10;
  return;
}


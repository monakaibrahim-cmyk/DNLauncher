// Address: 0x00425690
// Name: FUN_00425690
// Category: Launcher


void __thiscall FUN_00425690(void *this,void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_004989a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; this != (void *)0x0; this = (void *)((int)this + -1)) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      *(undefined4 *)((int)param_1 + 0x18) = 7;
      *(undefined4 *)((int)param_1 + 0x14) = 0;
      *(undefined2 *)((int)param_1 + 4) = 0;
      FUN_004069c0(param_1,0,0xffffffff);
    }
    param_1 = (void *)((int)param_1 + 0x1c);
  }
  ExceptionList = local_10;
  return;
}


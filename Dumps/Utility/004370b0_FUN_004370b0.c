// Address: 0x004370b0
// Name: FUN_004370b0
// Category: Utility


undefined1 __thiscall FUN_004370b0(void *this,int *param_1)

{
  uint uVar1;
  void *this_00;
  int *piVar2;
  undefined4 uVar3;
  void *unaff_EBX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049940b;
  local_c = ExceptionList;
  uVar1 = DAT_004c3750 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  this_00 = FUN_00452728(0x204);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00437bf0(this_00,(int)this + 0x1c0);
  }
  local_4 = 0xffffffff;
  *(int **)((int)this + 0x1bc) = piVar2;
  if (piVar2 != (int *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x14))(uVar1);
    FUN_00438c30(*(void **)((int)this + 0x1bc),param_1,1);
    (**(code **)(*param_1 + 0x10))(uVar3,0);
    ExceptionList = unaff_EBX;
    return *(undefined1 *)(**(int **)((int)this + 0x1bc) + 0x4b4);
  }
  ExceptionList = local_c;
  return 0;
}


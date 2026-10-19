// Address: 0x00437950
// Name: FUN_00437950
// Category: Utility


undefined4 __thiscall FUN_00437950(void *this,int param_1,int param_2)

{
  uint in_EAX;
  
  if (*(int *)((int)this + 4) == 0) {
LAB_00437986:
    return in_EAX & 0xffffff00;
  }
  in_EAX = *(uint *)((int)this + 0x10);
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) goto LAB_00437986;
      in_EAX = *(uint *)((int)this + 8);
    }
    param_1 = in_EAX + param_1;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  *(int *)((int)this + 0x10) = param_1;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


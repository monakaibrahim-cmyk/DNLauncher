// Address: 0x00436510
// Name: FUN_00436510
// Category: Utility


void __thiscall FUN_00436510(void *this,uint param_1)

{
  short sVar1;
  
  if ((param_1 == 0) || (0x100 < param_1)) {
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  else {
    sVar1 = *(short *)((int)this + 0x16);
    if (sVar1 == 1) {
      if (1 < param_1) {
        param_1 = 2;
      }
      *(uint *)((int)this + 0x2c) = param_1;
      return;
    }
    if (sVar1 == 4) {
      if (0xf < param_1) {
        param_1 = 0x10;
      }
      *(uint *)((int)this + 0x2c) = param_1;
      return;
    }
    if (sVar1 == 8) {
      *(uint *)((int)this + 0x2c) = param_1;
      return;
    }
  }
  return;
}


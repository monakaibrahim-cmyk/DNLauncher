// Address: 0x00445480
// Name: FUN_00445480
// Category: Utility


void __cdecl FUN_00445480(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x11c) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x800) != 0) {
      return;
    }
  }
  else if ((*(uint *)(param_1 + 0x6c) & 0x300) == 0x300) {
    return;
  }
  uVar1 = FUN_004265e0(*(uint *)(param_1 + 0x110),param_2,param_3);
  *(uint *)(param_1 + 0x110) = uVar1;
  return;
}


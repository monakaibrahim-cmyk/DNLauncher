// Address: 0x004739bf
// Name: FUN_004739bf
// Category: MFC_CRT


bool __fastcall FUN_004739bf(int param_1)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 0x30) <= *(uint *)(param_1 + 0x2c)) {
    return false;
  }
  uVar1 = *(uint *)(param_1 + 0x2c) + 1;
  *(uint *)(param_1 + 0x2c) = uVar1;
  return uVar1 < *(uint *)(param_1 + 0x30);
}


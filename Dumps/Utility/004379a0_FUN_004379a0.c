// Address: 0x004379a0
// Name: FUN_004379a0
// Category: Utility


undefined4 __fastcall FUN_004379a0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 8);
}


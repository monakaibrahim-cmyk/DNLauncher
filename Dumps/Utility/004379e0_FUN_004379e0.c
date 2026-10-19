// Address: 0x004379e0
// Name: FUN_004379e0
// Category: Utility


uint __fastcall FUN_004379e0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return (uint)(*(int *)(param_1 + 8) < *(int *)(param_1 + 0x10));
}


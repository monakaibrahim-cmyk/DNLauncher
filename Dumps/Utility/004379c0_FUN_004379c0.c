// Address: 0x004379c0
// Name: FUN_004379c0
// Category: Utility


bool __fastcall FUN_004379c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return true;
  }
  return *(int *)(param_1 + 8) <= *(int *)(param_1 + 0x10);
}


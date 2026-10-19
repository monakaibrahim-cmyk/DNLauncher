// Address: 0x004361f0
// Name: FUN_004361f0
// Category: Utility


int __fastcall FUN_004361f0(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    return *(int *)(param_1 + 4) + 0x28;
  }
  return 0;
}


// Address: 0x00415400
// Name: FUN_00415400
// Category: Launcher


int __fastcall FUN_00415400(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x13c;
}


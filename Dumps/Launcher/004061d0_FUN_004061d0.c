// Address: 0x004061d0
// Name: FUN_004061d0
// Category: Launcher


int __fastcall FUN_004061d0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
}


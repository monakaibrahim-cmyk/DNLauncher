// Address: 0x00407cc0
// Name: FUN_00407cc0
// Category: Launcher


int __fastcall FUN_00407cc0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38;
}


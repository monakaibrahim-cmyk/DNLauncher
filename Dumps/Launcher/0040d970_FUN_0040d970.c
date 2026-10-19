// Address: 0x0040d970
// Name: FUN_0040d970
// Category: Launcher


int __fastcall FUN_0040d970(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x14;
}


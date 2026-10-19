// Address: 0x00437990
// Name: FUN_00437990
// Category: Utility


undefined4 __fastcall FUN_00437990(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x10);
}


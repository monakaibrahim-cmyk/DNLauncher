// Address: 0x00448970
// Name: FUN_00448970
// Category: Utility


undefined4 __cdecl FUN_00448970(int param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x123) != '\0')) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 2;
    return 7;
  }
  return 1;
}


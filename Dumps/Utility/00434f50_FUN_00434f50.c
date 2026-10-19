// Address: 0x00434f50
// Name: FUN_00434f50
// Category: Utility


byte __cdecl FUN_00434f50(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == 3) {
    return 1;
  }
  return (param_1 != 4) - 1U & 2;
}


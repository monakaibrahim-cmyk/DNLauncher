// Address: 0x0043bb50
// Name: FUN_0043bb50
// Category: Utility


void __cdecl FUN_0043bb50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,1);
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined4 *)(param_1 + 0x14) = 200;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x14) = 100;
  }
  return;
}


// Address: 0x0043ac30
// Name: thunk_FUN_0043bb90
// Category: Utility


void __cdecl thunk_FUN_0043bb90(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))(param_1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


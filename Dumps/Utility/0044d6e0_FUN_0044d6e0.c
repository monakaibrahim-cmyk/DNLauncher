// Address: 0x0044d6e0
// Name: FUN_0044d6e0
// Category: Utility


void __cdecl FUN_0044d6e0(int param_1,undefined4 param_2,int param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x54) = param_2;
    if (param_3 == 0) {
      *(code **)(param_1 + 0x50) = FUN_0044d6a0;
    }
    else {
      *(int *)(param_1 + 0x50) = param_3;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      FUN_004451d0(param_1,"It\'s an error to set both read_data_fn and write_data_fn in the ");
      FUN_004451d0(param_1,"same structure.  Resetting write_data_fn to NULL.");
    }
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  return;
}


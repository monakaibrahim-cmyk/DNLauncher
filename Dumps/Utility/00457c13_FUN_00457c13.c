// Address: 0x00457c13
// Name: FUN_00457c13
// Category: Utility


undefined4 FUN_00457c13(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return 0;
}


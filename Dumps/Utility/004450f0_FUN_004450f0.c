// Address: 0x004450f0
// Name: FUN_004450f0
// Category: Utility


void __cdecl FUN_004450f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x48) = param_2;
    *(undefined4 *)(param_1 + 0x40) = param_3;
    *(undefined4 *)(param_1 + 0x44) = param_4;
  }
  return;
}


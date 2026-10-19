// Address: 0x00451c80
// Name: FUN_00451c80
// Category: Utility


void __cdecl
FUN_00451c80(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x100;
    *(undefined4 *)(param_2 + 100) = param_3;
    *(undefined4 *)(param_2 + 0x68) = param_4;
    *(undefined1 *)(param_2 + 0x6c) = param_5;
  }
  return;
}


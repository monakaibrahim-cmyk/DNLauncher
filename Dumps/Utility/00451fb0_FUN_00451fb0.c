// Address: 0x00451fb0
// Name: FUN_00451fb0
// Category: Utility


void __cdecl FUN_00451fb0(int param_1,int param_2,undefined1 param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800;
    *(undefined1 *)(param_2 + 0x2c) = param_3;
  }
  return;
}


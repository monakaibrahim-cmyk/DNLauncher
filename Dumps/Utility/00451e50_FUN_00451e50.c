// Address: 0x00451e50
// Name: FUN_00451e50
// Category: Utility


void __cdecl
FUN_00451e50(int param_1,int param_2,undefined1 param_3,undefined8 param_4,undefined8 param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x4000;
    *(undefined8 *)(param_2 + 0xe0) = param_4;
    *(undefined1 *)(param_2 + 0xdc) = param_3;
    *(undefined8 *)(param_2 + 0xe8) = param_5;
  }
  return;
}


// Address: 0x00451f80
// Name: FUN_00451f80
// Category: Utility


void __cdecl FUN_00451f80(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x44) = *param_3;
    uVar1 = *(undefined1 *)(param_3 + 1);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
    *(undefined1 *)(param_2 + 0x48) = uVar1;
  }
  return;
}


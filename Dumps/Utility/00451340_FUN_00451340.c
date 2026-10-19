// Address: 0x00451340
// Name: FUN_00451340
// Category: Utility


void __cdecl FUN_00451340(int param_1,int param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x5a) = *param_3;
    *(undefined4 *)(param_2 + 0x5e) = param_3[1];
    uVar1 = *(undefined2 *)(param_3 + 2);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
    *(undefined2 *)(param_2 + 0x62) = uVar1;
  }
  return;
}


// Address: 0x00452380
// Name: FUN_00452380
// Category: Utility


void __cdecl FUN_00452380(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_1 + 0x68) & 0x200) == 0)) {
    *(undefined4 *)(param_2 + 0x3c) = *param_3;
    uVar1 = param_3[1];
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x200;
    *(undefined4 *)(param_2 + 0x40) = uVar1;
  }
  return;
}


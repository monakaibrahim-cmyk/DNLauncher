// Address: 0x00437000
// Name: FUN_00437000
// Category: Utility


void __cdecl FUN_00437000(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[6] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1[6] + -0x14;
  }
  if (0 < param_2) {
    if (*(int *)(iVar1 + 0x18) < param_2) {
      do {
        param_2 = param_2 - *(int *)(iVar1 + 0x18);
        FUN_00436f80(param_1);
      } while (*(int *)(iVar1 + 0x18) < param_2);
    }
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + param_2;
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) - param_2;
  }
  return;
}


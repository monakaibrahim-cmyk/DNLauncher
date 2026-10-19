// Address: 0x004581f8
// Name: FUN_004581f8
// Category: Utility


undefined4 __fastcall FUN_004581f8(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(*(int **)(param_1 + 0xc),0);
  return uVar1;
}


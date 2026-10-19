// Address: 0x00464c06
// Name: FUN_00464c06
// Category: MFC_CRT


undefined4 __fastcall FUN_00464c06(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00464c11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x30))();
    return uVar1;
  }
  return 0;
}


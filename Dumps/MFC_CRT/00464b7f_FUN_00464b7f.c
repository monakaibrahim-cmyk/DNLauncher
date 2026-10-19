// Address: 0x00464b7f
// Name: FUN_00464b7f
// Category: MFC_CRT


undefined4 __fastcall FUN_00464b7f(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00464b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x20))();
    return uVar1;
  }
  return 1;
}


// Address: 0x00464bb4
// Name: FUN_00464bb4
// Category: MFC_CRT


void __fastcall FUN_00464bb4(int param_1)

{
  if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
                    /* WARNING: Could not recover jumptable at 0x00464bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x58) + 0x1c))();
  return;
}


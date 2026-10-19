// Address: 0x00454975
// Name: FUN_00454975
// Category: Utility


void __fastcall FUN_00454975(int *param_1)

{
  if (param_1[8] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0045497d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x60))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00454980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x114))();
  return;
}


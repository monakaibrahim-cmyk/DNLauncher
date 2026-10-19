// Address: 0x0044d680
// Name: FUN_0044d680
// Category: Utility


void __cdecl FUN_0044d680(int *param_1)

{
  if ((code *)param_1[0x14] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0044d68f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[0x14])();
    return;
  }
  FUN_00445110(param_1,"Call to NULL read function");
  return;
}


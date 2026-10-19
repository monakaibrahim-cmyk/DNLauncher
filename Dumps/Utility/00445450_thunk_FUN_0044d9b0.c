// Address: 0x00445450
// Name: thunk_FUN_0044d9b0
// Category: Utility


void __cdecl thunk_FUN_0044d9b0(int param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    if (*(code **)(param_1 + 0x24c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0044d9d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x24c))();
      return;
    }
    FUN_0044d890(param_1,param_2);
    return;
  }
  return;
}


// Address: 0x004537f1
// Name: FUN_004537f1
// Category: Utility


void __fastcall FUN_004537f1(undefined4 *param_1)

{
  *param_1 = AFX_MODULE_THREAD_STATE::vftable;
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 0x13c))();
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x12]);
}


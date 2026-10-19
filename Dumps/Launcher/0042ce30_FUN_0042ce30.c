// Address: 0x0042ce30
// Name: FUN_0042ce30
// Category: Launcher


void __fastcall FUN_0042ce30(undefined4 *param_1)

{
  *param_1 = std::runtime_error::vftable;
  if (0xf < (uint)param_1[9]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  param_1[9] = 0xf;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00475bfc(param_1);
  return;
}


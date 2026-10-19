// Address: 0x00475bfc
// Name: FUN_00475bfc
// Category: MFC_CRT


void __fastcall FUN_00475bfc(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  return;
}


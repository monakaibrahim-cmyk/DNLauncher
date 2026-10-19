// Address: 0x0048e918
// Name: FUN_0048e918
// Category: MFC_CRT


void __cdecl FUN_0048e918(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_004c3a84) {
                    /* WARNING: Subroutine does not return */
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_004c3a88) {
                    /* WARNING: Subroutine does not return */
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_004c3a8c) {
                    /* WARNING: Subroutine does not return */
      _free((undefined *)param_1[2]);
    }
  }
  return;
}


// Address: 0x00464f07
// Name: FUN_00464f07
// Category: MFC_CRT


void FUN_00464f07(undefined4 *param_1)

{
  if ((HGLOBAL)*param_1 != (HGLOBAL)0x0) {
    GlobalFree((HGLOBAL)*param_1);
  }
  if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[3]);
}


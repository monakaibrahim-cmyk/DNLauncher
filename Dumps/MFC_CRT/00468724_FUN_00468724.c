// Address: 0x00468724
// Name: FUN_00468724
// Category: MFC_CRT


void FUN_00468724(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
    *param_1 = 0;
  }
  return;
}


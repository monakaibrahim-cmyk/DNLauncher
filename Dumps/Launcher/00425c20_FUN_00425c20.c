// Address: 0x00425c20
// Name: FUN_00425c20
// Category: Launcher


void __fastcall FUN_00425c20(undefined4 *param_1)

{
  *param_1 = CFileStream::vftable;
  if ((FILE *)param_1[1] != (FILE *)0x0) {
    _fclose((FILE *)param_1[1]);
    param_1[1] = 0;
  }
  if (0xf < (uint)param_1[8]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[3]);
  }
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = CStream::vftable;
  return;
}


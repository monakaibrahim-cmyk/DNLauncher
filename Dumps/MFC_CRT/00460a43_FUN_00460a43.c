// Address: 0x00460a43
// Name: FUN_00460a43
// Category: MFC_CRT


void __fastcall FUN_00460a43(undefined4 *param_1)

{
  if (param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  *(undefined4 *)(param_1[1] + 0x14c) = *param_1;
  *(undefined4 *)(param_1[1] + 0x150) = param_1[2];
  param_1[1] = 0;
  return;
}


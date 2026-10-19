// Address: 0x00467839
// Name: FUN_00467839
// Category: MFC_CRT


void __fastcall FUN_00467839(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_00471658(*(void **)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


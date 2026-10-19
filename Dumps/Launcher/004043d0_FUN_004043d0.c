// Address: 0x004043d0
// Name: FUN_004043d0
// Category: Launcher


void FUN_004043d0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_00404570();
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}


// Address: 0x0042afa0
// Name: FUN_0042afa0
// Category: Launcher


void FUN_0042afa0(void)

{
  int unaff_ESI;
  
  if (*(void **)(unaff_ESI + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}


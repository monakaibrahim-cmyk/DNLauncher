// Address: 0x00406190
// Name: FUN_00406190
// Category: Launcher


void FUN_00406190(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_00406e30();
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}


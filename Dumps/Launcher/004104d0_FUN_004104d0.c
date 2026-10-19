// Address: 0x004104d0
// Name: FUN_004104d0
// Category: Launcher


void FUN_004104d0(void)

{
  int unaff_ESI;
  
  if (*(void **)(unaff_ESI + 0x34) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_ESI + 0x34));
  }
  return;
}


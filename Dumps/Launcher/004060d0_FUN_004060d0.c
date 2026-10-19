// Address: 0x004060d0
// Name: FUN_004060d0
// Category: Launcher


void FUN_004060d0(void)

{
  int unaff_ESI;
  
  if (7 < *(uint *)(unaff_ESI + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 7;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined2 *)(unaff_ESI + 4) = 0;
  return;
}


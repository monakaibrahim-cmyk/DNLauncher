// Address: 0x00407910
// Name: FUN_00407910
// Category: Launcher


void FUN_00407910(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x34)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_ESI + 0x20));
  }
  *(undefined4 *)(unaff_ESI + 0x34) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined1 *)(unaff_ESI + 0x20) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  return;
}


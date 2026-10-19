// Address: 0x00407b80
// Name: FUN_00407b80
// Category: Launcher


void FUN_00407b80(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_00408380(*(int *)(unaff_ESI + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}


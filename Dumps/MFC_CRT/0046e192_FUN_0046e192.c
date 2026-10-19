// Address: 0x0046e192
// Name: FUN_0046e192
// Category: MFC_CRT


void FUN_0046e192(void)

{
  int iVar1;
  int *unaff_EBX;
  int unaff_EBP;
  
  if ((void *)unaff_EBX[2] != (void *)0x0) {
    _memset((void *)unaff_EBX[2],0,*(size_t *)(unaff_EBP + -0x2c));
    iVar1 = FUN_00469d5e(*(int *)(unaff_EBP + -0x40),unaff_EBX[3],*unaff_EBX,
                         *(undefined4 *)(unaff_EBP + -0x2c),*(int **)(unaff_EBP + -0x34));
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)unaff_EBX[4]);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_EBP + -0x48));
  }
  if (unaff_EBX[3] != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(*(int *)(unaff_EBP + -0x40) + 0x14));
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)unaff_EBX[4]);
}


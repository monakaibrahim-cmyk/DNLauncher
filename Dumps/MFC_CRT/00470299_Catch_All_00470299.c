// Address: 0x00470299
// Name: Catch_All@00470299
// Category: MFC_CRT


void Catch_All_00470299(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_0046fed9(*(int *)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


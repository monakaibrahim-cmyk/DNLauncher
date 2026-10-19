// Address: 0x00470256
// Name: Catch_All@00470256
// Category: MFC_CRT


void Catch_All_00470256(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_0046fed9(*(int *)(unaff_EBP + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_EBP + 8));
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


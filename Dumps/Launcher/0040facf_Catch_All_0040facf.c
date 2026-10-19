// Address: 0x0040facf
// Name: Catch_All@0040facf
// Category: Launcher


void Catch_All_0040facf(void)

{
  int *piVar1;
  int unaff_EBP;
  int *piVar2;
  
  piVar1 = *(int **)(unaff_EBP + 0xc);
  for (piVar2 = *(int **)(unaff_EBP + -0x14); piVar2 != piVar1; piVar2 = piVar2 + 0xc) {
    FUN_004100b0(piVar2);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


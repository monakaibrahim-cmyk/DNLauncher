// Address: 0x00415f43
// Name: Catch_All@00415f43
// Category: Launcher


void Catch_All_00415f43(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 8);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    FUN_004045b0();
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


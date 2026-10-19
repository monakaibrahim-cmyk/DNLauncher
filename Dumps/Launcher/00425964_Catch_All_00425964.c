// Address: 0x00425964
// Name: Catch_All@00425964
// Category: Launcher


void Catch_All_00425964(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + -0x44);
  for (iVar2 = *(int *)(unaff_EBP + -0x48); iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    FUN_004060d0();
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


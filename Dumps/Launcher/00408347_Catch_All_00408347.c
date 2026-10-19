// Address: 0x00408347
// Name: Catch_All@00408347
// Category: Launcher


void Catch_All_00408347(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 8);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x38) {
    FUN_00407910();
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


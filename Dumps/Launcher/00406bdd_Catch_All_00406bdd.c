// Address: 0x00406bdd
// Name: Catch_All@00406bdd
// Category: Launcher


void Catch_All_00406bdd(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 8);
  if (7 < *(uint *)(iVar1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar1 + 4));
  }
  *(undefined4 *)(iVar1 + 0x18) = 7;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined2 *)(iVar1 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


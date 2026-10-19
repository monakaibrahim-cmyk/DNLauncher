// Address: 0x0040fd40
// Name: FUN_0040fd40
// Category: Launcher


void FUN_0040fd40(void)

{
  int *piVar1;
  int unaff_EBX;
  int *piVar2;
  
  piVar2 = *(int **)(unaff_EBX + 4);
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(unaff_EBX + 4) = 0;
    *(undefined4 *)(unaff_EBX + 8) = 0;
    *(undefined4 *)(unaff_EBX + 0xc) = 0;
    return;
  }
  piVar1 = *(int **)(unaff_EBX + 8);
  for (; piVar2 != piVar1; piVar2 = piVar2 + 0xc) {
    FUN_004100b0(piVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(unaff_EBX + 4));
}


// Address: 0x00415500
// Name: FUN_00415500
// Category: Launcher


void FUN_00415500(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EDI;
  
  puVar1 = *(undefined4 **)(unaff_EDI + 8);
  if (puVar1 < *(undefined4 **)(unaff_EDI + 4)) {
    FUN_00475b26();
  }
  puVar2 = *(undefined4 **)(unaff_EDI + 4);
  if (*(undefined4 **)(unaff_EDI + 8) < puVar2) {
    FUN_00475b26();
  }
  if (puVar2 != puVar1) {
    iVar3 = FUN_00415de0(puVar1);
    *(int *)(unaff_EDI + 8) = iVar3;
  }
  return;
}


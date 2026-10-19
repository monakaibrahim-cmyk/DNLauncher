// Address: 0x00410440
// Name: FUN_00410440
// Category: Launcher


void FUN_00410440(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_ESI;
  
  puVar1 = *(undefined4 **)(unaff_ESI + 8);
  if (puVar1 < *(undefined4 **)(unaff_ESI + 4)) {
    FUN_00475b26();
  }
  puVar2 = *(undefined4 **)(unaff_ESI + 4);
  if (*(undefined4 **)(unaff_ESI + 8) < puVar2) {
    FUN_00475b26();
  }
  if (puVar2 != puVar1) {
    iVar3 = FUN_0040fd00(puVar1);
    FUN_0040ff60();
    *(int *)(unaff_ESI + 8) = iVar3;
  }
  return;
}


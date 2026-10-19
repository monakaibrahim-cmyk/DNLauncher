// Address: 0x0040d820
// Name: FUN_0040d820
// Category: Launcher


void FUN_0040d820(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *unaff_EBX;
  int unaff_ESI;
  uint local_c [3];
  
  piVar1 = *(int **)(unaff_ESI + 4);
  if ((piVar1 != (int *)0x0) &&
     ((uint)(*(int *)(unaff_ESI + 8) - (int)piVar1 >> 3) <
      (uint)(*(int *)(unaff_ESI + 0xc) - (int)piVar1 >> 3))) {
    puVar2 = *(undefined4 **)(unaff_ESI + 8);
    local_c[0] = local_c[0] & 0xffffff00;
    FUN_0040f020(unaff_EBX,1,puVar2);
    *(undefined4 **)(unaff_ESI + 8) = puVar2 + 2;
    return;
  }
  piVar3 = *(int **)(unaff_ESI + 8);
  if (piVar3 < piVar1) {
    FUN_00475b26();
  }
  FUN_0040db70((int *)local_c,unaff_EBX,unaff_ESI,piVar3);
  return;
}


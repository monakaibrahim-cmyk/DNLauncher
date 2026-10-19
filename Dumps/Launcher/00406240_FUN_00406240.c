// Address: 0x00406240
// Name: FUN_00406240
// Category: Launcher


void FUN_00406240(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  CStringData *unaff_EBX;
  int unaff_ESI;
  uint local_c [3];
  
  piVar1 = *(int **)(unaff_ESI + 4);
  if ((piVar1 != (int *)0x0) &&
     ((uint)(*(int *)(unaff_ESI + 8) - (int)piVar1 >> 2) <
      (uint)(*(int *)(unaff_ESI + 0xc) - (int)piVar1 >> 2))) {
    puVar2 = *(undefined4 **)(unaff_ESI + 8);
    local_c[0] = local_c[0] & 0xffffff00;
    FUN_00406d80(&DAT_00000001,puVar2,(int *)unaff_EBX);
    *(undefined4 **)(unaff_ESI + 8) = puVar2 + 1;
    return;
  }
  piVar3 = *(int **)(unaff_ESI + 8);
  if (piVar3 < piVar1) {
    FUN_00475b26();
  }
  FUN_004063b0((int *)local_c,unaff_EBX,unaff_ESI,piVar3);
  return;
}


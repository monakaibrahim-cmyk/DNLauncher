// Address: 0x0040d990
// Name: FUN_0040d990
// Category: Launcher


void FUN_0040d990(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_ESI;
  int local_8 [2];
  
  piVar1 = *(int **)(unaff_ESI + 4);
  if ((piVar1 != (int *)0x0) &&
     ((uint)((*(int *)(unaff_ESI + 8) - (int)piVar1) / 0x14) <
      (uint)((*(int *)(unaff_ESI + 0xc) - (int)piVar1) / 0x14))) {
    puVar2 = *(undefined4 **)(unaff_ESI + 8);
    FUN_0040f1d0(param_1,1,puVar2);
    *(undefined4 **)(unaff_ESI + 8) = puVar2 + 5;
    return;
  }
  piVar3 = *(int **)(unaff_ESI + 8);
  if (piVar3 < piVar1) {
    FUN_00475b26();
  }
  FUN_0040dd10(local_8,param_1,unaff_ESI,piVar3);
  return;
}


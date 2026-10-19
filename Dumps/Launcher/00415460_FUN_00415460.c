// Address: 0x00415460
// Name: FUN_00415460
// Category: Launcher


void FUN_00415460(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *unaff_ESI;
  undefined4 local_8 [2];
  
  puVar1 = *(undefined4 **)((int)unaff_ESI + 4);
  if ((puVar1 != (undefined4 *)0x0) &&
     ((uint)((*(int *)((int)unaff_ESI + 8) - (int)puVar1) / 0xc) <
      (uint)((*(int *)((int)unaff_ESI + 0xc) - (int)puVar1) / 0xc))) {
    iVar2 = *(int *)((int)unaff_ESI + 8);
    FUN_00415f80(1,param_1);
    *(int *)((int)unaff_ESI + 8) = iVar2 + 0xc;
    return;
  }
  puVar3 = *(undefined4 **)((int)unaff_ESI + 8);
  if (puVar3 < puVar1) {
    FUN_00475b26();
  }
  FUN_004156c0(local_8,param_1,unaff_ESI,puVar3);
  return;
}


// Address: 0x00424d00
// Name: FUN_00424d00
// Category: Launcher


void FUN_00424d00(undefined4 param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  void *unaff_ESI;
  undefined4 local_8 [2];
  
  uVar1 = *(uint *)((int)unaff_ESI + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)((int)unaff_ESI + 8) - uVar1) / 0x1c) <
      (uint)((int)(*(int *)((int)unaff_ESI + 0xc) - uVar1) / 0x1c))) {
    pvVar2 = *(void **)((int)unaff_ESI + 8);
    FUN_00425690(&DAT_00000001,pvVar2);
    *(int *)((int)unaff_ESI + 8) = (int)pvVar2 + 0x1c;
    return;
  }
  uVar3 = *(uint *)((int)unaff_ESI + 8);
  if (uVar3 < uVar1) {
    FUN_00475b26();
  }
  FUN_00425020(local_8,param_1,unaff_ESI,uVar3);
  return;
}


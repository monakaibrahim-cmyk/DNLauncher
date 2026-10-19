// Address: 0x00415350
// Name: FUN_00415350
// Category: Launcher


void FUN_00415350(void *param_1)

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
    FUN_00415ed0(&DAT_00000001,pvVar2,param_1);
    *(int *)((int)unaff_ESI + 8) = (int)pvVar2 + 0x1c;
    return;
  }
  uVar3 = *(uint *)((int)unaff_ESI + 8);
  if (uVar3 < uVar1) {
    FUN_00475b26();
  }
  FUN_00415550(local_8,param_1,unaff_ESI,uVar3);
  return;
}


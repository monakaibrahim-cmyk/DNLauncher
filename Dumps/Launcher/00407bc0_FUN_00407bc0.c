// Address: 0x00407bc0
// Name: FUN_00407bc0
// Category: Launcher


void FUN_00407bc0(undefined4 param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *unaff_ESI;
  undefined4 local_8 [2];
  
  pvVar1 = *(void **)((int)unaff_ESI + 4);
  if ((pvVar1 != (void *)0x0) &&
     ((uint)((*(int *)((int)unaff_ESI + 8) - (int)pvVar1) / 0x38) <
      (uint)((*(int *)((int)unaff_ESI + 0xc) - (int)pvVar1) / 0x38))) {
    pvVar1 = *(void **)((int)unaff_ESI + 8);
    FUN_004082e0(param_1,1,pvVar1);
    *(int *)((int)unaff_ESI + 8) = (int)pvVar1 + 0x38;
    return;
  }
  pvVar2 = *(void **)((int)unaff_ESI + 8);
  if (pvVar2 < pvVar1) {
    FUN_00475b26();
  }
  FUN_00407cf0(local_8,param_1,unaff_ESI,pvVar2);
  return;
}


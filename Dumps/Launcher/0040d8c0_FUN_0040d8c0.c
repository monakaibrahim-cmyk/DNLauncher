// Address: 0x0040d8c0
// Name: FUN_0040d8c0
// Category: Launcher


void FUN_0040d8c0(undefined4 param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int unaff_ESI;
  int local_8 [2];
  
  pvVar1 = *(void **)(unaff_ESI + 4);
  if ((pvVar1 != (void *)0x0) &&
     ((uint)((*(int *)(unaff_ESI + 8) - (int)pvVar1) / 0x30) <
      (uint)((*(int *)(unaff_ESI + 0xc) - (int)pvVar1) / 0x30))) {
    puVar2 = *(undefined4 **)(unaff_ESI + 8);
    FUN_0040f0d0(param_1,1,puVar2);
    *(undefined4 **)(unaff_ESI + 8) = puVar2 + 0xc;
    return;
  }
  pvVar3 = *(void **)(unaff_ESI + 8);
  if (pvVar3 < pvVar1) {
    FUN_00475b26();
  }
  FUN_0040dc00(local_8,param_1,unaff_ESI,pvVar3);
  return;
}


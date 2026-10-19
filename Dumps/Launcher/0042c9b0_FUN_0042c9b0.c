// Address: 0x0042c9b0
// Name: FUN_0042c9b0
// Category: Launcher


void FUN_0042c9b0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EBX;
  void *unaff_ESI;
  undefined4 local_10 [3];
  
  puVar1 = *(undefined4 **)((int)unaff_ESI + 4);
  if ((puVar1 != (undefined4 *)0x0) &&
     ((uint)(*(int *)((int)unaff_ESI + 8) - (int)puVar1 >> 2) <
      (uint)(*(int *)((int)unaff_ESI + 0xc) - (int)puVar1 >> 2))) {
    puVar1 = *(undefined4 **)((int)unaff_ESI + 8);
    *puVar1 = *unaff_EBX;
    *(undefined4 **)((int)unaff_ESI + 8) = puVar1 + 1;
    return;
  }
  puVar2 = *(undefined4 **)((int)unaff_ESI + 8);
  if (puVar2 < puVar1) {
    FUN_00475b26();
  }
  FUN_0042ca80(local_10,unaff_EBX,unaff_ESI,puVar2);
  return;
}


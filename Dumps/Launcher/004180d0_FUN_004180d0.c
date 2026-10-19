// Address: 0x004180d0
// Name: FUN_004180d0
// Category: Launcher


void FUN_004180d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EBX;
  void *unaff_ESI;
  uint local_c [3];
  
  puVar1 = *(undefined4 **)((int)unaff_ESI + 4);
  if ((puVar1 != (undefined4 *)0x0) &&
     ((uint)(*(int *)((int)unaff_ESI + 8) - (int)puVar1 >> 3) <
      (uint)(*(int *)((int)unaff_ESI + 0xc) - (int)puVar1 >> 3))) {
    iVar2 = *(int *)((int)unaff_ESI + 8);
    local_c[0] = local_c[0] & 0xffffff00;
    FUN_00418570(1,unaff_EBX);
    *(int *)((int)unaff_ESI + 8) = iVar2 + 8;
    return;
  }
  puVar3 = *(undefined4 **)((int)unaff_ESI + 8);
  if (puVar3 < puVar1) {
    FUN_00475b26();
  }
  FUN_00418190(local_c,unaff_EBX,unaff_ESI,puVar3);
  return;
}


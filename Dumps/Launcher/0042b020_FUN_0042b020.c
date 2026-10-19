// Address: 0x0042b020
// Name: FUN_0042b020
// Category: Launcher


void FUN_0042b020(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_EAX;
  int unaff_ESI;
  uint local_c [3];
  
  puVar1 = *(undefined4 **)(unaff_ESI + 4);
  if ((puVar1 != (undefined4 *)0x0) &&
     ((uint)((*(int *)(unaff_ESI + 8) - (int)puVar1) / 0x13c) <
      (uint)((*(int *)(unaff_ESI + 0xc) - (int)puVar1) / 0x13c))) {
    iVar2 = *(int *)(unaff_ESI + 8);
    local_c[0] = local_c[0] & 0xffffff00;
    FUN_0042c210(local_c[0],1);
    *(int *)(unaff_ESI + 8) = iVar2 + 0x13c;
    return;
  }
  puVar3 = *(undefined4 **)(unaff_ESI + 8);
  if (puVar3 < puVar1) {
    FUN_00475b26();
  }
  FUN_0042b620((int *)local_c,in_EAX,unaff_ESI,puVar3);
  return;
}


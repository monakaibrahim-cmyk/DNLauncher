// Address: 0x0043ea50
// Name: FUN_0043ea50
// Category: Utility


undefined4 FUN_0043ea50(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_ESI;
  
  iVar2 = *(int *)(unaff_ESI + 0x198);
  piVar1 = (int *)(*(int *)(unaff_ESI + 0x194) + 0x14);
  *piVar1 = *piVar1 + ((int)(*(int *)(iVar2 + 0x10) + (*(int *)(iVar2 + 0x10) >> 0x1f & 7U)) >> 3);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  uVar3 = (**(code **)(*(int *)(unaff_ESI + 0x194) + 8))();
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  iVar4 = 0;
  if (0 < *(int *)(unaff_ESI + 0x124)) {
    puVar5 = (undefined4 *)(iVar2 + 0x14);
    do {
      *puVar5 = 0;
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < *(int *)(unaff_ESI + 0x124));
  }
  *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(unaff_ESI + 0xfc);
  if (*(int *)(unaff_ESI + 0x17c) == 0) {
    *(undefined1 *)(iVar2 + 8) = 0;
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}


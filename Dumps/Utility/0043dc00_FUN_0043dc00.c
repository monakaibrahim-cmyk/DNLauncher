// Address: 0x0043dc00
// Name: FUN_0043dc00
// Category: Utility


uint FUN_0043dc00(void)

{
  uint in_EAX;
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  undefined1 local_5;
  
  iVar4 = *(int *)(unaff_EDI + 0x188);
  local_5 = 0;
  if ((*(char *)(unaff_EDI + 200) == '\0') || (*(int *)(unaff_EDI + 0x8c) == 0)) {
    return in_EAX & 0xffffff00;
  }
  if (*(int *)(iVar4 + 0x70) == 0) {
    uVar1 = (*(code *)**(undefined4 **)(unaff_EDI + 4))();
    *(undefined4 *)(iVar4 + 0x70) = uVar1;
  }
  iVar4 = *(int *)(iVar4 + 0x70);
  puVar3 = *(undefined4 **)(unaff_EDI + 0xc4);
  iVar6 = 0;
  if (0 < *(int *)(unaff_EDI + 0x24)) {
    iVar5 = 0;
    puVar3 = puVar3 + 0x13;
    do {
      piVar2 = (int *)*puVar3;
      if (((((piVar2 == (int *)0x0) || ((short)*piVar2 == 0)) || (*(short *)((int)piVar2 + 2) == 0))
          || (((short)piVar2[4] == 0 || ((short)piVar2[8] == 0)))) ||
         ((*(short *)((int)piVar2 + 0x12) == 0 ||
          (((short)piVar2[1] == 0 ||
           (piVar2 = (int *)(*(int *)(unaff_EDI + 0x8c) + iVar5), *piVar2 < 0)))))) {
        return (uint)piVar2 & 0xffffff00;
      }
      *(int *)(iVar4 + 4) = piVar2[1];
      if (piVar2[1] != 0) {
        local_5 = 1;
      }
      *(int *)(iVar4 + 8) = piVar2[2];
      if (piVar2[2] != 0) {
        local_5 = 1;
      }
      *(int *)(iVar4 + 0xc) = piVar2[3];
      if (piVar2[3] != 0) {
        local_5 = 1;
      }
      *(int *)(iVar4 + 0x10) = piVar2[4];
      if (piVar2[4] != 0) {
        local_5 = 1;
      }
      *(int *)(iVar4 + 0x14) = piVar2[5];
      if (piVar2[5] != 0) {
        local_5 = 1;
      }
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 0x15;
      iVar4 = iVar4 + 0x18;
      iVar5 = iVar5 + 0x100;
    } while (iVar6 < *(int *)(unaff_EDI + 0x24));
  }
  return CONCAT31((int3)((uint)puVar3 >> 8),local_5);
}


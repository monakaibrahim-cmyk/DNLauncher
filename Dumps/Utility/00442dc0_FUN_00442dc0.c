// Address: 0x00442dc0
// Name: FUN_00442dc0
// Category: Utility


void __cdecl FUN_00442dc0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int local_14;
  int iStack_10;
  int *piStack_c;
  char cStack_8;
  
  iVar2 = *(int *)(param_1 + 0x1a8);
  if (*(int *)(param_1 + 0x4c) == 1) {
    local_14 = 0x1fe;
    *(undefined1 *)(iVar2 + 0x1c) = 1;
  }
  else {
    local_14 = 0;
    *(undefined1 *)(iVar2 + 0x1c) = 0;
  }
  uVar4 = (**(code **)(*(int *)(param_1 + 4) + 8))
                    (param_1,1,local_14 + 0x100,*(undefined4 *)(param_1 + 100));
  *(undefined4 *)(iVar2 + 0x18) = uVar4;
  iVar5 = *(int *)(iVar2 + 0x14);
  iStack_10 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    piStack_c = (int *)(iVar2 + 0x20);
    do {
      iVar9 = *piStack_c;
      iVar5 = iVar5 / iVar9;
      if (local_14 != 0) {
        piVar1 = (int *)(*(int *)(iVar2 + 0x18) + iStack_10 * 4);
        *piVar1 = *piVar1 + 0xff;
      }
      puVar3 = *(undefined1 **)(*(int *)(iVar2 + 0x18) + iStack_10 * 4);
      iVar9 = iVar9 + -1;
      cVar8 = '\0';
      iVar6 = FUN_00442c30(iVar9);
      iVar10 = 0;
      do {
        while (iVar6 < iVar10) {
          cVar8 = cVar8 + '\x01';
          iVar6 = FUN_00442c30(iVar9);
        }
        cStack_8 = (char)iVar5;
        puVar3[iVar10] = cStack_8 * cVar8;
        iVar10 = iVar10 + 1;
      } while (iVar10 < 0x100);
      if (local_14 != 0) {
        iVar9 = 1;
        puVar7 = puVar3;
        do {
          puVar7 = puVar7 + -1;
          *puVar7 = *puVar3;
          puVar3[iVar9 + 0xff] = puVar3[0xff];
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x100);
      }
      piStack_c = piStack_c + 1;
      iStack_10 = iStack_10 + 1;
    } while (iStack_10 < *(int *)(param_1 + 100));
  }
  return;
}


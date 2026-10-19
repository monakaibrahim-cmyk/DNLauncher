// Address: 0x0043cfa0
// Name: FUN_0043cfa0
// Category: Utility


void __cdecl FUN_0043cfa0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int local_20;
  int *local_1c;
  int local_14;
  
  iVar1 = *(int *)(param_1 + 0x118);
  iVar2 = *(int *)(param_1 + 0x184);
  local_20 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    piVar10 = (int *)(*(int *)(param_1 + 0xc4) + 0xc);
    local_1c = (int *)(iVar2 + 8);
    do {
      iVar6 = (piVar10[6] * *piVar10) / *(int *)(param_1 + 0x118);
      puVar3 = *(undefined4 **)(*(int *)(iVar2 + 0x38) + local_20 * 4);
      iVar4 = *local_1c;
      puVar9 = *(undefined4 **)(*(int *)(iVar2 + 0x3c) + local_20 * 4);
      local_14 = (iVar1 + 2) * iVar6;
      if (0 < local_14) {
        puVar7 = puVar9;
        do {
          uVar5 = *(undefined4 *)((int)puVar7 + (iVar4 - (int)puVar9));
          *puVar7 = uVar5;
          *(undefined4 *)(((int)puVar3 - (int)puVar9) + (int)puVar7) = uVar5;
          puVar7 = puVar7 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      if (0 < iVar6 * 2) {
        puVar7 = puVar9 + iVar6 * iVar1;
        puVar8 = (undefined4 *)(iVar4 + (iVar1 + -2) * iVar6 * 4);
        iVar11 = iVar6 * 2;
        do {
          *(undefined4 *)(((int)puVar9 - iVar4) + (int)puVar8) =
               *(undefined4 *)((int)puVar7 + (iVar4 - (int)puVar9));
          *puVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      if (0 < iVar6) {
        puVar9 = puVar3 + -iVar6;
        do {
          *puVar9 = *puVar3;
          puVar9 = puVar9 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_1c = local_1c + 1;
      piVar10 = piVar10 + 0x15;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(param_1 + 0x24));
  }
  return;
}


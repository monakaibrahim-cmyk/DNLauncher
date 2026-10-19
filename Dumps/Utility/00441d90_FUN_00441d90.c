// Address: 0x00441d90
// Name: FUN_00441d90
// Category: Utility


void __cdecl FUN_00441d90(int param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar6 = in_EAX[2];
  iVar1 = in_EAX[4];
  iVar4 = *in_EAX;
  iVar11 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  if (iVar4 <= in_EAX[1]) {
    local_38 = iVar4 * 8 + 4;
    do {
      if (iVar6 <= in_EAX[3]) {
        puVar8 = (ushort *)
                 (*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x18) + iVar4 * 4) +
                 (iVar6 * 0x20 + iVar1) * 2);
        iVar2 = (in_EAX[3] - iVar6) + 1;
        iVar10 = iVar6 * 4 + 2;
        do {
          if (iVar1 <= in_EAX[5]) {
            iVar5 = iVar1 * 8 + 4;
            iVar7 = (in_EAX[5] - iVar1) + 1;
            puVar9 = puVar8;
            do {
              uVar3 = (uint)*puVar9;
              puVar9 = puVar9 + 1;
              if (uVar3 != 0) {
                local_34 = local_34 + local_38 * uVar3;
                local_30 = local_30 + iVar10 * uVar3;
                iVar11 = iVar11 + uVar3;
                local_2c = local_2c + iVar5 * uVar3;
              }
              iVar5 = iVar5 + 8;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          puVar8 = puVar8 + 0x20;
          iVar10 = iVar10 + 4;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_38 = local_38 + 8;
      iVar4 = iVar4 + 1;
    } while (iVar4 <= in_EAX[1]);
  }
  iVar6 = iVar11 >> 1;
  *(char *)(param_2 + **(int **)(param_1 + 0x74)) = (char)((iVar6 + local_34) / iVar11);
  *(char *)(param_2 + *(int *)(*(int *)(param_1 + 0x74) + 4)) = (char)((local_30 + iVar6) / iVar11);
  *(char *)(param_2 + *(int *)(*(int *)(param_1 + 0x74) + 8)) = (char)((local_2c + iVar6) / iVar11);
  return;
}


// Address: 0x00442170
// Name: FUN_00442170
// Category: Utility


void __cdecl
FUN_00442170(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte *param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_208;
  int local_200 [128];
  
  piVar7 = local_200;
  for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = 0x7fffffff;
    piVar7 = piVar7 + 1;
  }
  local_210 = 0;
  if (0 < param_5) {
    do {
      bVar1 = *(byte *)(local_210 + param_6);
      uVar9 = (uint)bVar1;
      piVar7 = *(int **)(param_1 + 0x74);
      iVar5 = param_3 - (uint)*(byte *)(piVar7[1] + uVar9);
      iVar4 = iVar5 * 3;
      iVar6 = param_4 - (uint)*(byte *)(piVar7[2] + uVar9);
      iVar3 = (param_2 - (uint)*(byte *)(uVar9 + *piVar7)) * 2;
      iVar4 = iVar6 * iVar6 + iVar4 * iVar4 + iVar3 * iVar3;
      iVar6 = (iVar6 + 4) * 0x10;
      local_21c = (iVar3 + 8) * 0x20;
      piVar7 = local_200;
      local_218 = 3;
      pbVar8 = param_7;
      do {
        local_208 = 7;
        iVar3 = iVar4;
        local_214 = (iVar5 * 9 + 0x12) * 8;
        do {
          if (iVar3 < *piVar7) {
            *piVar7 = iVar3;
            *pbVar8 = bVar1;
          }
          iVar2 = iVar3 + iVar6;
          if (iVar2 < piVar7[1]) {
            piVar7[1] = iVar2;
            pbVar8[1] = bVar1;
          }
          iVar2 = iVar2 + iVar6 + 0x80;
          if (iVar2 < piVar7[2]) {
            piVar7[2] = iVar2;
            pbVar8[2] = bVar1;
          }
          iVar2 = iVar2 + iVar6 + 0x100;
          if (iVar2 < piVar7[3]) {
            piVar7[3] = iVar2;
            pbVar8[3] = bVar1;
          }
          iVar3 = iVar3 + local_214;
          local_214 = local_214 + 0x120;
          piVar7 = piVar7 + 4;
          pbVar8 = pbVar8 + 4;
          local_208 = local_208 + -1;
        } while (-1 < local_208);
        iVar4 = iVar4 + local_21c;
        local_21c = local_21c + 0x200;
        local_218 = local_218 + -1;
      } while (-1 < local_218);
      local_210 = local_210 + 1;
    } while (local_210 < param_5);
  }
  return;
}


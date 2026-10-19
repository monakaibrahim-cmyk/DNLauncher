// Address: 0x00442430
// Name: FUN_00442430
// Category: Utility


void __cdecl FUN_00442430(int param_1,int param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  short *psVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  int local_10;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
  iVar7 = *(int *)(param_1 + 0x5c);
  if (0 < param_4) {
    iVar8 = param_2 - (int)param_3;
    local_10 = param_4;
    do {
      pbVar10 = *(byte **)(iVar8 + (int)param_3);
      pcVar9 = (char *)*param_3;
      for (iVar4 = iVar7; iVar4 != 0; iVar4 = iVar4 + -1) {
        bVar5 = *pbVar10;
        pbVar1 = pbVar10 + 1;
        pbVar2 = pbVar10 + 2;
        psVar3 = (short *)(*(int *)(iVar6 + (uint)(bVar5 >> 3) * 4) +
                          ((int)(uint)(*pbVar1 >> 2) * 0x20 + (uint)(*pbVar2 >> 3)) * 2);
        pbVar10 = pbVar10 + 3;
        if (*psVar3 == 0) {
          FUN_004422f0((void *)(uint)(*pbVar1 >> 2),param_1,(uint)(bVar5 >> 3),(uint)(*pbVar2 >> 3))
          ;
        }
        *pcVar9 = (char)*psVar3 + -1;
        pcVar9 = pcVar9 + 1;
      }
      param_3 = param_3 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}


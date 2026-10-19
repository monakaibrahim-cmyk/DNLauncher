// Address: 0x00443090
// Name: FUN_00443090
// Category: Utility


void __cdecl FUN_00443090(int param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x1a8) + 0x18);
  iVar2 = piVar1[1];
  iVar3 = *(int *)(param_1 + 0x5c);
  iVar4 = *piVar1;
  iVar5 = piVar1[2];
  if (0 < param_4) {
    iVar8 = param_2 - (int)param_3;
    do {
      pbVar6 = *(byte **)(iVar8 + (int)param_3);
      pcVar7 = (char *)*param_3;
      for (iVar9 = iVar3; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pcVar7 = *(char *)((uint)*pbVar6 + iVar4) + *(char *)((uint)pbVar6[1] + iVar2) +
                  *(char *)((uint)pbVar6[2] + iVar5);
        pbVar6 = pbVar6 + 3;
        pcVar7 = pcVar7 + 1;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


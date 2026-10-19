// Address: 0x00443150
// Name: FUN_00443150
// Category: Utility


void __cdecl FUN_00443150(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  size_t sVar11;
  uint uVar12;
  int local_20;
  int *local_14;
  
  iVar2 = *(int *)(param_1 + 100);
  sVar3 = *(size_t *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x1a8);
  if (0 < (int)param_4) {
    iVar9 = param_2 - (int)param_3;
    local_14 = param_4;
    do {
      FUN_0043bca0((void *)*param_3,sVar3);
      iVar5 = *(int *)(iVar4 + 0x30);
      local_20 = 0;
      if (0 < iVar2) {
        param_4 = (int *)(iVar4 + 0x34);
        do {
          iVar6 = *(int *)(*(int *)(iVar4 + 0x18) + local_20 * 4);
          pcVar10 = (char *)*param_3;
          iVar7 = *param_4;
          pbVar8 = (byte *)(*(int *)(iVar9 + (int)param_3) + local_20);
          uVar12 = 0;
          for (sVar11 = sVar3; sVar11 != 0; sVar11 = sVar11 - 1) {
            bVar1 = *pbVar8;
            pbVar8 = pbVar8 + iVar2;
            *pcVar10 = *pcVar10 +
                       *(char *)(*(int *)(iVar7 + iVar5 * 0x40 + uVar12 * 4) + (uint)bVar1 + iVar6);
            pcVar10 = pcVar10 + 1;
            uVar12 = uVar12 + 1 & 0xf;
          }
          param_4 = param_4 + 1;
          local_20 = local_20 + 1;
        } while (local_20 < iVar2);
      }
      param_3 = param_3 + 1;
      local_14 = (int *)((int)local_14 + -1);
      *(uint *)(iVar4 + 0x30) = iVar5 + 1U & 0xf;
    } while (local_14 != (int *)0x0);
  }
  return;
}


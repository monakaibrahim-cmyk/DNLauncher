// Address: 0x0044e660
// Name: FUN_0044e660
// Category: Utility


void __cdecl FUN_0044e660(int param_1,int param_2,byte *param_3,byte *param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int local_10;
  int local_c;
  
  switch(param_5) {
  case (byte *)0x0:
    break;
  case (byte *)0x1:
    uVar3 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
    pbVar10 = param_3 + uVar3;
    if (uVar3 < *(uint *)(param_2 + 4)) {
      pbVar8 = pbVar10 + -uVar3;
      iVar4 = *(uint *)(param_2 + 4) - uVar3;
      do {
        *pbVar10 = *pbVar10 + *pbVar8;
        pbVar10 = pbVar10 + 1;
        pbVar8 = pbVar8 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return;
    }
    break;
  case (byte *)0x2:
    uVar3 = *(uint *)(param_2 + 4);
    uVar5 = 0;
    if (uVar3 != 0) {
      do {
        *param_3 = *param_3 + param_4[uVar5];
        uVar5 = uVar5 + 1;
        param_3 = param_3 + 1;
      } while (uVar5 < uVar3);
      return;
    }
    break;
  case (byte *)0x3:
    iVar4 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
    iVar6 = *(int *)(param_2 + 4) - iVar4;
    pbVar10 = param_3;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pbVar10 = *pbVar10 + (*param_4 >> 1);
      param_4 = param_4 + 1;
      pbVar10 = pbVar10 + 1;
    }
    if (iVar6 != 0) {
      do {
        *pbVar10 = *pbVar10 + (char)(((uint)*param_3 + (uint)*param_4) / 2);
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        pbVar10 = pbVar10 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return;
    }
    break;
  case (byte *)0x4:
    iVar4 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
    local_c = *(int *)(param_2 + 4) - iVar4;
    param_5 = param_3;
    pbVar10 = param_4;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_5 = *param_5 + *pbVar10;
      pbVar10 = pbVar10 + 1;
      param_5 = param_5 + 1;
    }
    if (local_c != 0) {
      do {
        bVar7 = *param_3;
        bVar1 = *pbVar10;
        param_3 = param_3 + 1;
        bVar2 = *param_4;
        param_4 = param_4 + 1;
        iVar4 = (uint)bVar1 - (uint)bVar2;
        pbVar10 = pbVar10 + 1;
        iVar6 = (uint)bVar7 - (uint)bVar2;
        local_10 = iVar4;
        if (iVar4 < 0) {
          local_10 = -iVar4;
        }
        iVar9 = iVar6;
        if (iVar6 < 0) {
          iVar9 = -iVar6;
        }
        iVar4 = iVar4 + iVar6;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (((iVar9 < local_10) || (iVar4 < local_10)) && (bVar7 = bVar2, iVar9 <= iVar4)) {
          bVar7 = bVar1;
        }
        *param_5 = *param_5 + bVar7;
        param_5 = param_5 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      return;
    }
    break;
  default:
    FUN_004451d0(param_1,"Ignoring bad adaptive filter type");
    *param_3 = 0;
  }
  return;
}


// Address: 0x00448fc0
// Name: FUN_00448fc0
// Category: Utility


byte * __cdecl FUN_00448fc0(int *param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  byte *in_EAX;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int local_10 [4];
  
  bVar2 = *(byte *)(param_1 + 2);
  if (bVar2 != 3) {
    iVar10 = *param_1;
    if ((bVar2 & 2) == 0) {
      local_10[0] = (uint)*(byte *)((int)param_1 + 9) - (uint)param_3[3];
      uVar4 = 1;
    }
    else {
      uVar4 = (uint)*(byte *)((int)param_1 + 9);
      local_10[0] = uVar4 - *param_3;
      local_10[1] = uVar4 - param_3[1];
      local_10[2] = uVar4 - param_3[2];
      uVar4 = 3;
    }
    bVar1 = false;
    if ((bVar2 & 4) != 0) {
      local_10[uVar4] = (uint)*(byte *)((int)param_1 + 9) - (uint)param_3[4];
      uVar4 = uVar4 + 1;
    }
    in_EAX = (byte *)0x0;
    if (uVar4 != 0) {
      do {
        if (local_10[(int)in_EAX] < 1) {
          local_10[(int)in_EAX] = 0;
        }
        else {
          bVar1 = true;
        }
        in_EAX = in_EAX + 1;
      } while ((int)in_EAX < (int)uVar4);
      if (bVar1) {
        bVar2 = *(byte *)((int)param_1 + 9);
        in_EAX = (byte *)(bVar2 - 2);
        if (in_EAX < (byte *)0xf) {
          in_EAX = (byte *)(uint)*(byte *)((int)&PTR_caseD_3_00449180 + bVar2 + 2);
          switch(bVar2) {
          case 2:
            iVar10 = param_1[1];
            in_EAX = param_2;
            if (iVar10 != 0) {
              do {
                *param_2 = *param_2 >> 1 & 0x55;
                param_2 = param_2 + 1;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
              return param_2;
            }
            break;
          case 4:
            iVar10 = param_1[1];
            bVar6 = (byte)local_10[0];
            uVar4 = 0xf0 >> (bVar6 & 0x1f) & 0xfffffff0;
            bVar2 = (byte)uVar4 | (byte)(0xf >> (bVar6 & 0x1f));
            in_EAX = (byte *)CONCAT31((int3)(uVar4 >> 8),bVar2);
            if (iVar10 != 0) {
              do {
                iVar10 = iVar10 + -1;
                *param_2 = *param_2 >> (bVar6 & 0x1f) & bVar2;
                param_2 = param_2 + 1;
              } while (iVar10 != 0);
              return in_EAX;
            }
            break;
          case 8:
            uVar9 = iVar10 * uVar4;
            uVar8 = 0;
            if (uVar9 != 0) {
              do {
                pbVar5 = (byte *)(uVar8 / uVar4);
                uVar7 = uVar8 % uVar4;
                uVar8 = uVar8 + 1;
                *param_2 = *param_2 >> (*(byte *)(local_10 + uVar7) & 0x1f);
                param_2 = param_2 + 1;
              } while (uVar8 < uVar9);
              return pbVar5;
            }
            break;
          case 0x10:
            uVar9 = iVar10 * uVar4;
            uVar8 = 0;
            if (uVar9 != 0) {
              do {
                uVar7 = uVar8 % uVar4;
                uVar8 = uVar8 + 1;
                uVar3 = (ushort)((ushort)*param_2 * 0x100 + (ushort)param_2[1]) >>
                        ((byte)(short)local_10[uVar7] & 0x1f);
                *param_2 = (byte)(uVar3 >> 8);
                param_2[1] = (byte)uVar3;
                in_EAX = (byte *)(uint)uVar3;
                param_2 = param_2 + 2;
              } while (uVar8 < uVar9);
            }
          }
        }
      }
    }
  }
  return in_EAX;
}


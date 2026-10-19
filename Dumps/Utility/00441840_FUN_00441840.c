// Address: 0x00441840
// Name: FUN_00441840
// Category: Utility


void __thiscall FUN_00441840(void *this,int *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_4;
  
  iVar2 = *(int *)(*(int *)((int)this + 0x1a8) + 0x18);
  local_14 = *param_1;
  iVar6 = param_1[4];
  local_4 = param_1[5];
  local_1c = param_1[2];
  local_18 = param_1[1];
  local_10 = param_1[3];
  iVar8 = local_14;
  if (local_14 < local_18) {
    do {
      if (local_1c <= local_10) {
        psVar3 = (short *)(*(int *)(iVar2 + iVar8 * 4) + (local_1c * 0x20 + iVar6) * 2);
        iVar5 = iVar6;
        iVar7 = local_1c;
        psVar4 = psVar3;
        do {
          for (; iVar5 <= local_4; iVar5 = iVar5 + 1) {
            sVar1 = *psVar3;
            psVar3 = psVar3 + 1;
            if (sVar1 != 0) {
              *param_1 = iVar8;
              local_14 = iVar8;
              goto LAB_004418fb;
            }
          }
          iVar7 = iVar7 + 1;
          psVar3 = psVar4 + 0x20;
          iVar5 = iVar6;
          psVar4 = psVar3;
        } while (iVar7 <= local_10);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= local_18);
LAB_004418fb:
    iVar8 = local_18;
    if (local_14 < local_18) {
      do {
        if (local_1c <= local_10) {
          psVar3 = (short *)(*(int *)(iVar2 + iVar8 * 4) + (local_1c * 0x20 + iVar6) * 2);
          iVar5 = iVar6;
          iVar7 = local_1c;
          psVar4 = psVar3;
          do {
            for (; iVar5 <= local_4; iVar5 = iVar5 + 1) {
              sVar1 = *psVar3;
              psVar3 = psVar3 + 1;
              if (sVar1 != 0) {
                param_1[1] = iVar8;
                local_18 = iVar8;
                goto LAB_0044197e;
              }
            }
            iVar7 = iVar7 + 1;
            psVar3 = psVar4 + 0x20;
            iVar5 = iVar6;
            psVar4 = psVar3;
          } while (iVar7 <= local_10);
        }
        iVar8 = iVar8 + -1;
      } while (local_14 <= iVar8);
    }
  }
LAB_0044197e:
  if (local_1c < local_10) {
    iVar8 = (local_1c * 0x20 + iVar6) * 2;
    iVar5 = local_14;
    local_c = local_1c;
    do {
      for (; iVar5 <= local_18; iVar5 = iVar5 + 1) {
        psVar3 = (short *)(*(int *)(iVar2 + iVar5 * 4) + iVar8);
        for (iVar7 = iVar6; iVar7 <= local_4; iVar7 = iVar7 + 1) {
          sVar1 = *psVar3;
          psVar3 = psVar3 + 1;
          if (sVar1 != 0) {
            local_1c = local_c;
            param_1[2] = local_c;
            goto LAB_004419f8;
          }
        }
      }
      local_c = local_c + 1;
      iVar8 = iVar8 + 0x40;
      iVar5 = local_14;
    } while (local_c <= local_10);
LAB_004419f8:
    if (local_1c < local_10) {
      iVar8 = (local_10 * 0x20 + iVar6) * 2;
      iVar5 = local_14;
      local_c = local_10;
      do {
        for (; iVar5 <= local_18; iVar5 = iVar5 + 1) {
          psVar3 = (short *)(*(int *)(iVar2 + iVar5 * 4) + iVar8);
          for (iVar7 = iVar6; iVar7 <= local_4; iVar7 = iVar7 + 1) {
            sVar1 = *psVar3;
            psVar3 = psVar3 + 1;
            if (sVar1 != 0) {
              local_10 = local_c;
              param_1[3] = local_c;
              goto LAB_00441a70;
            }
          }
        }
        local_c = local_c + -1;
        iVar8 = iVar8 + -0x40;
        iVar5 = local_14;
      } while (local_1c <= local_c);
    }
  }
LAB_00441a70:
  iVar8 = iVar6;
  if (iVar6 < local_4) {
    do {
      if (local_14 <= local_18) {
        iVar5 = local_14;
        do {
          psVar3 = (short *)(*(int *)(iVar2 + iVar5 * 4) + (local_1c * 0x20 + iVar8) * 2);
          for (iVar7 = local_1c; iVar7 <= local_10; iVar7 = iVar7 + 1) {
            if (*psVar3 != 0) {
              param_1[4] = iVar8;
              iVar6 = iVar8;
              goto LAB_00441aed;
            }
            psVar3 = psVar3 + 0x20;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 <= local_18);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= local_4);
LAB_00441aed:
    iVar8 = local_4;
    if (iVar6 < local_4) {
      do {
        if (local_14 <= local_18) {
          iVar5 = local_14;
          do {
            psVar3 = (short *)(*(int *)(iVar2 + iVar5 * 4) + (local_1c * 0x20 + iVar8) * 2);
            for (iVar7 = local_1c; iVar7 <= local_10; iVar7 = iVar7 + 1) {
              if (*psVar3 != 0) {
                param_1[5] = iVar8;
                local_4 = iVar8;
                goto LAB_00441b6d;
              }
              psVar3 = psVar3 + 0x20;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 <= local_18);
        }
        iVar8 = iVar8 + -1;
      } while (iVar6 <= iVar8);
    }
  }
LAB_00441b6d:
  iVar8 = (local_4 - iVar6) * 8;
  iVar5 = (local_10 - local_1c) * 0xc;
  iVar7 = (local_18 - local_14) * 0x10;
  param_1[6] = iVar8 * iVar8 + iVar5 * iVar5 + iVar7 * iVar7;
  iVar8 = 0;
  local_c = local_14;
  if (local_14 <= local_18) {
    do {
      if (local_1c <= local_10) {
        local_14 = (local_10 - local_1c) + 1;
        psVar3 = (short *)(*(int *)(iVar2 + local_c * 4) + (local_1c * 0x20 + iVar6) * 2);
        do {
          if (iVar6 <= local_4) {
            iVar5 = (local_4 - iVar6) + 1;
            psVar4 = psVar3;
            do {
              if (*psVar4 != 0) {
                iVar8 = iVar8 + 1;
              }
              psVar4 = psVar4 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          psVar3 = psVar3 + 0x20;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      local_c = local_c + 1;
    } while (local_c <= local_18);
    param_1[7] = iVar8;
    return;
  }
  param_1[7] = 0;
  return;
}


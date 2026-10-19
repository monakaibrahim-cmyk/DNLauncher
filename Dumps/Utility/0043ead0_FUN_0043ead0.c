// Address: 0x0043ead0
// Name: FUN_0043ead0
// Category: Utility


int __cdecl FUN_0043ead0(int param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 in_EAX;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int local_3c;
  int *local_30;
  int local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x198);
  local_24[3] = in_EAX;
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar1 + 0x24) == 0)) &&
     (local_24[3] = FUN_0043ea50(), (char)local_24[3] == '\0')) {
    return local_24[3];
  }
  if (*(char *)(iVar1 + 8) == '\0') {
    uVar8 = *(uint *)(iVar1 + 0xc);
    iVar5 = *(int *)(iVar1 + 0x10);
    local_14 = **(undefined4 **)(param_1 + 0x18);
    local_10 = (*(undefined4 **)(param_1 + 0x18))[1];
    local_24[0] = *(int *)(iVar1 + 0x14);
    local_24[1] = *(undefined4 *)(iVar1 + 0x18);
    local_4 = param_1;
    local_24[2] = *(undefined4 *)(iVar1 + 0x1c);
    local_24[3] = *(undefined4 *)(iVar1 + 0x20);
    local_3c = 0;
    if (0 < *(int *)(param_1 + 0x140)) {
      local_30 = (int *)(param_1 + 0x144);
      piVar6 = (int *)(iVar1 + 0x70);
      do {
        puVar2 = *(undefined2 **)(param_2 + local_3c * 4);
        iVar3 = *piVar6;
        iVar9 = piVar6[-10];
        if (iVar5 < 8) {
          uVar4 = FUN_0043e830(&local_14,uVar8,iVar5,0);
          if ((char)uVar4 == '\0') goto LAB_0043eee6;
          iVar5 = local_8;
          uVar8 = local_c;
          if (7 < local_8) goto LAB_0043ebbe;
          iVar7 = 1;
LAB_0043ebe7:
          uVar4 = FUN_0043e960(&local_14,uVar8,iVar5,iVar9,iVar7);
          iVar5 = local_8;
          uVar8 = local_c;
          uVar10 = uVar4;
          if ((int)uVar4 < 0) goto LAB_0043eee6;
        }
        else {
LAB_0043ebbe:
          uVar4 = (int)uVar8 >> ((char)iVar5 - 8U & 0x1f) & 0xff;
          iVar7 = *(int *)(iVar9 + 0x90 + uVar4 * 4);
          if (iVar7 == 0) {
            iVar7 = 9;
            goto LAB_0043ebe7;
          }
          iVar5 = iVar5 - iVar7;
          uVar10 = (uint)*(byte *)(uVar4 + 0x490 + iVar9);
        }
        uVar4 = 0;
        if (uVar10 != 0) {
          if ((iVar5 < (int)uVar10) &&
             (uVar4 = FUN_0043e830(&local_14,uVar8,iVar5,uVar10), iVar5 = local_8, uVar8 = local_c,
             (char)uVar4 == '\0')) {
LAB_0043eee6:
            return uVar4 & 0xffffff00;
          }
          iVar5 = iVar5 - uVar10;
          uVar4 = (1 << ((byte)uVar10 & 0x1f)) - 1U & (int)uVar8 >> ((byte)iVar5 & 0x1f);
          if ((int)uVar4 < *(int *)(&DAT_0049e2e8 + uVar10 * 4)) {
            uVar4 = *(int *)(&DAT_0049e328 + uVar10 * 4) + uVar4;
          }
        }
        if (*(char *)(local_3c + 0x98 + iVar1) != '\0') {
          iVar9 = *local_30;
          local_24[iVar9] = local_24[iVar9] + uVar4;
          *puVar2 = (short)local_24[iVar9];
        }
        iVar9 = 1;
        if (*(char *)(local_3c + 0xa2 + iVar1) == '\0') {
          do {
            if (iVar5 < 8) {
              uVar4 = FUN_0043e830(&local_14,uVar8,iVar5,0);
              if ((char)uVar4 == '\0') goto LAB_0043eee6;
              iVar5 = local_8;
              uVar8 = local_c;
              if (7 < local_8) goto LAB_0043ede2;
              iVar7 = 1;
LAB_0043ee0b:
              uVar4 = FUN_0043e960(&local_14,uVar8,iVar5,iVar3,iVar7);
              iVar5 = local_8;
              uVar8 = local_c;
              if ((int)uVar4 < 0) goto LAB_0043eee6;
            }
            else {
LAB_0043ede2:
              uVar4 = (int)uVar8 >> ((char)iVar5 - 8U & 0x1f) & 0xff;
              iVar7 = *(int *)(iVar3 + 0x90 + uVar4 * 4);
              if (iVar7 == 0) {
                iVar7 = 9;
                goto LAB_0043ee0b;
              }
              uVar4 = (uint)*(byte *)(uVar4 + 0x490 + iVar3);
              iVar5 = iVar5 - iVar7;
            }
            iVar7 = (int)uVar4 >> 4;
            uVar10 = uVar4 & 0xf;
            if (uVar10 == 0) {
              if (iVar7 != 0xf) break;
            }
            else {
              if ((iVar5 < (int)uVar10) &&
                 (uVar4 = FUN_0043e830(&local_14,uVar8,iVar5,uVar10), iVar5 = local_8,
                 uVar8 = local_c, (char)uVar4 == '\0')) goto LAB_0043eee6;
              iVar5 = iVar5 - uVar10;
            }
            iVar9 = iVar9 + iVar7 + 1;
          } while (iVar9 < 0x40);
        }
        else {
          do {
            if (iVar5 < 8) {
              uVar4 = FUN_0043e830(&local_14,uVar8,iVar5,0);
              if ((char)uVar4 == '\0') goto LAB_0043eee6;
              iVar5 = local_8;
              uVar8 = local_c;
              if (7 < local_8) goto LAB_0043ecd2;
              iVar7 = 1;
LAB_0043ecfb:
              uVar4 = FUN_0043e960(&local_14,uVar8,iVar5,iVar3,iVar7);
              iVar5 = local_8;
              uVar8 = local_c;
              if ((int)uVar4 < 0) goto LAB_0043eee6;
            }
            else {
LAB_0043ecd2:
              uVar4 = (int)uVar8 >> ((char)iVar5 - 8U & 0x1f) & 0xff;
              iVar7 = *(int *)(iVar3 + 0x90 + uVar4 * 4);
              if (iVar7 == 0) {
                iVar7 = 9;
                goto LAB_0043ecfb;
              }
              uVar4 = (uint)*(byte *)(uVar4 + 0x490 + iVar3);
              iVar5 = iVar5 - iVar7;
            }
            iVar7 = (int)uVar4 >> 4;
            uVar10 = uVar4 & 0xf;
            if (uVar10 == 0) {
              if (iVar7 != 0xf) break;
            }
            else {
              if ((iVar5 < (int)uVar10) &&
                 (uVar4 = FUN_0043e830(&local_14,uVar8,iVar5,uVar10), iVar5 = local_8,
                 uVar8 = local_c, (char)uVar4 == '\0')) goto LAB_0043eee6;
              iVar5 = iVar5 - uVar10;
              uVar4 = (1 << (sbyte)uVar10) - 1U & (int)uVar8 >> ((byte)iVar5 & 0x1f);
              if ((int)uVar4 < *(int *)(&DAT_0049e2e8 + uVar10 * 4)) {
                uVar4 = *(int *)(&DAT_0049e328 + uVar10 * 4) + uVar4;
              }
              puVar2[*(int *)(&DAT_0049e188 + (iVar9 + iVar7) * 4)] = (short)uVar4;
            }
            iVar9 = iVar9 + iVar7 + 1;
          } while (iVar9 < 0x40);
        }
        piVar6 = piVar6 + 1;
        local_30 = local_30 + 1;
        local_3c = local_3c + 1;
      } while (local_3c < *(int *)(param_1 + 0x140));
    }
    **(undefined4 **)(param_1 + 0x18) = local_14;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = local_10;
    *(int *)(iVar1 + 0x10) = iVar5;
    *(int *)(iVar1 + 0x14) = local_24[0];
    *(int *)(iVar1 + 0x18) = local_24[1];
    *(int *)(iVar1 + 0x1c) = local_24[2];
    *(uint *)(iVar1 + 0xc) = uVar8;
    *(int *)(iVar1 + 0x20) = local_24[3];
  }
  *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
  return CONCAT31((int3)((uint)local_24[3] >> 8),1);
}


// Address: 0x0043f120
// Name: FUN_0043f120
// Category: Utility


int __cdecl FUN_0043f120(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_3c;
  int *local_38;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  int local_10 [4];
  
  uVar6 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x178);
  iVar2 = *(int *)(param_1 + 0x198);
  local_10[3] = uVar1;
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar2 + 0x28) == 0)) &&
     (local_10[3] = FUN_0043f090(), (char)local_10[3] == '\0')) {
    return local_10[3];
  }
  if (*(char *)(iVar2 + 8) == '\0') {
    local_18 = param_1;
    local_28 = **(undefined4 **)(param_1 + 0x18);
    local_24 = (*(undefined4 **)(param_1 + 0x18))[1];
    local_14 = *(undefined4 *)(iVar2 + 0x14);
    uVar7 = *(uint *)(iVar2 + 0xc);
    iVar8 = *(int *)(iVar2 + 0x10);
    local_10[0] = *(int *)(iVar2 + 0x18);
    local_10[1] = *(undefined4 *)(iVar2 + 0x1c);
    local_10[2] = *(undefined4 *)(iVar2 + 0x20);
    local_10[3] = *(undefined4 *)(iVar2 + 0x24);
    local_3c = 0;
    if (0 < *(int *)(param_1 + 0x140)) {
      local_38 = (int *)(param_1 + 0x144);
      param_1 = uVar7;
      do {
        puVar3 = *(undefined2 **)(param_2 + local_3c * 4);
        iVar4 = *local_38;
        iVar5 = *(int *)(iVar2 + 0x2c + *(int *)(*(int *)(uVar6 + 0x128 + iVar4 * 4) + 0x14) * 4);
        if (iVar8 < 8) {
          uVar7 = FUN_0043e830(&local_28,uVar7,iVar8,0);
          if ((char)uVar7 == '\0') goto LAB_0043f34d;
          param_1 = local_20;
          iVar8 = local_1c;
          uVar7 = local_20;
          if (7 < local_1c) goto LAB_0043f220;
          iVar9 = 1;
LAB_0043f249:
          uVar7 = FUN_0043e960(&local_28,uVar7,iVar8,iVar5,iVar9);
          if ((int)uVar7 < 0) goto LAB_0043f34d;
          param_1 = local_20;
          iVar8 = local_1c;
          uVar10 = uVar7;
          uVar7 = local_20;
        }
        else {
LAB_0043f220:
          uVar10 = (int)uVar7 >> ((char)iVar8 - 8U & 0x1f) & 0xff;
          iVar9 = *(int *)(iVar5 + 0x90 + uVar10 * 4);
          if (iVar9 == 0) {
            iVar9 = 9;
            goto LAB_0043f249;
          }
          uVar10 = (uint)*(byte *)(uVar10 + 0x490 + iVar5);
          iVar8 = iVar8 - iVar9;
        }
        uVar11 = 0;
        if (uVar10 != 0) {
          if (iVar8 < (int)uVar10) {
            uVar7 = FUN_0043e830(&local_28,uVar7,iVar8,uVar10);
            if ((char)uVar7 == '\0') {
LAB_0043f34d:
              return uVar7 & 0xffffff00;
            }
            param_1 = local_20;
            iVar8 = local_1c;
            uVar7 = local_20;
          }
          iVar8 = iVar8 - uVar10;
          uVar11 = (1 << ((byte)uVar10 & 0x1f)) - 1U & (int)uVar7 >> ((byte)iVar8 & 0x1f);
          uVar7 = param_1;
          if ((int)uVar11 < *(int *)(&DAT_0049e368 + uVar10 * 4)) {
            uVar11 = *(int *)(&DAT_0049e3a8 + uVar10 * 4) + uVar11;
          }
        }
        local_10[iVar4] = local_10[iVar4] + uVar11;
        local_38 = local_38 + 1;
        *puVar3 = (short)(local_10[iVar4] << ((byte)uVar1 & 0x1f));
        local_3c = local_3c + 1;
      } while (local_3c < *(int *)(uVar6 + 0x140));
    }
    **(undefined4 **)(uVar6 + 0x18) = local_28;
    *(undefined4 *)(*(int *)(uVar6 + 0x18) + 4) = local_24;
    *(undefined4 *)(iVar2 + 0x14) = local_14;
    *(int *)(iVar2 + 0x10) = iVar8;
    *(int *)(iVar2 + 0x18) = local_10[0];
    *(int *)(iVar2 + 0x1c) = local_10[1];
    *(int *)(iVar2 + 0x20) = local_10[2];
    *(uint *)(iVar2 + 0xc) = uVar7;
    *(int *)(iVar2 + 0x24) = local_10[3];
  }
  *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  return CONCAT31((int3)((uint)local_10[3] >> 8),1);
}


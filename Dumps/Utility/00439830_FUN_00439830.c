// Address: 0x00439830
// Name: FUN_00439830
// Category: Utility


void __cdecl FUN_00439830(int *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iStack_12c;
  int local_128;
  int iStack_124;
  undefined4 *local_120;
  uint uStack_11c;
  undefined4 uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  byte bStack_108;
  byte abStack_104 [256];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&iStack_12c;
  puVar1 = (undefined4 *)param_1[6];
  iVar6 = puVar1[1];
  pbVar5 = (byte *)*puVar1;
  local_120 = puVar1;
  if (iVar6 == 0) {
    cVar3 = (*(code *)puVar1[3])(param_1);
    if (cVar3 == '\0') goto LAB_00439b41;
    iVar6 = puVar1[1];
    pbVar5 = (byte *)*puVar1;
  }
  local_128 = (uint)*pbVar5 << 8;
  iVar6 = iVar6 + -1;
  pbVar5 = pbVar5 + 1;
  if (iVar6 == 0) {
    cVar3 = (*(code *)puVar1[3])(param_1);
    if (cVar3 == '\0') goto LAB_00439b41;
    iVar6 = puVar1[1];
    pbVar5 = (byte *)*puVar1;
  }
  local_128 = local_128 + (uint)*pbVar5 + -2;
  pbVar5 = pbVar5 + 1;
  iVar6 = iVar6 + -1;
  while (0x10 < local_128) {
    if (iVar6 == 0) {
      cVar3 = (*(code *)puVar1[3])(param_1);
      if (cVar3 == '\0') goto LAB_00439b41;
      iVar6 = puVar1[1];
      pbVar5 = (byte *)*puVar1;
      iStack_12c = iVar6;
    }
    uStack_11c = (uint)*pbVar5;
    *(undefined4 *)(*param_1 + 0x14) = 0x50;
    *(uint *)(*param_1 + 0x18) = uStack_11c;
    iVar6 = iVar6 + -1;
    pbVar5 = pbVar5 + 1;
    (**(code **)(*param_1 + 4))(param_1,1);
    uStack_118 = uStack_118 & 0xffffff00;
    iStack_124 = 0;
    iVar9 = 1;
    do {
      puVar1 = local_120;
      if (iVar6 == 0) {
        cVar3 = (*(code *)local_120[3])(param_1);
        if (cVar3 == '\0') goto LAB_00439b41;
        iVar6 = puVar1[1];
        pbVar5 = (byte *)*puVar1;
      }
      iStack_124 = iStack_124 + (uint)*pbVar5;
      *(byte *)((int)&uStack_118 + iVar9) = *pbVar5;
      iVar6 = iVar6 + -1;
      iVar9 = iVar9 + 1;
      pbVar5 = pbVar5 + 1;
      iStack_12c = iVar6;
    } while (iVar9 < 0x11);
    iVar9 = *param_1;
    local_128 = local_128 + -0x11;
    *(uint *)(iVar9 + 0x18) = uStack_118 >> 8 & 0xff;
    *(uint *)(iVar9 + 0x1c) = uStack_118 >> 0x10 & 0xff;
    *(uint *)(iVar9 + 0x20) = uStack_118 >> 0x18;
    *(uint *)(iVar9 + 0x24) = uStack_114 & 0xff;
    *(uint *)(iVar9 + 0x28) = uStack_114 >> 8 & 0xff;
    *(uint *)(iVar9 + 0x2c) = uStack_114 >> 0x10 & 0xff;
    *(uint *)(iVar9 + 0x30) = uStack_114 >> 0x18;
    *(uint *)(iVar9 + 0x34) = uStack_110 & 0xff;
    *(undefined4 *)(*param_1 + 0x14) = 0x56;
    (**(code **)(*param_1 + 4))(param_1,2);
    iVar9 = *param_1;
    *(uint *)(iVar9 + 0x18) = uStack_110 >> 8 & 0xff;
    *(uint *)(iVar9 + 0x1c) = uStack_110 >> 0x10 & 0xff;
    *(uint *)(iVar9 + 0x20) = uStack_110 >> 0x18;
    *(uint *)(iVar9 + 0x24) = uStack_10c & 0xff;
    *(uint *)(iVar9 + 0x28) = uStack_10c >> 8 & 0xff;
    *(uint *)(iVar9 + 0x2c) = uStack_10c >> 0x10 & 0xff;
    *(uint *)(iVar9 + 0x30) = uStack_10c >> 0x18;
    *(uint *)(iVar9 + 0x34) = (uint)bStack_108;
    *(undefined4 *)(*param_1 + 0x14) = 0x56;
    (**(code **)(*param_1 + 4))(param_1,2);
    if ((0x100 < iStack_124) || (local_128 < iStack_124)) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    iVar10 = 0;
    iVar9 = iStack_124;
    if (0 < iStack_124) {
      do {
        puVar1 = local_120;
        if (iVar6 == 0) {
          cVar3 = (*(code *)local_120[3])(param_1);
          if (cVar3 == '\0') goto LAB_00439b41;
          iVar6 = puVar1[1];
          pbVar5 = (byte *)*puVar1;
          iVar9 = iStack_124;
        }
        abStack_104[iVar10] = *pbVar5;
        iVar6 = iVar6 + -1;
        iVar10 = iVar10 + 1;
        pbVar5 = pbVar5 + 1;
        iStack_12c = iVar6;
      } while (iVar10 < iVar9);
    }
    local_128 = local_128 - iVar9;
    if ((uStack_11c & 0x10) == 0) {
      iVar6 = uStack_11c + 0x28;
      uVar4 = uStack_11c;
    }
    else {
      iVar6 = uStack_11c + 0x1c;
      uVar4 = uStack_11c - 0x10;
    }
    piVar7 = param_1 + iVar6;
    if (((int)uVar4 < 0) || (3 < (int)uVar4)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1e;
      *(uint *)(*param_1 + 0x18) = uVar4;
      (**(code **)*param_1)(param_1);
    }
    if (*piVar7 == 0) {
      iVar6 = FUN_0043bbe0((int)param_1);
      *piVar7 = iVar6;
    }
    puVar2 = (uint *)*piVar7;
    *puVar2 = uStack_118;
    puVar2[1] = uStack_114;
    puVar2[2] = uStack_110;
    puVar2[3] = uStack_10c;
    *(byte *)(puVar2 + 4) = bStack_108;
    pbVar8 = abStack_104;
    puVar11 = (undefined4 *)(*piVar7 + 0x11);
    for (iVar9 = 0x40; puVar1 = local_120, iVar6 = iStack_12c, iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      puVar11 = puVar11 + 1;
    }
  }
  if (local_128 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0xb;
    (**(code **)*param_1)(param_1);
  }
  *puVar1 = pbVar5;
  puVar1[1] = iVar6;
LAB_00439b41:
  __security_check_cookie(local_4 ^ (uint)&iStack_12c);
  return;
}


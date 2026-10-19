// Address: 0x00444910
// Name: FUN_00444910
// Category: Utility


void __cdecl FUN_00444910(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  int local_40 [7];
  int local_24;
  int local_20 [7];
  int local_4;
  
  piVar4 = *(int **)(param_2 + 0x50);
  iVar2 = *(int *)(param_1 + 0x120) + 0x80;
  psVar3 = (short *)(param_3 + 0x30);
  param_1 = 6;
  piVar8 = local_40 + 1;
  do {
    if (((param_1 != 4) && (param_1 != 2)) && (param_1 != 0)) {
      if (((psVar3[-0x10] == 0) && (*psVar3 == 0)) && ((psVar3[0x10] == 0 && (psVar3[0x20] == 0))))
      {
        iVar5 = (int)psVar3[-0x18] * *piVar4 * 4;
        piVar8[-1] = iVar5;
      }
      else {
        iVar7 = (int)psVar3[0x10] * piVar4[0x28] * 0x1b37 +
                (int)psVar3[0x20] * piVar4[0x38] * -0x1712 + (int)psVar3[-0x10] * piVar4[8] * 0x73fc
                + (int)*psVar3 * piVar4[0x18] * -0x28ba;
        iVar5 = (int)psVar3[-0x18] * *piVar4 * 0x8000;
        piVar8[-1] = iVar7 + 0x1000 + iVar5 >> 0xd;
        iVar5 = (iVar5 - iVar7) + 0x1000 >> 0xd;
      }
      piVar8[7] = iVar5;
    }
    if (((param_1 != 5) && (param_1 != 3)) && (param_1 != 1)) {
      if ((((psVar3[-0xf] == 0) && (psVar3[1] == 0)) && (psVar3[0x11] == 0)) && (psVar3[0x21] == 0))
      {
        iVar5 = (int)psVar3[-0x17] * piVar4[1] * 4;
        *piVar8 = iVar5;
      }
      else {
        iVar7 = (int)psVar3[0x11] * piVar4[0x29] * 0x1b37 +
                (int)psVar3[0x21] * piVar4[0x39] * -0x1712 + (int)psVar3[1] * piVar4[0x19] * -0x28ba
                + (int)psVar3[-0xf] * piVar4[9] * 0x73fc;
        iVar5 = (int)psVar3[-0x17] * piVar4[1] * 0x8000;
        *piVar8 = iVar7 + 0x1000 + iVar5 >> 0xd;
        iVar5 = (iVar5 - iVar7) + 0x1000 >> 0xd;
      }
      piVar8[8] = iVar5;
    }
    if (((param_1 != 6) && (param_1 != 4)) && (param_1 != 2)) {
      if (((psVar3[-0xe] == 0) && (psVar3[2] == 0)) && ((psVar3[0x12] == 0 && (psVar3[0x22] == 0))))
      {
        iVar5 = (int)psVar3[-0x16] * piVar4[2] * 4;
        piVar8[1] = iVar5;
      }
      else {
        iVar7 = (int)psVar3[0x12] * piVar4[0x2a] * 0x1b37 +
                (int)psVar3[0x22] * piVar4[0x3a] * -0x1712 + (int)psVar3[2] * piVar4[0x1a] * -0x28ba
                + (int)psVar3[-0xe] * piVar4[10] * 0x73fc;
        iVar5 = (int)psVar3[-0x16] * piVar4[2] * 0x8000;
        piVar8[1] = iVar7 + 0x1000 + iVar5 >> 0xd;
        iVar5 = (iVar5 - iVar7) + 0x1000 >> 0xd;
      }
      piVar8[9] = iVar5;
    }
    if (((param_1 != 7) && (param_1 != 5)) && (param_1 != 3)) {
      if (((psVar3[-0xd] == 0) && (psVar3[3] == 0)) && ((psVar3[0x13] == 0 && (psVar3[0x23] == 0))))
      {
        iVar5 = (int)psVar3[-0x15] * piVar4[3] * 4;
        piVar8[2] = iVar5;
      }
      else {
        iVar7 = (int)psVar3[0x13] * piVar4[0x2b] * 0x1b37 +
                (int)psVar3[0x23] * piVar4[0x3b] * -0x1712 + (int)psVar3[3] * piVar4[0x1b] * -0x28ba
                + (int)psVar3[-0xd] * piVar4[0xb] * 0x73fc;
        iVar5 = (int)psVar3[-0x15] * piVar4[3] * 0x8000;
        piVar8[2] = iVar7 + 0x1000 + iVar5 >> 0xd;
        iVar5 = (iVar5 - iVar7) + 0x1000 >> 0xd;
      }
      piVar8[10] = iVar5;
    }
    iVar5 = param_1 + -2;
    psVar3 = psVar3 + 4;
    piVar4 = piVar4 + 4;
    piVar8 = piVar8 + 4;
    bVar9 = param_1 != 2;
    param_1 = param_1 + -4;
  } while (bVar9 && -1 < iVar5);
  puVar6 = (undefined1 *)(*param_4 + param_5);
  if (((local_40[1] == 0) && (local_40[3] == 0)) && ((local_40[5] == 0 && (local_24 == 0)))) {
    uVar1 = *(undefined1 *)((local_40[0] + 0x10 >> 5 & 0x3ffU) + iVar2);
    *puVar6 = uVar1;
  }
  else {
    iVar5 = local_40[1] * 0x73fc + local_40[3] * -0x28ba + local_40[5] * 0x1b37 + local_24 * -0x1712
    ;
    *puVar6 = *(undefined1 *)((iVar5 + 0x80000 + local_40[0] * 0x8000 >> 0x14 & 0x3ffU) + iVar2);
    uVar1 = *(undefined1 *)(((local_40[0] * 0x8000 - iVar5) + 0x80000 >> 0x14 & 0x3ffU) + iVar2);
  }
  puVar6[1] = uVar1;
  puVar6 = (undefined1 *)(param_4[1] + param_5);
  if ((((local_20[1] == 0) && (local_20[3] == 0)) && (local_20[5] == 0)) && (local_4 == 0)) {
    uVar1 = *(undefined1 *)((local_20[0] + 0x10 >> 5 & 0x3ffU) + iVar2);
    *puVar6 = uVar1;
    puVar6[1] = uVar1;
    return;
  }
  iVar5 = local_20[1] * 0x73fc + local_20[5] * 0x1b37 + local_4 * -0x1712 + local_20[3] * -0x28ba;
  *puVar6 = *(undefined1 *)((iVar5 + 0x80000 + local_20[0] * 0x8000 >> 0x14 & 0x3ffU) + iVar2);
  puVar6[1] = *(undefined1 *)(((local_20[0] * 0x8000 - iVar5) + 0x80000 >> 0x14 & 0x3ffU) + iVar2);
  return;
}


// Address: 0x0043fd80
// Name: FUN_0043fd80
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0043fd80(int *param_1)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  ushort *puVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  short *psVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  code *local_14;
  int local_10;
  int local_8;
  
  iVar10 = 0;
  local_10 = 0;
  local_14 = (code *)0x0;
  local_8 = 0;
  if (0 < param_1[9]) {
    piVar11 = (int *)(param_1[0x67] + 0x2c);
    puVar12 = (undefined4 *)(param_1[0x31] + 0x24);
    do {
      switch(*puVar12) {
      case 1:
        iVar10 = 0;
        local_14 = (code *)&LAB_00444d80;
        local_10 = 0;
        break;
      case 2:
        iVar10 = 0;
        local_14 = FUN_00444910;
        local_10 = 0;
        break;
      default:
        *(undefined4 *)(*param_1 + 0x14) = 7;
        *(undefined4 *)(*param_1 + 0x18) = *puVar12;
        (**(code **)*param_1)(param_1);
        break;
      case 4:
        iVar10 = 0;
        local_14 = (code *)&LAB_004445f0;
        local_10 = 0;
        break;
      case 8:
        iVar1 = param_1[0x11];
        if (iVar1 == 0) {
          iVar10 = 0;
          local_14 = (code *)&LAB_004437a0;
          local_10 = 0;
        }
        else if (iVar1 == 1) {
          iVar10 = 1;
          local_14 = (code *)&LAB_00443cc0;
          local_10 = 1;
        }
        else if (iVar1 == 2) {
          iVar10 = 2;
          local_14 = (code *)&LAB_004440a0;
          local_10 = 2;
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x30;
          (**(code **)*param_1)(param_1);
        }
      }
      piVar11[-10] = (int)local_14;
      if (((*(char *)(puVar12 + 3) != '\0') && (*piVar11 != iVar10)) &&
         (iVar1 = puVar12[10], iVar1 != 0)) {
        *piVar11 = iVar10;
        if (iVar10 == 0) {
          iVar2 = puVar12[0xb];
          iVar6 = 0;
          do {
            *(uint *)(iVar2 + iVar6 * 4) = (uint)*(ushort *)(iVar1 + iVar6 * 2);
            iVar6 = iVar6 + 1;
          } while (iVar6 < 0x40);
        }
        else if (iVar10 == 1) {
          piVar7 = (int *)(puVar12[0xb] + 8);
          puVar5 = (ushort *)(iVar1 + 4);
          psVar9 = &DAT_0049e3ea;
          do {
            piVar7[-2] = (int)((int)psVar9[-1] * (uint)puVar5[-2] + 0x800) >> 0xc;
            piVar7[-1] = (int)((uint)puVar5[-1] * (int)*psVar9 + 0x800) >> 0xc;
            *piVar7 = (int)((int)*(short *)((int)&DAT_0049e3e8 + -iVar1 + (int)puVar5) *
                            (uint)*puVar5 + 0x800) >> 0xc;
            piVar7[1] = (int)((int)*(short *)((int)&DAT_0049e3ea + -iVar1 + (int)puVar5) *
                              (uint)puVar5[1] + 0x800) >> 0xc;
            psVar9 = psVar9 + 4;
            piVar7 = piVar7 + 4;
            puVar5 = puVar5 + 4;
            iVar10 = local_10;
          } while ((int)psVar9 < 0x49e46a);
        }
        else if (iVar10 == 2) {
          pdVar3 = (double *)&DAT_0049e468;
          puVar5 = (ushort *)(iVar1 + 4);
          pfVar8 = (float *)(puVar12[0xb] + 8);
          do {
            pdVar4 = pdVar3 + 1;
            pfVar8[-2] = (float)puVar5[-2] * (float)*pdVar3;
            pfVar8[-1] = (float)puVar5[-1] * (float)*pdVar3 * (float)DAT_0049e470;
            *pfVar8 = (float)*puVar5 * (float)*pdVar3 * (float)_DAT_0049e478;
            pfVar8[1] = (float)puVar5[1] * (float)*pdVar3 * (float)_DAT_0049e480;
            pfVar8[2] = (float)puVar5[2] * (float)*pdVar3;
            pfVar8[3] = (float)puVar5[3] * (float)*pdVar3 * (float)_DAT_0049e490;
            pfVar8[4] = (float)puVar5[4] * (float)*pdVar3 * (float)_DAT_0049e498;
            pfVar8[5] = (float)puVar5[5] * (float)*pdVar3 * (float)_DAT_0049e4a0;
            pdVar3 = pdVar4;
            puVar5 = puVar5 + 8;
            pfVar8 = pfVar8 + 8;
          } while ((int)pdVar4 < 0x49e4a8);
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x30;
          (**(code **)*param_1)(param_1);
        }
      }
      local_8 = local_8 + 1;
      piVar11 = piVar11 + 1;
      puVar12 = puVar12 + 0x15;
    } while (local_8 < param_1[9]);
  }
  return;
}


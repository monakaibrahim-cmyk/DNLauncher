// Address: 0x00437fe0
// Name: FUN_00437fe0
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00437fe0(void *this,undefined2 *param_1,undefined2 *param_2,uint param_3,char *param_4,
            uint *param_5,int param_6)

{
  undefined2 *puVar1;
  char cVar2;
  undefined2 uVar3;
  short extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 extraout_var_02;
  int iVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  byte *pbVar11;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  double *pdVar12;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  double *_Source;
  char *pcVar13;
  char *pcVar14;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar15;
  ulonglong uVar16;
  int local_28;
  longlong local_20;
  longlong local_18;
  uint uVar4;
  
  local_18 = 0;
  local_18._0_4_ = 0;
  local_20 = 0;
  local_20._0_4_ = 0;
  if (4 < param_6) {
    pcVar14 = "Maximum directory nesting exceeded (corrupt exif header)";
    for (iVar10 = 0xe; this = (void *)((int)this + 4), iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined4 *)this = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
    }
    *(char *)this = *pcVar14;
    return 0;
  }
  uVar3 = FUN_00437cb0(this,param_1);
  uVar4 = CONCAT22(extraout_var,uVar3);
  puVar1 = (undefined2 *)((int)param_2 + param_3);
  if (puVar1 < param_1 + uVar4 * 6 + 1) {
    pcVar14 = "Illegally sized directory";
    for (iVar10 = 6; this = (void *)((int)this + 4), iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined4 *)this = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
    }
    *(undefined2 *)this = *(undefined2 *)pcVar14;
    return uVar4 & 0xffffff00;
  }
  local_28 = 0;
  if (uVar4 != 0 && -1 < extraout_var) {
    do {
      puVar9 = param_1 + local_28 * 6 + 1;
      uVar3 = FUN_00437cb0(this,puVar9);
      iVar10 = CONCAT22(extraout_var_00,uVar3);
      uVar3 = FUN_00437cb0(this,puVar9 + 1);
      uVar8 = CONCAT22(extraout_var_01,uVar3);
      if (0xb < (int)(uVar8 - 1)) {
        pcVar14 = "Illegal format code in EXIF dir";
        for (iVar10 = 8; this = (void *)((int)this + 4), iVar10 != 0; iVar10 = iVar10 + -1) {
          *(undefined4 *)this = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
        }
        return uVar8 & 0xffffff00;
      }
      iVar5 = thunk_FUN_00437ce0(this,(undefined4 *)(puVar9 + 2));
      iVar5 = iVar5 * (int)(&PTR_0049ca74)[uVar8];
      _Source = (double *)(puVar9 + 4);
      fVar15 = extraout_ST0;
      if (4 < iVar5) {
        uVar6 = thunk_FUN_00437ce0(this,(undefined4 *)_Source);
        if (param_3 < uVar6 + iVar5) {
          pcVar14 = "Illegal pointer offset value in EXIF.";
          for (iVar10 = 9; this = (void *)((int)this + 4), iVar10 != 0; iVar10 = iVar10 + -1) {
            *(undefined4 *)this = *(undefined4 *)pcVar14;
            pcVar14 = pcVar14 + 4;
          }
          *(undefined2 *)this = *(undefined2 *)pcVar14;
          return uVar6 & 0xffffff00;
        }
        _Source = (double *)(uVar6 + (int)param_2);
        fVar15 = extraout_ST0_00;
      }
      if ((double *)*param_5 < (double *)(iVar5 + (int)_Source)) {
        *param_5 = (uint)(iVar5 + (int)_Source);
      }
      if (iVar10 < 0x9202) {
        if (iVar10 == 0x9201) {
          if (fVar15 == (float10)*(float *)(param_4 + 0x80)) {
            FUN_00437d40(this,_Source,uVar8);
            FUN_0047a010();
            fVar15 = (float10)FUN_0047a44c(extraout_ECX_04);
            *(float *)(param_4 + 0x80) = (float)((float10)1 / fVar15);
          }
        }
        else if (iVar10 < 0x203) {
          if (iVar10 != 0x202) {
            switch(iVar10) {
            case 0x10f:
              _strncpy(param_4 + 5,(char *)_Source,0x1f);
              break;
            case 0x110:
              _strncpy(param_4 + 0x25,(char *)_Source,0x27);
              break;
            case 0x112:
              FUN_00437d40(this,_Source,uVar8);
              uVar16 = FUN_00478f90(extraout_ECX,extraout_EDX);
              iVar5 = (int)uVar16;
              *(int *)(param_4 + 0x6c) = iVar5;
              if ((iVar5 < 1) || (8 < iVar5)) {
                pcVar13 = "Undefined rotation value";
                pcVar14 = this;
                for (iVar5 = 6; pcVar14 = pcVar14 + 4, iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar13;
                  pcVar13 = pcVar13 + 4;
                }
                *pcVar14 = *pcVar13;
                param_4[0x6c] = '\0';
                param_4[0x6d] = '\0';
                param_4[0x6e] = '\0';
                param_4[0x6f] = '\0';
              }
              break;
            case 0x11a:
              fVar15 = FUN_00437d40(this,_Source,uVar8);
              *(float *)(param_4 + 0xb4) = (float)fVar15;
              break;
            case 0x11b:
              fVar15 = FUN_00437d40(this,_Source,uVar8);
              *(float *)(param_4 + 0xb8) = (float)fVar15;
              break;
            case 0x128:
              FUN_00437d40(this,_Source,uVar8);
              uVar16 = FUN_00478f90(extraout_ECX_00,extraout_EDX_00);
              switch((int)uVar16) {
              case 1:
              case 2:
                param_4[0xbc] = '\0';
                param_4[0xbd] = '\0';
                param_4[0xbe] = -0x80;
                param_4[0xbf] = '?';
                break;
              case 3:
                *(undefined4 *)(param_4 + 0xbc) = _DAT_0049cb28;
                break;
              case 4:
                *(undefined4 *)(param_4 + 0xbc) = _DAT_0049cb24;
                break;
              case 5:
                *(undefined4 *)(param_4 + 0xbc) = _DAT_0049cb20;
              }
              break;
            case 0x201:
              fVar15 = FUN_00437d40(this,_Source,uVar8);
              local_18 = (longlong)ROUND(fVar15);
            }
            goto switchD_00438137_caseD_111;
          }
          fVar15 = FUN_00437d40(this,_Source,uVar8);
          local_20 = (longlong)ROUND(fVar15);
        }
        else if (iVar10 < 0x8828) {
          if (iVar10 == 0x8827) {
            FUN_00437d40(this,_Source,uVar8);
            uVar16 = FUN_00478f90(extraout_ECX_02,extraout_EDX_02);
            iVar10 = (int)uVar16;
            *(int *)(param_4 + 0xa0) = iVar10;
            if (iVar10 < 0x32) {
              *(int *)(param_4 + 0xa0) = iVar10 * 200;
            }
          }
          else if (iVar10 == 0x829a) {
            fVar15 = FUN_00437d40(this,_Source,uVar8);
            *(float *)(param_4 + 0x80) = (float)fVar15;
          }
          else if (iVar10 == 0x829d) {
            fVar15 = FUN_00437d40(this,_Source,uVar8);
            *(float *)(param_4 + 0x84) = (float)fVar15;
          }
          else {
            if (iVar10 != 0x8822) goto switchD_00438137_caseD_111;
            FUN_00437d40(this,_Source,uVar8);
            uVar16 = FUN_00478f90(extraout_ECX_01,extraout_EDX_01);
            *(int *)(param_4 + 0x9c) = (int)uVar16;
          }
        }
        else if (iVar10 == 0x9000) {
          _strncpy(param_4,(char *)_Source,4);
        }
        else if (iVar10 == 0x9003) {
          _strncpy(param_4 + 0x4d,(char *)_Source,0x13);
        }
        else {
          if (iVar10 != 0x9102) goto switchD_00438137_caseD_111;
          FUN_00437d40(this,_Source,uVar8);
          uVar16 = FUN_00478f90(extraout_ECX_03,extraout_EDX_03);
          *(int *)(param_4 + 0xa4) = (int)uVar16;
        }
      }
      else if (iVar10 < 0xa004) {
        if (iVar10 < 0xa002) {
          switch(iVar10) {
          case 0x9202:
          case 0x9205:
            if (fVar15 == (float10)*(float *)(param_4 + 0x84)) {
              FUN_00437d40(this,_Source,uVar8);
              FUN_0047a010();
              fVar15 = (float10)FUN_0047a44c(extraout_ECX_05);
              *(float *)(param_4 + 0x84) = (float)fVar15;
            }
            break;
          case 0x9203:
            fVar15 = FUN_00437d40(this,_Source,uVar8);
            *(float *)(param_4 + 0xc0) = (float)fVar15;
            break;
          case 0x9204:
            fVar15 = FUN_00437d40(this,_Source,uVar8);
            *(float *)(param_4 + 0x90) = (float)fVar15;
            break;
          case 0x9206:
            fVar15 = FUN_00437d40(this,_Source,uVar8);
            *(float *)(param_4 + 0x88) = (float)fVar15;
            break;
          case 0x9207:
            FUN_00437d40(this,_Source,uVar8);
            uVar16 = FUN_00478f90(extraout_ECX_08,extraout_EDX_06);
            *(int *)(param_4 + 0x98) = (int)uVar16;
            break;
          case 0x9208:
            FUN_00437d40(this,_Source,uVar8);
            uVar16 = FUN_00478f90(extraout_ECX_07,extraout_EDX_05);
            *(int *)(param_4 + 0x94) = (int)uVar16;
            break;
          case 0x9209:
            FUN_00437d40(this,_Source,uVar8);
            uVar16 = FUN_00478f90(extraout_ECX_06,extraout_EDX_04);
            *(uint *)(param_4 + 0x78) = (uint)((uVar16 & 7) != 0);
            break;
          case 0x920a:
            fVar15 = FUN_00437d40(this,_Source,uVar8);
            *(float *)(param_4 + 0x7c) = (float)fVar15;
            break;
          default:
            break;
          case 0x9286:
            iVar5 = iVar5 + -1;
            cVar2 = *(char *)(iVar5 + (int)_Source);
            while ((cVar2 == ' ' && (*(undefined1 *)(iVar5 + (int)_Source) = 0, iVar5 != 0))) {
              iVar5 = iVar5 + -1;
              cVar2 = *(char *)(iVar5 + (int)_Source);
            }
            uVar8 = 5;
            pbVar11 = (byte *)&DAT_0049cb0c;
            pdVar12 = _Source;
            do {
              if (*(int *)pdVar12 != *(int *)pbVar11) goto LAB_00438448;
              uVar8 = uVar8 - 4;
              pbVar11 = pbVar11 + 4;
              pdVar12 = (double *)((int)pdVar12 + 4);
            } while (3 < uVar8);
            if (uVar8 == 0) {
LAB_004384ad:
              iVar7 = 0;
            }
            else {
LAB_00438448:
              iVar5 = (uint)*(byte *)pdVar12 - (uint)*pbVar11;
              if (iVar5 == 0) {
                if (uVar8 == 1) goto LAB_004384ad;
                iVar5 = (uint)*(byte *)((int)pdVar12 + 1) - (uint)pbVar11[1];
                if (iVar5 == 0) {
                  if (uVar8 == 2) goto LAB_004384ad;
                  iVar5 = (uint)*(byte *)((int)pdVar12 + 2) - (uint)pbVar11[2];
                  if (iVar5 == 0) {
                    if ((uVar8 == 3) ||
                       (iVar5 = (uint)*(byte *)((int)pdVar12 + 3) - (uint)pbVar11[3], iVar5 == 0))
                    goto LAB_004384ad;
                  }
                }
              }
              iVar7 = 1;
              if (iVar5 < 1) {
                iVar7 = -1;
              }
            }
            if (iVar7 == 0) {
              iVar5 = 5;
              do {
                if ((*(char *)(iVar5 + (int)_Source) != '\0') &&
                   (*(char *)(iVar5 + (int)_Source) != ' ')) {
                  _strncpy(param_4 + 0xc4,(char *)(iVar5 + (int)_Source),199);
                  break;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < 10);
            }
            else {
              _strncpy(param_4 + 0xc4,(char *)_Source,199);
            }
          }
        }
        else {
          FUN_00437d40(this,_Source,uVar8);
          uVar16 = FUN_00478f90(extraout_ECX_09,extraout_EDX_07);
          if (*(int *)((int)this + 0x104) < (int)uVar16) {
            *(int *)((int)this + 0x104) = (int)uVar16;
          }
        }
switchD_00438137_caseD_111:
        if (((iVar10 == 0x8769) || (iVar10 == 0xa005)) &&
           (uVar8 = thunk_FUN_00437ce0(this,(undefined4 *)_Source), 8 < uVar8)) {
          puVar9 = (undefined2 *)(uVar8 + (int)param_2);
          if ((puVar9 < param_2) || (puVar1 < puVar9)) goto LAB_004387ab;
          FUN_00437fe0(this,puVar9,param_2,param_3,param_4,param_5,param_6 + 1);
        }
      }
      else if (iVar10 == 0xa20e) {
        fVar15 = FUN_00437d40(this,_Source,uVar8);
        *(float *)(param_4 + 0xa8) = (float)fVar15;
      }
      else if (iVar10 == 0xa20f) {
        fVar15 = FUN_00437d40(this,_Source,uVar8);
        *(float *)(param_4 + 0xac) = (float)fVar15;
      }
      else {
        if (iVar10 != 0xa210) goto switchD_00438137_caseD_111;
        FUN_00437d40(this,_Source,uVar8);
        uVar16 = FUN_00478f90(extraout_ECX_10,extraout_EDX_08);
        switch((int)uVar16) {
        case 1:
        case 2:
          param_4[0xb0] = '\0';
          param_4[0xb1] = '\0';
          param_4[0xb2] = -0x80;
          param_4[0xb3] = '?';
          break;
        case 3:
          *(undefined4 *)(param_4 + 0xb0) = _DAT_0049cb28;
          break;
        case 4:
          *(undefined4 *)(param_4 + 0xb0) = _DAT_0049cb24;
          break;
        case 5:
          *(undefined4 *)(param_4 + 0xb0) = _DAT_0049cb20;
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < (int)uVar4);
  }
  uVar3 = FUN_00437cb0(this,param_1 + uVar4 * 6 + 1);
  if (CONCAT22(extraout_var_02,uVar3) == 0) {
    iVar10 = 0;
  }
  else {
    puVar9 = (undefined2 *)(CONCAT22(extraout_var_02,uVar3) + (int)param_2);
    if ((puVar9 < param_2) || (puVar1 < puVar9)) {
LAB_004387ab:
      pcVar14 = "Illegal subdirectory link";
      for (iVar10 = 6; this = (void *)((int)this + 4), iVar10 != 0; iVar10 = iVar10 + -1) {
        *(undefined4 *)this = *(undefined4 *)pcVar14;
        pcVar14 = pcVar14 + 4;
      }
      *(undefined2 *)this = *(undefined2 *)pcVar14;
      return (uint)puVar9 & 0xffffff00;
    }
    iVar10 = FUN_00437fe0(this,puVar9,param_2,param_3,param_4,param_5,param_6 + 1);
  }
  if ((((int)local_20 != 0) && (iVar10 = (int)local_18, (int)local_18 != 0)) &&
     ((uint)((int)local_20 + (int)local_18) <= param_3)) {
    iVar10 = (int)local_18 + (int)param_2;
    *(int *)(param_4 + 0x4ac) = iVar10;
    *(int *)(param_4 + 0x4b0) = (int)local_20;
  }
  return CONCAT31((int3)((uint)iVar10 >> 8),1);
}


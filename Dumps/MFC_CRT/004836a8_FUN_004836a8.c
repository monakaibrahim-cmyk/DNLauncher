// Address: 0x004836a8
// Name: FUN_004836a8
// Category: MFC_CRT


/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_004836a8(FILE *param_1,byte *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  byte bVar1;
  wchar_t _WCh;
  short *psVar2;
  int *piVar3;
  DWORD *pDVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined3 extraout_var;
  int iVar8;
  code *pcVar9;
  errno_t eVar10;
  int extraout_ECX;
  uint uVar11;
  byte *pbVar12;
  size_t sVar13;
  wchar_t *pwVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  wchar_t *pwVar18;
  undefined4 uVar19;
  localeinfo_struct *plVar20;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  int local_270;
  int local_26c [2];
  size_t local_264;
  localeinfo_struct local_260;
  int local_258;
  char local_254;
  wchar_t *local_250;
  int local_24c;
  int local_248;
  byte *local_244;
  int local_240;
  int local_23c;
  int local_238;
  undefined1 local_234;
  char local_233;
  int local_230;
  FILE *local_22c;
  wchar_t *local_228;
  size_t local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [10];
  undefined1 local_1fc [491];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_1fc;
  local_22c = param_1;
  local_228 = param_4;
  local_248 = 0;
  local_214 = 0;
  local_23c = 0;
  local_21c = 0;
  local_238 = 0;
  local_24c = 0;
  local_240 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_260,param_3);
  if (local_22c != (FILE *)0x0) {
    if ((local_22c->_flag & 0x40) == 0) {
      iVar5 = __fileno(local_22c);
      if ((iVar5 == -1) || (iVar5 = __fileno(local_22c), iVar5 == -2)) {
        puVar7 = &DAT_004c3d70;
      }
      else {
        iVar5 = __fileno(local_22c);
        uVar6 = __fileno(local_22c);
        puVar7 = (undefined *)((uVar6 & 0x1f) * 0x40 + (&DAT_004cc260)[iVar5 >> 5]);
      }
      if ((puVar7[0x24] & 0x7f) == 0) {
        iVar5 = __fileno(local_22c);
        if ((iVar5 == -1) || (iVar5 = __fileno(local_22c), iVar5 == -2)) {
          puVar7 = &DAT_004c3d70;
        }
        else {
          iVar5 = __fileno(local_22c);
          uVar6 = __fileno(local_22c);
          puVar7 = (undefined *)((uVar6 & 0x1f) * 0x40 + (&DAT_004cc260)[iVar5 >> 5]);
        }
        if ((puVar7[0x24] & 0x80) == 0) goto LAB_004837e6;
      }
    }
    else {
LAB_004837e6:
      if (param_2 != (byte *)0x0) {
        local_215 = *param_2;
        local_230 = 0;
        local_224 = 0;
        local_250 = (wchar_t *)0x0;
        iVar5 = 0;
        while ((local_215 != 0 && (pbVar12 = param_2 + 1, local_244 = pbVar12, -1 < local_230))) {
          if ((byte)(local_215 - 0x20) < 0x59) {
            uVar6 = *(byte *)((int)L"UNICODE" + (char)local_215 + 0xc) & 0xf;
          }
          else {
            uVar6 = 0;
          }
          local_270 = (int)(char)(&DAT_004a5a70)[uVar6 * 8 + iVar5] >> 4;
          switch(local_270) {
          case 0:
switchD_0048384a_caseD_0:
            local_240 = 0;
            iVar5 = __isleadbyte_l((uint)local_215,&local_260);
            if (iVar5 != 0) {
              write_char();
              local_244 = param_2 + 2;
              if (*pbVar12 == 0) {
LAB_00483fdd:
                pDVar4 = FUN_0047b849();
                *pDVar4 = 0x16;
                goto LAB_00483718;
              }
            }
            write_char();
            break;
          case 1:
            local_21c = -1;
            local_274 = 0;
            local_24c = 0;
            local_23c = 0;
            local_238 = 0;
            local_214 = 0;
            local_240 = 0;
            break;
          case 2:
            if (local_215 == 0x20) {
              local_214 = local_214 | 2;
            }
            else if (local_215 == 0x23) {
              local_214 = local_214 | 0x80;
            }
            else if (local_215 == 0x2b) {
              local_214 = local_214 | 1;
            }
            else if (local_215 == 0x2d) {
              local_214 = local_214 | 4;
            }
            else if (local_215 == 0x30) {
              local_214 = local_214 | 8;
            }
            break;
          case 3:
            if (local_215 == 0x2a) {
              local_228 = param_4 + 2;
              local_23c = *(int *)param_4;
              if (local_23c < 0) {
                local_214 = local_214 | 4;
                local_23c = -local_23c;
              }
            }
            else {
              local_23c = local_23c * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 4:
            local_21c = 0;
            break;
          case 5:
            if (local_215 == 0x2a) {
              local_228 = param_4 + 2;
              local_21c = *(int *)param_4;
              if (local_21c < 0) {
                local_21c = -1;
              }
            }
            else {
              local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 6:
            if (local_215 == 0x49) {
              bVar1 = *pbVar12;
              if ((bVar1 == 0x36) && (param_2[2] == 0x34)) {
                local_214 = local_214 | 0x8000;
                local_244 = param_2 + 3;
              }
              else if ((bVar1 == 0x33) && (param_2[2] == 0x32)) {
                local_214 = local_214 & 0xffff7fff;
                local_244 = param_2 + 3;
              }
              else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                       ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
                local_270 = 0;
                goto switchD_0048384a_caseD_0;
              }
            }
            else if (local_215 == 0x68) {
              local_214 = local_214 | 0x20;
            }
            else if (local_215 == 0x6c) {
              if (*pbVar12 == 0x6c) {
                local_214 = local_214 | 0x1000;
                local_244 = param_2 + 2;
              }
              else {
                local_214 = local_214 | 0x10;
              }
            }
            else if (local_215 == 0x77) {
              local_214 = local_214 | 0x800;
            }
            break;
          case 7:
            if ((char)local_215 < 'e') {
              if (local_215 == 100) {
LAB_00483c29:
                local_214 = local_214 | 0x40;
LAB_00483c2d:
                local_224 = 10;
LAB_00483c34:
                if (((short)local_214 < 0) || ((local_214 & 0x1000) != 0)) {
                  uVar6 = *(uint *)param_4;
                  uVar11 = *(uint *)(param_4 + 2);
                  local_228 = param_4 + 4;
                }
                else {
                  local_228 = param_4 + 2;
                  if ((local_214 & 0x20) == 0) {
                    uVar6 = *(uint *)param_4;
                    if ((local_214 & 0x40) == 0) {
                      uVar11 = 0;
                    }
                    else {
                      uVar11 = (int)uVar6 >> 0x1f;
                    }
                  }
                  else {
                    if ((local_214 & 0x40) == 0) {
                      uVar6 = (uint)(ushort)*param_4;
                    }
                    else {
                      uVar6 = (uint)*param_4;
                    }
                    uVar11 = (int)uVar6 >> 0x1f;
                  }
                }
                if ((((local_214 & 0x40) != 0) && ((int)uVar11 < 1)) && ((int)uVar11 < 0)) {
                  bVar15 = uVar6 != 0;
                  uVar6 = -uVar6;
                  uVar11 = -(uVar11 + bVar15);
                  local_214 = local_214 | 0x100;
                }
                uVar16 = CONCAT44(uVar11,uVar6);
                if ((local_214 & 0x9000) == 0) {
                  uVar11 = 0;
                }
                if (local_21c < 0) {
                  local_21c = 1;
                }
                else {
                  local_214 = local_214 & 0xfffffff7;
                  if (0x200 < local_21c) {
                    local_21c = 0x200;
                  }
                }
                if (uVar6 == 0 && uVar11 == 0) {
                  local_238 = 0;
                }
                pwVar14 = &local_11;
                while( true ) {
                  uVar6 = uVar11;
                  iVar5 = local_21c + -1;
                  if ((local_21c < 1) && ((uint)uVar16 == 0 && uVar6 == 0)) break;
                  local_21c = iVar5;
                  uVar16 = __aulldvrm((uint)uVar16,uVar6,local_224,(int)local_224 >> 0x1f);
                  iVar5 = extraout_ECX + 0x30;
                  if (0x39 < iVar5) {
                    iVar5 = iVar5 + local_248;
                  }
                  *(char *)pwVar14 = (char)iVar5;
                  pwVar14 = (wchar_t *)((int)pwVar14 + -1);
                  uVar11 = (uint)((ulonglong)uVar16 >> 0x20);
                  local_264 = uVar6;
                }
                local_224 = (int)&local_11 + -(int)pwVar14;
                local_220 = (wchar_t *)((int)pwVar14 + 1);
                local_21c = iVar5;
                if (((local_214 & 0x200) != 0) && ((local_224 == 0 || (*(char *)local_220 != '0'))))
                {
                  *(char *)pwVar14 = '0';
                  local_224 = (int)&local_11 + -(int)pwVar14 + 1;
                  local_220 = pwVar14;
                }
              }
              else if ((char)local_215 < 'T') {
                if (local_215 == 0x53) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
                  goto LAB_00483ab2;
                }
                if (local_215 == 0x41) {
LAB_00483a5e:
                  local_215 = local_215 + 0x20;
                  local_274 = 1;
LAB_00483a6b:
                  local_214 = local_214 | 0x40;
                  local_264 = 0x200;
                  pwVar14 = local_210;
                  sVar13 = local_264;
                  pwVar18 = local_210;
                  if (local_21c < 0) {
                    local_21c = 6;
                  }
                  else if (local_21c == 0) {
                    if (local_215 == 0x67) {
                      local_21c = 1;
                    }
                  }
                  else {
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                    if (0xa3 < local_21c) {
                      sVar13 = local_21c + 0x15d;
                      local_220 = local_210;
                      local_250 = __malloc_crt(sVar13);
                      pwVar14 = local_250;
                      pwVar18 = local_250;
                      if (local_250 == (wchar_t *)0x0) {
                        local_21c = 0xa3;
                        pwVar14 = local_210;
                        sVar13 = local_264;
                        pwVar18 = local_220;
                      }
                    }
                  }
                  local_220 = pwVar18;
                  local_264 = sVar13;
                  local_27c = *(undefined4 *)param_4;
                  local_228 = param_4 + 4;
                  local_278 = *(undefined4 *)(param_4 + 2);
                  plVar20 = &local_260;
                  iVar8 = (int)(char)local_215;
                  puVar17 = &local_27c;
                  pwVar18 = pwVar14;
                  sVar13 = local_264;
                  iVar5 = local_21c;
                  uVar19 = local_274;
                  pcVar9 = (code *)FUN_0047e7dd((int)PTR_LAB_004c45f0);
                  (*pcVar9)(puVar17,pwVar18,sVar13,iVar8,iVar5,uVar19,plVar20);
                  uVar6 = local_214 & 0x80;
                  if ((uVar6 != 0) && (local_21c == 0)) {
                    plVar20 = &local_260;
                    pwVar18 = pwVar14;
                    pcVar9 = (code *)FUN_0047e7dd((int)PTR_LAB_004c45fc);
                    (*pcVar9)(pwVar18,plVar20);
                  }
                  if ((local_215 == 0x67) && (uVar6 == 0)) {
                    plVar20 = &local_260;
                    pwVar18 = pwVar14;
                    pcVar9 = (code *)FUN_0047e7dd((int)PTR_LAB_004c45f8);
                    (*pcVar9)(pwVar18,plVar20);
                  }
                  if ((char)*pwVar14 == '-') {
                    local_214 = local_214 | 0x100;
                    local_220 = (wchar_t *)((int)pwVar14 + 1);
                    pwVar14 = local_220;
                  }
LAB_00483b9f:
                  local_224 = _strlen((char *)pwVar14);
                }
                else if (local_215 == 0x43) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
LAB_00483b0f:
                  local_228 = param_4 + 2;
                  if ((local_214 & 0x810) == 0) {
                    local_210[0]._0_1_ = (char)*param_4;
                    local_224 = 1;
                  }
                  else {
                    eVar10 = _wctomb_s((int *)&local_224,(char *)local_210,0x200,*param_4);
                    if (eVar10 != 0) {
                      local_24c = 1;
                    }
                  }
                  local_220 = local_210;
                }
                else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_00483a5e;
              }
              else {
                if (local_215 == 0x58) goto LAB_00483d34;
                if (local_215 == 0x5a) {
                  psVar2 = *(short **)param_4;
                  local_228 = param_4 + 2;
                  pwVar14 = (wchar_t *)PTR_DAT_004c45d0;
                  local_220 = (wchar_t *)PTR_DAT_004c45d0;
                  if ((psVar2 == (short *)0x0) ||
                     (pwVar18 = *(wchar_t **)(psVar2 + 2), pwVar18 == (wchar_t *)0x0))
                  goto LAB_00483b9f;
                  local_224 = (size_t)*psVar2;
                  local_220 = pwVar18;
                  if ((local_214 & 0x800) == 0) {
                    local_240 = 0;
                  }
                  else {
                    local_224 = (int)local_224 / 2;
                    local_240 = 1;
                  }
                }
                else {
                  if (local_215 == 0x61) goto LAB_00483a6b;
                  if (local_215 == 99) goto LAB_00483b0f;
                }
              }
LAB_00483eac:
              if (local_24c == 0) {
                if ((local_214 & 0x40) != 0) {
                  if ((local_214 & 0x100) == 0) {
                    if ((local_214 & 1) == 0) {
                      if ((local_214 & 2) == 0) goto LAB_00483ee2;
                      local_234 = 0x20;
                    }
                    else {
                      local_234 = 0x2b;
                    }
                  }
                  else {
                    local_234 = 0x2d;
                  }
                  local_238 = 1;
                }
LAB_00483ee2:
                iVar5 = (local_23c - local_224) - local_238;
                if ((local_214 & 0xc) == 0) {
                  write_multi_char(0x20,iVar5);
                }
                write_string(local_238);
                if (((local_214 & 8) != 0) && ((local_214 & 4) == 0)) {
                  write_multi_char(0x30,iVar5);
                }
                if ((local_240 == 0) || ((int)local_224 < 1)) {
                  write_string(local_224);
                }
                else {
                  local_264 = local_224;
                  pwVar14 = local_220;
                  do {
                    _WCh = *pwVar14;
                    local_264 = local_264 - 1;
                    pwVar14 = pwVar14 + 1;
                    eVar10 = _wctomb_s(local_26c,(char *)((int)&local_11 + 1),6,_WCh);
                    if ((eVar10 != 0) || (local_26c[0] == 0)) {
                      local_230 = -1;
                      break;
                    }
                    write_string(local_26c[0]);
                  } while (local_264 != 0);
                }
                if ((-1 < local_230) && ((local_214 & 4) != 0)) {
                  write_multi_char(0x20,iVar5);
                }
              }
            }
            else {
              if ('p' < (char)local_215) {
                if (local_215 == 0x73) {
LAB_00483ab2:
                  iVar5 = local_21c;
                  if (local_21c == -1) {
                    iVar5 = 0x7fffffff;
                  }
                  local_228 = param_4 + 2;
                  local_220 = *(wchar_t **)param_4;
                  if ((local_214 & 0x810) == 0) {
                    pwVar14 = local_220;
                    if (local_220 == (wchar_t *)0x0) {
                      pwVar14 = (wchar_t *)PTR_DAT_004c45d0;
                      local_220 = (wchar_t *)PTR_DAT_004c45d0;
                    }
                    for (; (iVar5 != 0 && (iVar5 = iVar5 + -1, (char)*pwVar14 != '\0'));
                        pwVar14 = (wchar_t *)((int)pwVar14 + 1)) {
                    }
                    local_224 = (int)pwVar14 - (int)local_220;
                  }
                  else {
                    if (local_220 == (wchar_t *)0x0) {
                      local_220 = (wchar_t *)PTR_u__null__004c45d4;
                    }
                    local_240 = 1;
                    for (pwVar14 = local_220;
                        (iVar5 != 0 && (iVar5 = iVar5 + -1, *pwVar14 != L'\0'));
                        pwVar14 = pwVar14 + 1) {
                    }
                    local_224 = (int)pwVar14 - (int)local_220 >> 1;
                  }
                  goto LAB_00483eac;
                }
                if (local_215 == 0x75) goto LAB_00483c2d;
                if (local_215 != 0x78) goto LAB_00483eac;
                local_248 = 0x27;
LAB_00483d5a:
                local_224 = 0x10;
                if ((local_214 & 0x80) != 0) {
                  local_233 = (char)local_248 + 'Q';
                  local_234 = 0x30;
                  local_238 = 2;
                }
                goto LAB_00483c34;
              }
              if (local_215 == 0x70) {
                local_21c = 8;
LAB_00483d34:
                local_248 = 7;
                goto LAB_00483d5a;
              }
              if ((char)local_215 < 'e') goto LAB_00483eac;
              if ((char)local_215 < 'h') goto LAB_00483a6b;
              if (local_215 == 0x69) goto LAB_00483c29;
              if (local_215 != 0x6e) {
                if (local_215 != 0x6f) goto LAB_00483eac;
                local_224 = 8;
                if ((local_214 & 0x80) != 0) {
                  local_214 = local_214 | 0x200;
                }
                goto LAB_00483c34;
              }
              piVar3 = *(int **)param_4;
              local_228 = param_4 + 2;
              bVar15 = FUN_0047a54a();
              if (CONCAT31(extraout_var,bVar15) == 0) goto LAB_00483fdd;
              if ((local_214 & 0x20) == 0) {
                *piVar3 = local_230;
              }
              else {
                *(undefined2 *)piVar3 = (undefined2)local_230;
              }
              local_24c = 1;
            }
            if (local_250 != (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
              _free(local_250);
            }
          }
          local_215 = *local_244;
          iVar5 = local_270;
          param_2 = local_244;
          param_4 = local_228;
        }
        if (local_254 != '\0') {
          *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
        }
        goto LAB_00484004;
      }
    }
  }
  pDVar4 = FUN_0047b849();
  *pDVar4 = 0x16;
LAB_00483718:
  FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_254 != '\0') {
    *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
  }
LAB_00484004:
  __security_check_cookie(local_8 ^ (uint)local_1fc);
  return;
}


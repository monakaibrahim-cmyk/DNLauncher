// Address: 0x0048023c
// Name: FUN_0048023c
// Category: MFC_CRT


void __cdecl FUN_0048023c(int param_1,ushort *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  ushort uVar1;
  wchar_t wVar2;
  short *psVar3;
  int *piVar4;
  wchar_t *pwVar5;
  DWORD *pDVar6;
  uint uVar7;
  undefined3 extraout_var;
  code *pcVar8;
  int iVar9;
  int extraout_ECX;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  bool bVar14;
  longlong lVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  localeinfo_struct *plVar19;
  uint local_470;
  uint local_46c;
  uint local_468;
  undefined4 local_464;
  int local_460;
  localeinfo_struct local_45c;
  int local_454;
  char local_450;
  int local_44c;
  wchar_t *local_448;
  ushort *local_444;
  int local_440;
  undefined2 local_43c;
  short local_43a;
  char local_438;
  undefined1 local_437;
  int local_434;
  uint local_430;
  int local_42c;
  int local_428;
  int local_424;
  wchar_t *local_420;
  uint local_41c;
  uint local_418;
  wchar_t *local_414;
  uint local_410;
  uint local_40c;
  wchar_t local_408 [8];
  undefined1 local_3f8 [495];
  undefined2 local_209;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_3f8;
  local_434 = param_1;
  local_420 = param_4;
  local_44c = 0;
  local_40c = 0;
  local_430 = 0;
  local_410 = 0;
  local_428 = 0;
  local_440 = 0;
  local_42c = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_45c,param_3);
  if ((local_434 == 0) || (param_2 == (ushort *)0x0)) {
    pDVar6 = FUN_0047b849();
    *pDVar6 = 0x16;
LAB_004802ac:
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_450 != '\0') {
      *(uint *)(local_454 + 0x70) = *(uint *)(local_454 + 0x70) & 0xfffffffd;
    }
  }
  else {
    uVar1 = *param_2;
    local_424 = 0;
    local_418 = 0;
    local_448 = (wchar_t *)0x0;
    iVar11 = 0;
    while (local_41c = (uint)uVar1, uVar1 != 0) {
      local_444 = param_2 + 1;
      if (local_424 < 0) break;
      if ((ushort)(uVar1 - 0x20) < 0x59) {
        uVar7 = *(byte *)((int)L"UNICODE" + local_41c + 0xc) & 0xf;
      }
      else {
        uVar7 = 0;
      }
      local_460 = (int)(char)(&DAT_004a5a70)[uVar7 * 8 + iVar11] >> 4;
      switch(local_460) {
      case 0:
switchD_0048032c_caseD_0:
        local_42c = 1;
        write_char(local_41c);
        break;
      case 1:
        local_410 = 0xffffffff;
        local_464 = 0;
        local_440 = 0;
        local_430 = 0;
        local_428 = 0;
        local_40c = 0;
        local_42c = 0;
        break;
      case 2:
        if (local_41c == 0x20) {
          local_40c = local_40c | 2;
        }
        else if (local_41c == 0x23) {
          local_40c = local_40c | 0x80;
        }
        else if (local_41c == 0x2b) {
          local_40c = local_40c | 1;
        }
        else if (local_41c == 0x2d) {
          local_40c = local_40c | 4;
        }
        else if (local_41c == 0x30) {
          local_40c = local_40c | 8;
        }
        break;
      case 3:
        if (uVar1 == 0x2a) {
          local_420 = param_4 + 2;
          local_430 = *(uint *)param_4;
          if ((int)local_430 < 0) {
            local_40c = local_40c | 4;
            local_430 = -local_430;
          }
        }
        else {
          local_430 = local_41c + local_430 * 10 + -0x30;
        }
        break;
      case 4:
        local_410 = 0;
        break;
      case 5:
        if (uVar1 == 0x2a) {
          local_420 = param_4 + 2;
          local_410 = *(uint *)param_4;
          if ((int)local_410 < 0) {
            local_410 = 0xffffffff;
          }
        }
        else {
          local_410 = local_41c + local_410 * 10 + -0x30;
        }
        break;
      case 6:
        if (local_41c == 0x49) {
          uVar1 = *local_444;
          if ((uVar1 == 0x36) && (param_2[2] == 0x34)) {
            local_444 = param_2 + 3;
            local_40c = local_40c | 0x8000;
          }
          else if ((uVar1 == 0x33) && (param_2[2] == 0x32)) {
            local_444 = param_2 + 3;
            local_40c = local_40c & 0xffff7fff;
          }
          else if (((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
                   ((uVar1 != 0x75 && (uVar1 != 0x78)))) && (uVar1 != 0x58)) {
            local_460 = 0;
            goto switchD_0048032c_caseD_0;
          }
        }
        else if (local_41c == 0x68) {
          local_40c = local_40c | 0x20;
        }
        else if (local_41c == 0x6c) {
          if (*local_444 == 0x6c) {
            local_444 = param_2 + 2;
            local_40c = local_40c | 0x1000;
          }
          else {
            local_40c = local_40c | 0x10;
          }
        }
        else if (local_41c == 0x77) {
          local_40c = local_40c | 0x800;
        }
        break;
      case 7:
        if (local_41c < 0x65) {
          if (local_41c == 100) {
LAB_00480735:
            local_40c = local_40c | 0x40;
LAB_00480739:
            local_41c = 10;
LAB_00480740:
            if (((local_40c & 0x8000) == 0) && ((local_40c & 0x1000) == 0)) {
              local_420 = param_4 + 2;
              if ((local_40c & 0x20) == 0) {
                uVar7 = *(uint *)param_4;
                if ((local_40c & 0x40) == 0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (int)uVar7 >> 0x1f;
                }
              }
              else {
                if ((local_40c & 0x40) == 0) {
                  uVar7 = (uint)(ushort)*param_4;
                }
                else {
                  uVar7 = (uint)*param_4;
                }
                uVar10 = (int)uVar7 >> 0x1f;
              }
            }
            else {
              uVar7 = *(uint *)param_4;
              uVar10 = *(uint *)(param_4 + 2);
              local_420 = param_4 + 4;
            }
            if ((((local_40c & 0x40) != 0) && ((int)uVar10 < 1)) && ((int)uVar10 < 0)) {
              bVar14 = uVar7 != 0;
              uVar7 = -uVar7;
              uVar10 = -(uVar10 + bVar14);
              local_40c = local_40c | 0x100;
            }
            if ((local_40c & 0x9000) == 0) {
              uVar10 = 0;
            }
            lVar15 = CONCAT44(uVar10,uVar7);
            if ((int)local_410 < 0) {
              local_410 = 1;
            }
            else {
              local_40c = local_40c & 0xfffffff7;
              if (0x200 < (int)local_410) {
                local_410 = 0x200;
              }
            }
            if (uVar7 == 0 && uVar10 == 0) {
              local_428 = 0;
            }
            pwVar13 = &local_209;
            while( true ) {
              uVar7 = local_410 - 1;
              if (((int)local_410 < 1) && (lVar15 == 0)) break;
              local_410 = uVar7;
              lVar15 = __aulldvrm((uint)lVar15,(uint)((ulonglong)lVar15 >> 0x20),local_41c,
                                  (int)local_41c >> 0x1f);
              iVar11 = extraout_ECX + 0x30;
              if (0x39 < iVar11) {
                iVar11 = iVar11 + local_44c;
              }
              *(byte *)pwVar13 = (byte)iVar11;
              pwVar13 = (wchar_t *)((int)pwVar13 + -1);
            }
            local_418 = (int)&local_209 + -(int)pwVar13;
            local_414 = (wchar_t *)((int)pwVar13 + 1);
            local_410 = uVar7;
            if (((local_40c & 0x200) != 0) && ((local_418 == 0 || (*(byte *)local_414 != 0x30)))) {
              *(byte *)pwVar13 = 0x30;
              local_418 = (int)&local_209 + -(int)pwVar13 + 1;
              local_414 = pwVar13;
            }
          }
          else if (local_41c < 0x54) {
            if (local_41c == 0x53) {
              if ((local_40c & 0x830) == 0) {
                local_40c = local_40c | 0x20;
              }
              goto LAB_0048058b;
            }
            if (local_41c != 0x41) {
              if (local_41c == 0x43) {
                if ((local_40c & 0x830) == 0) {
                  local_40c = local_40c | 0x20;
                }
LAB_00480612:
                wVar2 = *param_4;
                local_468 = (uint)(ushort)wVar2;
                local_420 = param_4 + 2;
                local_42c = 1;
                if ((local_40c & 0x20) == 0) {
                  local_408[0] = wVar2;
                }
                else {
                  local_438 = (char)wVar2;
                  local_437 = 0;
                  iVar11 = __mbtowc_l(local_408,&local_438,
                                      (size_t)(local_45c.locinfo)->locale_name[3],&local_45c);
                  if (iVar11 < 0) {
                    local_440 = 1;
                  }
                }
                local_418 = 1;
                local_414 = local_408;
                goto LAB_004809b6;
              }
              if ((local_41c != 0x45) && (local_41c != 0x47)) goto LAB_004809b6;
            }
            local_41c = local_41c + 0x20;
            local_464 = 1;
LAB_00480542:
            local_40c = local_40c | 0x40;
            local_418 = 0x200;
            pwVar12 = local_408;
            uVar7 = local_418;
            pwVar13 = local_408;
            if ((int)local_410 < 0) {
              local_410 = 6;
            }
            else if (local_410 == 0) {
              if ((short)local_41c == 0x67) {
                local_410 = 1;
              }
            }
            else {
              if (0x200 < (int)local_410) {
                local_410 = 0x200;
              }
              if (0xa3 < (int)local_410) {
                uVar7 = local_410 + 0x15d;
                local_414 = local_408;
                local_448 = __malloc_crt(uVar7);
                pwVar12 = local_448;
                pwVar13 = local_448;
                if (local_448 == (wchar_t *)0x0) {
                  local_410 = 0xa3;
                  pwVar12 = local_408;
                  uVar7 = local_418;
                  pwVar13 = local_414;
                }
              }
            }
            local_414 = pwVar13;
            local_418 = uVar7;
            local_470 = *(uint *)param_4;
            local_420 = param_4 + 4;
            local_46c = *(uint *)(param_4 + 2);
            plVar19 = &local_45c;
            uVar17 = CONCAT44(local_410,(int)(char)local_41c);
            puVar16 = &local_470;
            pwVar13 = pwVar12;
            uVar7 = local_418;
            uVar18 = local_464;
            pcVar8 = (code *)FUN_0047e7dd((int)PTR_LAB_004c45f0);
            (*pcVar8)(puVar16,pwVar13,uVar7,uVar17,uVar18,plVar19);
            uVar7 = local_40c & 0x80;
            if ((uVar7 != 0) && (local_410 == 0)) {
              plVar19 = &local_45c;
              pwVar13 = pwVar12;
              pcVar8 = (code *)FUN_0047e7dd((int)PTR_LAB_004c45fc);
              (*pcVar8)(pwVar13,plVar19);
            }
            if (((short)local_41c == 0x67) && (uVar7 == 0)) {
              plVar19 = &local_45c;
              pwVar13 = pwVar12;
              pcVar8 = (code *)FUN_0047e7dd((int)PTR_LAB_004c45f8);
              (*pcVar8)(pwVar13,plVar19);
            }
            pwVar13 = pwVar12;
            pwVar5 = local_414;
            if ((byte)*pwVar12 == 0x2d) {
              local_40c = local_40c | 0x100;
              pwVar13 = (wchar_t *)((int)pwVar12 + 1);
              pwVar5 = (wchar_t *)((int)pwVar12 + 1);
            }
LAB_004806ab:
            local_414 = pwVar5;
            local_418 = _strlen((char *)pwVar13);
          }
          else {
            if (local_41c == 0x58) goto LAB_00480841;
            if (local_41c == 0x5a) {
              psVar3 = *(short **)param_4;
              local_420 = param_4 + 2;
              pwVar13 = (wchar_t *)PTR_DAT_004c45d0;
              pwVar5 = (wchar_t *)PTR_DAT_004c45d0;
              if ((psVar3 == (short *)0x0) ||
                 (local_414 = *(wchar_t **)(psVar3 + 2), pwVar5 = (wchar_t *)PTR_DAT_004c45d0,
                 local_414 == (wchar_t *)0x0)) goto LAB_004806ab;
              local_418 = (uint)*psVar3;
              if ((local_40c & 0x800) != 0) {
                iVar11 = local_418 - ((int)local_418 >> 0x1f);
                goto LAB_004809b1;
              }
              local_42c = 0;
            }
            else {
              if (local_41c == 0x61) goto LAB_00480542;
              if (local_41c == 99) goto LAB_00480612;
            }
          }
LAB_004809b6:
          uVar7 = local_418;
          if (local_440 == 0) {
            if ((local_40c & 0x40) != 0) {
              if ((local_40c & 0x100) == 0) {
                if ((local_40c & 1) == 0) {
                  if ((local_40c & 2) == 0) goto LAB_004809f2;
                  local_43c = 0x20;
                }
                else {
                  local_43c = 0x2b;
                }
              }
              else {
                local_43c = 0x2d;
              }
              local_428 = 1;
            }
LAB_004809f2:
            iVar11 = local_430 + (-local_428 - local_418);
            if ((local_40c & 0xc) == 0) {
              write_multi_char(0x20,iVar11);
            }
            write_string(local_428);
            if (((local_40c & 8) != 0) && ((local_40c & 4) == 0)) {
              write_multi_char(0x30,iVar11);
            }
            if ((local_42c == 0) && (0 < (int)uVar7)) {
              local_41c = uVar7;
              pwVar13 = local_414;
              do {
                local_41c = local_41c - 1;
                iVar9 = __mbtowc_l((wchar_t *)&local_468,(char *)pwVar13,
                                   (size_t)(local_45c.locinfo)->locale_name[3],&local_45c);
                if (iVar9 < 1) {
                  local_424 = -1;
                  break;
                }
                write_char(local_468);
                pwVar13 = (wchar_t *)((int)pwVar13 + iVar9);
              } while (0 < (int)local_41c);
            }
            else {
              write_string(uVar7);
            }
            if ((-1 < local_424) && ((local_40c & 4) != 0)) {
              write_multi_char(0x20,iVar11);
            }
          }
        }
        else {
          if (0x70 < local_41c) {
            if (local_41c == 0x73) {
LAB_0048058b:
              uVar7 = local_410;
              if (local_410 == 0xffffffff) {
                uVar7 = 0x7fffffff;
              }
              local_420 = param_4 + 2;
              local_414 = *(wchar_t **)param_4;
              if ((local_40c & 0x20) == 0) {
                pwVar13 = local_414;
                if (local_414 == (wchar_t *)0x0) {
                  pwVar13 = (wchar_t *)PTR_u__null__004c45d4;
                  local_414 = (wchar_t *)PTR_u__null__004c45d4;
                }
                for (; (uVar7 != 0 && (uVar7 = uVar7 - 1, *pwVar13 != L'\0')); pwVar13 = pwVar13 + 1
                    ) {
                }
                iVar11 = (int)pwVar13 - (int)local_414;
LAB_004809b1:
                local_420 = param_4 + 2;
                local_42c = 1;
                local_418 = iVar11 >> 1;
              }
              else {
                if (local_414 == (wchar_t *)0x0) {
                  local_414 = (wchar_t *)PTR_DAT_004c45d0;
                }
                local_418 = 0;
                pwVar13 = local_414;
                if (0 < (int)uVar7) {
                  do {
                    if ((byte)*pwVar13 == 0) break;
                    iVar11 = __isleadbyte_l((uint)(byte)*pwVar13,&local_45c);
                    if (iVar11 != 0) {
                      pwVar13 = (wchar_t *)((int)pwVar13 + 1);
                    }
                    pwVar13 = (wchar_t *)((int)pwVar13 + 1);
                    local_418 = local_418 + 1;
                  } while ((int)local_418 < (int)uVar7);
                }
              }
              goto LAB_004809b6;
            }
            if (local_41c == 0x75) goto LAB_00480739;
            if (local_41c != 0x78) goto LAB_004809b6;
            local_44c = 0x27;
LAB_00480867:
            local_41c = 0x10;
            if ((local_40c & 0x80) != 0) {
              local_43a = (short)local_44c + 0x51;
              local_43c = 0x30;
              local_428 = 2;
            }
            goto LAB_00480740;
          }
          if (local_41c == 0x70) {
            local_410 = 8;
LAB_00480841:
            local_44c = 7;
            goto LAB_00480867;
          }
          if (local_41c < 0x65) goto LAB_004809b6;
          if (local_41c < 0x68) goto LAB_00480542;
          if (local_41c == 0x69) goto LAB_00480735;
          if (local_41c != 0x6e) {
            if (local_41c != 0x6f) goto LAB_004809b6;
            local_41c = 8;
            if ((local_40c & 0x80) != 0) {
              local_40c = local_40c | 0x200;
            }
            goto LAB_00480740;
          }
          piVar4 = *(int **)param_4;
          local_420 = param_4 + 2;
          bVar14 = FUN_0047a54a();
          if (CONCAT31(extraout_var,bVar14) == 0) {
            pDVar6 = FUN_0047b849();
            *pDVar6 = 0x16;
            goto LAB_004802ac;
          }
          if ((local_40c & 0x20) == 0) {
            *piVar4 = local_424;
          }
          else {
            *(undefined2 *)piVar4 = (undefined2)local_424;
          }
          local_440 = 1;
        }
        if (local_448 != (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(local_448);
        }
      }
      iVar11 = local_460;
      param_2 = local_444;
      param_4 = local_420;
      uVar1 = *local_444;
    }
    if (local_450 != '\0') {
      *(uint *)(local_454 + 0x70) = *(uint *)(local_454 + 0x70) & 0xfffffffd;
    }
  }
  __security_check_cookie(local_8 ^ (uint)local_3f8);
  return;
}


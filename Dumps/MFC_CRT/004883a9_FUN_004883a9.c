// Address: 0x004883a9
// Name: FUN_004883a9
// Category: MFC_CRT


int __cdecl FUN_004883a9(uint param_1,LPWSTR param_2,LPWSTR param_3)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  WCHAR WVar4;
  DWORD *pDVar5;
  LPWSTR pWVar6;
  BOOL BVar7;
  DWORD DVar8;
  LPWSTR pWVar9;
  int iVar10;
  LPWSTR pWVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  LPWSTR local_1c;
  int local_18;
  LPWSTR local_14;
  LPWSTR local_10;
  undefined2 local_c;
  char local_6;
  char local_5;
  
  pWVar11 = param_3;
  local_18 = -2;
  if (param_1 == 0xfffffffe) {
    pDVar5 = FUN_0047b85c();
    *pDVar5 = 0;
    pDVar5 = FUN_0047b849();
    *pDVar5 = 9;
    return -1;
  }
  if (((int)param_1 < 0) || (uNumber_004cc250 <= param_1)) {
    pDVar5 = FUN_0047b85c();
    *pDVar5 = 0;
    pDVar5 = FUN_0047b849();
    *pDVar5 = 9;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  piVar1 = &DAT_004cc260 + ((int)param_1 >> 5);
  iVar12 = (param_1 & 0x1f) * 0x40;
  bVar3 = *(byte *)(*piVar1 + iVar12 + 4);
  if ((bVar3 & 1) == 0) {
    pDVar5 = FUN_0047b85c();
    *pDVar5 = 0;
    pDVar5 = FUN_0047b849();
    *pDVar5 = 9;
    goto LAB_004884b1;
  }
  if (param_3 < (LPWSTR)0x80000000) {
    local_14 = (LPWSTR)0x0;
    if ((param_3 == (LPWSTR)0x0) || ((bVar3 & 2) != 0)) {
      return 0;
    }
    if (param_2 != (LPWSTR)0x0) {
      local_6 = (char)(*(char *)(*piVar1 + iVar12 + 0x24) * '\x02') >> 1;
      if (local_6 == '\x01') {
        if ((~(uint)param_3 & 1) == 0) goto LAB_0048849f;
        pWVar9 = (LPWSTR)((uint)param_3 >> 1);
        param_3 = (LPWSTR)0x4;
        if ((LPWSTR)0x3 < pWVar9) {
          param_3 = pWVar9;
        }
        local_10 = __malloc_crt((size_t)param_3);
        if (local_10 == (LPWSTR)0x0) {
          pDVar5 = FUN_0047b849();
          *pDVar5 = 0xc;
          pDVar5 = FUN_0047b85c();
          *pDVar5 = 8;
          return -1;
        }
        uVar14 = FUN_0048e04a(param_1,0,0,1);
        iVar10 = *piVar1;
        *(int *)(iVar12 + 0x28 + iVar10) = (int)uVar14;
        *(int *)(iVar12 + 0x2c + iVar10) = (int)((ulonglong)uVar14 >> 0x20);
      }
      else {
        if (local_6 == '\x02') {
          if ((~(uint)param_3 & 1) == 0) goto LAB_0048849f;
          param_3 = (LPWSTR)((uint)param_3 & 0xfffffffe);
        }
        local_10 = param_2;
      }
      pWVar6 = local_10;
      pWVar9 = param_3;
      if ((((*(byte *)(*piVar1 + iVar12 + 4) & 0x48) != 0) &&
          (bVar3 = *(byte *)(*piVar1 + iVar12 + 5), bVar3 != 10)) && (param_3 != (LPWSTR)0x0)) {
        *(byte *)local_10 = bVar3;
        pWVar6 = (LPWSTR)((int)local_10 + 1);
        pWVar9 = (LPWSTR)((int)param_3 + -1);
        local_14 = (LPWSTR)0x1;
        *(undefined1 *)(iVar12 + 5 + *piVar1) = 10;
        if (((local_6 != '\0') && (bVar3 = *(byte *)(iVar12 + 0x25 + *piVar1), bVar3 != 10)) &&
           (pWVar9 != (LPWSTR)0x0)) {
          *(byte *)pWVar6 = bVar3;
          pWVar6 = local_10 + 1;
          pWVar9 = param_3 + -1;
          local_14 = (LPWSTR)0x2;
          *(undefined1 *)(iVar12 + 0x25 + *piVar1) = 10;
          if (((local_6 == '\x01') && (bVar3 = *(byte *)(iVar12 + 0x26 + *piVar1), bVar3 != 10)) &&
             (pWVar9 != (LPWSTR)0x0)) {
            *(byte *)pWVar6 = bVar3;
            pWVar6 = (LPWSTR)((int)local_10 + 3);
            local_14 = (LPWSTR)0x3;
            *(undefined1 *)(iVar12 + 0x26 + *piVar1) = 10;
            pWVar9 = (LPWSTR)((int)param_3 + -3);
          }
        }
      }
      param_3 = pWVar9;
      BVar7 = ReadFile(*(HANDLE *)(iVar12 + *piVar1),pWVar6,(DWORD)param_3,(LPDWORD)&local_1c,
                       (LPOVERLAPPED)0x0);
      if (((BVar7 == 0) || ((int)local_1c < 0)) || (param_3 < local_1c)) {
        DVar8 = GetLastError();
        if (DVar8 != 5) {
          if (DVar8 == 0x6d) {
            local_18 = 0;
            goto LAB_004887be;
          }
          goto LAB_004887b3;
        }
        pDVar5 = FUN_0047b849();
        *pDVar5 = 9;
        pDVar5 = FUN_0047b85c();
        *pDVar5 = 5;
      }
      else {
        local_14 = (LPWSTR)((int)local_14 + (int)local_1c);
        pbVar2 = (byte *)(iVar12 + 4 + *piVar1);
        if ((*pbVar2 & 0x80) == 0) goto LAB_004887be;
        if (local_6 == '\x02') {
          if ((local_1c == (LPWSTR)0x0) || (*local_10 != L'\n')) {
            *pbVar2 = *pbVar2 & 0xfb;
          }
          else {
            *pbVar2 = *pbVar2 | 4;
          }
          local_14 = (LPWSTR)((int)local_14 + (int)local_10);
          param_3 = local_10;
          pWVar11 = local_10;
          if (local_10 < local_14) {
            do {
              WVar4 = *param_3;
              if (WVar4 == L'\x1a') {
                pbVar2 = (byte *)(iVar12 + 4 + *piVar1);
                if ((*pbVar2 & 0x40) == 0) {
                  *pbVar2 = *pbVar2 | 2;
                }
                else {
                  *pWVar11 = *param_3;
                  pWVar11 = pWVar11 + 1;
                }
                break;
              }
              if (WVar4 == L'\r') {
                if (param_3 < local_14 + -1) {
                  if (param_3[1] == L'\n') {
                    pWVar9 = param_3 + 2;
                    goto LAB_00488861;
                  }
LAB_004888f6:
                  param_3 = param_3 + 1;
                  *pWVar11 = L'\r';
                }
                else {
                  pWVar9 = param_3 + 1;
                  BVar7 = ReadFile(*(HANDLE *)(iVar12 + *piVar1),&local_c,2,(LPDWORD)&local_1c,
                                   (LPOVERLAPPED)0x0);
                  if (((BVar7 == 0) && (DVar8 = GetLastError(), DVar8 != 0)) ||
                     (local_1c == (LPWSTR)0x0)) goto LAB_004888f6;
                  if ((*(byte *)(iVar12 + 4 + *piVar1) & 0x48) == 0) {
                    if ((pWVar11 == local_10) && (local_c == 10)) goto LAB_00488861;
                    FUN_0048e04a(param_1,-2,-1,1);
                    if (local_c == 10) goto LAB_004888fd;
                    goto LAB_004888f6;
                  }
                  if (local_c == 10) {
LAB_00488861:
                    param_3 = pWVar9;
                    *pWVar11 = L'\n';
                  }
                  else {
                    *pWVar11 = L'\r';
                    *(undefined1 *)(iVar12 + 5 + *piVar1) = (undefined1)local_c;
                    *(undefined1 *)(iVar12 + 0x25 + *piVar1) = local_c._1_1_;
                    *(undefined1 *)(iVar12 + 0x26 + *piVar1) = 10;
                    param_3 = pWVar9;
                  }
                }
                pWVar11 = pWVar11 + 1;
                pWVar9 = param_3;
              }
              else {
                *pWVar11 = WVar4;
                pWVar11 = pWVar11 + 1;
                pWVar9 = param_3 + 1;
              }
LAB_004888fd:
              param_3 = pWVar9;
            } while (param_3 < local_14);
          }
          local_14 = (LPWSTR)((int)pWVar11 - (int)local_10);
          goto LAB_004887be;
        }
        if ((local_1c == (LPWSTR)0x0) || ((byte)*local_10 != 10)) {
          *pbVar2 = *pbVar2 & 0xfb;
        }
        else {
          *pbVar2 = *pbVar2 | 4;
        }
        local_14 = (LPWSTR)((int)local_14 + (int)local_10);
        param_3 = local_10;
        pWVar9 = local_10;
        if (local_10 < local_14) {
          do {
            bVar3 = (byte)*param_3;
            if (bVar3 == 0x1a) {
              pbVar2 = (byte *)(iVar12 + 4 + *piVar1);
              if ((*pbVar2 & 0x40) == 0) {
                *pbVar2 = *pbVar2 | 2;
              }
              else {
                *(byte *)pWVar9 = (byte)*param_3;
                pWVar9 = (LPWSTR)((int)pWVar9 + 1);
              }
              break;
            }
            if (bVar3 == 0xd) {
              if (param_3 < (LPWSTR)((int)local_14 + -1)) {
                if (*(char *)((int)param_3 + 1) == '\n') {
                  pWVar6 = param_3 + 1;
                  goto LAB_0048863e;
                }
LAB_004886b5:
                param_3 = (LPWSTR)((int)param_3 + 1);
                *(byte *)pWVar9 = 0xd;
              }
              else {
                pWVar6 = (LPWSTR)((int)param_3 + 1);
                BVar7 = ReadFile(*(HANDLE *)(iVar12 + *piVar1),&local_5,1,(LPDWORD)&local_1c,
                                 (LPOVERLAPPED)0x0);
                if (((BVar7 == 0) && (DVar8 = GetLastError(), DVar8 != 0)) ||
                   (local_1c == (LPWSTR)0x0)) goto LAB_004886b5;
                if ((*(byte *)(iVar12 + 4 + *piVar1) & 0x48) == 0) {
                  if ((pWVar9 == local_10) && (local_5 == '\n')) goto LAB_0048863e;
                  FUN_0048e04a(param_1,-1,-1,1);
                  if (local_5 == '\n') goto LAB_004886b9;
                  goto LAB_004886b5;
                }
                if (local_5 == '\n') {
LAB_0048863e:
                  param_3 = pWVar6;
                  *(byte *)pWVar9 = 10;
                }
                else {
                  *(byte *)pWVar9 = 0xd;
                  *(char *)(iVar12 + 5 + *piVar1) = local_5;
                  param_3 = pWVar6;
                }
              }
              pWVar9 = (LPWSTR)((int)pWVar9 + 1);
              pWVar6 = param_3;
            }
            else {
              *(byte *)pWVar9 = bVar3;
              pWVar9 = (LPWSTR)((int)pWVar9 + 1);
              pWVar6 = (LPWSTR)((int)param_3 + 1);
            }
LAB_004886b9:
            param_3 = pWVar6;
          } while (param_3 < local_14);
        }
        local_14 = (LPWSTR)((int)pWVar9 - (int)local_10);
        if ((local_6 != '\x01') || (local_14 == (LPWSTR)0x0)) goto LAB_004887be;
        bVar3 = *(byte *)((int)pWVar9 + -1);
        if ((char)bVar3 < '\0') {
          iVar10 = 1;
          pWVar9 = (LPWSTR)((int)pWVar9 + -1);
          while ((((&DAT_004c4608)[bVar3] == '\0' && (iVar10 < 5)) && (local_10 <= pWVar9))) {
            pWVar9 = (LPWSTR)((int)pWVar9 + -1);
            bVar3 = *(byte *)pWVar9;
            iVar10 = iVar10 + 1;
          }
          if ((char)(&DAT_004c4608)[(byte)*pWVar9] == 0) {
            pDVar5 = FUN_0047b849();
            *pDVar5 = 0x2a;
            goto LAB_004887ba;
          }
          if ((char)(&DAT_004c4608)[(byte)*pWVar9] + 1 == iVar10) {
            pWVar9 = (LPWSTR)((int)pWVar9 + iVar10);
          }
          else if ((*(byte *)(*piVar1 + iVar12 + 4) & 0x48) == 0) {
            FUN_0048e04a(param_1,-iVar10,-iVar10 >> 0x1f,1);
          }
          else {
            pWVar6 = (LPWSTR)((int)pWVar9 + 1);
            *(byte *)(*piVar1 + iVar12 + 5) = (byte)*pWVar9;
            if (1 < iVar10) {
              *(byte *)(iVar12 + 0x25 + *piVar1) = *(byte *)pWVar6;
              pWVar6 = pWVar9 + 1;
            }
            if (iVar10 == 3) {
              *(byte *)(iVar12 + 0x26 + *piVar1) = (byte)*pWVar6;
              pWVar6 = (LPWSTR)((int)pWVar6 + 1);
            }
            pWVar9 = (LPWSTR)((int)pWVar6 - iVar10);
          }
        }
        iVar10 = (int)pWVar9 - (int)local_10;
        local_14 = (LPWSTR)MultiByteToWideChar(0xfde9,0,(LPCSTR)local_10,iVar10,param_2,
                                               (uint)pWVar11 >> 1);
        if (local_14 != (LPWSTR)0x0) {
          bVar13 = local_14 != (LPWSTR)iVar10;
          local_14 = (LPWSTR)((int)local_14 * 2);
          *(uint *)(iVar12 + 0x30 + *piVar1) = (uint)bVar13;
          goto LAB_004887be;
        }
        DVar8 = GetLastError();
LAB_004887b3:
        FUN_0047b86f(DVar8);
      }
LAB_004887ba:
      local_18 = -1;
LAB_004887be:
      if (local_10 != param_2) {
                    /* WARNING: Subroutine does not return */
        _free(local_10);
      }
      if (local_18 == -2) {
        return (int)local_14;
      }
      return local_18;
    }
  }
LAB_0048849f:
  pDVar5 = FUN_0047b85c();
  *pDVar5 = 0;
  pDVar5 = FUN_0047b849();
  *pDVar5 = 0x16;
LAB_004884b1:
  FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


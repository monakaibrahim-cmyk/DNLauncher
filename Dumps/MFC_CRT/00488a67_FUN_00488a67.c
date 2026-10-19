// Address: 0x00488a67
// Name: FUN_00488a67
// Category: MFC_CRT


/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00488a67(uint param_1,WCHAR *param_2,WCHAR *param_3)

{
  WCHAR *pWVar1;
  WCHAR WVar2;
  byte bVar3;
  wchar_t wVar4;
  DWORD *pDVar5;
  undefined3 extraout_var;
  _ptiddata p_Var6;
  BOOL BVar7;
  int iVar8;
  DWORD nNumberOfBytesToWrite;
  WCHAR *pWVar9;
  char cVar10;
  WCHAR *pWVar11;
  int *piVar12;
  char *pcVar13;
  int iVar14;
  size_t _SrcSizeInBytes;
  UINT local_594;
  uint local_590;
  char local_589;
  int *local_588;
  WCHAR *local_584;
  int local_580;
  WCHAR *local_57c;
  WCHAR *local_578;
  WCHAR *local_574;
  DWORD local_570;
  WCHAR *local_56c;
  WCHAR local_568 [40];
  undefined1 local_518 [260];
  CHAR local_414 [688];
  WCHAR local_164 [170];
  undefined2 local_10;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_518;
  local_57c = param_2;
  local_578 = (WCHAR *)0x0;
  local_580 = 0;
  if (param_3 == (WCHAR *)0x0) goto LAB_00489073;
  if (param_2 == (WCHAR *)0x0) {
    pDVar5 = FUN_0047b85c();
    *pDVar5 = 0;
    pDVar5 = FUN_0047b849();
    *pDVar5 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_00489073;
  }
  piVar12 = &DAT_004cc260 + ((int)param_1 >> 5);
  iVar14 = (param_1 & 0x1f) * 0x40;
  cVar10 = (char)(*(char *)(*piVar12 + iVar14 + 0x24) * '\x02') >> 1;
  local_589 = cVar10;
  local_588 = piVar12;
  if (((cVar10 == '\x02') || (cVar10 == '\x01')) && ((~(uint)param_3 & 1) == 0)) {
    pDVar5 = FUN_0047b85c();
    *pDVar5 = 0;
    pDVar5 = FUN_0047b849();
    *pDVar5 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_00489073;
  }
  if ((*(byte *)(*piVar12 + iVar14 + 4) & 0x20) != 0) {
    FUN_0048e04a(param_1,0,0,2);
  }
  bVar3 = FUN_0048e22a(param_1);
  if ((CONCAT31(extraout_var,bVar3) == 0) || ((*(byte *)(iVar14 + 4 + *piVar12) & 0x80) == 0)) {
LAB_00488d9f:
    if ((*(byte *)((undefined4 *)(*piVar12 + iVar14) + 1) & 0x80) == 0) {
      BVar7 = WriteFile(*(HANDLE *)(*piVar12 + iVar14),local_57c,(DWORD)param_3,(LPDWORD)&local_584,
                        (LPOVERLAPPED)0x0);
      if (BVar7 == 0) {
LAB_00488fff:
        local_570 = GetLastError();
      }
      else {
        local_570 = 0;
        local_578 = local_584;
      }
LAB_00489008:
      if (local_578 != (WCHAR *)0x0) goto LAB_00489073;
      goto LAB_0048900e;
    }
    local_570 = 0;
    if (cVar10 == '\0') {
      local_574 = local_57c;
      if (param_3 == (WCHAR *)0x0) goto LAB_0048903e;
      do {
        local_56c = (WCHAR *)0x0;
        pWVar9 = (WCHAR *)((int)local_574 - (int)local_57c);
        pWVar11 = local_568;
        do {
          if (param_3 <= pWVar9) break;
          pWVar1 = (WCHAR *)((int)local_574 + 1);
          WVar2 = *local_574;
          pWVar9 = (WCHAR *)((int)pWVar9 + 1);
          if ((char)WVar2 == '\n') {
            local_580 = local_580 + 1;
            *(char *)pWVar11 = '\r';
            pWVar11 = (WCHAR *)((int)pWVar11 + 1);
            local_56c = (WCHAR *)((int)local_56c + 1);
          }
          *(char *)pWVar11 = (char)WVar2;
          pWVar11 = (WCHAR *)((int)pWVar11 + 1);
          local_56c = (WCHAR *)((int)local_56c + 1);
          local_574 = pWVar1;
        } while (local_56c < (WCHAR *)0x400);
        BVar7 = WriteFile(*(HANDLE *)(iVar14 + *piVar12),local_568,(int)pWVar11 - (int)local_568,
                          (LPDWORD)&local_584,(LPOVERLAPPED)0x0);
        if (BVar7 == 0) goto LAB_00488fff;
        local_578 = (WCHAR *)((int)local_578 + (int)local_584);
      } while (((int)pWVar11 - (int)local_568 <= (int)local_584) &&
              (piVar12 = local_588, (WCHAR *)((int)local_574 - (int)local_57c) < param_3));
      goto LAB_00489008;
    }
    local_56c = local_57c;
    if (cVar10 == '\x02') {
      if (param_3 != (WCHAR *)0x0) {
        do {
          local_574 = (WCHAR *)0x0;
          pWVar9 = (WCHAR *)((int)local_56c - (int)local_57c);
          pWVar11 = local_568;
          do {
            if (param_3 <= pWVar9) break;
            pWVar1 = local_56c + 1;
            WVar2 = *local_56c;
            pWVar9 = pWVar9 + 1;
            if (WVar2 == L'\n') {
              local_580 = local_580 + 2;
              *pWVar11 = L'\r';
              pWVar11 = pWVar11 + 1;
              local_574 = local_574 + 1;
            }
            local_574 = local_574 + 1;
            *pWVar11 = WVar2;
            pWVar11 = pWVar11 + 1;
            local_56c = pWVar1;
          } while (local_574 < (WCHAR *)0x3ff);
          BVar7 = WriteFile(*(HANDLE *)(iVar14 + *piVar12),local_568,(int)pWVar11 - (int)local_568,
                            (LPDWORD)&local_584,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) goto LAB_00488fff;
          local_578 = (WCHAR *)((int)local_578 + (int)local_584);
        } while (((int)pWVar11 - (int)local_568 <= (int)local_584) &&
                (piVar12 = local_588, (WCHAR *)((int)local_56c - (int)local_57c) < param_3));
        goto LAB_00489008;
      }
    }
    else if (param_3 != (WCHAR *)0x0) {
      do {
        local_574 = (WCHAR *)0x0;
        pWVar9 = (WCHAR *)((int)local_56c - (int)local_57c);
        pWVar11 = local_164;
        do {
          if (param_3 <= pWVar9) break;
          WVar2 = *local_56c;
          local_56c = local_56c + 1;
          pWVar9 = pWVar9 + 1;
          if (WVar2 == L'\n') {
            *pWVar11 = L'\r';
            pWVar11 = pWVar11 + 1;
            local_574 = local_574 + 1;
          }
          local_574 = local_574 + 1;
          *pWVar11 = WVar2;
          pWVar11 = pWVar11 + 1;
        } while (local_574 < (WCHAR *)0x152);
        pcVar13 = (char *)0x0;
        iVar8 = WideCharToMultiByte(0xfde9,0,local_164,((int)pWVar11 - (int)local_164) / 2,local_414
                                    ,0x2ab,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar8 == 0) goto LAB_00488fff;
        do {
          BVar7 = WriteFile(*(HANDLE *)(iVar14 + *local_588),local_414 + (int)pcVar13,
                            iVar8 - (int)pcVar13,(LPDWORD)&local_584,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) {
            local_570 = GetLastError();
            break;
          }
          pcVar13 = pcVar13 + (int)local_584;
        } while ((int)pcVar13 < iVar8);
      } while ((iVar8 <= (int)pcVar13) &&
              (local_578 = (WCHAR *)((int)local_56c - (int)local_57c), local_578 < param_3));
      goto LAB_00489008;
    }
  }
  else {
    p_Var6 = __getptd();
    local_590 = (uint)(p_Var6->ptlocinfo->lc_category[0].wlocale == (wchar_t *)0x0);
    BVar7 = GetConsoleMode(*(HANDLE *)(iVar14 + *piVar12),&local_594);
    if ((BVar7 == 0) || ((local_590 != 0 && (cVar10 == '\0')))) goto LAB_00488d9f;
    local_594 = GetConsoleCP();
    local_574 = (WCHAR *)0x0;
    if (param_3 != (WCHAR *)0x0) {
      local_56c = (WCHAR *)0x0;
      pWVar11 = local_57c;
      do {
        piVar12 = local_588;
        if (local_589 == '\0') {
          cVar10 = (char)*pWVar11;
          local_590 = (uint)(cVar10 == '\n');
          iVar8 = *local_588 + iVar14;
          if (*(int *)(iVar8 + 0x38) == 0) {
            iVar8 = _isleadbyte((int)cVar10);
            if (iVar8 == 0) {
              _SrcSizeInBytes = 1;
              pWVar9 = pWVar11;
              goto LAB_00488c52;
            }
            if ((uint)(((int)local_57c - (int)pWVar11) + (int)param_3) < 2) {
              local_578 = (WCHAR *)((int)local_578 + 1);
              *(char *)(iVar14 + 0x34 + *piVar12) = (char)*pWVar11;
              *(undefined4 *)(iVar14 + 0x38 + *piVar12) = 1;
              break;
            }
            iVar8 = _mbtowc((wchar_t *)&local_570,(char *)pWVar11,2);
            if (iVar8 == -1) break;
            pWVar11 = (WCHAR *)((int)pWVar11 + 1);
            local_56c = (WCHAR *)((int)local_56c + 1);
          }
          else {
            local_10._0_1_ = *(CHAR *)(iVar8 + 0x34);
            *(undefined4 *)(iVar8 + 0x38) = 0;
            _SrcSizeInBytes = 2;
            pWVar9 = &local_10;
            local_10._1_1_ = cVar10;
LAB_00488c52:
            iVar8 = _mbtowc((wchar_t *)&local_570,(char *)pWVar9,_SrcSizeInBytes);
            if (iVar8 == -1) break;
          }
          pWVar11 = (WCHAR *)((int)pWVar11 + 1);
          local_56c = (WCHAR *)((int)local_56c + 1);
          nNumberOfBytesToWrite =
               WideCharToMultiByte(local_594,0,(LPCWSTR)&local_570,1,(LPSTR)&local_10,5,(LPCSTR)0x0,
                                   (LPBOOL)0x0);
          if (nNumberOfBytesToWrite == 0) break;
          BVar7 = WriteFile(*(HANDLE *)(iVar14 + *local_588),&local_10,nNumberOfBytesToWrite,
                            (LPDWORD)&local_574,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) goto LAB_00488fff;
          local_578 = (WCHAR *)((int)local_56c + local_580);
          if ((int)local_574 < (int)nNumberOfBytesToWrite) break;
          if (local_590 != 0) {
            local_10._0_1_ = '\r';
            BVar7 = WriteFile(*(HANDLE *)(iVar14 + *local_588),&local_10,1,(LPDWORD)&local_574,
                              (LPOVERLAPPED)0x0);
            if (BVar7 == 0) goto LAB_00488fff;
            if ((int)local_574 < 1) break;
            local_580 = local_580 + 1;
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
        }
        else {
          if ((local_589 == '\x01') || (local_589 == '\x02')) {
            local_570 = (DWORD)(ushort)*pWVar11;
            local_590 = (uint)(*pWVar11 == L'\n');
            pWVar11 = pWVar11 + 1;
            local_56c = local_56c + 1;
          }
          if ((local_589 == '\x01') || (local_589 == '\x02')) {
            wVar4 = __putwch_nolock((wchar_t)local_570);
            if (wVar4 != (wchar_t)local_570) goto LAB_00488fff;
            local_578 = (WCHAR *)((int)local_578 + 1);
            if (local_590 != 0) {
              local_570 = 0xd;
              wVar4 = __putwch_nolock(L'\r');
              if (wVar4 != (wchar_t)local_570) goto LAB_00488fff;
              local_578 = (WCHAR *)((int)local_578 + 1);
              local_580 = local_580 + 1;
            }
          }
        }
      } while (local_56c < param_3);
      goto LAB_00489008;
    }
LAB_0048900e:
    piVar12 = local_588;
    if (local_570 != 0) {
      if (local_570 == 5) {
        pDVar5 = FUN_0047b849();
        *pDVar5 = 9;
        pDVar5 = FUN_0047b85c();
        *pDVar5 = 5;
      }
      else {
        FUN_0047b86f(local_570);
      }
      goto LAB_00489073;
    }
  }
LAB_0048903e:
  if (((*(byte *)(iVar14 + 4 + *piVar12) & 0x40) == 0) || ((char)*local_57c != '\x1a')) {
    pDVar5 = FUN_0047b849();
    *pDVar5 = 0x1c;
    pDVar5 = FUN_0047b85c();
    *pDVar5 = 0;
  }
LAB_00489073:
  __security_check_cookie(local_8 ^ (uint)local_518);
  return;
}


// Address: 0x00418fd0
// Name: FUN_00418fd0
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00418fd0(wchar_t *param_1)

{
  int iVar1;
  wchar_t wVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  int *piVar6;
  short *psVar7;
  wchar_t *pwVar8;
  undefined4 *****lParam;
  LRESULT LVar9;
  undefined4 extraout_ECX;
  int iVar10;
  int iStack_1998;
  FILE *pFStack_1994;
  tm tStack_1990;
  uint auStack_196c [3];
  void *pvStack_1960;
  undefined4 uStack_1950;
  uint uStack_194c;
  undefined1 auStack_1948 [4];
  void *pvStack_1944;
  uint uStack_1934;
  uint uStack_1930;
  undefined1 auStack_192c [4];
  undefined4 ****appppuStack_1928 [4];
  undefined4 uStack_1918;
  uint uStack_1914;
  wchar_t wStack_1910;
  undefined1 auStack_190e [254];
  CHAR CStack_1810;
  undefined1 auStack_180f [2047];
  wchar_t wStack_1010;
  undefined1 auStack_100e [4094];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00498aec;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)&iStack_1998;
  uVar5 = DAT_004c3750 ^ (uint)&stack0xffffe658;
  ExceptionList = &local_c;
  if (DAT_004cbcec != 0) {
    _memset(&DAT_004c7b08,0,0x1000);
    __vsnwprintf_s(&DAT_004c7b08,0x800,0x7ff,param_1,&stack0x00000008);
    _DAT_004c8b06 = 0;
    piVar6 = (int *)FUN_00453ed1();
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403200((undefined4 *)0x80004005);
    }
    iStack_1998 = (**(code **)(*piVar6 + 0xc))(uVar5);
    iStack_1998 = iStack_1998 + 0x10;
    uStack_4 = 0;
    psVar4 = &DAT_004c7b08;
    do {
      psVar7 = psVar4;
      psVar4 = psVar7 + 1;
    } while (*psVar7 != 0);
    FUN_00403520(&iStack_1998,&DAT_004c7b08,(int)(psVar7 + -0x263d84) >> 1);
    iVar3 = *(int *)(iStack_1998 + -0xc);
    iVar1 = iVar3 + 1;
    if ((int)(*(int *)(iStack_1998 + -8) - iVar1 | 1U - *(int *)(iStack_1998 + -4)) < 0) {
      ATL::CSimpleStringT<char,0>::PrepareWrite2((CSimpleStringT<char,0> *)&iStack_1998,iVar1);
    }
    iVar10 = iStack_1998;
    *(undefined2 *)(iStack_1998 + iVar3 * 2) = 10;
    if ((iVar1 < 0) || (*(int *)(iStack_1998 + -8) < iVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_00403200((undefined4 *)0x80070057);
    }
    *(int *)(iStack_1998 + -0xc) = iVar1;
    *(undefined2 *)(iStack_1998 + iVar1 * 2) = 0;
    iVar1 = DAT_004cbcec;
    __time64((__time64_t *)auStack_196c);
    FUN_00476e2d(&tStack_1990,auStack_196c);
    _memset(&wStack_1010,0,0x1000);
    wStack_1910 = L'\0';
    _memset(auStack_190e,0,0xfe);
    _wcscpy_s(&wStack_1910,0x80,L"debug");
    if (*(char *)(iVar1 + 4) == '\0') {
      FUN_00419530(extraout_ECX,0x800,&wStack_1010,L"[Lv:%d]=>%s");
    }
    else if ((*(byte *)(iVar1 + 8) & 1) == 0) {
      FUN_00419530(&wStack_1010,0x800,&wStack_1010,L"%04d%02d%02d%02d%02d%02d  [%s]\t%s");
    }
    else {
      FUN_00419530(tStack_1990.tm_year + 0x76c,0x800,&wStack_1010,
                   L"%04d%02d%02d%02d%02d%02d  [%s]    %s");
    }
    if ((*(byte *)(iVar1 + 8) & 2) != 0) {
      CStack_1810 = '\0';
      _memset(auStack_180f,0,0x7ff);
      WideCharToMultiByte(0,0,&wStack_1010,-1,&CStack_1810,0x800,(LPCSTR)0x0,(LPBOOL)0x0);
      pFStack_1994 = (FILE *)0x0;
      __wfopen_s(&pFStack_1994,(wchar_t *)(iVar1 + 0xc),L"a+");
      if (pFStack_1994 != (FILE *)0x0) {
        FUN_004774a2(pFStack_1994,0x4b2be4);
        _fclose(pFStack_1994);
      }
    }
    if ((*(byte *)(iVar1 + 8) & 1) != 0) {
      uStack_1930 = 7;
      uStack_1934 = 0;
      pvStack_1944 = (void *)((uint)pvStack_1944 & 0xffff0000);
      pwVar8 = &wStack_1010;
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      do {
        wVar2 = *pwVar8;
        pwVar8 = pwVar8 + 1;
      } while (wVar2 != L'\0');
      FUN_00406500((undefined4 *)&wStack_1010,(int)pwVar8 - (int)auStack_100e >> 1);
      while (uStack_1934 != 0) {
        uStack_1914 = 7;
        uStack_1918 = 0;
        appppuStack_1928[0] = (undefined4 ****)((uint)appppuStack_1928[0] & 0xffff0000);
        uStack_4._1_3_ = (undefined3)((uint)uStack_4 >> 8);
        uStack_4._0_1_ = 2;
        uVar5 = uStack_1934;
        if (0x41 < uStack_1934) {
          uVar5 = 0x41;
        }
        FUN_004194e0((void *)0x0,auStack_1948,uVar5);
        uStack_4._0_1_ = 3;
        FUN_004069c0(auStack_192c,0,0xffffffff);
        uStack_4 = CONCAT31(uStack_4._1_3_,2);
        if (7 < uStack_194c) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_1960);
        }
        uStack_194c = 7;
        uStack_1950 = 0;
        pvStack_1960 = (void *)((uint)pvStack_1960 & 0xffff0000);
        FUN_00406100();
        lParam = (undefined4 *****)appppuStack_1928[0];
        if (uStack_1914 < 8) {
          lParam = appppuStack_1928;
        }
        SendMessageW(*(HWND *)(iVar1 + 0x4010),0x180,0,(LPARAM)lParam);
        LVar9 = SendMessageW(*(HWND *)(iVar1 + 0x4010),0x18b,0,0);
        SendMessageW(*(HWND *)(iVar1 + 0x4010),0x186,LVar9 - 1,0);
        if (7 < uStack_1914) {
                    /* WARNING: Subroutine does not return */
          _free(appppuStack_1928[0]);
        }
        uStack_1914 = 7;
        uStack_1918 = 0;
        appppuStack_1928[0] = (undefined4 ****)((uint)appppuStack_1928[0] & 0xffff0000);
        iVar10 = iStack_1998;
      }
      if (7 < uStack_1930) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_1944);
      }
      uStack_1930 = 7;
      uStack_1934 = 0;
      pvStack_1944 = (void *)((uint)pvStack_1944 & 0xffff0000);
    }
    uStack_4 = 0xffffffff;
    piVar6 = (int *)(iVar10 + -4);
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 1 || iVar1 + -1 < 0) {
      (**(code **)(**(int **)(iVar10 + -0x10) + 4))((undefined4 *)(iVar10 + -0x10));
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&iStack_1998);
  return;
}


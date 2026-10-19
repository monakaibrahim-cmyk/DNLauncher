// Address: 0x00482368
// Name: FUN_00482368
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_00482368(void)

{
  char cVar1;
  char cVar2;
  undefined **ppuVar3;
  errno_t eVar4;
  int iVar5;
  UINT CodePage;
  char *_Str1;
  size_t sVar6;
  DWORD DVar7;
  int *piVar8;
  long lVar9;
  char *pcVar10;
  int local_34;
  int local_30;
  long local_2c;
  int local_28;
  undefined **local_24;
  long local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004bb550;
  uStack_c = 0x482374;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_24 = (undefined **)0x0;
  __lock(7);
  local_8 = (undefined *)0x0;
  local_24 = FUN_00482df6();
  eVar4 = __get_timezone(local_20);
  if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar5 = FUN_00482d48(&local_28);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar4 = __get_dstbias(&local_2c);
  if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  CodePage = ____lc_codepage_func();
  DAT_004cb954 = 0;
  DAT_004c452c = 0xffffffff;
  DAT_004c4520 = 0xffffffff;
  _Str1 = __getenv_helper_nolock("TZ");
  if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) {
    if (DAT_004cb958 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_004cb958);
    }
    DVar7 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&lpTimeZoneInformation_004cb8a8);
    if (DVar7 != 0xffffffff) {
      DAT_004cb954 = 1;
      local_20[0] = (int)lpTimeZoneInformation_004cb8a8 * 0x3c;
      if (DAT_004cb8ee != 0) {
        local_20[0] = local_20[0] + DAT_004cb8fc * 0x3c;
      }
      if ((DAT_004cb942 == 0) || (DAT_004cb950 == 0)) {
        local_28 = 0;
        local_2c = 0;
      }
      else {
        local_28 = 1;
        local_2c = (DAT_004cb950 - DAT_004cb8fc) * 0x3c;
      }
      iVar5 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&lpWideCharStr_004cb8ac,-1,*local_24,0x3f,
                                  (LPCSTR)0x0,&local_34);
      if ((iVar5 == 0) || (local_34 != 0)) {
        **local_24 = 0;
      }
      else {
        (*local_24)[0x3f] = 0;
      }
      iVar5 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&lpWideCharStr_004cb900,-1,local_24[1],0x3f,
                                  (LPCSTR)0x0,&local_34);
      if ((iVar5 == 0) || (local_34 != 0)) {
        *local_24[1] = 0;
      }
      else {
        local_24[1][0x3f] = 0;
      }
    }
  }
  else {
    if (DAT_004cb958 != (char *)0x0) {
      iVar5 = _strcmp(_Str1,DAT_004cb958);
      if (iVar5 == 0) goto LAB_00482584;
      if (DAT_004cb958 != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(DAT_004cb958);
      }
    }
    sVar6 = _strlen(_Str1);
    DAT_004cb958 = __malloc_crt(sVar6 + 1);
    if (DAT_004cb958 != (char *)0x0) {
      pcVar10 = _Str1;
      sVar6 = _strlen(_Str1);
      eVar4 = _strcpy_s(DAT_004cb958,sVar6 + 1,pcVar10);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_0048258b;
    }
  }
LAB_00482584:
  local_30 = 1;
LAB_0048258b:
  lVar9 = local_20[0];
  piVar8 = FUN_00482df0();
  iVar5 = local_28;
  *piVar8 = lVar9;
  piVar8 = FUN_00482de4();
  lVar9 = local_2c;
  *piVar8 = iVar5;
  piVar8 = FUN_00482dea();
  *piVar8 = lVar9;
  local_8 = (undefined *)0xfffffffe;
  FUN_00482617();
  ppuVar3 = local_24;
  if (local_30 == 0) {
    eVar4 = _strncpy_s(*local_24,0x40,_Str1,3);
    if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    pcVar10 = _Str1 + 3;
    cVar1 = *pcVar10;
    if (cVar1 == '-') {
      pcVar10 = _Str1 + 4;
    }
    lVar9 = _atol(pcVar10);
    local_20[0] = lVar9 * 0xe10;
    for (; (cVar2 = *pcVar10, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
        pcVar10 = pcVar10 + 1) {
    }
    if (*pcVar10 == ':') {
      pcVar10 = pcVar10 + 1;
      lVar9 = _atol(pcVar10);
      local_20[0] = local_20[0] + lVar9 * 0x3c;
      for (; ('/' < *pcVar10 && (*pcVar10 < ':')); pcVar10 = pcVar10 + 1) {
      }
      if (*pcVar10 == ':') {
        pcVar10 = pcVar10 + 1;
        lVar9 = _atol(pcVar10);
        local_20[0] = local_20[0] + lVar9;
        for (; ('/' < *pcVar10 && (*pcVar10 < ':')); pcVar10 = pcVar10 + 1) {
        }
      }
    }
    if (cVar1 == '-') {
      local_20[0] = -local_20[0];
    }
    local_28 = (int)*pcVar10;
    if (local_28 == 0) {
      *ppuVar3[1] = 0;
    }
    else {
      eVar4 = _strncpy_s(ppuVar3[1],0x40,pcVar10,3);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    lVar9 = local_20[0];
    piVar8 = FUN_00482df0();
    iVar5 = local_28;
    *piVar8 = lVar9;
    piVar8 = FUN_00482de4();
    *piVar8 = iVar5;
  }
  return;
}


// Address: 0x0040a7f0
// Name: FUN_0040a7f0
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0040a7f0(int param_1)

{
  int iVar1;
  errno_t eVar2;
  LPCWSTR pWVar3;
  void *pvVar4;
  int iVar5;
  wchar_t *extraout_ECX;
  wchar_t *pwVar6;
  undefined1 auStack_9528 [7];
  char local_9521;
  FILE *local_9520;
  undefined1 *local_951c;
  CHAR local_1518;
  undefined1 local_1517 [255];
  WCHAR local_1418;
  undefined1 local_1416 [518];
  wchar_t local_1210;
  undefined1 local_120e [518];
  WCHAR local_1008;
  undefined1 local_1006 [2046];
  wchar_t local_808;
  undefined1 local_806 [2050];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)auStack_9528;
  iVar1 = FUN_0040b3b0(param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
    local_1418 = L'\0';
    _memset(local_1416,0,0x206);
    GetCurrentDirectoryW(0x104,&local_1418);
    local_9521 = '\0';
    local_1008 = L'\0';
    _memset(local_1006,0,0x7fe);
    local_1210 = L'\0';
    _memset(local_120e,0,0x206);
    FUN_004081d0(&local_1418,&local_1210,L"%s\\%s");
    local_9520 = (FILE *)0x0;
    local_1518 = '\0';
    _memset(local_1517,0,0xff);
    eVar2 = __wfopen_s(&local_9520,&local_1210,L"r");
    if (eVar2 == 0) {
      _fseek(local_9520,0,0);
      FUN_004776e5(local_9520,0x4b0650);
      _fclose(local_9520);
      MultiByteToWideChar(0,0,&local_1518,-1,&local_1008,0x400);
      local_9521 = '\x01';
    }
    local_808 = L'\0';
    _memset(local_806,0,0x7fe);
    pwVar6 = DAT_004cbda0;
    if (*(int *)(DAT_004cbda0 + -6) < 1) {
      pwVar6 = L"http://patchsea.dragonnest.com/Game/DragonNest/Patch/";
    }
    _wcscpy_s(&local_808,0x400,pwVar6);
    FUN_00418fd0(L"DownLoad PatchConfigList (FileName %s)");
    do {
      if (local_9521 == '\0') {
        FUN_0040edb0(L"%s%s");
        DeleteUrlCacheEntryW();
        pWVar3 = (LPCWSTR)FUN_0040edb0(L".\\%s");
        pvVar4 = (void *)FUN_0040edb0(L"%s%s");
        iVar5 = FUN_00417cc0(pvVar4,pWVar3);
      }
      else {
        FUN_0040edb0((wchar_t *)&param_2_004b0a90);
        DeleteUrlCacheEntryW();
        pWVar3 = (LPCWSTR)FUN_0040edb0(L".\\%s");
        pvVar4 = (void *)FUN_0040edb0((wchar_t *)&param_2_004b0a90);
        iVar5 = FUN_00417cc0(pvVar4,pWVar3);
      }
    } while ((iVar5 != 0) && (iVar1 = iVar1 + 1, iVar1 < 3));
    if ((iVar5 == 1) || (iVar5 < 0)) {
      FUN_0040a2b0();
      local_951c = &stack0xffff6ac4;
      pwVar6 = extraout_ECX;
      FUN_00416590(&stack0xffff6ac4);
      FUN_00416510(pwVar6);
      DAT_004cbcd0 = 5;
    }
  }
  __security_check_cookie(local_4 ^ (uint)auStack_9528);
  return;
}


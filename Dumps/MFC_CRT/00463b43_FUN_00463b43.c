// Address: 0x00463b43
// Name: FUN_00463b43
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void __cdecl FUN_00463b43(void *param_1,uint param_2)

{
  LCID *pLVar1;
  bool bVar2;
  FARPROC pFVar3;
  uint uVar4;
  DWORD DVar5;
  LSTATUS LVar6;
  HMODULE hModule;
  int iVar7;
  int iVar8;
  undefined4 local_29c;
  undefined4 local_298;
  undefined1 *local_294;
  undefined4 local_288;
  undefined4 local_280;
  DWORD local_27c [2];
  CActivationContext local_274 [8];
  void *local_26c;
  LCID local_268 [5];
  uint local_254;
  LCID local_250;
  HKEY local_24c;
  uint local_248;
  int local_244;
  void *local_240;
  undefined4 local_238;
  WCHAR local_234 [260];
  undefined2 local_2c;
  undefined2 local_2a;
  wchar_t local_28 [16];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_234;
  local_234[0] = L'\\';
  local_234[1] = L'\0';
  local_238 = 0x463b67;
  local_26c = param_1;
  local_254 = param_2;
  local_248 = 0;
  local_244 = 0;
  local_24c = (HKEY)GetModuleHandleW(L"kernel32.dll");
  pFVar3 = GetProcAddress((HMODULE)local_24c,"GetUserDefaultUILanguage");
  if (pFVar3 == (FARPROC)0x0) {
    DVar5 = GetVersion();
    if ((int)DVar5 < 0) {
      local_24c = (HKEY)0x0;
      LVar6 = RegOpenKeyExW((HKEY)0x80000001,L"Control Panel\\Desktop\\ResourceLocale",0,0x20019,
                            &local_24c);
      if (LVar6 == 0) {
        local_27c[1] = 0x20;
        LVar6 = RegQueryValueExW(local_24c,(LPCWSTR)0x0,(LPDWORD)0x0,local_27c,(LPBYTE)local_28,
                                 local_27c + 1);
        if (((LVar6 == 0) && (local_27c[0] == 1)) &&
           (iVar8 = FID_conflict__swscanf(local_28,L"%x",&local_250), iVar8 == 1)) {
          local_248 = local_250 & 0xffff;
          uVar4 = local_250 & 0x3ff;
          local_268[0] = ConvertDefaultLocale((local_250 >> 10 & 0x3f) << 10 | uVar4);
          local_268[1] = ConvertDefaultLocale(uVar4);
          local_244 = 2;
        }
        RegCloseKey(local_24c);
      }
    }
    else {
      hModule = GetModuleHandleW(L"ntdll.dll");
      if (hModule != (HMODULE)0x0) {
        local_248 = 0;
        EnumResourceLanguagesW
                  (hModule,(LPCWSTR)0x10,(LPCWSTR)&DAT_00000001,
                   (ENUMRESLANGPROCW)&lpEnumFunc_00463439,(LONG_PTR)&local_248);
        if ((ushort)local_248 != 0) {
          uVar4 = local_248 & 0x3ff;
          local_268[0] = ConvertDefaultLocale((uint)((ushort)local_248 >> 10) << 10 | uVar4);
          local_268[1] = ConvertDefaultLocale(uVar4);
          local_244 = 2;
        }
      }
    }
  }
  else {
    uVar4 = (*pFVar3)();
    local_248 = uVar4 & 0xffff;
    local_250 = uVar4 & 0x3ff;
    local_268[0] = ConvertDefaultLocale(uVar4 & 0xffff);
    local_268[1] = ConvertDefaultLocale(local_250);
    local_244 = 2;
    pFVar3 = GetProcAddress((HMODULE)local_24c,"GetSystemDefaultUILanguage");
    if (pFVar3 != (FARPROC)0x0) {
      uVar4 = (*pFVar3)();
      local_248 = uVar4 & 0xffff;
      local_268[2] = ConvertDefaultLocale(uVar4 & 0xffff);
      local_268[3] = ConvertDefaultLocale(uVar4 & 0x3ff);
      local_244 = 4;
    }
  }
  if (DAT_004cab14 == 0) {
    pLVar1 = local_268 + local_244;
    local_244 = local_244 + 1;
    *pLVar1 = 0x800;
  }
  local_2a = 0;
  local_2c = 0;
  DVar5 = GetModuleFileNameW((HMODULE)&IMAGE_DOS_HEADER_00400000,local_234,0x105);
  if (DVar5 != 0) {
    _memset(&local_29c,0,0x20);
    local_29c = 0x20;
    local_288 = 1000;
    local_280 = 0x400000;
    local_298 = 0x88;
    local_294 = (undefined1 *)local_234;
    CActivationContext::CActivationContext(local_274,(void *)0xffffffff);
    local_238 = 0;
    bVar2 = Create(local_274,(int)&local_29c);
    if (bVar2) {
      CActivationContext::Activate(local_274);
    }
    iVar8 = 0;
    if (0 < local_244) {
      do {
        iVar7 = FUN_004638c5(local_26c,local_254,local_268[iVar8]);
        if (iVar7 != 0) break;
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_244);
    }
    local_238 = 0xffffffff;
    CActivationContext::Release(local_274);
  }
  ExceptionList = local_240;
  __security_check_cookie(local_8 ^ (uint)local_234);
  return;
}


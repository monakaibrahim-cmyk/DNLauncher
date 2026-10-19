// Address: 0x004638c5
// Name: FUN_004638c5
// Category: MFC_CRT


void __thiscall FUN_004638c5(void *this,uint param_1,LCID param_2)

{
  DWORD DVar1;
  errno_t eVar2;
  DWORD *pDVar3;
  wchar_t *lpLibFileName;
  HMODULE hModule;
  FARPROC pFVar4;
  int iVar5;
  undefined4 local_278;
  undefined1 local_274 [60];
  uint local_238;
  wchar_t local_234 [30];
  undefined1 local_1f8 [488];
  wchar_t local_10 [4];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_1f8;
  local_238 = param_1;
  if (param_2 == 0x800) {
    eVar2 = _wcscpy_s(local_10,4,L"LOC");
    FUN_00403120(eVar2);
  }
  else {
    iVar5 = GetLocaleInfoW(param_2,3,local_10,4);
    if (iVar5 == 0) goto LAB_004639f3;
  }
  pDVar3 = FUN_0047b849();
  DVar1 = *pDVar3;
  pDVar3 = FUN_0047b849();
  *pDVar3 = 0;
  local_238 = __snwprintf_s(local_234,0x112,0x111,this,local_238,local_10);
  pDVar3 = FUN_0047b849();
  if (*pDVar3 == 0) {
    pDVar3 = FUN_0047b849();
    *pDVar3 = DVar1;
  }
  else {
    pDVar3 = FUN_0047b849();
    ATL::AtlCrtErrorCheck(*pDVar3);
  }
  if ((local_238 != 0xffffffff) && (local_238 < 0x112)) {
    lpLibFileName = PathFindFileNameW(local_234);
    local_278 = 0x40;
    _memset(local_274,0,0x3c);
    hModule = GetModuleHandleW(L"KERNEL32");
    if ((hModule == (HMODULE)0x0) ||
       ((pFVar4 = GetProcAddress(hModule,"FindActCtxSectionStringW"), pFVar4 == (FARPROC)0x0 ||
        (iVar5 = (*pFVar4)(0,0,2,lpLibFileName,&local_278), iVar5 == 0)))) {
      lpLibFileName = local_234;
    }
    LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0);
  }
LAB_004639f3:
  __security_check_cookie(local_8 ^ (uint)local_1f8);
  return;
}


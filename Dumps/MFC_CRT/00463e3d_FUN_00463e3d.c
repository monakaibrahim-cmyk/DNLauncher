// Address: 0x00463e3d
// Name: FUN_00463e3d
// Category: MFC_CRT


void __fastcall FUN_00463e3d(int param_1)

{
  DWORD DVar1;
  LPWSTR pWVar2;
  WCHAR local_224 [260];
  wchar_t local_1c [2];
  wchar_t awStack_18 [2];
  wchar_t awStack_14 [2];
  wchar_t awStack_10 [2];
  wchar_t wStack_c;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  DVar1 = GetModuleFileNameW(*(HMODULE *)(param_1 + 0x44),local_224,0x104);
  if ((DVar1 != 0) && (DVar1 != 0x104)) {
    pWVar2 = PathFindExtensionW(local_224);
    *pWVar2 = L'\0';
    local_1c[0] = u__s_s_dll_004a34c0[0];
    local_1c[1] = u__s_s_dll_004a34c0[1];
    awStack_18[0] = u__s_s_dll_004a34c0[2];
    awStack_18[1] = u__s_s_dll_004a34c0[3];
    awStack_14[0] = u__s_s_dll_004a34c0[4];
    awStack_14[1] = u__s_s_dll_004a34c0[5];
    awStack_10[0] = u__s_s_dll_004a34c0[6];
    awStack_10[1] = u__s_s_dll_004a34c0[7];
    wStack_c = u__s_s_dll_004a34c0[8];
    FUN_00463b43(local_1c,(uint)local_224);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


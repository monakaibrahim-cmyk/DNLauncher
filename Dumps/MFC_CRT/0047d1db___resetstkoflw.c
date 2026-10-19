// Address: 0x0047d1db
// Name: __resetstkoflw
// Category: MFC_CRT


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __resetstkoflw
   
   Library: Visual Studio 2005 Release */

int __cdecl __resetstkoflw(void)

{
  SIZE_T SVar1;
  int iVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  DWORD DVar4;
  LPVOID pvVar5;
  int iVar6;
  uint dwSize;
  LPVOID lpAddress;
  bool bVar7;
  undefined4 uStack_70;
  _SYSTEM_INFO local_60;
  _MEMORY_BASIC_INFORMATION local_3c;
  DWORD local_20;
  PVOID local_1c;
  DWORD local_18;
  undefined1 *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_c = 0;
  uStack_70 = 0x47d1fb;
  local_14 = (undefined1 *)&uStack_70;
  SVar1 = VirtualQuery(&uStack_70,&local_3c,0x1c);
  if (SVar1 != 0) {
    local_1c = local_3c.AllocationBase;
    GetSystemInfo(&local_60);
    local_18 = local_60.dwPageSize;
    iVar6 = 0;
    iVar2 = __get_osplatform(&local_c);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (((local_c == 2) && (hModule = GetModuleHandleA("kernel32.dll"), hModule != (HMODULE)0x0)) &&
       (pFVar3 = GetProcAddress(hModule,"SetThreadStackGuarantee"), pFVar3 != (FARPROC)0x0)) {
      local_10 = 0;
      iVar2 = (*pFVar3)(&local_10);
      if ((iVar2 == 1) && (local_10 != 0)) {
        iVar6 = local_10;
      }
    }
    bVar7 = local_c != 1;
    dwSize = iVar6 + -1 + local_60.dwPageSize & ~(local_60.dwPageSize - 1);
    if (dwSize != 0) {
      dwSize = dwSize + local_60.dwPageSize;
    }
    if (dwSize < local_60.dwPageSize * 2) {
      dwSize = local_60.dwPageSize * 2;
    }
    lpAddress = (LPVOID)((~(local_60.dwPageSize - 1) & (uint)local_14) - dwSize);
    DVar4 = local_18;
    if (local_c == 1) {
      DVar4 = 0x11;
    }
    if (((LPVOID)(DVar4 + (int)local_1c) <= lpAddress) &&
       (pvVar5 = VirtualAlloc(lpAddress,dwSize,0x1000,4), pvVar5 != (LPVOID)0x0)) {
      VirtualProtect(lpAddress,dwSize,(-(uint)bVar7 & 0x103) + 1,&local_20);
    }
  }
  iVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar6;
}


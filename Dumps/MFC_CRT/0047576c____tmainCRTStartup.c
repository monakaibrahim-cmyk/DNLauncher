// Address: 0x0047576c
// Name: ___tmainCRTStartup
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___tmainCRTStartup
   
   Library: Visual Studio 2005 Release */

int ___tmainCRTStartup(void)

{
  HANDLE pvVar1;
  LPOSVERSIONINFOA lpVersionInformation;
  BOOL BVar2;
  int iVar3;
  wchar_t *pwVar4;
  uint uVar5;
  DWORD DVar6;
  SIZE_T dwBytes;
  _STARTUPINFOW local_74;
  DWORD local_2c;
  DWORD local_28;
  DWORD local_24;
  int local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x475778;
  local_8 = 0;
  GetStartupInfoW(&local_74);
  local_8 = 0xfffffffe;
  dwBytes = 0x94;
  DVar6 = 0;
  pvVar1 = GetProcessHeap();
  lpVersionInformation = HeapAlloc(pvVar1,DVar6,dwBytes);
  if (lpVersionInformation == (LPOSVERSIONINFOA)0x0) {
    fast_error_exit(0x12);
  }
  else {
    lpVersionInformation->dwOSVersionInfoSize = 0x94;
    BVar2 = GetVersionExA(lpVersionInformation);
    DVar6 = 0;
    if (BVar2 != 0) {
      local_24 = lpVersionInformation->dwPlatformId;
      local_28 = lpVersionInformation->dwMajorVersion;
      local_2c = lpVersionInformation->dwMinorVersion;
      uVar5 = lpVersionInformation->dwBuildNumber & 0x7fff;
      pvVar1 = GetProcessHeap();
      HeapFree(pvVar1,DVar6,lpVersionInformation);
      if (local_24 != 2) {
        uVar5 = uVar5 | 0x8000;
      }
      _DAT_004cae44 = local_28 * 0x100 + local_2c;
      DAT_004cae3c = local_24;
      DAT_004cae48 = local_28;
      _DAT_004cae4c = local_2c;
      _DAT_004cae40 = uVar5;
      local_24 = check_managed_app();
      iVar3 = __heap_init();
      if (iVar3 == 0) {
        fast_error_exit(0x1c);
      }
      iVar3 = __mtinit();
      if (iVar3 == 0) {
        fast_error_exit(0x10);
      }
      __RTC_Initialize();
      local_8 = 1;
      iVar3 = __ioinit();
      if (iVar3 < 0) {
        __amsg_exit(0x1b);
      }
      DAT_004cd398 = FUN_0047e3bf();
      DAT_004cae20 = FUN_0047e25e();
      iVar3 = __wsetargv();
      if (iVar3 < 0) {
        __amsg_exit(8);
      }
      iVar3 = FUN_0047df8d();
      if (iVar3 < 0) {
        __amsg_exit(9);
      }
      iVar3 = __cinit(1);
      if (iVar3 != 0) {
        __amsg_exit(iVar3);
      }
      pwVar4 = (wchar_t *)__wwincmdln();
      if (((byte)local_74.dwFlags & 1) == 0) {
        uVar5 = 10;
      }
      else {
        uVar5 = (uint)local_74.wShowWindow;
      }
      local_20 = AfxWinMain((HINSTANCE__ *)&IMAGE_DOS_HEADER_00400000,(HINSTANCE__ *)0x0,pwVar4,
                            uVar5);
      if (local_24 != 0) {
        __cexit();
        return local_20;
      }
                    /* WARNING: Subroutine does not return */
      _exit(local_20);
    }
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,DVar6,lpVersionInformation);
  }
  return 0xff;
}


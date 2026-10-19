// Address: 0x00428e10
// Name: FUN_00428e10
// Category: Launcher


void __fastcall FUN_00428e10(undefined4 param_1)

{
  DWORD DVar1;
  HANDLE hFile;
  BOOL BVar2;
  int unaff_ESI;
  DWORD local_10c;
  CHAR local_108 [260];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_10c;
  FUN_00425f50(param_1,(char *)(unaff_ESI + 4));
  DVar1 = GetFileAttributesA(local_108);
  if ((DVar1 & 1) != 0) {
    SetFileAttributesA(local_108,DVar1 & 0xfffffffe);
  }
  hFile = CreateFileA(local_108,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    local_10c = 0;
    BVar2 = WriteFile(hFile,*(LPCVOID *)(unaff_ESI + 0x140),*(DWORD *)(unaff_ESI + 0x108),&local_10c
                      ,(LPOVERLAPPED)0x0);
    if (BVar2 != 0) {
      CloseHandle(hFile);
      __security_check_cookie(local_4 ^ (uint)&local_10c);
      return;
    }
    CloseHandle(hFile);
  }
  __security_check_cookie(local_4 ^ (uint)&local_10c);
  return;
}


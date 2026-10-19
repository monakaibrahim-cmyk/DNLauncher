// Address: 0x00425fd0
// Name: FUN_00425fd0
// Category: Launcher


void __cdecl FUN_00425fd0(LPCSTR param_1)

{
  HANDLE hFindFile;
  BOOL BVar1;
  _WIN32_FIND_DATAA local_358;
  char local_218 [264];
  char local_110;
  undefined1 local_10f [267];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_358;
  local_110 = '\0';
  _memset(local_10f,0,0x103);
  _strcpy_s(&local_110,0x104,param_1);
  _strcat_s(&local_110,0x104,"\\*.*");
  hFindFile = FindFirstFileA(&local_110,&local_358);
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if (local_358.cFileName[0] != '.') {
        _strcpy_s(local_218,0x104,param_1);
        _strcat_s(local_218,0x104,"\\");
        _strcat_s(local_218,0x104,local_358.cFileName);
        if (((byte)local_358.dwFileAttributes & 0x10) == 0) {
          BVar1 = DeleteFileA(local_218);
          if (BVar1 == 0) goto LAB_00426103;
        }
        else {
          FUN_00425fd0(local_218);
        }
      }
      BVar1 = FindNextFileA(hFindFile,&local_358);
    } while (BVar1 != 0);
    FindClose(hFindFile);
    RemoveDirectoryA(param_1);
  }
LAB_00426103:
  __security_check_cookie(local_4 ^ (uint)&local_358);
  return;
}


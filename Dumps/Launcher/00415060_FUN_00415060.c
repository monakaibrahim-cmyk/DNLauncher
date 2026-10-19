// Address: 0x00415060
// Name: FUN_00415060
// Category: Launcher


void __thiscall FUN_00415060(void *this,undefined4 param_1)

{
  char cVar1;
  HANDLE hFile;
  undefined *puVar2;
  char *pcVar3;
  DWORD local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_10c;
  if (1 < *(int *)(*(int *)this + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork(this,*(int *)(*(int *)this + -0xc));
  }
  hFile = CreateFileW(*(LPCWSTR *)this,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    FUN_00418f70(L"Save Version File Failed!");
    __security_check_cookie(local_4 ^ (uint)&local_10c);
    return;
  }
  local_108[0] = '\0';
  _memset(local_108 + 1,0,0xff);
  puVar2 = FUN_00404360();
  _sprintf_s(local_108,0x100,"Version %d\r\nModule %d",param_1,*(undefined4 *)(puVar2 + 0x2c));
  pcVar3 = local_108;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  WriteFile(hFile,local_108,(DWORD)(pcVar3 + (1 - (int)(local_108 + 1))),&local_10c,
            (LPOVERLAPPED)0x0);
  CloseHandle(hFile);
  __security_check_cookie(local_4 ^ (uint)&local_10c);
  return;
}


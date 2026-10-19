// Address: 0x00416930
// Name: FUN_00416930
// Category: Launcher


void FUN_00416930(void)

{
  wchar_t wVar1;
  HANDLE hObject;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *unaff_EBX;
  uint uVar4;
  undefined4 local_230;
  undefined1 local_22c [32];
  wchar_t local_20c;
  undefined1 local_20a [518];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_230;
  local_230 = 0;
  _memset(local_22c,0,0x228);
  hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
  if (hObject == (HANDLE)0xffffffff) {
    __security_check_cookie(local_4 ^ (uint)&local_230);
    return;
  }
  local_230 = 0x22c;
  iVar2 = Process32FirstW(hObject,&local_230);
  while( true ) {
    if (iVar2 == 0) {
      CloseHandle(hObject);
      __security_check_cookie(local_4 ^ (uint)&local_230);
      return;
    }
    uVar4 = 0;
    do {
      iVar2 = _tolower((uint)*(ushort *)(local_20a + uVar4 * 2 + -2));
      *(short *)(local_20a + uVar4 * 2 + -2) = (short)iVar2;
      pwVar3 = &local_20c;
      uVar4 = uVar4 + 1;
      do {
        wVar1 = *pwVar3;
        pwVar3 = pwVar3 + 1;
      } while (wVar1 != L'\0');
    } while (uVar4 <= (uint)((int)pwVar3 - (int)local_20a >> 1));
    iVar2 = __wcsicmp(&local_20c,unaff_EBX);
    if (iVar2 == 0) break;
    iVar2 = Process32NextW(hObject,&local_230);
  }
  CloseHandle(hObject);
  __security_check_cookie(local_4 ^ (uint)&local_230);
  return;
}


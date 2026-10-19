// Address: 0x00416790
// Name: FUN_00416790
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00416790(void)

{
  HANDLE hObject;
  int iVar1;
  HANDLE hProcess;
  DWORD local_1238;
  UINT local_1234;
  undefined4 local_1230 [2];
  DWORD local_1228;
  undefined1 local_120c [520];
  WCHAR local_1004;
  undefined1 local_1002 [2046];
  WCHAR local_804;
  undefined1 local_802 [2046];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_1238;
  FUN_00418fd0(L"★\tKillProcess");
  local_1004 = L'\0';
  _memset(local_1002,0,0x7fe);
  wsprintfW(&local_1004,(LPCWSTR)&param_2_004b0a90,L"DnLauncher.exe");
  FUN_00478998(&local_1004,0x400);
  hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
  local_1238 = GetCurrentProcessId();
  if (hObject != (HANDLE)0xffffffff) {
    local_1230[0] = 0x22c;
    local_804 = L'\0';
    _memset(local_802,0,0x7fe);
    iVar1 = Process32FirstW(hObject,local_1230);
    while (iVar1 != 0) {
      if (local_1228 != local_1238) {
        wsprintfW(&local_804,(LPCWSTR)&param_2_004b0a90,local_120c);
        FUN_00478998(&local_804,0x400);
        iVar1 = __wcsicmp(&local_804,&local_1004);
        if ((iVar1 != 0) && (hProcess = OpenProcess(0x1f0fff,0,local_1228), hProcess != (HANDLE)0x0)
           ) {
          GetExitCodeProcess(hProcess,&local_1234);
          TerminateProcess(hProcess,local_1234);
          CloseHandle(hProcess);
        }
      }
      iVar1 = Process32NextW(hObject,local_1230);
    }
    CloseHandle(hObject);
  }
  __security_check_cookie(local_4 ^ (uint)&local_1238);
  return;
}


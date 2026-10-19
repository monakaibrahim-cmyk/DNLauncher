// Address: 0x00410a70
// Name: FUN_00410a70
// Category: Launcher


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_00410a70(int param_1)

{
  int iVar1;
  LPCWSTR lpParameters;
  HWND hWnd;
  LPCWSTR lpDirectory;
  WPARAM wParam;
  INT nShowCmd;
  LPCWSTR local_24;
  LPCRITICAL_SECTION *local_20;
  undefined1 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0049aaf0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00418fd0(L"★Patch Start!");
  if (*(int *)(param_1 + 0x40) == 0) {
    ExceptionList = local_14;
    return;
  }
  FUN_004105e0(*(undefined4 *)(param_1 + 8));
  local_20 = &lpCriticalSection_004cbed8;
  local_1c = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_004cbed8);
  local_c = 0;
  iVar1 = FUN_00410c30((void *)(param_1 + -4));
  switch(iVar1) {
  case 0:
    FUN_00418fd0(L"★Patch Failed!");
    *(undefined4 *)(param_1 + 0x3c) = 0xc;
    hWnd = *(HWND *)(param_1 + 0x40);
    if (hWnd == (HWND)0x0) goto switchD_00410aee_default;
    wParam = 0xc;
    break;
  case 1:
    FUN_00418fd0(L"★Patch Success!");
    *(undefined4 *)(param_1 + 0x3c) = 10;
    hWnd = *(HWND *)(param_1 + 0x40);
    if (hWnd == (HWND)0x0) goto switchD_00410aee_default;
    wParam = 10;
    break;
  case 2:
    FUN_00418fd0(L"★Launcher Restart because Launcher Patched.");
    if (DAT_004cbcd4 != (HANDLE)0x0) {
      CloseHandle(DAT_004cbcd4);
      DAT_004cbcd4 = (HANDLE)0x0;
    }
    FUN_0040a2b0();
    FUN_00416370();
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_004019b0("DnLauncher.exe");
    nShowCmd = 1;
    lpDirectory = (LPCWSTR)0x0;
    lpParameters = (LPCWSTR)FUN_004060b0((CSimpleStringT<wchar_t,0> *)&DAT_004cbd9c);
    ShellExecuteW(*(HWND *)(param_1 + 0x40),(LPCWSTR)0x0,local_24,lpParameters,lpDirectory,nShowCmd)
    ;
    *(undefined4 *)(param_1 + 0x3c) = 0xb;
    if (*(HWND *)(param_1 + 0x40) != (HWND)0x0) {
      PostMessageW(*(HWND *)(param_1 + 0x40),0x8065,0xb,0);
    }
    FUN_00410090((int *)&local_24);
    goto switchD_00410aee_default;
  case 3:
    FUN_00414d70(param_1 + -4);
    goto switchD_00410aee_default;
  case 4:
    FUN_00418fd0(L"★Patch Terminate!");
    *(undefined4 *)(param_1 + 0x3c) = 0xd;
    hWnd = *(HWND *)(param_1 + 0x40);
    if (hWnd == (HWND)0x0) goto switchD_00410aee_default;
    wParam = 0xd;
    break;
  default:
    goto switchD_00410aee_default;
  }
  PostMessageW(hWnd,0x8065,wParam,0);
switchD_00410aee_default:
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_004cbed8);
  ExceptionList = local_14;
  return;
}


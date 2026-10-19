// Address: 0x0045a73f
// Name: CWinApp::ShowAppMessageBox
// Category: Utility


/* Library Function - Single Match
    public: static int __cdecl CWinApp::ShowAppMessageBox(class CWinApp *,wchar_t const *,unsigned
   int,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl CWinApp::ShowAppMessageBox(CWinApp *param_1,wchar_t *param_2,uint param_3,uint param_4)

{
  HWND__ *hWnd;
  DWORD DVar1;
  CWinApp *pCVar2;
  int iVar3;
  LPWSTR lpFilename;
  DWORD local_21c;
  int local_218;
  HWND__ *local_214;
  WCHAR local_210 [54];
  undefined1 local_1a4 [410];
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_1a4;
  DoEnableModeless(0);
  hWnd = CWnd::GetSafeOwner_((HWND__ *)0x0,&local_214);
  if (hWnd != local_214) {
    EnableWindow(hWnd,1);
  }
  local_21c = 0;
  GetWindowThreadProcessId(hWnd,&local_21c);
  if ((((hWnd == (HWND__ *)0x0) || (DVar1 = GetCurrentProcessId(), local_21c != DVar1)) ||
      (pCVar2 = (CWinApp *)SendMessageW(hWnd,0x376,0,0), pCVar2 == (CWinApp *)0x0)) &&
     (pCVar2 = (CWinApp *)0x0, param_1 != (CWinApp *)0x0)) {
    pCVar2 = param_1 + 0x78;
  }
  local_218 = 0;
  if ((pCVar2 != (CWinApp *)0x0) && (local_218 = *(int *)pCVar2, param_4 != 0)) {
    *(uint *)pCVar2 = param_4 + 0x30000;
  }
  if ((param_3 & 0xf0) == 0) {
    if ((param_3 & 0xf) < 2) {
      param_3 = param_3 | 0x30;
    }
    else if ((param_3 & 0xf) - 3 < 2) {
      param_3 = param_3 | 0x20;
    }
  }
  local_210[0] = L'\0';
  if (param_1 == (CWinApp *)0x0) {
    lpFilename = local_210;
    DVar1 = GetModuleFileNameW((HMODULE)0x0,lpFilename,0x104);
    if (DVar1 == 0x104) {
      local_a = 0;
    }
  }
  else {
    lpFilename = *(LPWSTR *)(param_1 + 0x50);
  }
  AfxCtxMessageBoxW(hWnd,param_2,lpFilename,param_3);
  if (pCVar2 != (CWinApp *)0x0) {
    *(int *)pCVar2 = local_218;
  }
  if (local_214 != (HWND)0x0) {
    EnableWindow(local_214,1);
  }
  DoEnableModeless(1);
  iVar3 = __security_check_cookie(local_8 ^ (uint)local_1a4);
  return iVar3;
}


// Address: 0x004531a0
// Name: FUN_004531a0
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_004531a0(wchar_t *param_1,LPCWSTR param_2,int param_3)

{
  DWORD DVar1;
  int *piVar2;
  BOOL BVar3;
  HANDLE hFindFile;
  int iVar4;
  int iVar5;
  DWORD local_278;
  byte local_274 [4];
  wchar_t *local_270;
  LPCWSTR local_26c;
  LPCWSTR local_268;
  void *local_264;
  undefined4 local_25c;
  _WIN32_FIND_DATAW local_258;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&local_258;
  local_258.dwFileAttributes = 0x14;
  local_25c = 0x4531c4;
  local_26c = param_2;
  if ((param_1 == (wchar_t *)0x0) || (param_2 == (LPCWSTR)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  DVar1 = GetFullPathNameW(param_2,0x104,param_1,&local_270);
  if (DVar1 == 0) {
    ATL::Checked::tcsncpy_s(param_1,0x104,local_26c,0xffffffff);
    AfxFillExceptionInfo(param_3,local_26c);
    goto LAB_00453310;
  }
  if (0x103 < DVar1) {
    if (param_3 != 0) {
      *(undefined4 *)(param_3 + 8) = 3;
      FUN_004034e0((void *)(param_3 + 0x10),local_26c);
    }
    goto LAB_00453310;
  }
  piVar2 = (int *)FUN_00453ed1();
  FUN_004031d0(&local_268,piVar2);
  local_25c = 0;
  AfxGetRoot(param_1,&local_268);
  BVar3 = PathIsUNCW(local_268);
  if (BVar3 == 0) {
    BVar3 = GetVolumeInformationW
                      (local_268,(LPWSTR)0x0,0,(LPDWORD)0x0,&local_278,(LPDWORD)local_274,
                       (LPWSTR)0x0,0);
    if (BVar3 == 0) {
LAB_0045328c:
      AfxFillExceptionInfo(param_3,local_26c);
    }
    else {
      if ((local_274[0] & 2) == 0) {
        CharUpperW(param_1);
      }
      if (((local_274[0] & 4) != 0) ||
         (hFindFile = FindFirstFileW(local_26c,&local_258), hFindFile == (HANDLE)0xffffffff))
      goto LAB_00453302;
      FindClose(hFindFile);
      if ((local_270 == (wchar_t *)0x0) || (local_270 <= param_1)) goto LAB_0045328c;
      iVar4 = lstrlenW(local_258.cFileName);
      iVar5 = (int)local_270 - (int)param_1 >> 1;
      if (iVar4 + iVar5 < 0x104) {
        ATL::Checked::tcscpy_s(local_270,0x104 - iVar5,local_258.cFileName);
        goto LAB_00453302;
      }
      if (param_3 != 0) {
        *(undefined4 *)(param_3 + 8) = 3;
        FUN_004034e0((void *)(param_3 + 0x10),local_26c);
      }
    }
    FUN_004031b0((undefined4 *)(local_268 + -8));
  }
  else {
LAB_00453302:
    FUN_004031b0((undefined4 *)(local_268 + -8));
  }
LAB_00453310:
  ExceptionList = local_264;
  __security_check_cookie(local_8 ^ (uint)&local_258);
  return;
}


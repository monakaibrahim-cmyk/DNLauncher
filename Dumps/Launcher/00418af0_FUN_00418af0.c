// Address: 0x00418af0
// Name: FUN_00418af0
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00418af0(undefined4 param_1)

{
  wchar_t wVar1;
  uint uVar2;
  undefined4 *****lParam;
  LRESULT LVar3;
  int unaff_EDI;
  wchar_t *pwVar4;
  FILE *local_1994;
  tm local_1990;
  uint local_196c [3];
  void *local_1960;
  uint local_194c;
  undefined1 local_1948 [4];
  void *local_1944;
  uint local_1934;
  uint local_1930;
  undefined1 local_192c [4];
  undefined4 ****local_1928 [4];
  undefined4 local_1918;
  uint local_1914;
  wchar_t local_1910;
  undefined1 local_190e [254];
  CHAR local_1810;
  undefined1 local_180f [2047];
  wchar_t local_1010;
  undefined1 local_100e [4094];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  local_4 = 0xff;
  uStack_3 = 0xffffff;
  puStack_8 = &LAB_004984d1;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)&local_1994;
  ExceptionList = &local_c;
  __time64((__time64_t *)local_196c);
  FUN_00476e2d(&local_1990,local_196c);
  _memset(&local_1010,0,0x1000);
  local_1910 = L'\0';
  _memset(local_190e,0,0xfe);
  switch(param_1) {
  case 0:
    pwVar4 = L"error";
    break;
  case 1:
    pwVar4 = L"warning";
    break;
  case 2:
    pwVar4 = L"info";
    break;
  case 3:
    pwVar4 = L"debug";
    break;
  default:
    goto switchD_00418b88_default;
  }
  _wcscpy_s(&local_1910,0x80,pwVar4);
switchD_00418b88_default:
  if (*(char *)(unaff_EDI + 4) == '\0') {
    FUN_00419530(&local_1010,0x800,&local_1010,L"[Lv:%d]=>%s");
  }
  else if ((*(byte *)(unaff_EDI + 8) & 1) == 0) {
    FUN_00419530(local_1990.tm_mon + 1,0x800,&local_1010,L"%04d%02d%02d%02d%02d%02d  [%s]\t%s");
  }
  else {
    FUN_00419530(&local_1010,0x800,&local_1010,L"%04d%02d%02d%02d%02d%02d  [%s]    %s");
  }
  if ((*(byte *)(unaff_EDI + 8) & 2) != 0) {
    local_1810 = '\0';
    _memset(local_180f,0,0x7ff);
    WideCharToMultiByte(0,0,&local_1010,-1,&local_1810,0x800,(LPCSTR)0x0,(LPBOOL)0x0);
    local_1994 = (FILE *)0x0;
    __wfopen_s(&local_1994,(wchar_t *)(unaff_EDI + 0xc),L"a+");
    if (local_1994 != (FILE *)0x0) {
      FUN_004774a2(local_1994,0x4b2be4);
      _fclose(local_1994);
    }
  }
  uVar2 = local_1934;
  if ((*(byte *)(unaff_EDI + 8) & 1) != 0) {
    local_1930 = 7;
    local_1934 = 0;
    local_1944 = (void *)((uint)local_1944 & 0xffff0000);
    pwVar4 = &local_1010;
    local_4 = 0;
    uStack_3 = 0;
    do {
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != L'\0');
    FUN_00406500((undefined4 *)&local_1010,(int)pwVar4 - (int)local_100e >> 1);
    while (local_1934 != 0) {
      local_1914 = 7;
      local_1918 = 0;
      local_1928[0] = (undefined4 ****)((uint)local_1928[0] & 0xffff0000);
      local_4 = 1;
      uVar2 = local_1934;
      if (0x41 < local_1934) {
        uVar2 = 0x41;
      }
      FUN_004194e0((void *)0x0,local_1948,uVar2);
      local_4 = 2;
      FUN_004069c0(local_192c,0,0xffffffff);
      local_4 = 1;
      if (7 < local_194c) {
                    /* WARNING: Subroutine does not return */
        _free(local_1960);
      }
      FUN_00406100();
      lParam = (undefined4 *****)local_1928[0];
      if (local_1914 < 8) {
        lParam = local_1928;
      }
      SendMessageW(*(HWND *)(unaff_EDI + 0x4010),0x180,0,(LPARAM)lParam);
      LVar3 = SendMessageW(*(HWND *)(unaff_EDI + 0x4010),0x18b,0,0);
      SendMessageW(*(HWND *)(unaff_EDI + 0x4010),0x186,LVar3 - 1,0);
      local_4 = 0;
      if (7 < local_1914) {
                    /* WARNING: Subroutine does not return */
        _free(local_1928[0]);
      }
    }
    uVar2 = 0;
    if (7 < local_1930) {
                    /* WARNING: Subroutine does not return */
      _free(local_1944);
    }
  }
  local_1934 = uVar2;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_1994);
  return;
}


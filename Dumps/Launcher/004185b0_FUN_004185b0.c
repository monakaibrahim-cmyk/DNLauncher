// Address: 0x004185b0
// Name: FUN_004185b0
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_004185b0(void)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  uint uVar3;
  undefined4 *****lParam;
  LRESULT LVar4;
  undefined4 extraout_ECX;
  undefined4 *unaff_EDI;
  FILE *local_23c0 [2];
  tm local_23b8;
  uint local_2394 [3];
  void *local_2388;
  uint local_2374;
  undefined1 local_2370 [4];
  void *local_236c;
  uint local_235c;
  uint local_2358;
  undefined1 local_2354 [4];
  undefined4 ****local_2350 [4];
  undefined4 local_2340;
  uint local_233c;
  wchar_t local_2338;
  undefined1 local_2336 [254];
  wchar_t local_2238;
  undefined1 local_2236 [518];
  WCHAR local_2030;
  undefined1 local_202e [518];
  wchar_t local_1e28;
  undefined1 local_1e26 [518];
  wchar_t local_1c20;
  undefined1 local_1c1e [518];
  wchar_t local_1a18;
  undefined1 local_1a16 [518];
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
  puStack_8 = &LAB_00498521;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)local_23c0;
  ExceptionList = &local_c;
  pwVar2 = (wchar_t *)(unaff_EDI + 3);
  *unaff_EDI = LogWnd::__LogWnd::vftable;
  unaff_EDI[0x1004] = 0;
  *(undefined1 *)(unaff_EDI + 1) = 1;
  unaff_EDI[2] = 2;
  _memset(pwVar2,0,0x800);
  __time64((__time64_t *)local_23c0);
  FUN_00476e2d(&local_23b8,(uint *)local_23c0);
  local_2030 = L'\0';
  _memset(local_202e,0,0x206);
  GetModuleFileNameW((HMODULE)0x0,&local_2030,0x104);
  local_2238 = L'\0';
  _memset(local_2236,0,0x206);
  local_1e28 = L'\0';
  _memset(local_1e26,0,0x206);
  local_1c20 = L'\0';
  _memset(local_1c1e,0,0x206);
  local_1a18 = L'\0';
  _memset(local_1a16,0,0x206);
  FID_conflict___splitpath(&local_2030,&local_2238,&local_1e28,&local_1c20,&local_1a18);
  FUN_00419510(&local_2238,4000,pwVar2,L"%s%s\\Log\\%s_%04d%02d%02d_%02d%02d%02d_Log.txt");
  unaff_EDI[0x1003] = 0;
  __time64((__time64_t *)local_2394);
  FUN_00476e2d(&local_23b8,local_2394);
  _memset(&local_1010,0,0x1000);
  local_2338 = L'\0';
  _memset(local_2336,0,0xfe);
  _wcscpy_s(&local_2338,0x80,L"info");
  if (*(char *)(unaff_EDI + 1) == '\0') {
    FUN_00419530(extraout_ECX,0x800,&local_1010,L"[Lv:%d]=>%s");
  }
  else if ((*(byte *)(unaff_EDI + 2) & 1) == 0) {
    FUN_00419530(local_23b8.tm_year + 0x76c,0x800,&local_1010,L"%04d%02d%02d%02d%02d%02d  [%s]\t%s")
    ;
  }
  else {
    FUN_00419530(local_23b8.tm_mon + 1,0x800,&local_1010,L"%04d%02d%02d%02d%02d%02d  [%s]    %s");
  }
  if ((*(byte *)(unaff_EDI + 2) & 2) != 0) {
    local_1810 = '\0';
    _memset(local_180f,0,0x7ff);
    WideCharToMultiByte(0,0,&local_1010,-1,&local_1810,0x800,(LPCSTR)0x0,(LPBOOL)0x0);
    local_23c0[0] = (FILE *)0x0;
    __wfopen_s(local_23c0,pwVar2,L"a+");
    if (local_23c0[0] != (FILE *)0x0) {
      FUN_004774a2(local_23c0[0],0x4b2be4);
      _fclose(local_23c0[0]);
    }
  }
  uVar3 = local_235c;
  if ((*(byte *)(unaff_EDI + 2) & 1) != 0) {
    local_2358 = 7;
    local_235c = 0;
    local_236c = (void *)((uint)local_236c & 0xffff0000);
    pwVar2 = &local_1010;
    local_4 = 0;
    uStack_3 = 0;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    FUN_00406500((undefined4 *)&local_1010,(int)pwVar2 - (int)local_100e >> 1);
    while (local_235c != 0) {
      local_233c = 7;
      local_2340 = 0;
      local_2350[0] = (undefined4 ****)((uint)local_2350[0] & 0xffff0000);
      local_4 = 1;
      uVar3 = local_235c;
      if (0x41 < local_235c) {
        uVar3 = 0x41;
      }
      FUN_004194e0((void *)0x0,local_2370,uVar3);
      local_4 = 2;
      FUN_004069c0(local_2354,0,0xffffffff);
      local_4 = 1;
      if (7 < local_2374) {
                    /* WARNING: Subroutine does not return */
        _free(local_2388);
      }
      FUN_00406100();
      lParam = (undefined4 *****)local_2350[0];
      if (local_233c < 8) {
        lParam = local_2350;
      }
      SendMessageW((HWND)unaff_EDI[0x1004],0x180,0,(LPARAM)lParam);
      LVar4 = SendMessageW((HWND)unaff_EDI[0x1004],0x18b,0,0);
      SendMessageW((HWND)unaff_EDI[0x1004],0x186,LVar4 - 1,0);
      local_4 = 0;
      if (7 < local_233c) {
                    /* WARNING: Subroutine does not return */
        _free(local_2350[0]);
      }
    }
    uVar3 = 0;
    if (7 < local_2358) {
                    /* WARNING: Subroutine does not return */
      _free(local_236c);
    }
  }
  local_235c = uVar3;
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_23c0);
  return;
}


// Address: 0x0041f820
// Name: FUN_0041f820
// Category: Launcher


void __fastcall FUN_0041f820(CWnd *param_1)

{
  char cVar1;
  undefined *puVar2;
  HRSRC pHVar3;
  HBITMAP h;
  HDC pHVar4;
  CDC *pCVar5;
  int iVar6;
  HMODULE pHVar7;
  HRGN pHStack_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined **local_220 [129];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00499f6b;
  local_14 = ExceptionList;
  local_1c = DAT_004c3750 ^ (uint)&pHStack_23c;
  ExceptionList = &local_14;
  FUN_004349c0(local_220,0);
  local_c = 0;
  puVar2 = FUN_0040a2b0();
  pHVar7 = (HMODULE)0x0;
  iVar6 = 3;
  pHVar3 = FindResourceW((HMODULE)0x0,(LPCWSTR)(*(int *)(puVar2 + 0x5c) + 5000U & 0xffff),
                         (LPCWSTR)&lpType_004b2fec);
  cVar1 = FUN_00435440(local_220,pHVar3,iVar6,pHVar7);
  if (cVar1 == '\0') {
    local_c = 0xffffffff;
    local_220[0] = CxImage::vftable;
    FUN_00434a90((int)local_220);
    FUN_004349e0((int)local_220);
  }
  else {
    h = FUN_00435520(local_220,(HDC)0x0);
    if (h == (HBITMAP)0x0) {
      local_c = 0xffffffff;
      local_220[0] = CxImage::vftable;
      FUN_00434a90((int)local_220);
      FUN_004349e0((int)local_220);
    }
    else {
      local_238 = 0;
      local_234 = 0;
      local_230 = 0;
      local_22c = 0;
      local_228 = 0;
      local_224 = 0;
      GetObjectW(h,0x18,&local_238);
      *(undefined4 *)(param_1 + 0x98) = local_230;
      *(undefined4 *)(param_1 + 0x94) = local_234;
      pHStack_23c = (HRGN)FUN_00416a40();
      pHVar4 = GetDC(*(HWND *)(param_1 + 0x20));
      pCVar5 = CDC::FromHandle(pHVar4);
      pHVar4 = CreateCompatibleDC(*(HDC *)(pCVar5 + 4));
      *(HDC *)(param_1 + 0x9c) = pHVar4;
      ReleaseDC(*(HWND *)(param_1 + 0x20),*(HDC *)(pCVar5 + 4));
      SelectObject(*(HDC *)(param_1 + 0x9c),h);
      CWnd::SetWindowPos(param_1,(CWnd *)&DAT_004ca800,0,0,*(int *)(param_1 + 0x94),
                         *(int *)(param_1 + 0x98),0x16);
      SetForegroundWindow(*(HWND *)(param_1 + 0x20));
      SetActiveWindow(*(HWND *)(param_1 + 0x20));
      SetWindowRgn(*(HWND *)(param_1 + 0x20),pHStack_23c,0);
      local_c = 0xffffffff;
      local_220[0] = CxImage::vftable;
      FUN_00434a90((int)local_220);
      FUN_004349e0((int)local_220);
    }
  }
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&pHStack_23c);
  return;
}


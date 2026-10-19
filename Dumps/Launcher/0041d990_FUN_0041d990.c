// Address: 0x0041d990
// Name: FUN_0041d990
// Category: Launcher


void __fastcall FUN_0041d990(CWnd *param_1)

{
  HWND pHVar1;
  
  pHVar1 = GetCapture();
  if (pHVar1 == *(HWND *)(param_1 + 0x20)) {
    ReleaseCapture();
    param_1[0x5d] = (CWnd)0x0;
  }
  CWnd::Default(param_1);
  return;
}


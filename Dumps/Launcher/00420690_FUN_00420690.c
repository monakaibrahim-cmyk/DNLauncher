// Address: 0x00420690
// Name: FUN_00420690
// Category: Launcher


void __fastcall FUN_00420690(CWnd *param_1)

{
  if ((*(uint *)(param_1 + 0xa0) & 1) != 0) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xfffffffe;
    ReleaseCapture();
  }
  CWnd::Default(param_1);
  return;
}


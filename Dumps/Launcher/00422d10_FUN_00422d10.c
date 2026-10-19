// Address: 0x00422d10
// Name: FUN_00422d10
// Category: Launcher


void __fastcall FUN_00422d10(int param_1)

{
  HFONT pHVar1;
  
  pHVar1 = CreateFontW(0xe,0,0,0,700,0,0,0,0,0,0,0,0x10,L"Lucida Sans Unicode");
  Attach((void *)(param_1 + 0xac),(int)pHVar1);
  pHVar1 = CreateFontW(0xf,0,0,0,700,0,0,0,0,0,0,0,0x10,L"Lucida Sans Unicode");
  Attach((void *)(param_1 + 0x44e0),(int)pHVar1);
  pHVar1 = CreateFontW(0xf,0,0,0,400,0,0,0,0,0,0,0,0x10,L"Lucida Sans Unicode");
  Attach((void *)(param_1 + 0x44d8),(int)pHVar1);
  return;
}


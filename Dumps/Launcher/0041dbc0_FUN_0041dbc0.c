// Address: 0x0041dbc0
// Name: FUN_0041dbc0
// Category: Launcher


void __thiscall FUN_0041dbc0(void *this,undefined4 param_1,uint param_2,uint param_3)

{
  POINT pt;
  BOOL BVar1;
  tagPOINT local_20;
  tagRECT local_18;
  
  FUN_0041d740(this,param_1,param_2,param_3);
  GetWindowRect(*(HWND *)((int)this + 0x20),&local_18);
  GetCursorPos(&local_20);
  pt.y = local_20.y;
  pt.x = local_20.x;
  BVar1 = PtInRect(&local_18,pt);
  if (BVar1 == 0) {
    SendMessageW(*(HWND *)((int)this + 0x20),0xf3,*(WPARAM *)((int)this + 0x908),0);
  }
  return;
}


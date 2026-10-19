// Address: 0x0041dc40
// Name: FUN_0041dc40
// Category: Launcher


void __thiscall FUN_0041dc40(void *this,byte param_1)

{
  POINT pt;
  BOOL BVar1;
  tagPOINT local_20;
  tagRECT local_18;
  
  if ((param_1 & 1) != 0) {
    GetWindowRect(*(HWND *)((int)this + 0x20),&local_18);
    GetCursorPos(&local_20);
    pt.y = local_20.y;
    pt.x = local_20.x;
    BVar1 = PtInRect(&local_18,pt);
    if (BVar1 == 0) {
      SendMessageW(*(HWND *)((int)this + 0x20),0xf3,*(WPARAM *)((int)this + 0x908),0);
    }
  }
  return;
}


// Address: 0x0041d740
// Name: FUN_0041d740
// Category: Launcher


void __thiscall FUN_0041d740(void *this,undefined4 param_1,uint param_2,uint param_3)

{
  POINT Point;
  HWND pHVar1;
  tagPOINT local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  
  if (*(int *)((int)this + 0x58) != 0) {
    local_2c.x = param_2;
    local_2c.y = param_3;
    ClientToScreen(*(HWND *)((int)this + 0x20),&local_2c);
    Point.y = local_2c.y;
    Point.x = local_2c.x;
    pHVar1 = WindowFromPoint(Point);
    if (pHVar1 == *(HWND *)((int)this + 0x20)) {
      if (*(int *)((int)this + 0x58) == 2) {
        SendMessageW(*(HWND *)((int)this + 0x20),0xf1,(uint)(*(char *)((int)this + 0x54) == '\0'),0)
        ;
      }
      if (*(int *)((int)this + 0x58) == 4) {
        SendMessageW(*(HWND *)((int)this + 0x20),0xf1,1,0);
      }
    }
  }
  if (*(HWND *)((int)this + 0x80) != (HWND)0x0) {
    local_24 = *(undefined4 *)((int)this + 0x20);
    local_1c = param_1;
    local_c = param_3 & 0xffff;
    local_20 = 0x202;
    local_14 = 0;
    local_18 = param_3 << 0x10 | param_2 & 0xffff;
    local_10 = param_2 & 0xffff;
    SendMessageW(*(HWND *)((int)this + 0x80),0x407,0,(LPARAM)&local_24);
  }
  *(undefined1 *)((int)this + 0x5d) = 0;
  CWnd::Default(this);
  return;
}


// Address: 0x0041d830
// Name: FUN_0041d830
// Category: Launcher


void __thiscall FUN_0041d830(void *this,HWND param_1,uint param_2,uint param_3)

{
  HWND pHVar1;
  POINT Point;
  HWND pHVar2;
  LRESULT LVar3;
  BOOL BVar4;
  tagTRACKMOUSEEVENT local_24;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  
  if (*(HWND *)((int)this + 0x80) != (HWND)0x0) {
    local_24.cbSize = *(uint *)((int)this + 0x20);
    local_24.hwndTrack = param_1;
    local_10 = param_2 & 0xffff;
    local_c = param_3 & 0xffff;
    local_24.dwFlags = 0x200;
    local_14 = 0;
    local_24.dwHoverTime = CONCAT22((undefined2)param_3,(undefined2)param_2);
    SendMessageW(*(HWND *)((int)this + 0x80),0x407,0,(LPARAM)&local_24);
  }
  if (*(char *)((int)this + 0x5d) == '\0') {
LAB_0041d90f:
    if (*(char *)((int)this + 0x5c) != '\0') goto LAB_0041d955;
    local_24.hwndTrack = *(HWND *)((int)this + 0x20);
    local_24.cbSize = 0x10;
    local_24.dwFlags = 2;
    local_24.dwHoverTime = 0;
    BVar4 = _TrackMouseEvent(&local_24);
    if (BVar4 == 0) goto LAB_0041d955;
    *(undefined1 *)((int)this + 0x5c) = 1;
  }
  else {
    pHVar1 = *(HWND *)((int)this + 0x20);
    pHVar2 = GetCapture();
    if (pHVar2 != pHVar1) goto LAB_0041d90f;
    local_24.cbSize = param_2;
    local_24.dwFlags = param_3;
    ClientToScreen(pHVar1,(LPPOINT)&local_24);
    Point.y = local_24.dwFlags;
    Point.x = local_24.cbSize;
    pHVar2 = WindowFromPoint(Point);
    LVar3 = SendMessageW(*(HWND *)((int)this + 0x20),0xf2,0,0);
    pHVar1 = *(HWND *)((int)this + 0x20);
    if ((((byte)LVar3 & 4) == 4) == (pHVar2 == pHVar1)) goto LAB_0041d955;
    SendMessageW(pHVar1,0xf3,(uint)(pHVar2 == pHVar1),0);
  }
  InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)0x0,1);
LAB_0041d955:
  CWnd::Default(this);
  return;
}


// Address: 0x0041d9e0
// Name: FUN_0041d9e0
// Category: Launcher


void __thiscall FUN_0041d9e0(void *this,int param_1)

{
  if ((*(int *)((int)this + 0x58) != 0) && (param_1 == 0x20)) {
    if (*(int *)((int)this + 0x58) == 2) {
      SendMessageW(*(HWND *)((int)this + 0x20),0xf1,(uint)(*(char *)((int)this + 0x54) == '\0'),0);
    }
    if (*(int *)((int)this + 0x58) == 4) {
      SendMessageW(*(HWND *)((int)this + 0x20),0xf1,1,0);
    }
  }
  CWnd::Default(this);
  return;
}


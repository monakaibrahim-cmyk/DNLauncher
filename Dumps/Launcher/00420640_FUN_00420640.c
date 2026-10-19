// Address: 0x00420640
// Name: FUN_00420640
// Category: Launcher


void __thiscall FUN_00420640(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HWND pHVar1;
  
  if ((*(uint *)((int)this + 0xa0) & 1) == 0) {
    *(uint *)((int)this + 0xa0) = *(uint *)((int)this + 0xa0) | 1;
    *(undefined4 *)((int)this + 0xa4) = param_2;
    *(undefined4 *)((int)this + 0xa8) = param_3;
    pHVar1 = SetCapture(*(HWND *)((int)this + 0x20));
    CWnd::FromHandle(pHVar1);
  }
  CWnd::Default(this);
  return;
}


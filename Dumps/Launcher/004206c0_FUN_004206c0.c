// Address: 0x004206c0
// Name: FUN_004206c0
// Category: Launcher


void __thiscall FUN_004206c0(void *this,undefined4 param_1,int param_2,int param_3)

{
  tagRECT local_10;
  
  if ((*(byte *)((int)this + 0xa0) & 1) != 0) {
    GetWindowRect(*(HWND *)((int)this + 0x20),&local_10);
    local_10.left = local_10.left + (param_2 - *(int *)((int)this + 0xa4));
    local_10.top = local_10.top + (param_3 - *(int *)((int)this + 0xa8));
    CWnd::SetWindowPos(this,(CWnd *)&DAT_004ca800,local_10.left,local_10.top,0,0,5);
    SendMessageW(*(HWND *)((int)this + 0x20),0xf,0,0);
  }
  CWnd::Default(this);
  return;
}


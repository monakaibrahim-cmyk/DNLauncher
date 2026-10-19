// Address: 0x00420580
// Name: FUN_00420580
// Category: Launcher


void __thiscall FUN_00420580(void *this,CDC *param_1,CWnd *param_2,uint param_3)

{
  tagRECT local_10;
  
  CWnd::OnCtlColor(this,param_1,param_2,param_3);
  if (param_3 == 6) {
    FUN_0045b4b4(param_1,1);
    GetWindowRect(*(HWND *)(param_2 + 0x20),&local_10);
    RedrawWindow(*(HWND *)((int)this + 0x20),&local_10,(HRGN)0x0,0x105);
    GetStockObject(5);
  }
  return;
}


// Address: 0x00459c1b
// Name: FUN_00459c1b
// Category: Utility


void __thiscall FUN_00459c1b(void *this,int param_1,BOOL param_2)

{
  HWND pHVar1;
  
  pHVar1 = (HWND)0x0;
  if (param_1 != 0) {
    pHVar1 = *(HWND *)(param_1 + 0x20);
  }
  pHVar1 = GetNextDlgTabItem(*(HWND *)((int)this + 0x20),pHVar1,param_2);
  CWnd::FromHandle(pHVar1);
  return;
}


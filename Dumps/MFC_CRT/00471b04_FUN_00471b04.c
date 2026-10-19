// Address: 0x00471b04
// Name: FUN_00471b04
// Category: MFC_CRT


void __thiscall FUN_00471b04(void *this,int param_1,BOOL param_2)

{
  HWND pHVar1;
  
  pHVar1 = (HWND)0x0;
  if (param_1 != 0) {
    pHVar1 = *(HWND *)(param_1 + 0x20);
  }
  pHVar1 = GetNextDlgGroupItem(*(HWND *)((int)this + 0x20),pHVar1,param_2);
  CWnd::FromHandle(pHVar1);
  return;
}


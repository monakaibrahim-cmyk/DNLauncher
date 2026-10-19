// Address: 0x0046453c
// Name: FUN_0046453c
// Category: MFC_CRT


void __fastcall FUN_0046453c(int param_1)

{
  HWND pHVar1;
  
  if ((*(int *)(param_1 + 0x24) == 0) && (*(int *)(param_1 + 0x20) == 0)) {
    pHVar1 = GetActiveWindow();
    CWnd::FromHandle(pHVar1);
  }
  return;
}


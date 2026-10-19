// Address: 0x00455449
// Name: FUN_00455449
// Category: Utility


void FUN_00455449(CWnd *param_1,LPRECT param_2,ulong *param_3)

{
  ulong uVar1;
  
  GetWindowRect(*(HWND *)(param_1 + 0x20),param_2);
  uVar1 = CWnd::GetExStyle(param_1);
  *param_3 = uVar1;
  return;
}


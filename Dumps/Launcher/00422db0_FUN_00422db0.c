// Address: 0x00422db0
// Name: FUN_00422db0
// Category: Launcher


void __fastcall FUN_00422db0(int *param_1)

{
  FUN_0041fa20(param_1);
  CWnd::ShowWindow((CWnd *)(param_1 + 0x4fd),5);
  CWnd::ShowWindow((CWnd *)(param_1 + 0x120c),0);
  CWnd::EnableWindow((CWnd *)(param_1 + 0x120c),0);
  CWnd::ShowWindow((CWnd *)(param_1 + 0x144e),0);
  CWnd::EnableWindow((CWnd *)(param_1 + 0x144e),0);
  FUN_00423910();
  return;
}


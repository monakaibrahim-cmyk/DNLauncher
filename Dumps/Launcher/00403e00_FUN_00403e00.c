// Address: 0x00403e00
// Name: FUN_00403e00
// Category: Launcher


void __fastcall FUN_00403e00(CWnd *param_1)

{
  CWnd::OnDestroy(param_1);
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0xe4));
  KillTimer(*(HWND *)(param_1 + 0x20),1);
  return;
}


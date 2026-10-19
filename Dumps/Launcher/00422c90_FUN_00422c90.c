// Address: 0x00422c90
// Name: FUN_00422c90
// Category: Launcher


long __fastcall FUN_00422c90(CWnd *param_1)

{
  POINT pt;
  CWnd *pCVar1;
  BOOL BVar2;
  HCURSOR hCursor;
  long lVar3;
  tagPOINT local_20;
  tagRECT local_18;
  
  GetCursorPos(&local_20);
  pCVar1 = CWnd::GetDlgItem(param_1,0x1b79);
  GetWindowRect(*(HWND *)(pCVar1 + 0x20),&local_18);
  pt.y = local_20.y;
  pt.x = local_20.x;
  BVar2 = PtInRect(&local_18,pt);
  if (BVar2 != 0) {
    AfxGetModuleState();
    hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f89);
    SetCursor(hCursor);
    return 1;
  }
  lVar3 = CWnd::Default(param_1);
  return lVar3;
}


// Address: 0x004204a0
// Name: FUN_004204a0
// Category: Launcher


void __fastcall FUN_004204a0(CDialog *param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_7c [4];
  tagRECT local_78;
  CPaintDC local_68 [4];
  HDC local_64;
  uint local_c;
  
  local_c = DAT_004c3750 ^ (uint)auStack_7c;
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x20));
  if (BVar1 != 0) {
    CPaintDC::CPaintDC(local_68,(CWnd *)param_1);
    SendMessageW(*(HWND *)(param_1 + 0x20),0x27,(WPARAM)local_64,0);
    iVar2 = GetSystemMetrics(0xb);
    iVar3 = GetSystemMetrics(0xc);
    GetClientRect(*(HWND *)(param_1 + 0x20),&local_78);
    DrawIcon(local_64,(((local_78.right - local_78.left) - iVar2) + 1) / 2,
             (((local_78.bottom - local_78.top) - iVar3) + 1) / 2,*(HICON *)(param_1 + 0x90));
    CPaintDC::~CPaintDC(local_68);
    __security_check_cookie(local_c ^ (uint)auStack_7c);
    return;
  }
  CDialog::OnPaint(param_1);
  __security_check_cookie(local_c ^ (uint)auStack_7c);
  return;
}


// Address: 0x00419c40
// Name: FUN_00419c40
// Category: Launcher


undefined4 FUN_00419c40(void)

{
  int in_EAX;
  HWND pHVar1;
  CWnd *this;
  CObject *this_00;
  LPRECT unaff_ESI;
  
  if (*(int *)(in_EAX + 0xe8) != 0) {
    GetWindowRect(*(HWND *)(*(int *)(in_EAX + 0xe8) + 0x20),unaff_ESI);
    pHVar1 = GetParent(*(HWND *)(*(int *)(in_EAX + 0xe8) + 0x20));
    this = CWnd::FromHandle(pHVar1);
    CWnd::ScreenToClient(this,unaff_ESI);
    return 1;
  }
  this_00 = FUN_00419bd0();
  if (this_00 != (CObject *)0x0) {
    FUN_0046602c(this_00,*(undefined4 *)(in_EAX + 0x5c),unaff_ESI);
    return 1;
  }
  return 0;
}


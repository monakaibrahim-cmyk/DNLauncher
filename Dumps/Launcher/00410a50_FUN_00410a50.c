// Address: 0x00410a50
// Name: FUN_00410a50
// Category: Launcher


void FUN_00410a50(void)

{
  int in_EAX;
  
  PostMessageW(*(HWND *)(in_EAX + 0x44),0x8065,*(WPARAM *)(in_EAX + 0x40),0);
  return;
}


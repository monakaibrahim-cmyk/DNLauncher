// Address: 0x0041c470
// Name: FUN_0041c470
// Category: Launcher


void __fastcall FUN_0041c470(int param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)SendMessageW(*(HWND *)(param_1 + 0x20),0x31,0,0);
  CGdiObject::FromHandle(pvVar1);
  return;
}


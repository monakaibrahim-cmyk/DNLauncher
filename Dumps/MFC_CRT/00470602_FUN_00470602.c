// Address: 0x00470602
// Name: FUN_00470602
// Category: MFC_CRT


void __thiscall FUN_00470602(void *this,UINT param_1,WPARAM param_2,LPARAM param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x74))(param_1);
  if (iVar1 != 0) {
    SendMessageW(*(HWND *)(iVar1 + 0x20),param_1,param_2,param_3);
  }
  return;
}


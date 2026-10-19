// Address: 0x004700a0
// Name: FUN_004700a0
// Category: MFC_CRT


void __thiscall FUN_004700a0(void *this,HWND param_1)

{
  int iVar1;
  HWND lpString;
  
  lpString = param_1;
  iVar1 = (**(code **)(*(int *)this + 0x74))();
  if (iVar1 != 0) {
    FID_conflict_SetWindowTextW(param_1,(LPCWSTR)lpString);
  }
  return;
}


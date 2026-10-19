// Address: 0x00422370
// Name: FUN_00422370
// Category: Launcher


int __thiscall FUN_00422370(void *this,tagMSG *param_1)

{
  BOOL BVar1;
  int iVar2;
  
  if (param_1->message != 0x100) {
LAB_004223f6:
    iVar2 = CDialog::PreTranslateMessage(this,param_1);
    return iVar2;
  }
  if (param_1->wParam == 0xd) {
    if (((this != (void *)0xfffff514) && (*(int *)((int)this + 0xb0c) != 0)) &&
       (BVar1 = IsWindowVisible(*(HWND *)((int)this + 0xb0c)), BVar1 != 0)) {
      FUN_004208c0(this);
    }
  }
  else {
    if (param_1->wParam != 0x1b) goto LAB_004223f6;
    if (((this != (void *)0xffffe304) && (*(int *)((int)this + 0x1d1c) != 0)) &&
       (BVar1 = IsWindowVisible(*(HWND *)((int)this + 0x1d1c)), BVar1 != 0)) {
      FUN_00420f80(this);
      return 1;
    }
  }
  return 1;
}


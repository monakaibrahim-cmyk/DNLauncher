// Address: 0x00403e30
// Name: FUN_00403e30
// Category: Launcher


int __thiscall FUN_00403e30(void *this,tagMSG *param_1)

{
  int iVar1;
  
  if ((param_1->wParam != 0xd) && (param_1->wParam != 0x1b)) {
    iVar1 = CDialog::PreTranslateMessage(this,param_1);
    return iVar1;
  }
  return 0;
}


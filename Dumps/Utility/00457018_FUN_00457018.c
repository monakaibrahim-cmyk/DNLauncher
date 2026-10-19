// Address: 0x00457018
// Name: FUN_00457018
// Category: Utility


void __thiscall FUN_00457018(void *this,undefined4 param_1,undefined4 param_2,CWnd *param_3)

{
  int iVar1;
  
  if ((param_3 != (CWnd *)0x0) &&
     (iVar1 = CWnd::SendChildNotifyLastMsg(param_3,(long *)0x0), iVar1 != 0)) {
    return;
  }
  CWnd::Default(this);
  return;
}


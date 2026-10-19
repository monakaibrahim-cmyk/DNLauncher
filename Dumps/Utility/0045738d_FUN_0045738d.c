// Address: 0x0045738d
// Name: FUN_0045738d
// Category: Utility


void __thiscall FUN_0045738d(void *this,undefined4 param_1,int *param_2)

{
  CNoTrackObject *pCVar1;
  HMENU__ *pHVar2;
  CMenu *pCVar3;
  CWnd *this_00;
  int iVar4;
  
  if (*param_2 != 1) {
    this_00 = CWnd::GetDescendantWindow(*(HWND__ **)((int)this + 0x20),param_2[1],1);
    if ((this_00 != (CWnd *)0x0) &&
       (iVar4 = CWnd::SendChildNotifyLastMsg(this_00,(long *)0x0), iVar4 != 0)) {
      return;
    }
LAB_00457406:
    CWnd::Default(this);
    return;
  }
  pCVar1 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_004c8efc,FUN_00452a02);
  if (pCVar1 != (CNoTrackObject *)0x0) {
    if (*(HWND *)(pCVar1 + 0x74) == *(HWND *)((int)this + 0x20)) {
      pHVar2 = *(HMENU__ **)(pCVar1 + 0x78);
    }
    else {
      pHVar2 = GetMenu(*(HWND *)((int)this + 0x20));
    }
    pCVar3 = CMenu::FromHandle(pHVar2);
    if (pCVar3 != (CMenu *)0x0) {
      pCVar3 = _AfxFindPopupMenuFromID(pCVar3,param_2[2]);
      if (pCVar3 != (CMenu *)0x0) {
        (**(code **)(*(int *)pCVar3 + 0x10))(param_2);
      }
      goto LAB_00457406;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}


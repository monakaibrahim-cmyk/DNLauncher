// Address: 0x00461db0
// Name: FUN_00461db0
// Category: MFC_CRT


undefined4 __thiscall FUN_00461db0(void *this,int param_1,RECT *param_2)

{
  LPRECT lprc1;
  int iVar1;
  BOOL BVar2;
  
  if (param_1 == 1) {
    CWnd::RepositionBars(this,0,0xffff,0xe900,1,param_2,(tagRECT *)0x0,1);
  }
  else if ((param_1 != 2) && (param_1 == 3)) {
    lprc1 = (LPRECT)((int)this + 0x70);
    if (param_2 == (RECT *)0x0) {
      iVar1 = FUN_004609b5((int *)lprc1);
      if (iVar1 != 0) {
        return 0;
      }
      SetRectEmpty(lprc1);
    }
    else {
      BVar2 = EqualRect(lprc1,param_2);
      if (BVar2 != 0) {
        return 0;
      }
      CopyRect(lprc1,param_2);
    }
  }
  return 1;
}


// Address: 0x004663b2
// Name: CToolTipCtrl::OnWindowFromPoint
// Category: MFC_CRT


/* Library Function - Single Match
    protected: long __thiscall CToolTipCtrl::OnWindowFromPoint(unsigned int,long)
   
   Library: Visual Studio 2005 Release */

long __thiscall CToolTipCtrl::OnWindowFromPoint(CToolTipCtrl *this,uint param_1,long param_2)

{
  tagPOINT tVar1;
  HWND hWnd;
  HWND hWnd_00;
  int iVar2;
  BOOL BVar3;
  tagPOINT local_c;
  
  local_c.x = *(LONG *)param_2;
  local_c.y = *(LONG *)(param_2 + 4);
  hWnd = WindowFromPoint(*(POINT *)param_2);
  hWnd_00 = hWnd;
  if ((hWnd != (HWND)0x0) &&
     ((hWnd_00 = GetParent(hWnd), hWnd_00 == (HWND)0x0 ||
      (iVar2 = _AfxIsComboBoxControl(hWnd_00,2), iVar2 == 0)))) {
    ScreenToClient(hWnd,&local_c);
    tVar1.y = local_c.y;
    tVar1.x = local_c.x;
    hWnd_00 = _AfxChildWindowFromPoint(hWnd,tVar1);
    if ((hWnd_00 == (HWND__ *)0x0) || (BVar3 = IsWindowEnabled(hWnd_00), BVar3 != 0)) {
      hWnd_00 = hWnd;
    }
  }
  return (long)hWnd_00;
}


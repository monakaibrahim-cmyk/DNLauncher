// Address: 0x0045eb2f
// Name: CScrollView::UpdateBars
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CScrollView::UpdateBars(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CScrollView::UpdateBars(CScrollView *this)

{
  tagPOINT tVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  LRESULT LVar4;
  int iVar5;
  UINT UVar6;
  UINT UVar7;
  tagSCROLLINFO local_58;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  tagRECT local_2c;
  UINT local_1c;
  UINT local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if (*(int *)(this + 0x84) == 0) {
    *(undefined4 *)(this + 0x84) = 1;
    local_8 = 1;
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    if ((pCVar3 == (CWnd *)0x0) ||
       (LVar4 = SendMessageW(*(HWND *)(pCVar3 + 0x20),0x368,0,(LPARAM)&local_3c), LVar4 == 0)) {
      iVar5 = GetTrueClientSize(this,(CSize *)&local_1c,(CSize *)&local_14);
      UVar6 = local_18;
      UVar7 = local_1c;
      if (iVar5 == 0) {
        GetClientRect(*(HWND *)(this + 0x20),&local_2c);
        if ((0 < local_2c.right) && (0 < local_2c.bottom)) {
          CWnd::EnableScrollBarCtrl((CWnd *)this,3,0);
        }
        *(undefined4 *)(this + 0x84) = 0;
        return;
      }
    }
    else {
      local_8 = 0;
      GetScrollBarSizes(this,(CSize *)&local_14);
      UVar6 = local_30 - local_38;
      UVar7 = local_34 - local_3c;
    }
    FUN_0045ea73(this,UVar7,UVar6,&local_c,&local_2c.right,(int *)&local_1c,local_8);
    if (local_c != 0) {
      UVar6 = UVar6 - local_10;
    }
    if (local_8 != 0) {
      UVar7 = UVar7 - local_14;
    }
    tVar1.y = local_18;
    tVar1.x = local_1c;
    ScrollToDevicePosition(this,tVar1);
    local_58.nMin = 0;
    local_58.fMask = 3;
    CWnd::EnableScrollBarCtrl((CWnd *)this,0,local_c);
    if (local_c != 0) {
      local_58.nMax = *(int *)(this + 0x68) + -1;
      local_58.nPage = UVar7;
      iVar5 = CWnd::SetScrollInfo((CWnd *)this,0,&local_58,1);
      if (iVar5 == 0) {
        CWnd::SetScrollRange((CWnd *)this,0,0,local_2c.right,1);
      }
    }
    CWnd::EnableScrollBarCtrl((CWnd *)this,1,local_8);
    if (local_8 != 0) {
      local_58.nMax = *(int *)(this + 0x6c) + -1;
      local_58.nPage = UVar6;
      iVar5 = CWnd::SetScrollInfo((CWnd *)this,1,&local_58,1);
      if (iVar5 == 0) {
        CWnd::SetScrollRange((CWnd *)this,1,0,local_2c.bottom,1);
      }
    }
    *(undefined4 *)(this + 0x84) = 0;
  }
  return;
}


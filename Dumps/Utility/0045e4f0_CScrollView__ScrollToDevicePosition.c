// Address: 0x0045e4f0
// Name: CScrollView::ScrollToDevicePosition
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CScrollView::ScrollToDevicePosition(struct tagPOINT)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CScrollView::ScrollToDevicePosition(CScrollView *this,tagPOINT param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CWnd::GetScrollPos((CWnd *)this,0);
  CWnd::SetScrollPos((CWnd *)this,0,param_1.x,1);
  iVar2 = CWnd::GetScrollPos((CWnd *)this,1);
  CWnd::SetScrollPos((CWnd *)this,1,param_1.y,1);
  CWnd::ScrollWindow((CWnd *)this,iVar1 - param_1.x,iVar2 - param_1.y,(tagRECT *)0x0,(tagRECT *)0x0)
  ;
  return;
}


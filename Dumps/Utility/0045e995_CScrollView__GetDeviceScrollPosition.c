// Address: 0x0045e995
// Name: CScrollView::GetDeviceScrollPosition
// Category: Utility


/* Library Function - Single Match
    public: class CPoint __thiscall CScrollView::GetDeviceScrollPosition(void)const 
   
   Library: Visual Studio 2005 Release */

int * __thiscall CScrollView::GetDeviceScrollPosition(CScrollView *this)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  
  iVar1 = CWnd::GetScrollPos((CWnd *)this,1);
  iVar2 = CWnd::GetScrollPos((CWnd *)this,0);
  in_stack_00000004[1] = iVar1;
  *in_stack_00000004 = iVar2;
  return in_stack_00000004;
}


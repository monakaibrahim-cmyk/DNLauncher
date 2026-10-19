// Address: 0x004556ed
// Name: CWnd::SetScrollRange
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CWnd::SetScrollRange(int,int,int,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::SetScrollRange(CWnd *this,int param_1,int param_2,int param_3,int param_4)

{
  CScrollBar *this_00;
  
  this_00 = (CScrollBar *)(**(code **)(*(int *)this + 0x70))(param_1);
  if (this_00 == (CScrollBar *)0x0) {
    ::SetScrollRange(*(HWND *)(this + 0x20),param_1,param_2,param_3,param_4);
  }
  else {
    CScrollBar::SetScrollRange(this_00,param_2,param_3,param_4);
  }
  return;
}


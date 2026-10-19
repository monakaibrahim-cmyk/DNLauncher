// Address: 0x00455752
// Name: CWnd::EnableScrollBarCtrl
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CWnd::EnableScrollBarCtrl(int,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::EnableScrollBarCtrl(CWnd *this,int param_1,int param_2)

{
  CWnd *this_00;
  int wBar;
  
  wBar = param_1;
  if (param_1 == 3) {
    EnableScrollBarCtrl(this,0,param_2);
    wBar = 1;
  }
  this_00 = (CWnd *)(**(code **)(*(int *)this + 0x70))(wBar);
  if (this_00 == (CWnd *)0x0) {
    ShowScrollBar(*(HWND *)(this + 0x20),wBar,param_1);
  }
  else {
    EnableWindow(this_00,param_1);
  }
  return;
}


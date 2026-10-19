// Address: 0x00455387
// Name: CScrollBar::SetScrollRange
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CScrollBar::SetScrollRange(int,int,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CScrollBar::SetScrollRange(CScrollBar *this,int param_1,int param_2,int param_3)

{
  ::SetScrollRange(*(HWND *)(this + 0x20),2,param_1,param_2,param_3);
  return;
}


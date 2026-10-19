// Address: 0x0045d4c5
// Name: OnStatusTextChange
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CHtmlView::OnStatusTextChange(char const *)
    public: virtual void __thiscall CHtmlView::OnStatusTextChange(wchar_t const *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall OnStatusTextChange(void *this,LPARAM param_1)

{
  CFrameWnd *this_00;
  
  this_00 = CWnd::GetParentFrame(this);
  if (this_00 != (CFrameWnd *)0x0) {
    FUN_00461875(this_00,param_1);
    return;
  }
  return;
}


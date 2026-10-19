// Address: 0x00454c14
// Name: CWnd::CalcWindowRect
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CWnd::CalcWindowRect(struct tagRECT *,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
  ulong dwExStyle;
  ulong dwStyle;
  BOOL bMenu;
  
  dwExStyle = GetExStyle(this);
  if (param_2 == 0) {
    dwExStyle = dwExStyle & 0xfffffdff;
  }
  bMenu = 0;
  dwStyle = GetExStyle(this);
  AdjustWindowRectEx(param_1,dwStyle,bMenu,dwExStyle);
  return;
}


// Address: 0x0045b907
// Name: CWnd::ScreenToClient
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CWnd::ScreenToClient(struct tagRECT *)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CWnd::ScreenToClient(CWnd *this,tagRECT *param_1)

{
  LONG *lpPoint;
  LONG LVar1;
  ulong uVar2;
  
  ::ScreenToClient(*(HWND *)(this + 0x20),(LPPOINT)param_1);
  lpPoint = &param_1->right;
  ::ScreenToClient(*(HWND *)(this + 0x20),(LPPOINT)lpPoint);
  uVar2 = GetExStyle(this);
  if ((uVar2 & 0x400000) != 0) {
    LVar1 = param_1->left;
    param_1->left = *lpPoint;
    *lpPoint = LVar1;
  }
  return;
}


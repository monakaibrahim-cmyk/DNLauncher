// Address: 0x0045b943
// Name: CWnd::ClientToScreen
// Category: Utility


/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall CWnd::ClientToScreen(struct tagRECT *)const 
    public: void __thiscall CWnd::ScreenToClient(struct tagRECT *)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CWnd::ClientToScreen(CWnd *this,tagRECT *param_1)

{
  LONG *lpPoint;
  LONG LVar1;
  ulong uVar2;
  
  ::ClientToScreen(*(HWND *)(this + 0x20),(LPPOINT)param_1);
  lpPoint = &param_1->right;
  ::ClientToScreen(*(HWND *)(this + 0x20),(LPPOINT)lpPoint);
  uVar2 = GetExStyle(this);
  if ((uVar2 & 0x400000) != 0) {
    LVar1 = param_1->left;
    param_1->left = *lpPoint;
    *lpPoint = LVar1;
  }
  return;
}


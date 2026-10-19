// Address: 0x00454b0e
// Name: CWnd::SetScrollInfo
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::SetScrollInfo(int,struct tagSCROLLINFO *,int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::SetScrollInfo(CWnd *this,int param_1,tagSCROLLINFO *param_2,int param_3)

{
  int iVar1;
  HWND hwnd;
  
  hwnd = *(HWND *)(this + 0x20);
  if (param_1 != 2) {
    iVar1 = (**(code **)(*(int *)this + 0x70))(param_1);
    if (iVar1 != 0) {
      hwnd = *(HWND *)(iVar1 + 0x20);
      param_1 = 2;
    }
  }
  param_2->cbSize = 0x1c;
  ::SetScrollInfo(hwnd,param_1,param_2,param_3);
  return 1;
}


// Address: 0x00454b4b
// Name: CWnd::GetScrollInfo
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::GetScrollInfo(int,struct tagSCROLLINFO *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::GetScrollInfo(CWnd *this,int param_1,tagSCROLLINFO *param_2,uint param_3)

{
  int iVar1;
  BOOL BVar2;
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
  param_2->fMask = param_3;
  BVar2 = ::GetScrollInfo(hwnd,param_1,param_2);
  return BVar2;
}


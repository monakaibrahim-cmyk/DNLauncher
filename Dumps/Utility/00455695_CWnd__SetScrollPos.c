// Address: 0x00455695
// Name: CWnd::SetScrollPos
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::SetScrollPos(int,int,int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::SetScrollPos(CWnd *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  HWND hWnd;
  
  iVar1 = (**(code **)(*(int *)this + 0x70))(param_1);
  if (iVar1 == 0) {
    hWnd = *(HWND *)(this + 0x20);
  }
  else {
    param_1 = 2;
    hWnd = *(HWND *)(iVar1 + 0x20);
  }
  iVar1 = ::SetScrollPos(hWnd,param_1,param_2,param_3);
  return iVar1;
}


// Address: 0x00455722
// Name: CWnd::GetScrollRange
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CWnd::GetScrollRange(int,int *,int *)const 
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::GetScrollRange(CWnd *this,int param_1,int *param_2,int *param_3)

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
  ::GetScrollRange(hWnd,param_1,param_2,param_3);
  return;
}


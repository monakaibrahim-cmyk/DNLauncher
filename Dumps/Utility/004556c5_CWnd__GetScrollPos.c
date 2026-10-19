// Address: 0x004556c5
// Name: CWnd::GetScrollPos
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::GetScrollPos(int)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::GetScrollPos(CWnd *this,int param_1)

{
  int iVar1;
  int unaff_retaddr;
  HWND hWnd;
  
  iVar1 = (**(code **)(*(int *)this + 0x70))(param_1);
  if (iVar1 == 0) {
    hWnd = *(HWND *)(this + 0x20);
  }
  else {
    unaff_retaddr = 2;
    hWnd = *(HWND *)(iVar1 + 0x20);
  }
  iVar1 = ::GetScrollPos(hWnd,unaff_retaddr);
  return iVar1;
}


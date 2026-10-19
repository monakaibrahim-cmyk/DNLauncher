// Address: 0x004607cc
// Name: CFrameWnd::OnNcActivate
// Category: MFC_CRT


/* Library Function - Single Match
    protected: int __thiscall CFrameWnd::OnNcActivate(int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CFrameWnd::OnNcActivate(CFrameWnd *this,int param_1)

{
  int iVar1;
  
  if (((byte)this[0x3c] & 0x20) != 0) {
    param_1 = 1;
  }
  iVar1 = CWnd::IsWindowEnabled((CWnd *)this);
  if (iVar1 == 0) {
    param_1 = 0;
  }
  iVar1 = (**(code **)(*(int *)this + 0x110))(0x86,param_1,0);
  return iVar1;
}


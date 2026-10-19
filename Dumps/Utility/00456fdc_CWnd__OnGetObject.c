// Address: 0x00456fdc
// Name: CWnd::OnGetObject
// Category: Utility


/* Library Function - Single Match
    protected: long __thiscall CWnd::OnGetObject(unsigned int,long)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::OnGetObject(CWnd *this,uint param_1,long param_2)

{
  long lVar1;
  int iVar2;
  CWnd *local_8;
  
  local_8 = this;
  if (this[0x24] != (CWnd)0x0) {
    local_8 = (CWnd *)0x0;
    iVar2 = (**(code **)(*(int *)this + 0xe4))(param_1,param_2,&local_8);
    if (-1 < iVar2) {
      return (long)local_8;
    }
  }
  lVar1 = Default(this);
  return lVar1;
}


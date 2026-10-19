// Address: 0x00454aa0
// Name: CWnd::WindowProc
// Category: Utility


/* Library Function - Single Match
    protected: virtual long __thiscall CWnd::WindowProc(unsigned int,unsigned int,long)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

long __thiscall CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  int iVar1;
  long local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x10c))(param_1,param_2,param_3,&local_8);
  if (iVar1 == 0) {
    local_8 = (**(code **)(*(int *)this + 0x110))(param_1,param_2,param_3);
  }
  return local_8;
}


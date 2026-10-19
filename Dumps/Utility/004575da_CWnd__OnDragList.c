// Address: 0x004575da
// Name: CWnd::OnDragList
// Category: Utility


/* Library Function - Single Match
    protected: long __thiscall CWnd::OnDragList(unsigned int,long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

long __thiscall CWnd::OnDragList(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  
  iVar1 = ReflectLastMsg(*(HWND__ **)(param_2 + 4),&param_2);
  if (iVar1 == 0) {
    param_2 = Default(this);
  }
  return param_2;
}


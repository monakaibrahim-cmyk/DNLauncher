// Address: 0x00454e6d
// Name: CWnd::accSelect
// Category: Utility


/* Library Function - Single Match
    public: virtual long __thiscall CWnd::accSelect(long,struct tagVARIANT)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::accSelect(CWnd *this,long param_1,tagVARIANT param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x54))(*(int **)(this + 0x28),param_1);
  return lVar1;
}


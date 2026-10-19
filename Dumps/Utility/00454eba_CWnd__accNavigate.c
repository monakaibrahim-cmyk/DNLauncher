// Address: 0x00454eba
// Name: CWnd::accNavigate
// Category: Utility


/* Library Function - Single Match
    public: virtual long __thiscall CWnd::accNavigate(long,struct tagVARIANT,struct tagVARIANT *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::accNavigate(CWnd *this,long param_1,tagVARIANT param_2,tagVARIANT *param_3)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x5c))(*(int **)(this + 0x28),param_1);
  return lVar1;
}


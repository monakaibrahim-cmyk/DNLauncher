// Address: 0x00454e8e
// Name: CWnd::accLocation
// Category: Utility


/* Library Function - Single Match
    public: virtual long __thiscall CWnd::accLocation(long *,long *,long *,long *,struct tagVARIANT)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

long __thiscall
CWnd::accLocation(CWnd *this,long *param_1,long *param_2,long *param_3,long *param_4,
                 tagVARIANT param_5)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x58))
                    (*(int **)(this + 0x28),param_1,param_2,param_3,param_4,param_5.n1._0_4_,
                     param_5.n1.decVal.Hi32,param_5.n1._8_4_,param_5.n1._12_4_);
  return lVar1;
}


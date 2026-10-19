// Address: 0x00454ef7
// Name: CWnd::accDoDefaultAction
// Category: Utility


/* Library Function - Single Match
    public: virtual long __thiscall CWnd::accDoDefaultAction(struct tagVARIANT)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::accDoDefaultAction(CWnd *this,tagVARIANT param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 100))
                    (*(int **)(this + 0x28),param_1.n1._0_4_,param_1.n1.decVal.Hi32,param_1.n1._8_4_
                     ,param_1.n1._12_4_);
  return lVar1;
}


// Address: 0x00454edf
// Name: CWnd::accHitTest
// Category: Utility


/* Library Function - Single Match
    public: virtual long __thiscall CWnd::accHitTest(long,long,struct tagVARIANT *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::accHitTest(CWnd *this,long param_1,long param_2,tagVARIANT *param_3)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x60))
                    (*(int **)(this + 0x28),param_1,param_2,param_3);
  return lVar1;
}


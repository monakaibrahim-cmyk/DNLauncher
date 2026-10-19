// Address: 0x00454d55
// Name: CWnd::get_accDescription
// Category: Utility


/* Library Function - Single Match
    public: virtual long __thiscall CWnd::get_accDescription(struct tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::get_accDescription(CWnd *this,tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x30))
                    (*(int **)(this + 0x28),param_1.n1._0_4_,param_1.n1.decVal.Hi32,param_1.n1._8_4_
                     ,param_1.n1._12_4_,param_2);
  return lVar1;
}


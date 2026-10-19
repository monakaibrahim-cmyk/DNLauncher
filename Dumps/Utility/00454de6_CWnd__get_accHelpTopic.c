// Address: 0x00454de6
// Name: CWnd::get_accHelpTopic
// Category: Utility


/* Library Function - Single Match
    public: virtual long __thiscall CWnd::get_accHelpTopic(wchar_t * *,struct tagVARIANT,long *)
   
   Library: Visual Studio 2005 Release */

long __thiscall
CWnd::get_accHelpTopic(CWnd *this,wchar_t **param_1,tagVARIANT param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(int **)(this + 0x28) + 0x40))(*(int **)(this + 0x28),param_1);
  return lVar1;
}


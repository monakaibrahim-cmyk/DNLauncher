// Address: 0x00457a35
// Name: ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accFocus
// Category: Utility


/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accFocus(struct tagVARIANT *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accFocus(tagVARIANT *param_1)

{
  int *piVar1;
  long lVar2;
  int in_stack_00000008;
  
  if (*(int *)((int)&param_1->n1 + 8) == 0) {
    lVar2 = -0x7ffefef8;
  }
  else if (in_stack_00000008 == 0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    piVar1 = *(int **)((int)&param_1->n1 + 8);
    lVar2 = (**(code **)(*piVar1 + 0x48))(piVar1);
  }
  return lVar2;
}


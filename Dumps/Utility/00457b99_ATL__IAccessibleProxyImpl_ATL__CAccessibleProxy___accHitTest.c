// Address: 0x00457b99
// Name: ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::accHitTest
// Category: Utility


/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::accHitTest(long,long,struct tagVARIANT *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

long ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::accHitTest
               (long param_1,long param_2,tagVARIANT *param_3)

{
  long lVar1;
  int in_stack_00000010;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000010 == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x60))(*(int **)(param_1 + 8),param_2,param_3);
  }
  return lVar1;
}


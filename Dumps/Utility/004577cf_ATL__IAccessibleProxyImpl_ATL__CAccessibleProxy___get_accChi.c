// Address: 0x004577cf
// Name: ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accChildCount
// Category: Utility


/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accChildCount(long *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accChildCount(long *param_1)

{
  long lVar1;
  int in_stack_00000008;
  
  if (param_1[2] == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000008 == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(*(int *)param_1[2] + 0x20))((int *)param_1[2]);
  }
  return lVar1;
}


// Address: 0x004577a0
// Name: ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accParent
// Category: Utility


/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accParent(struct IDispatch * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accParent(IDispatch **param_1)

{
  long lVar1;
  void **unaff_retaddr;
  IID *in_stack_00000008;
  
  if (param_1[2] == (IDispatch *)0x0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000008 == (IID *)0x0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (*param_1[2]->lpVtbl[1].QueryInterface)(param_1[2],in_stack_00000008,unaff_retaddr);
  }
  return lVar1;
}


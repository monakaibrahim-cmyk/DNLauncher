// Address: 0x00457cb2
// Name: ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::GetTypeInfo
// Category: Utility


/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::GetTypeInfo(unsigned int,unsigned long,struct ITypeInfo * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::GetTypeInfo
               (uint param_1,ulong param_2,ITypeInfo **param_3)

{
  long lVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3);
  }
  return lVar1;
}


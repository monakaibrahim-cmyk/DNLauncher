// Address: 0x00457c91
// Name: ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::GetTypeInfoCount
// Category: Utility


/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::GetTypeInfoCount(unsigned int *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::GetTypeInfoCount(uint *param_1)

{
  long lVar1;
  
  if (param_1[2] == 0) {
    lVar1 = -0x7ffefef8;
  }
  else {
    lVar1 = (**(code **)(*(int *)param_1[2] + 0xc))((int *)param_1[2]);
  }
  return lVar1;
}


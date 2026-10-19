// Address: 0x00457c2a
// Name: ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::Invoke
// Category: Utility


/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::Invoke(long,struct _GUID const &,unsigned long,unsigned short,struct
   tagDISPPARAMS *,struct tagVARIANT *,struct tagEXCEPINFO *,unsigned int *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

long ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::Invoke
               (long param_1,_GUID *param_2,ulong param_3,ushort param_4,tagDISPPARAMS *param_5,
               tagVARIANT *param_6,tagEXCEPINFO *param_7,uint *param_8)

{
  long lVar1;
  undefined2 in_stack_00000012;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))
                      (*(int **)(param_1 + 8),param_2,param_3,_param_4,param_5,param_6,param_7,
                       param_8);
  }
  return lVar1;
}


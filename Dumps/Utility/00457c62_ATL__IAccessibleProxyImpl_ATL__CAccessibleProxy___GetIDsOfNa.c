// Address: 0x00457c62
// Name: ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::GetIDsOfNames
// Category: Utility


/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::GetIDsOfNames(struct _GUID const &,wchar_t * *,unsigned int,unsigned
   long,long *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

long ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::GetIDsOfNames
               (_GUID *param_1,wchar_t **param_2,uint param_3,ulong param_4,long *param_5)

{
  long lVar1;
  
  if (*(int *)param_1->Data4 == 0) {
    lVar1 = -0x7ffefef8;
  }
  else {
    lVar1 = (**(code **)(**(int **)param_1->Data4 + 0x14))
                      (*(int **)param_1->Data4,param_2,param_3,param_4,param_5);
  }
  return lVar1;
}


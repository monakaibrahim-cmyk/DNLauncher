// Address: 0x00454c64
// Name: CWnd::XAccessible::GetIDsOfNames
// Category: Utility


/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::GetIDsOfNames(struct _GUID const &,wchar_t *
   *,unsigned int,unsigned long,long *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long CWnd::XAccessible::GetIDsOfNames
               (_GUID *param_1,wchar_t **param_2,uint param_3,ulong param_4,long *param_5)

{
  long lVar1;
  long *in_stack_00000018;
  
  lVar1 = ATL::AtlIAccessibleGetIDsOfNamesHelper
                    ((_GUID *)param_2,(wchar_t **)param_3,param_4,(ulong)param_5,in_stack_00000018);
  return lVar1;
}


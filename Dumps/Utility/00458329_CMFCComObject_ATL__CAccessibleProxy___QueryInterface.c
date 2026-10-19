// Address: 0x00458329
// Name: CMFCComObject<ATL::CAccessibleProxy>::QueryInterface
// Category: Utility


/* Library Function - Single Match
    public: virtual long __stdcall CMFCComObject<class ATL::CAccessibleProxy>::QueryInterface(struct
   _GUID const &,void * *)
   
   Library: Visual Studio 2005 Release */

long CMFCComObject<ATL::CAccessibleProxy>::QueryInterface(_GUID *param_1,void **param_2)

{
  long lVar1;
  void **in_stack_0000000c;
  
  lVar1 = ATL::AtlInternalQueryInterface
                    (param_1,(_ATL_INTMAP_ENTRY *)&PTR_DAT_004a0ad8,(_GUID *)param_2,
                     in_stack_0000000c);
  return lVar1;
}


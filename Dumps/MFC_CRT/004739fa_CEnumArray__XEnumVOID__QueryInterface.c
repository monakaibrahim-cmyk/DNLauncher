// Address: 0x004739fa
// Name: CEnumArray::XEnumVOID::QueryInterface
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual long __stdcall CEnumArray::XEnumVOID::QueryInterface(struct _GUID const &,void *
   *)
   
   Library: Visual Studio 2005 Release */

long CEnumArray::XEnumVOID::QueryInterface(_GUID *param_1,void **param_2)

{
  ulong uVar1;
  void **in_stack_0000000c;
  
  uVar1 = CCmdTarget::ExternalQueryInterface
                    ((CCmdTarget *)param_1[-4].Data4,param_2,in_stack_0000000c);
  return uVar1;
}


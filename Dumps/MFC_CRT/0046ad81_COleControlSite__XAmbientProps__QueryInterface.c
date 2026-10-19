// Address: 0x0046ad81
// Name: COleControlSite::XAmbientProps::QueryInterface
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XAmbientProps::QueryInterface(struct _GUID const
   &,void * *)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XAmbientProps::QueryInterface(_GUID *param_1,void **param_2)

{
  ulong uVar1;
  void **in_stack_0000000c;
  
  uVar1 = CCmdTarget::InternalQueryInterface
                    ((CCmdTarget *)(param_1[-0xe].Data4 + 4),param_2,in_stack_0000000c);
  return uVar1;
}


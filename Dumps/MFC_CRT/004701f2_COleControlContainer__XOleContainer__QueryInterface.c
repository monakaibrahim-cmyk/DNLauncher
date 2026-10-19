// Address: 0x004701f2
// Name: COleControlContainer::XOleContainer::QueryInterface
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual long __stdcall COleControlContainer::XOleContainer::QueryInterface(struct _GUID
   const &,void * *)
   
   Library: Visual Studio 2005 Release */

long COleControlContainer::XOleContainer::QueryInterface(_GUID *param_1,void **param_2)

{
  ulong uVar1;
  void **in_stack_0000000c;
  
  uVar1 = CCmdTarget::InternalQueryInterface
                    ((CCmdTarget *)&param_1[-8].Data2,param_2,in_stack_0000000c);
  return uVar1;
}


// Address: 0x0046ac56
// Name: COleControlSite::XOleClientSite::GetContainer
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleClientSite::GetContainer(struct
   IOleContainer * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long COleControlSite::XOleClientSite::GetContainer(IOleContainer **param_1)

{
  ulong uVar1;
  void **in_stack_00000008;
  
  uVar1 = CCmdTarget::InternalQueryInterface
                    ((CCmdTarget *)param_1[-0x2a],&DAT_004ab68c,in_stack_00000008);
  return uVar1;
}


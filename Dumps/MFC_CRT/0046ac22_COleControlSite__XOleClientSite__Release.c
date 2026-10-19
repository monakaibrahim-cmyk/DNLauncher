// Address: 0x0046ac22
// Name: COleControlSite::XOleClientSite::Release
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual unsigned long __stdcall COleControlSite::XOleClientSite::Release(void)
   
   Library: Visual Studio 2005 Release */

ulong COleControlSite::XOleClientSite::Release(void)

{
  ulong uVar1;
  int in_stack_00000004;
  
  uVar1 = CCmdTarget::InternalRelease((CCmdTarget *)(in_stack_00000004 + -200));
  return uVar1;
}


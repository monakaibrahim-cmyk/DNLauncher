// Address: 0x0046ad2f
// Name: COleControlSite::XOleControlSite::Release
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual unsigned long __stdcall COleControlSite::XOleControlSite::Release(void)
   
   Library: Visual Studio 2005 Release */

ulong COleControlSite::XOleControlSite::Release(void)

{
  ulong uVar1;
  int in_stack_00000004;
  
  uVar1 = CCmdTarget::InternalRelease((CCmdTarget *)(in_stack_00000004 + -0xd0));
  return uVar1;
}


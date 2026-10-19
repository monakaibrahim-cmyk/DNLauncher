// Address: 0x0046ad6f
// Name: COleControlSite::XAmbientProps::Release
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual unsigned long __stdcall COleControlSite::XAmbientProps::Release(void)
   
   Library: Visual Studio 2005 Release */

ulong COleControlSite::XAmbientProps::Release(void)

{
  ulong uVar1;
  int in_stack_00000004;
  
  uVar1 = CCmdTarget::InternalRelease((CCmdTarget *)(in_stack_00000004 + -0xd4));
  return uVar1;
}


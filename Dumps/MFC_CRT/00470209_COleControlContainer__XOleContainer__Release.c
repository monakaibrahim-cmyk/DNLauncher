// Address: 0x00470209
// Name: COleControlContainer::XOleContainer::Release
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual unsigned long __stdcall COleControlContainer::XOleContainer::Release(void)
   
   Library: Visual Studio 2005 Release */

ulong COleControlContainer::XOleContainer::Release(void)

{
  ulong uVar1;
  int in_stack_00000004;
  
  uVar1 = CCmdTarget::InternalRelease((CCmdTarget *)(in_stack_00000004 + -0x7c));
  return uVar1;
}


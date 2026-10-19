// Address: 0x00470102
// Name: COleControlContainer::XOleIPFrame::Release
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual unsigned long __stdcall COleControlContainer::XOleIPFrame::Release(void)
   
   Library: Visual Studio 2005 Release */

ulong COleControlContainer::XOleIPFrame::Release(void)

{
  ulong uVar1;
  int in_stack_00000004;
  
  uVar1 = CCmdTarget::InternalRelease((CCmdTarget *)(in_stack_00000004 + -0x78));
  return uVar1;
}


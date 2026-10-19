// Address: 0x0046c2a5
// Name: COleControlSite::XOleIPSite::GetFocus
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::GetFocus(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long COleControlSite::XOleIPSite::GetFocus(void)

{
  int in_stack_00000004;
  AFX_MAINTAIN_STATE2 local_c [4];
  int local_8;
  
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_c,*(AFX_MODULE_STATE **)(in_stack_00000004 + -0xb0));
  if (local_8 != 0) {
    FUN_00453641();
  }
  return -0x7fffbfff;
}


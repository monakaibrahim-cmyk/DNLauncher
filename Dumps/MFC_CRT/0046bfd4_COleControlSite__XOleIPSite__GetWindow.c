// Address: 0x0046bfd4
// Name: COleControlSite::XOleIPSite::GetWindow
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::GetWindow(struct HWND__ * *)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XOleIPSite::GetWindow(HWND__ **param_1)

{
  int iVar1;
  int *in_stack_00000008;
  
  iVar1 = 0;
  if (param_1[-0x2b][8].unused != 0) {
    iVar1 = *(int *)(param_1[-0x2b][8].unused + 0x20);
  }
  *in_stack_00000008 = iVar1;
  return (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
}


// Address: 0x0046bf75
// Name: COleControlSite::XOleClientSite::ShowObject
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleClientSite::ShowObject(void)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XOleClientSite::ShowObject(void)

{
  int in_stack_00000004;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46bf81;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(in_stack_00000004 + -0xac));
  local_8 = 0;
  AttachWindow((COleControlSite *)(in_stack_00000004 + -200));
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return 0;
}


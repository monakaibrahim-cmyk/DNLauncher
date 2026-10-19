// Address: 0x0046c9c9
// Name: COleControlSite::XBoundObjectSite::Release
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __stdcall COleControlSite::XBoundObjectSite::Release(void)
   
   Library: Visual Studio 2005 Release */

ulong COleControlSite::XBoundObjectSite::Release(void)

{
  ulong uVar1;
  int in_stack_00000004;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46c9d5;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(in_stack_00000004 + -0xc4));
  local_8 = 0;
  uVar1 = CCmdTarget::ExternalRelease((CCmdTarget *)(in_stack_00000004 + -0xe0));
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return uVar1;
}


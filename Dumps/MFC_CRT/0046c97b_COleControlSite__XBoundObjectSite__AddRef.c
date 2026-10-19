// Address: 0x0046c97b
// Name: COleControlSite::XBoundObjectSite::AddRef
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __stdcall COleControlSite::XBoundObjectSite::AddRef(void)
   
   Library: Visual Studio 2005 Release */

ulong COleControlSite::XBoundObjectSite::AddRef(void)

{
  ulong uVar1;
  int in_stack_00000004;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46c987;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(in_stack_00000004 + -0xc4));
  local_8 = 0;
  uVar1 = CCmdTarget::ExternalAddRef((CCmdTarget *)(in_stack_00000004 + -0xe0));
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return uVar1;
}


// Address: 0x00456121
// Name: CWnd::XAccessibleServer::AddRef
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __stdcall CWnd::XAccessibleServer::AddRef(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

ulong CWnd::XAccessibleServer::AddRef(void)

{
  ulong uVar1;
  int in_stack_00000004;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x45612d;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(in_stack_00000004 + -0x18));
  local_8 = 0;
  uVar1 = CCmdTarget::ExternalAddRef((CCmdTarget *)(in_stack_00000004 + -0x34));
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return uVar1;
}


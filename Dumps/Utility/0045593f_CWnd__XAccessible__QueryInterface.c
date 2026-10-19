// Address: 0x0045593f
// Name: CWnd::XAccessible::QueryInterface
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::QueryInterface(struct _GUID const &,void * *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::QueryInterface(_GUID *param_1,void **param_2)

{
  ulong uVar1;
  void **in_stack_0000000c;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x45594b;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1[-2].Data4 + 4));
  local_8 = 0;
  uVar1 = CCmdTarget::ExternalQueryInterface((CCmdTarget *)(param_1 + -3),param_2,in_stack_0000000c)
  ;
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return uVar1;
}


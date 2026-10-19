// Address: 0x004559e9
// Name: CWnd::XAccessible::get_accParent
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::get_accParent(struct IDispatch * *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::get_accParent(IDispatch **param_1)

{
  long lVar1;
  undefined4 in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x4559f5;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,(AFX_MODULE_STATE *)param_1[-5]);
  local_8 = 0;
  lVar1 = (*(code *)param_1[-0xc][0x23].lpVtbl)(in_stack_00000008);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return lVar1;
}


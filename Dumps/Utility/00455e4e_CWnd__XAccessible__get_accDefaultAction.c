// Address: 0x00455e4e
// Name: CWnd::XAccessible::get_accDefaultAction
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::get_accDefaultAction(struct tagVARIANT,wchar_t
   * *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::get_accDefaultAction(tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  undefined4 in_stack_00000018;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x455e5a;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(param_1.n1._0_4_ + -0x14));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)(param_1.n1._0_4_ + -0x30) + 0xc0))
                    (param_1.n1.decVal.Hi32,param_1.n1._8_4_,param_1.n1._12_4_,param_2,
                     in_stack_00000018);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return lVar1;
}


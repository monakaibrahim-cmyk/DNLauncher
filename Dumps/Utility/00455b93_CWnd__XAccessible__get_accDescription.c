// Address: 0x00455b93
// Name: CWnd::XAccessible::get_accDescription
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: virtual long __stdcall CWnd::XAccessible::get_accDescription(struct tagVARIANT,wchar_t *
   *)
    public: virtual long __stdcall CWnd::XAccessible::get_accName(struct tagVARIANT,wchar_t * *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long CWnd::XAccessible::get_accDescription(tagVARIANT param_1,wchar_t **param_2)

{
  long lVar1;
  undefined4 in_stack_00000018;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x455b9f;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(param_1.n1._0_4_ + -0x14));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)(param_1.n1._0_4_ + -0x30) + 0xa0))
                    (param_1.n1.decVal.Hi32,param_1.n1._8_4_,param_1.n1._12_4_,param_2,
                     in_stack_00000018);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return lVar1;
}


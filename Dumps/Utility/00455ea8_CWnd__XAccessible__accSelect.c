// Address: 0x00455ea8
// Name: CWnd::XAccessible::accSelect
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::accSelect(long,struct tagVARIANT)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::accSelect(long param_1,tagVARIANT param_2)

{
  long lVar1;
  undefined4 in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x455eb4;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0x14));
  local_8 = 0;
  lVar1 = (**(code **)(*(int *)(param_1 + -0x30) + 0xc4))
                    (in_stack_00000008,param_2.n1._0_4_,param_2.n1.decVal.Hi32,param_2.n1._8_4_,
                     param_2.n1._12_4_);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return lVar1;
}


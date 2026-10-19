// Address: 0x00455cfb
// Name: CWnd::XAccessible::get_accHelpTopic
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::get_accHelpTopic(wchar_t * *,struct
   tagVARIANT,long *)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::get_accHelpTopic(wchar_t **param_1,tagVARIANT param_2,long *param_3)

{
  long lVar1;
  undefined4 in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x455d07;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,(AFX_MODULE_STATE *)param_1[-5]);
  local_8 = 0;
  lVar1 = (**(code **)(param_1[-0xc] + 0x58))
                    (in_stack_00000008,param_2.n1._0_4_,param_2.n1.decVal.Hi32,param_2.n1._8_4_,
                     param_2.n1._12_4_,param_3);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return lVar1;
}


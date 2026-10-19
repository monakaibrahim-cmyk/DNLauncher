// Address: 0x00455f02
// Name: CWnd::XAccessible::accLocation
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CWnd::XAccessible::accLocation(long *,long *,long *,long *,struct
   tagVARIANT)
   
   Library: Visual Studio 2005 Release */

long CWnd::XAccessible::accLocation
               (long *param_1,long *param_2,long *param_3,long *param_4,tagVARIANT param_5)

{
  long lVar1;
  undefined4 in_stack_00000024;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x455f0e;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,(AFX_MODULE_STATE *)param_1[-5]);
  local_8 = 0;
  lVar1 = (**(code **)(param_1[-0xc] + 200))
                    (param_2,param_3,param_4,param_5.n1._0_4_,param_5.n1.decVal.Hi32,
                     param_5.n1._8_4_,param_5.n1._12_4_,in_stack_00000024);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return lVar1;
}


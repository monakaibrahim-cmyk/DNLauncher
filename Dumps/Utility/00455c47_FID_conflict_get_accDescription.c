// Address: 0x00455c47
// Name: FID_conflict:get_accDescription
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: virtual long __stdcall CWnd::XAccessible::get_accDescription(struct tagVARIANT,wchar_t *
   *)
    public: virtual long __stdcall CWnd::XAccessible::get_accState(struct tagVARIANT,struct
   tagVARIANT *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4
FID_conflict_get_accDescription
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  undefined4 uVar1;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x455c53;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0x14));
  local_8 = 0;
  uVar1 = (**(code **)(*(int *)(param_1 + -0x30) + 0xa8))(param_2,param_3,param_4,param_5,param_6);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return uVar1;
}


// Address: 0x0047532f
// Name: COleMessageFilter::XMessageFilter::RetryRejectedCall
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __stdcall
   COleMessageFilter::XMessageFilter::RetryRejectedCall(struct HTASK__ *,unsigned long,unsigned
   long)
   
   Library: Visual Studio 2005 Release */

ulong COleMessageFilter::XMessageFilter::RetryRejectedCall
                (HTASK__ *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  int in_stack_00000010;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x47533b;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,(AFX_MODULE_STATE *)param_1[-9].unused);
  local_8 = 0;
  if (in_stack_00000010 == 1) {
LAB_00475357:
    local_8 = 0xffffffff;
    if (local_14 != 0) {
      FUN_00453641();
    }
    uVar1 = 0xffffffff;
  }
  else {
    if (param_3 <= (uint)param_1[-3].unused) {
LAB_00475376:
      local_8 = 0xffffffff;
      if (local_14 != 0) {
        FUN_00453641();
      }
      return 0;
    }
    if (param_1[-6].unused != 0) {
      iVar2 = (**(code **)(param_1[-0x10].unused + 0x60))(param_2);
      if (iVar2 == -1) goto LAB_00475357;
      if (iVar2 == 2) goto LAB_00475376;
    }
    local_8 = 0xffffffff;
    uVar1 = param_1[-3].unused;
    if (local_14 != 0) {
      FUN_00453641();
    }
  }
  return uVar1;
}


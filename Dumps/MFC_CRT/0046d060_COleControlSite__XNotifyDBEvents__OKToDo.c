// Address: 0x0046d060
// Name: COleControlSite::XNotifyDBEvents::OKToDo
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XNotifyDBEvents::OKToDo(unsigned long,unsigned
   long,struct tagDBNOTIFYREASON * const)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XNotifyDBEvents::OKToDo
               (ulong param_1,ulong param_2,tagDBNOTIFYREASON *param_3)

{
  int iVar1;
  long lVar2;
  tagDBNOTIFYREASON *in_stack_00000010;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46d06c;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 - 200));
  local_8 = 0;
  lVar2 = FireEvent((XNotifyDBEvents *)param_1,param_2,(ulong)param_3,in_stack_00000010,1);
  if (lVar2 < 0) {
    local_8 = 0xffffffff;
    if (local_14 != 0) {
      FUN_00453641();
    }
  }
  else {
    iVar1 = *(int *)in_stack_00000010;
    if ((((iVar1 == 0x1e) || (iVar1 == 2)) || (iVar1 == 3)) ||
       (((((param_2 & 1) == 0 && (iVar1 != 1)) && (iVar1 != 0x14)) ||
        ((*(int **)(param_1 - 0x54) == (int *)0x0 || ((param_2 & 1) == 0)))))) {
      local_8 = 0xffffffff;
      if (local_14 != 0) {
        FUN_00453641();
      }
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(**(int **)(param_1 - 0x54) + 0x14))();
      local_8 = 0xffffffff;
      if (local_14 != 0) {
        FUN_00453641();
      }
    }
  }
  return lVar2;
}


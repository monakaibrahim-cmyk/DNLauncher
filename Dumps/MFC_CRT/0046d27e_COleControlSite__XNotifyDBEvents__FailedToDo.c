// Address: 0x0046d27e
// Name: COleControlSite::XNotifyDBEvents::FailedToDo
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XNotifyDBEvents::FailedToDo(unsigned
   long,unsigned long,struct tagDBNOTIFYREASON * const)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XNotifyDBEvents::FailedToDo
               (ulong param_1,ulong param_2,tagDBNOTIFYREASON *param_3)

{
  long lVar1;
  tagDBNOTIFYREASON *in_stack_00000010;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46d28a;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 - 200));
  local_8 = 0;
  lVar1 = FireEvent((XNotifyDBEvents *)param_1,param_2,(ulong)param_3,in_stack_00000010,5);
  local_8 = 0xffffffff;
  if (lVar1 < 0) {
    if (local_14 != 0) {
      FUN_00453641();
    }
  }
  else {
    if (local_14 != 0) {
      FUN_00453641();
    }
    lVar1 = 0;
  }
  return lVar1;
}


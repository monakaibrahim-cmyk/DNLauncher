// Address: 0x0046d395
// Name: COleControlSite::XNotifyDBEvents::DidEvent
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XNotifyDBEvents::DidEvent(unsigned long,unsigned
   long,struct tagDBNOTIFYREASON * const)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XNotifyDBEvents::DidEvent
               (ulong param_1,ulong param_2,tagDBNOTIFYREASON *param_3)

{
  CDataSourceControl *this;
  undefined4 uVar1;
  long lVar2;
  tagDBNOTIFYREASON *in_stack_00000010;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46d3a1;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 - 200));
  local_8 = 0;
  lVar2 = FireEvent((XNotifyDBEvents *)param_1,param_2,(ulong)param_3,in_stack_00000010,7);
  if (lVar2 < 0) {
    local_8 = 0xffffffff;
    if (local_14 != 0) {
      FUN_00453641();
    }
  }
  else {
    this = *(CDataSourceControl **)(param_1 - 0x54);
    if ((this != (CDataSourceControl *)0x0) && ((param_2 & 0x80) != 0)) {
      uVar1 = *(undefined4 *)(this + 0x44);
      *(undefined4 *)(this + 0x44) = 1;
      CDataSourceControl::GetBoundClientRow(this);
      *(undefined4 *)(this + 0x44) = uVar1;
      (**(code **)(*(int *)this + 0x10))();
    }
    local_8 = 0xffffffff;
    if (local_14 != 0) {
      FUN_00453641();
    }
    lVar2 = 0;
  }
  return lVar2;
}


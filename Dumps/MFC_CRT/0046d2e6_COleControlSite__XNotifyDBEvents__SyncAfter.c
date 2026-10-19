// Address: 0x0046d2e6
// Name: COleControlSite::XNotifyDBEvents::SyncAfter
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XNotifyDBEvents::SyncAfter(unsigned
   long,unsigned long,struct tagDBNOTIFYREASON * const)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XNotifyDBEvents::SyncAfter
               (ulong param_1,ulong param_2,tagDBNOTIFYREASON *param_3)

{
  CDataSourceControl *this;
  int iVar1;
  long lVar2;
  tagDBNOTIFYREASON *in_stack_00000010;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46d2f2;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 - 200));
  local_8 = 0;
  lVar2 = FireEvent((XNotifyDBEvents *)param_1,param_2,(ulong)param_3,in_stack_00000010,6);
  if (lVar2 < 0) {
    local_8 = 0xffffffff;
    if (local_14 != 0) {
      FUN_00453641();
    }
  }
  else {
    this = *(CDataSourceControl **)(param_1 - 0x54);
    iVar1 = *(int *)in_stack_00000010;
    if ((((this != (CDataSourceControl *)0x0) && (*(int *)(this + 0x44) == 0)) && (iVar1 != 0x1f))
       && (((iVar1 != 0x1e && ((param_2 & 3) != 0)) && ((iVar1 != 2 && (iVar1 != 3)))))) {
      *(undefined4 *)(this + 0x44) = 1;
      CDataSourceControl::GetBoundClientRow(this);
      *(undefined4 *)(this + 0x44) = 0;
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


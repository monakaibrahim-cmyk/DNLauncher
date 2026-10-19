// Address: 0x0046d520
// Name: COleControlSite::XRowsetNotify::OnRowChange
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XRowsetNotify::OnRowChange(struct IRowset
   *,unsigned long,unsigned long const * const,unsigned long,unsigned long,int)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XRowsetNotify::OnRowChange
               (IRowset *param_1,ulong param_2,ulong *param_3,ulong param_4,ulong param_5,
               int param_6)

{
  CDataSourceControl *this;
  int iVar1;
  IRowset *pIVar2;
  COleControlSite *this_00;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_28;
  IRowset *local_24;
  int local_20;
  AFX_MAINTAIN_STATE2 local_1c [4];
  int local_18;
  COleControlSite *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  pIVar2 = param_1;
  uStack_4 = 0x30;
  local_8 = 0x46d52c;
  this_00 = (COleControlSite *)(param_1 + -0xe8);
  local_14 = this_00;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_1c,*(AFX_MODULE_STATE **)(param_1 + -0xcc));
  local_8 = 0;
  param_1 = (IRowset *)0x0;
  if (param_6 == 0) {
    param_1 = (IRowset *)&DAT_00000001;
  }
  else if (param_6 == 1) {
    param_1 = (IRowset *)0x4;
  }
  else if (param_6 == 2) {
    param_1 = (IRowset *)0x6;
  }
  else if (param_6 == 3) {
    param_1 = (IRowset *)0x5;
  }
  else if (param_6 == 4) {
    param_1 = (IRowset *)0x7;
  }
  if (param_5 == 4) {
    iVar3 = 7;
  }
  else if (param_5 == 6) {
    iVar3 = 3;
  }
  else if (param_5 == 8) {
    iVar3 = 5;
  }
  else {
    iVar3 = 0;
    if (param_5 == 0xd) {
      iVar3 = 2;
    }
  }
  this = *(CDataSourceControl **)(pIVar2 + -0x58);
  if (this == (CDataSourceControl *)0x0) goto LAB_0046d66b;
  if (iVar3 == 2) {
    if (param_1 != (IRowset *)0x4) {
LAB_0046d5dc:
      if ((param_1 == (IRowset *)0x6) && (iVar3 == 5)) goto LAB_0046d5e7;
      goto LAB_0046d61b;
    }
    (**(code **)(*(int *)this + 0x14))();
  }
  else {
    if ((iVar3 != 7) || (param_3 != (ulong *)&DAT_00000001)) goto LAB_0046d5dc;
LAB_0046d5e7:
    (**(code **)(*(int *)this + 0x14))();
    *(undefined4 *)(*(int *)(this + 0x50) + 0xc) = *(undefined4 *)param_4;
    iVar1 = *(int *)(this + 0x44);
    *(undefined4 *)(this + 0x44) = 1;
    CDataSourceControl::GetBoundClientRow(this);
    *(int *)(this + 0x44) = iVar1;
    this_00 = local_14;
    if (iVar1 == 0) {
      (**(code **)(*(int *)this + 0x10))();
      this_00 = local_14;
    }
LAB_0046d61b:
    if (iVar3 == 0) goto LAB_0046d66b;
  }
  local_3c = 0xffffffff;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = param_1;
  local_40 = 3;
  local_20 = iVar3;
  OnEvent(this_00,(AFX_EVENT *)&local_40);
  iVar3 = local_28;
  if (local_28 < 0) {
    local_8 = 0xffffffff;
    if (local_18 == 0) {
      return local_28;
    }
    FUN_00453641();
    return iVar3;
  }
LAB_0046d66b:
  local_8 = 0xffffffff;
  if (local_18 != 0) {
    FUN_00453641();
  }
  return 0;
}


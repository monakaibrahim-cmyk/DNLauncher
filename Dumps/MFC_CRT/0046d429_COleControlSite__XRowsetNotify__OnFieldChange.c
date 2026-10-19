// Address: 0x0046d429
// Name: COleControlSite::XRowsetNotify::OnFieldChange
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XRowsetNotify::OnFieldChange(struct IRowset
   *,unsigned long,unsigned long,unsigned long * const,unsigned long,unsigned long,int)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XRowsetNotify::OnFieldChange
               (IRowset *param_1,ulong param_2,ulong param_3,ulong *param_4,ulong param_5,
               ulong param_6,int param_7)

{
  CDataSourceControl *this;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x46d435;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0xcc));
  local_8 = 0;
  if ((((param_7 != 0) && (param_7 != 1)) && (param_7 != 2)) && ((param_7 != 3 && (param_7 == 4))))
  {
    this = *(CDataSourceControl **)(param_1 + -0x58);
    if (this == (CDataSourceControl *)0x0) {
      local_8 = 0xffffffff;
      if (local_14 != 0) {
        FUN_00453641();
      }
      return 0;
    }
    if (*(int *)(this + 0x44) == 0) {
      *(undefined4 *)(this + 0x44) = 1;
      CDataSourceControl::GetBoundClientRow(this);
      *(undefined4 *)(this + 0x44) = 0;
      (**(code **)(*(int *)this + 0x10))();
    }
  }
  local_38 = 0xffffffff;
  local_3c = 3;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  OnEvent((COleControlSite *)(param_1 + -0xe8),(AFX_EVENT *)&local_3c);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return 0;
}


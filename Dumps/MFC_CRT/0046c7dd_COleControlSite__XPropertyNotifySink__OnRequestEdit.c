// Address: 0x0046c7dd
// Name: COleControlSite::XPropertyNotifySink::OnRequestEdit
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XPropertyNotifySink::OnRequestEdit(long)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XPropertyNotifySink::OnRequestEdit(long param_1)

{
  int iVar1;
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x46c7e9;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0xbc));
  local_8 = 0;
  if ((*(int *)(param_1 + -0x50) == 0) && (*(int *)(param_1 + -0x48) == 0)) {
    local_3c[0] = 1;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    OnEvent((COleControlSite *)(param_1 + -0xd8),(AFX_EVENT *)local_3c);
    iVar1 = local_24;
    if (local_24 != 0) {
      local_8 = 0xffffffff;
      if (local_14 == 0) {
        return local_24;
      }
      FUN_00453641();
      return iVar1;
    }
  }
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return 0;
}


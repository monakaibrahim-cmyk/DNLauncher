// Address: 0x0046ca6b
// Name: COleControlSite::XBoundObjectSite::GetCursor
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XBoundObjectSite::GetCursor(long,struct ICursor
   * *,void * *)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XBoundObjectSite::GetCursor(long param_1,ICursor **param_2,void **param_3)

{
  long lVar1;
  void **in_stack_00000010;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46ca77;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0xc4));
  local_8 = 0;
  lVar1 = COleControlSite::GetCursor
                    ((COleControlSite *)(param_1 + -0xe0),(long)param_2,param_3,in_stack_00000010);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return lVar1;
}


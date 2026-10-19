// Address: 0x0046c247
// Name: COleControlSite::XOleIPSite::GetCapture
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::GetCapture(void)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XOleIPSite::GetCapture(void)

{
  long lVar1;
  int in_stack_00000004;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46c253;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(in_stack_00000004 + -0xb0));
  local_8 = 0xffffffff;
  if (*(int *)(*(int *)(in_stack_00000004 + -0xac) + 0x6c) == in_stack_00000004 + -0xcc) {
    if (local_14 != 0) {
      FUN_00453641();
    }
    lVar1 = 0;
  }
  else {
    if (local_14 != 0) {
      FUN_00453641();
    }
    lVar1 = 1;
  }
  return lVar1;
}


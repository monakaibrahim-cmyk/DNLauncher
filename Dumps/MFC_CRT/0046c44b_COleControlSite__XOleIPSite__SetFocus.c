// Address: 0x0046c44b
// Name: COleControlSite::XOleIPSite::SetFocus
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::SetFocus(int)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XOleIPSite::SetFocus(int param_1)

{
  int in_stack_00000008;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46c457;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,*(AFX_MODULE_STATE **)(param_1 + -0xb0));
  local_8 = 0;
  if (in_stack_00000008 == 0) {
    *(undefined4 *)(*(int *)(param_1 + -0xac) + 0x70) = 0;
  }
  else {
    *(int *)(*(int *)(param_1 + -0xac) + 0x70) = param_1 + -0xcc;
    CWnd::SetFocus(*(CWnd **)(*(int *)(param_1 + -0xac) + 0x20));
  }
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return 0;
}


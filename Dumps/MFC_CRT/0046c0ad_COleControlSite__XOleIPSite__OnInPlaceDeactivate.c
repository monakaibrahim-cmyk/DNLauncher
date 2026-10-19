// Address: 0x0046c0ad
// Name: COleControlSite::XOleIPSite::OnInPlaceDeactivate
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::OnInPlaceDeactivate(void)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XOleIPSite::OnInPlaceDeactivate(void)

{
  int *piVar1;
  int in_stack_00000004;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46c0b9;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2
            (local_18,*(AFX_MODULE_STATE **)(in_stack_00000004 + -0xb0));
  local_8 = 0;
  DetachWindow((COleControlSite *)(in_stack_00000004 + -0xcc));
  if (*(int *)(in_stack_00000004 + -0x58) != 0) {
    piVar1 = *(int **)(in_stack_00000004 + -0x70);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(in_stack_00000004 + -0x70) = 0;
    }
    piVar1 = (int *)(*(int *)(in_stack_00000004 + -0xac) + 0x74);
    *piVar1 = *piVar1 + -1;
    *(undefined4 *)(in_stack_00000004 + -0x58) = 0;
  }
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return 0;
}


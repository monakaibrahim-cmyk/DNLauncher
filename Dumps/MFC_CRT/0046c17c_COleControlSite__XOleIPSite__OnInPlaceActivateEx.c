// Address: 0x0046c17c
// Name: COleControlSite::XOleIPSite::OnInPlaceActivateEx
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::OnInPlaceActivateEx(int *,unsigned
   long)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XOleIPSite::OnInPlaceActivateEx(int *param_1,ulong param_2)

{
  byte in_stack_0000000c;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46c188;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,(AFX_MODULE_STATE *)param_1[-0x2c]);
  local_8 = 0;
  if ((in_stack_0000000c & 1) != 0) {
    (*(code *)**(undefined4 **)param_1[-0x1f])
              ((undefined4 *)param_1[-0x1f],&DAT_004ab79c,param_1 + -0x1c);
    param_1[-0x16] = 1;
    *(int *)(param_1[-0x2b] + 0x74) = *(int *)(param_1[-0x2b] + 0x74) + 1;
  }
  if (param_2 != 0) {
    *(undefined4 *)param_2 = 0;
  }
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return 0;
}


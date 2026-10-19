// Address: 0x004753c4
// Name: COleMessageFilter::XMessageFilter::MessagePending
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __stdcall COleMessageFilter::XMessageFilter::MessagePending(struct
   HTASK__ *,unsigned long,unsigned long)
   
   Library: Visual Studio 2005 Release */

ulong COleMessageFilter::XMessageFilter::MessagePending
                (HTASK__ *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  BOOL BVar2;
  HTASK__ *pHVar3;
  tagMSG local_34;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x4753d0;
  pHVar3 = param_1 + -0x10;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,(AFX_MODULE_STATE *)param_1[-9].unused);
  local_8 = 0;
  if ((uint)param_1[-1].unused < param_3) {
    if (param_1[-4].unused != 0) goto LAB_00475456;
    iVar1 = (**(code **)(pHVar3->unused + 0x5c))(&local_34);
    if ((iVar1 != 0) && (param_1[-5].unused != 0)) {
      param_1[-4].unused = 1;
      do {
        BVar2 = PeekMessageW(&local_34,(HWND)0x0,0x200,0x209,3);
      } while (BVar2 != 0);
      do {
        BVar2 = PeekMessageW(&local_34,(HWND)0x0,0x100,0x109,3);
      } while (BVar2 != 0);
      (**(code **)(pHVar3->unused + 100))(param_2);
      param_1[-4].unused = 0;
      goto LAB_0047548b;
    }
  }
  if (param_1[-4].unused == 0) {
    BVar2 = PeekMessageW(&local_34,(HWND)0x0,0,0,2);
    if (BVar2 != 0) {
      (**(code **)(pHVar3->unused + 0x58))(&local_34);
    }
LAB_0047548b:
    local_8 = 0xffffffff;
    if (local_14 != 0) {
      FUN_00453641();
    }
    return 1;
  }
LAB_00475456:
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    FUN_00453641();
  }
  return 2;
}


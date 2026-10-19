// Address: 0x0046f149
// Name: COleControlSite::XOleIPSite::InvalidateRgn
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::InvalidateRgn(struct HRGN__ *,int)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XOleIPSite::InvalidateRgn(HRGN__ *param_1,int param_2)

{
  CGdiObject *pCVar1;
  BOOL BVar2;
  long lVar3;
  int in_stack_0000000c;
  tagRECT local_40;
  tagRECT local_30;
  undefined **local_20;
  undefined4 local_1c;
  AFX_MAINTAIN_STATE2 local_18 [4];
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  lVar3 = 0;
  local_1c = 0;
  local_20 = CRgn::vftable;
  local_8 = 0;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_18,(AFX_MODULE_STATE *)param_1[-0x2c].unused);
  local_8._0_1_ = 1;
  if (param_2 != 0) {
    pCVar1 = CGdiObject::FromHandle((void *)param_2);
    GetRgnBox(*(HRGN *)(pCVar1 + 4),&local_30);
    IntersectRect(&local_40,&local_30,(RECT *)(param_1 + -0x27));
    BVar2 = EqualRect(&local_40,&local_30);
    if (BVar2 != 0) {
      CWnd::InvalidateRgn(*(CWnd **)(param_1[-0x2b].unused + 0x20),(CRgn *)pCVar1,in_stack_0000000c)
      ;
      local_8 = (uint)local_8._1_3_ << 8;
      if (local_14 != 0) {
        FUN_00453641();
      }
      goto LAB_0046f19d;
    }
  }
  lVar3 = (**(code **)(param_1->unused + 100))(param_1,0,in_stack_0000000c);
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_14 != 0) {
    FUN_00453641();
  }
LAB_0046f19d:
  local_8 = 0xffffffff;
  local_20 = CRgn::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)&local_20);
  return lVar3;
}


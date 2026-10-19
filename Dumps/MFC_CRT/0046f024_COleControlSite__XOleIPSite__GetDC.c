// Address: 0x0046f024
// Name: COleControlSite::XOleIPSite::GetDC
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::GetDC(struct tagRECT const
   *,unsigned long,struct HDC__ * *)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XOleIPSite::GetDC(tagRECT *param_1,ulong param_2,HDC__ **param_3)

{
  HDC pHVar1;
  CDC *pCVar2;
  HRGN pHVar3;
  undefined4 uVar4;
  undefined4 *in_stack_00000010;
  tagRECT local_30;
  AFX_MAINTAIN_STATE2 local_20 [4];
  int local_1c;
  undefined **local_18;
  undefined4 local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_14 = 0;
  local_18 = CRgn::vftable;
  local_8 = 0;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_20,(AFX_MODULE_STATE *)param_1[-0xb].left);
  local_8._0_1_ = 1;
  if (in_stack_00000010 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  *in_stack_00000010 = 0;
  if (param_1[-1].right == 0) {
    pHVar1 = ::GetDC(*(HWND *)(*(int *)(param_1[-0xb].top + 0x20) + 0x20));
    pCVar2 = CDC::FromHandle(pHVar1);
    param_1[-1].right = (LONG)pCVar2;
    if (pCVar2 != (CDC *)0x0) {
      if (param_2 == 0) {
        local_30.left = param_1[-10].top;
        local_30.top = param_1[-10].right;
        local_30.right = param_1[-10].bottom;
        local_30.bottom = param_1[-9].left;
      }
      else {
        IntersectRect(&local_30,(RECT *)&param_1[-10].top,(RECT *)param_2);
      }
      pHVar3 = CreateRectRgnIndirect(&local_30);
      Attach(&local_18,(int)pHVar3);
      CDC::SelectClipRgn((CDC *)param_1[-1].right,(CRgn *)&local_18,1);
      if (param_1[-1].right == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_1[-1].right + 4);
      }
      *in_stack_00000010 = uVar4;
      local_8 = (uint)local_8._1_3_ << 8;
      if (local_1c != 0) {
        FUN_00453641();
      }
      local_8 = 0xffffffff;
      local_18 = CRgn::vftable;
      CGdiObject::~CGdiObject((CGdiObject *)&local_18);
      return 0;
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (local_1c != 0) {
    FUN_00453641();
  }
  local_8 = 0xffffffff;
  local_18 = CRgn::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)&local_18);
  return -0x7fffbffb;
}


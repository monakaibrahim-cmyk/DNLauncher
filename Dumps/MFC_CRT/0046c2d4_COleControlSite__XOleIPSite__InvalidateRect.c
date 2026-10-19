// Address: 0x0046c2d4
// Name: COleControlSite::XOleIPSite::InvalidateRect
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::InvalidateRect(struct tagRECT const
   *,int)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XOleIPSite::InvalidateRect(tagRECT *param_1,int param_2)

{
  BOOL BVar1;
  BOOL in_stack_0000000c;
  tagRECT local_1c;
  AFX_MAINTAIN_STATE2 local_c [4];
  int local_8;
  
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_c,(AFX_MODULE_STATE *)param_1[-0xb].left);
  if (param_2 == 0) {
    local_1c.left = param_1[-10].top;
    local_1c.top = param_1[-10].right;
    local_1c.right = param_1[-10].bottom;
    local_1c.bottom = param_1[-9].left;
  }
  else {
    IntersectRect(&local_1c,(RECT *)param_2,(RECT *)&param_1[-10].top);
    EqualRect(&local_1c,(RECT *)param_2);
  }
  BVar1 = IsRectEmpty(&local_1c);
  if (BVar1 == 0) {
    ::InvalidateRect(*(HWND *)(*(int *)(param_1[-0xb].top + 0x20) + 0x20),&local_1c,
                     in_stack_0000000c);
  }
  if (local_8 != 0) {
    FUN_00453641();
  }
  return 0;
}


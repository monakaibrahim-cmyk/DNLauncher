// Address: 0x0045f221
// Name: CScrollView::SetScrollSizes
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CScrollView::SetScrollSizes(int,struct tagSIZE,struct tagSIZE const
   &,struct tagSIZE const &)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CScrollView::SetScrollSizes
          (CScrollView *this,int param_1,tagSIZE param_2,tagSIZE *param_3,tagSIZE *param_4)

{
  LPPOINT lppt;
  LONG LVar1;
  CWindowDC local_28 [8];
  HDC local_20;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x45f22d;
  local_14 = *(int *)(this + 0x5c);
  *(int *)(this + 0x5c) = param_1;
  *(LONG *)(this + 0x60) = param_2.cx;
  *(LONG *)(this + 100) = param_2.cy;
  CWindowDC::CWindowDC(local_28,(CWnd *)0x0);
  local_8 = 0;
  CDC::SetMapMode((CDC *)local_28,*(int *)(this + 0x5c));
  ((LPPOINT)(this + 0x68))->x = *(LONG *)(this + 0x60);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(this + 100);
  LPtoDP(local_20,(LPPOINT)(this + 0x68),1);
  LVar1 = param_3->cy;
  lppt = (LPPOINT)(this + 0x70);
  lppt->x = param_3->cx;
  *(LONG *)(this + 0x74) = LVar1;
  LPtoDP(local_20,lppt,1);
  LVar1 = param_4->cy;
  ((LPPOINT)(this + 0x78))->x = param_4->cx;
  *(LONG *)(this + 0x7c) = LVar1;
  LPtoDP(local_20,(LPPOINT)(this + 0x78),1);
  if (*(int *)(this + 0x6c) < 0) {
    *(int *)(this + 0x6c) = -*(int *)(this + 0x6c);
  }
  if (*(int *)(this + 0x74) < 0) {
    *(int *)(this + 0x74) = -*(int *)(this + 0x74);
  }
  if (*(int *)(this + 0x7c) < 0) {
    *(int *)(this + 0x7c) = -*(int *)(this + 0x7c);
  }
  local_8 = 0xffffffff;
  CWindowDC::~CWindowDC(local_28);
  if (lppt->x == 0) {
    lppt->x = *(int *)(this + 0x68) / 10;
  }
  if (*(int *)(this + 0x74) == 0) {
    *(int *)(this + 0x74) = *(int *)(this + 0x6c) / 10;
  }
  if (*(int *)(this + 0x78) == 0) {
    *(int *)(this + 0x78) = lppt->x / 10;
  }
  if (*(int *)(this + 0x7c) == 0) {
    *(int *)(this + 0x7c) = *(int *)(this + 0x74) / 10;
  }
  if (*(int *)(this + 0x20) != 0) {
    UpdateBars(this);
    if (local_14 != *(int *)(this + 0x5c)) {
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    }
  }
  return;
}


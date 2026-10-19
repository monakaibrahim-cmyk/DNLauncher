// Address: 0x0045d580
// Name: CHtmlView::~CHtmlView
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CHtmlView::~CHtmlView(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CHtmlView::~CHtmlView(CHtmlView *this)

{
  int *piVar1;
  
  *(undefined ***)this = vftable;
  piVar1 = *(int **)(this + 0xec);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  CWnd::~CWnd((CWnd *)(this + 0x98));
  FUN_0045e228((CScrollView *)this);
  return;
}


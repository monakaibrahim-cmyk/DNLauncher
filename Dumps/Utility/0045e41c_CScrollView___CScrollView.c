// Address: 0x0045e41c
// Name: CScrollView::~CScrollView
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CScrollView::~CScrollView(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CScrollView::~CScrollView(CScrollView *this)

{
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x58) + 0x60))();
  }
  if (*(int **)(this + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x58) + 4))(1);
  }
  FUN_0045fc5a((CWnd *)this);
  return;
}


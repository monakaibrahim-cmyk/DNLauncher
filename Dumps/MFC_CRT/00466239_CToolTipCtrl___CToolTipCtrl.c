// Address: 0x00466239
// Name: CToolTipCtrl::~CToolTipCtrl
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CToolTipCtrl::~CToolTipCtrl(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CToolTipCtrl::~CToolTipCtrl(CToolTipCtrl *this)

{
  *(undefined ***)this = vftable;
  CWnd::DestroyWindow((CWnd *)this);
  FUN_00472c77((undefined4 *)(this + 0x54));
  CWnd::~CWnd((CWnd *)this);
  return;
}


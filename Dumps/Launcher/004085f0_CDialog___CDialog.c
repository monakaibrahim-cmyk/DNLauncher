// Address: 0x004085f0
// Name: CDialog::~CDialog
// Category: Launcher


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall CDialog::~CDialog(CDialog *this)

{
  *(undefined ***)this = vftable;
  if (*(int *)(this + 0x20) != 0) {
    CWnd::DestroyWindow((CWnd *)this);
  }
  CWnd::~CWnd((CWnd *)this);
  return;
}


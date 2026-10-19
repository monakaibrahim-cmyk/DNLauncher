// Address: 0x00459ae7
// Name: CDialog::~CDialog
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CDialog::~CDialog(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDialog::~CDialog(CDialog *this)

{
  *(undefined ***)this = vftable;
  if (*(int *)(this + 0x20) != 0) {
    CWnd::DestroyWindow((CWnd *)this);
  }
  CWnd::~CWnd((CWnd *)this);
  return;
}


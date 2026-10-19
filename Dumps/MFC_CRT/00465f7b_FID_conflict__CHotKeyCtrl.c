// Address: 0x00465f7b
// Name: FID_conflict:~CHotKeyCtrl
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: virtual __thiscall CAnimateCtrl::~CAnimateCtrl(void)
    public: virtual __thiscall CButton::~CButton(void)
    public: virtual __thiscall CComboBox::~CComboBox(void)
    public: virtual __thiscall CDateTimeCtrl::~CDateTimeCtrl(void)
     21 names - too many to list
   
   Library: Visual Studio 2005 Release */

void __fastcall FID_conflict__CHotKeyCtrl(CWnd *param_1)

{
  *(undefined ***)param_1 = CStatic::vftable;
  CWnd::DestroyWindow(param_1);
  CWnd::~CWnd(param_1);
  return;
}


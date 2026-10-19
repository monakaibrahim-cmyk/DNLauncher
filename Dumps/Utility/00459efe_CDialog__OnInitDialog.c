// Address: 0x00459efe
// Name: CDialog::OnInitDialog
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CDialog::OnInitDialog(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall CDialog::OnInitDialog(CDialog *this)

{
  int iVar1;
  CWnd *this_00;
  
  if (*(void **)(this + 100) == (void *)0x0) {
    iVar1 = CWnd::ExecuteDlgInit((CWnd *)this,*(wchar_t **)(this + 0x58));
  }
  else {
    iVar1 = CWnd::ExecuteDlgInit((CWnd *)this,*(void **)(this + 100));
  }
  if (iVar1 != 0) {
    iVar1 = CWnd::UpdateData((CWnd *)this,0);
    if (iVar1 != 0) {
      this_00 = CWnd::GetDlgItem((CWnd *)this,0xe146);
      if (this_00 != (CWnd *)0x0) {
        iVar1 = AfxHelpEnabled();
        CWnd::ShowWindow(this_00,-(uint)(iVar1 != 0) & 5);
      }
      return 1;
    }
  }
  EndDialog(this,-1);
  return 0;
}


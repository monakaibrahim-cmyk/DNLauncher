// Address: 0x00459bd1
// Name: CDialog::OnOK
// Category: Utility


/* Library Function - Single Match
    protected: virtual void __thiscall CDialog::OnOK(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDialog::OnOK(CDialog *this)

{
  int iVar1;
  
  iVar1 = CWnd::UpdateData((CWnd *)this,1);
  if (iVar1 != 0) {
    EndDialog(this,1);
  }
  return;
}


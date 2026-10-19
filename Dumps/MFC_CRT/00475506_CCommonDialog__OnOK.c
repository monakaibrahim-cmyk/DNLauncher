// Address: 0x00475506
// Name: CCommonDialog::OnOK
// Category: MFC_CRT


/* Library Function - Single Match
    protected: virtual void __thiscall CCommonDialog::OnOK(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CCommonDialog::OnOK(CCommonDialog *this)

{
  int iVar1;
  
  iVar1 = CWnd::UpdateData((CWnd *)this,1);
  if (iVar1 != 0) {
    CWnd::Default((CWnd *)this);
    return;
  }
  return;
}


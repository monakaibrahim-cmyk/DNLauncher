// Address: 0x004755d7
// Name: COleDialog::COleDialog
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall COleDialog::COleDialog(class CWnd *)
   
   Library: Visual Studio 2005 Release */

COleDialog * __thiscall COleDialog::COleDialog(COleDialog *this,CWnd *param_1)

{
  CDialog::CDialog((CDialog *)this,0,param_1);
  *(undefined4 *)(this + 0x74) = 0xffffffff;
  return this;
}


// Address: 0x00459b72
// Name: CDialog::CDialog
// Category: Utility


/* Library Function - Single Match
    public: __thiscall CDialog::CDialog(unsigned int,class CWnd *)
   
   Library: Visual Studio 2005 Release */

CDialog * __thiscall CDialog::CDialog(CDialog *this,uint param_1,CWnd *param_2)

{
  CWnd::CWnd((CWnd *)this);
  *(undefined ***)this = vftable;
  _memset(this + 0x54,0,0x20);
  *(CWnd **)(this + 0x68) = param_2;
  *(uint *)(this + 0x54) = param_1;
  *(uint *)(this + 0x58) = param_1 & 0xffff;
  return this;
}


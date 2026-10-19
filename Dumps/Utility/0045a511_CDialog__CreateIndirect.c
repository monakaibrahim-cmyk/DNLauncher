// Address: 0x0045a511
// Name: CDialog::CreateIndirect
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CDialog::CreateIndirect(void *,class CWnd *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CDialog::CreateIndirect(CDialog *this,void *param_1,CWnd *param_2)

{
  int iVar1;
  
  iVar1 = CreateIndirect(this,param_1,param_2,(HINSTANCE__ *)0x0);
  return iVar1;
}


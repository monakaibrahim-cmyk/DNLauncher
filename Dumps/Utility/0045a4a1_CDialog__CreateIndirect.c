// Address: 0x0045a4a1
// Name: CDialog::CreateIndirect
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CDialog::CreateIndirect(struct DLGTEMPLATE const *,class CWnd
   *,void *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall
CDialog::CreateIndirect(CDialog *this,DLGTEMPLATE *param_1,CWnd *param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = CreateIndirect(this,param_1,param_2,param_3,(HINSTANCE__ *)0x0);
  return iVar1;
}


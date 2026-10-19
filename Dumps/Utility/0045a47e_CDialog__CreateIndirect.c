// Address: 0x0045a47e
// Name: CDialog::CreateIndirect
// Category: Utility


/* Library Function - Single Match
    protected: int __thiscall CDialog::CreateIndirect(void *,class CWnd *,struct HINSTANCE__ *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall
CDialog::CreateIndirect(CDialog *this,void *param_1,CWnd *param_2,HINSTANCE__ *param_3)

{
  DLGTEMPLATE *pDVar1;
  int iVar2;
  
  pDVar1 = LockResource(param_1);
  iVar2 = CreateIndirect(this,pDVar1,param_2,(void *)0x0,param_3);
  return iVar2;
}


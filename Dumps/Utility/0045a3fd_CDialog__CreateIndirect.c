// Address: 0x0045a3fd
// Name: CDialog::CreateIndirect
// Category: Utility


/* Library Function - Single Match
    protected: int __thiscall CDialog::CreateIndirect(struct DLGTEMPLATE const *,class CWnd *,void
   *,struct HINSTANCE__ *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CDialog::CreateIndirect
          (CDialog *this,DLGTEMPLATE *param_1,CWnd *param_2,void *param_3,HINSTANCE__ *param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (param_2 == (CWnd *)0x0) {
    param_2 = (CWnd *)FUN_0041c6c0();
  }
  *(void **)(this + 100) = param_3;
  bVar1 = FUN_0045a03a(this,param_1,(int)param_2,param_4);
  return CONCAT31(extraout_var,bVar1);
}


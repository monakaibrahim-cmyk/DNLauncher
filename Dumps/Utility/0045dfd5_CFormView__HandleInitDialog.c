// Address: 0x0045dfd5
// Name: CFormView::HandleInitDialog
// Category: Utility


/* Library Function - Single Match
    protected: long __thiscall CFormView::HandleInitDialog(unsigned int,long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long __thiscall CFormView::HandleInitDialog(CFormView *this,uint param_1,long param_2)

{
  AFX_MODULE_STATE *pAVar1;
  
  CWnd::Default((CWnd *)this);
  pAVar1 = AfxGetModuleState();
  if ((*(int **)(pAVar1 + 0x3c) != (int *)0x0) && (*(int *)(this + 0x94) != 0)) {
    (**(code **)(**(int **)(pAVar1 + 0x3c) + 0x24))
              (this,*(undefined4 *)(this + 0x88),*(int *)(this + 0x94));
  }
  return 0;
}


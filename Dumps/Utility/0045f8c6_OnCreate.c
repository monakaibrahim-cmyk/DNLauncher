// Address: 0x0045f8c6
// Name: OnCreate
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CView::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CView::OnCreate(struct tagCREATESTRUCTW *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

undefined4 __thiscall OnCreate(void *this,int *param_1)

{
  CDocument *this_00;
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = CWnd::Default(this);
  if (lVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    if ((*param_1 != 0) && (this_00 = *(CDocument **)(*param_1 + 4), this_00 != (CDocument *)0x0)) {
      CDocument::AddView(this_00,this);
    }
    uVar2 = 0;
  }
  return uVar2;
}


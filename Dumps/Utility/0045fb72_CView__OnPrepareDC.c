// Address: 0x0045fb72
// Name: CView::OnPrepareDC
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CView::OnPrepareDC(class CDC *,struct CPrintInfo *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CView::OnPrepareDC(CView *this,CDC *param_1,CPrintInfo *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (CPrintInfo *)0x0) {
    uVar1 = 1;
    if ((*(short *)(*(int *)(*(int *)param_2 + 0x74) + 0x1e) == -1) &&
       (*(int *)(param_2 + 0x14) != 1)) {
      uVar1 = 0;
    }
    *(undefined4 *)(param_2 + 0x10) = uVar1;
  }
  return;
}


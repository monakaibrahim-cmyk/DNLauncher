// Address: 0x00469c7f
// Name: CDocument::AddView
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CDocument::AddView(class CView *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDocument::AddView(CDocument *this,CView *param_1)

{
  CPtrList::AddTail((CPtrList *)(this + 0x2c),param_1);
  *(CDocument **)(param_1 + 0x54) = this;
  (**(code **)(*(int *)this + 0x68))();
  return;
}


// Address: 0x00469c9f
// Name: CDocument::RemoveView
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CDocument::RemoveView(class CView *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDocument::RemoveView(CDocument *this,CView *param_1)

{
  __POSITION *p_Var1;
  
  p_Var1 = CPtrList::Find((CPtrList *)(this + 0x2c),param_1,(__POSITION *)0x0);
  CPtrList::RemoveAt((CPtrList *)(this + 0x2c),p_Var1);
  *(undefined4 *)(param_1 + 0x54) = 0;
  (**(code **)(*(int *)this + 0x68))();
  return;
}


// Address: 0x0046af70
// Name: CDataSourceControl::BindProp
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CDataSourceControl::BindProp(class CDataBoundProperty *,int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall
CDataSourceControl::BindProp(CDataSourceControl *this,CDataBoundProperty *param_1,int param_2)

{
  __POSITION *p_Var1;
  void *unaff_ESI;
  
  if (param_2 == 0) {
    (**(code **)(*(int *)this + 0x14))();
    p_Var1 = CPtrList::Find((CPtrList *)(this + 0x18),param_1,(__POSITION *)0x0);
    if (p_Var1 != (__POSITION *)0x0) {
      CPtrList::RemoveAt((CPtrList *)(this + 0x18),p_Var1);
    }
  }
  else {
    (**(code **)(*(int *)this + 4))(param_1,0);
    CPtrList::AddTail((CPtrList *)(this + 0x18),unaff_ESI);
  }
  return;
}


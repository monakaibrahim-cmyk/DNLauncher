// Address: 0x0045b016
// Name: CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::Skip
// Category: Utility


/* Library Function - Single Match
    public: class CTypedPtrListIterator<class CPtrList,struct COleControlSiteOrWnd *> __thiscall
   CTypedPtrListIterator<class CPtrList,struct COleControlSiteOrWnd *>::Skip(int)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall
CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::Skip
          (CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *this,int param_1)

{
  int in_stack_00000008;
  
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>
            ((CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *)param_1,
             (CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *)this);
  while ((0 < in_stack_00000008 && (*(int *)(this + 4) != 0))) {
    if (*(__POSITION **)(param_1 + 4) != (__POSITION *)0x0) {
      CPtrList::GetNext(*(CPtrList **)param_1,(__POSITION **)(param_1 + 4));
    }
    in_stack_00000008 = in_stack_00000008 + -1;
  }
  return param_1;
}


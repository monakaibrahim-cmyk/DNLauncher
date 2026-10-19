// Address: 0x0045b0c9
// Name: CDlgControlIterator::Skip
// Category: Utility


/* Library Function - Single Match
    public: class CDlgControlIterator __thiscall CDlgControlIterator::Skip(int)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall CDlgControlIterator::Skip(CDlgControlIterator *this,int param_1)

{
  CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *pCVar1;
  CDlgControlIterator *local_c;
  CDlgControlIterator *pCStack_8;
  
  local_c = this;
  pCStack_8 = this;
  pCVar1 = (CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *)
           CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::Skip
                     ((CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *)this,(int)&local_c);
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>
            ((CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *)param_1,pCVar1);
  return param_1;
}


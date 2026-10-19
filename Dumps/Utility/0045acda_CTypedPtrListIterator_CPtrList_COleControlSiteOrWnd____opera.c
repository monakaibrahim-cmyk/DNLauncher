// Address: 0x0045acda
// Name: CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::operator=
// Category: Utility


/* Library Function - Single Match
    public: class CTypedPtrListIterator<class CPtrList,struct COleControlSiteOrWnd *> & __thiscall
   CTypedPtrListIterator<class CPtrList,struct COleControlSiteOrWnd *>::operator=(class
   CTypedPtrListIterator<class CPtrList,struct COleControlSiteOrWnd *> const &)
   
   Library: Visual Studio 2005 Release */

CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> * __thiscall
CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::operator=
          (CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *this,
          CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *param_1)

{
  if (*(int *)this != *(int *)param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return (CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *)this;
}


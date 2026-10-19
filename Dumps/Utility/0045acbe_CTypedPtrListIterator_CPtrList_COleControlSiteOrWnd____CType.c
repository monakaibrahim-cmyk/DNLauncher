// Address: 0x0045acbe
// Name: CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>
// Category: Utility


/* Library Function - Single Match
    public: __thiscall CTypedPtrListIterator<class CPtrList,struct COleControlSiteOrWnd
   *>::CTypedPtrListIterator<class CPtrList,struct COleControlSiteOrWnd *>(class
   CTypedPtrListIterator<class CPtrList,struct COleControlSiteOrWnd *> const &)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::
CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>
          (CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *this,
          CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1;
  *(int *)this = iVar1;
  if (iVar1 != *(int *)param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return;
}


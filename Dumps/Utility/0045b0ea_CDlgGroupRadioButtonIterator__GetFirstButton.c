// Address: 0x0045b0ea
// Name: CDlgGroupRadioButtonIterator::GetFirstButton
// Category: Utility


/* Library Function - Single Match
    public: class CDlgControlIterator __thiscall
   CDlgGroupRadioButtonIterator::GetFirstButton(void)const 
   
   Library: Visual Studio 2005 Release */

CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> * __thiscall
CDlgGroupRadioButtonIterator::GetFirstButton(CDlgGroupRadioButtonIterator *this)

{
  __POSITION *p_Var1;
  ulong uVar2;
  CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *pCVar3;
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *in_stack_00000004;
  CPtrList *local_14;
  __POSITION *local_10;
  CPtrList *local_c;
  __POSITION *local_8;
  
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>
            ((CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *)&local_c,
             (CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *)this);
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>
            ((CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *)&local_14,
             (CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *)&local_c);
  do {
    p_Var1 = local_8;
    if (local_8 == (__POSITION *)0x0) {
      pCVar3 = (CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *)&local_14;
LAB_0045b13f:
      CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::
      CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>(in_stack_00000004,pCVar3);
      return in_stack_00000004;
    }
    uVar2 = COleControlSiteOrWnd::GetStyle(*(COleControlSiteOrWnd **)(local_8 + 8));
    if ((uVar2 >> 0x11 & 1) != 0) {
      pCVar3 = (CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *)&local_c;
      goto LAB_0045b13f;
    }
    if (local_14 != local_c) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    local_10 = p_Var1;
    CPtrList::GetPrev(local_c,&local_8);
  } while( true );
}


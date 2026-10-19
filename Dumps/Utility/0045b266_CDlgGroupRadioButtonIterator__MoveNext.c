// Address: 0x0045b266
// Name: CDlgGroupRadioButtonIterator::MoveNext
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CDlgGroupRadioButtonIterator::MoveNext(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDlgGroupRadioButtonIterator::MoveNext(CDlgGroupRadioButtonIterator *this)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *pCVar4;
  __POSITION *p_Var5;
  CPtrList *local_c;
  __POSITION *local_8;
  
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>
            ((CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *)&local_c,
             (CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *)this);
  bVar1 = false;
  do {
    if (((local_8 == (__POSITION *)0x0) ||
        (CPtrList::GetNext(local_c,&local_8), p_Var5 = local_8, local_8 == (__POSITION *)0x0)) ||
       (uVar3 = COleControlSiteOrWnd::GetStyle(*(COleControlSiteOrWnd **)(local_8 + 8)),
       (uVar3 >> 0x11 & 1) != 0)) {
      pCVar4 = (CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *)
               GetFirstButton(this);
      CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::operator=
                ((CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *)&local_c,pCVar4);
      if (local_8 == (__POSITION *)0x0) {
        return;
      }
      if (bVar1) {
        return;
      }
      bVar1 = true;
      p_Var5 = local_8;
    }
    bVar2 = IsDisabled(*(COleControlSiteOrWnd **)(p_Var5 + 8));
    if (!bVar2) {
      CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::operator=
                ((CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *)this,
                 (CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *)&local_c);
      return;
    }
  } while( true );
}


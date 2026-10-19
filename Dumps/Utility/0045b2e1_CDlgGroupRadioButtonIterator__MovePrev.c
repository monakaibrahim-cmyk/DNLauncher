// Address: 0x0045b2e1
// Name: CDlgGroupRadioButtonIterator::MovePrev
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CDlgGroupRadioButtonIterator::MovePrev(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDlgGroupRadioButtonIterator::MovePrev(CDlgGroupRadioButtonIterator *this)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *pCVar4;
  CPtrList *local_c;
  __POSITION *local_8;
  
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>
            ((CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *)&local_c,
             (CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *)this);
  bVar1 = false;
  do {
    if ((local_8 == (__POSITION *)0x0) ||
       (uVar3 = COleControlSiteOrWnd::GetStyle(*(COleControlSiteOrWnd **)(local_8 + 8)),
       (uVar3 >> 0x11 & 1) != 0)) {
      pCVar4 = (CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *)
               GetLastButton(this);
      CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::operator=
                ((CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *)&local_c,pCVar4);
      if (local_8 == (__POSITION *)0x0) {
        return;
      }
      if (bVar1) {
        return;
      }
      bVar1 = true;
    }
    else {
      CPtrList::GetPrev(local_c,&local_8);
    }
    if ((local_8 != (__POSITION *)0x0) &&
       (bVar2 = IsDisabled(*(COleControlSiteOrWnd **)(local_8 + 8)), !bVar2)) {
      CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::operator=
                ((CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *)this,
                 (CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *)&local_c);
      return;
    }
  } while( true );
}


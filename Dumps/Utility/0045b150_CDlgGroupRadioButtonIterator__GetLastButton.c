// Address: 0x0045b150
// Name: CDlgGroupRadioButtonIterator::GetLastButton
// Category: Utility


/* Library Function - Single Match
    public: class CDlgControlIterator __thiscall
   CDlgGroupRadioButtonIterator::GetLastButton(void)const 
   
   Library: Visual Studio 2005 Release */

CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> * __thiscall
CDlgGroupRadioButtonIterator::GetLastButton(CDlgGroupRadioButtonIterator *this)

{
  ulong uVar1;
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *in_stack_00000004;
  CDlgGroupRadioButtonIterator *local_c;
  CDlgGroupRadioButtonIterator *local_8;
  
  local_c = this;
  local_8 = this;
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>
            (in_stack_00000004,
             (CTypedPtrListIterator<class_CPtrList,struct_COleControlSiteOrWnd*> *)this);
  CDlgControlIterator::Skip((CDlgControlIterator *)in_stack_00000004,(int)&local_c);
  while( true ) {
    if (local_8 == (CDlgGroupRadioButtonIterator *)0x0) {
      return in_stack_00000004;
    }
    uVar1 = COleControlSiteOrWnd::GetStyle(*(COleControlSiteOrWnd **)(local_8 + 8));
    if ((uVar1 >> 0x11 & 1) != 0) break;
    CPtrList::GetNext((CPtrList *)local_c,(__POSITION **)&local_8);
    if (*(__POSITION **)(in_stack_00000004 + 4) != (__POSITION *)0x0) {
      CPtrList::GetNext(*(CPtrList **)in_stack_00000004,(__POSITION **)(in_stack_00000004 + 4));
    }
  }
  return in_stack_00000004;
}


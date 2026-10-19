// Address: 0x00470236
// Name: CTypedPtrList<CPtrList,COleControlSiteOrWnd*>::TransferAddTail
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: struct __POSITION * __thiscall CTypedPtrList<class CPtrList,struct COleControlSiteOrWnd
   *>::TransferAddTail(struct COleControlSiteOrWnd *)
   
   Library: Visual Studio 2005 Release */

__POSITION * __thiscall
CTypedPtrList<CPtrList,COleControlSiteOrWnd*>::TransferAddTail
          (CTypedPtrList<CPtrList,COleControlSiteOrWnd*> *this,COleControlSiteOrWnd *param_1)

{
  __POSITION *p_Var1;
  
  p_Var1 = CPtrList::AddTail((CPtrList *)this,param_1);
  return p_Var1;
}


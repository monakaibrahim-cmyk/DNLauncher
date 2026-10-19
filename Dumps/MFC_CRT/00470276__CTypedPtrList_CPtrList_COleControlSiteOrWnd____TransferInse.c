// Address: 0x00470276
// Name: _CTypedPtrList<CPtrList,COleControlSiteOrWnd*>::TransferInsertBefore
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: struct __POSITION * __thiscall _CTypedPtrList<class CPtrList,struct COleControlSiteOrWnd
   *>::TransferInsertBefore(struct __POSITION *,struct COleControlSiteOrWnd *)
   
   Library: Visual Studio 2005 Release */

__POSITION * __thiscall
_CTypedPtrList<CPtrList,COleControlSiteOrWnd*>::TransferInsertBefore
          (_CTypedPtrList<CPtrList,COleControlSiteOrWnd*> *this,__POSITION *param_1,
          COleControlSiteOrWnd *param_2)

{
  __POSITION *p_Var1;
  
  p_Var1 = CPtrList::InsertBefore((CPtrList *)this,param_1,param_2);
  return p_Var1;
}


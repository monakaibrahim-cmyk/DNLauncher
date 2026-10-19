// Address: 0x0045750d
// Name: CWnd::ReflectLastMsg
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: static int __stdcall CWnd::ReflectLastMsg(struct HWND__ *,long *)
   
   Library: Visual Studio 2005 Release */

int CWnd::ReflectLastMsg(HWND__ *param_1,long *param_2)

{
  CHandleMap *pCVar1;
  CWnd *this;
  HWND pHVar2;
  void *pvVar3;
  int iVar4;
  CWnd local_64 [32];
  undefined4 local_44;
  void *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x457519;
  pCVar1 = afxMapHWND(0);
  if (pCVar1 != (CHandleMap *)0x0) {
    this = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(pCVar1 + 0x1c),param_1);
    if (this != (CWnd *)0x0) {
      iVar4 = SendChildNotifyLastMsg(this,param_2);
      return iVar4;
    }
    pHVar2 = GetParent(param_1);
    pvVar3 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(pCVar1 + 0x1c),pHVar2);
    if (((pvVar3 != (void *)0x0) && (*(int *)((int)pvVar3 + 0x4c) != 0)) &&
       (local_14 = CMapPtrToPtr::GetValueAt
                             ((CMapPtrToPtr *)(*(int *)((int)pvVar3 + 0x4c) + 0x24),param_1),
       local_14 != (void *)0x0)) {
      CWnd(local_64,param_1);
      local_8 = 0;
      iVar4 = SendChildNotifyLastMsg(local_64,param_2);
      local_44 = 0;
      local_8 = 0xffffffff;
      ~CWnd(local_64);
      return (uint)(iVar4 != 0);
    }
  }
  return 0;
}


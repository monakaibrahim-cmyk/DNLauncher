// Address: 0x00469273
// Name: CHandleMap::FromHandle
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CObject * __thiscall CHandleMap::FromHandle(void *)
   
   Library: Visual Studio 2005 Release */

CObject * __thiscall CHandleMap::FromHandle(CHandleMap *this,void *param_1)

{
  int iVar1;
  CObject *pCVar2;
  _func_int_uint *p_Var3;
  void **ppvVar4;
  
  if (param_1 == (void *)0x0) {
    pCVar2 = (CObject *)0x0;
  }
  else {
    pCVar2 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(this + 0x1c),param_1);
    if (pCVar2 == (CObject *)0x0) {
      pCVar2 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(this + 0x38),param_1);
      if (pCVar2 == (CObject *)0x0) {
        p_Var3 = AfxSetNewHandler((_func_int_uint *)&LAB_00468779);
        pCVar2 = CFixedAllocNoSync::Alloc((CFixedAllocNoSync *)(this + 4));
        if (pCVar2 == (CObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_004529b4();
        }
        (**(code **)(this + 0x14))(pCVar2);
        ppvVar4 = CMapPtrToPtr::operator[]((CMapPtrToPtr *)(this + 0x38),param_1);
        *ppvVar4 = pCVar2;
        AfxSetNewHandler(p_Var3);
        iVar1 = *(int *)(this + 0x58);
        *(void **)(pCVar2 + iVar1) = param_1;
        if (*(int *)(this + 0x5c) == 2) {
          *(void **)(pCVar2 + iVar1 + 4) = param_1;
        }
      }
      else {
        iVar1 = *(int *)(this + 0x58);
        *(void **)(pCVar2 + iVar1) = param_1;
        if (*(int *)(this + 0x5c) == 2) {
          *(void **)(pCVar2 + iVar1 + 4) = param_1;
        }
      }
    }
  }
  return pCVar2;
}


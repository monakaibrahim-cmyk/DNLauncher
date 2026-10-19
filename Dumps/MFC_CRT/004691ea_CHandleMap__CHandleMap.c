// Address: 0x004691ea
// Name: CHandleMap::CHandleMap
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CHandleMap::CHandleMap(struct CRuntimeClass *,void (__stdcall*)(class CObject
   *),void (__stdcall*)(class CObject *),unsigned int,int)
   
   Library: Visual Studio 2005 Release */

CHandleMap * __thiscall
CHandleMap::CHandleMap
          (CHandleMap *this,CRuntimeClass *param_1,_func_void_CObject_ptr *param_2,
          _func_void_CObject_ptr *param_3,uint param_4,int param_5)

{
  *(undefined ***)this = vftable;
  CFixedAllocNoSync::CFixedAllocNoSync((CFixedAllocNoSync *)(this + 4),*(uint *)(param_1 + 4),0x40);
  CMapPtrToPtr::CMapPtrToPtr((CMapPtrToPtr *)(this + 0x1c),10);
  CMapPtrToPtr::CMapPtrToPtr((CMapPtrToPtr *)(this + 0x38),4);
  if ((param_2 != (_func_void_CObject_ptr *)0x0) && (param_3 != (_func_void_CObject_ptr *)0x0)) {
    FUN_00472a93((CMapPtrToPtr *)(this + 0x38),7,0);
    *(_func_void_CObject_ptr **)(this + 0x14) = param_2;
    *(_func_void_CObject_ptr **)(this + 0x18) = param_3;
    *(uint *)(this + 0x58) = param_4;
    *(int *)(this + 0x5c) = param_5;
    *(CRuntimeClass **)(this + 0x54) = param_1;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}


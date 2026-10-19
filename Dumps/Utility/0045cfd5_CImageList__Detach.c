// Address: 0x0045cfd5
// Name: CImageList::Detach
// Category: Utility


/* Library Function - Single Match
    public: struct _IMAGELIST * __thiscall CImageList::Detach(void)
   
   Library: Visual Studio 2005 Release */

_IMAGELIST * __thiscall CImageList::Detach(CImageList *this)

{
  _IMAGELIST *p_Var1;
  CHandleMap *pCVar2;
  
  p_Var1 = *(_IMAGELIST **)(this + 4);
  if (p_Var1 != (_IMAGELIST *)0x0) {
    pCVar2 = afxMapHIMAGELIST(0);
    if (pCVar2 != (CHandleMap *)0x0) {
      CMapPtrToPtr::RemoveKey((CMapPtrToPtr *)(pCVar2 + 0x1c),*(void **)(this + 4));
    }
  }
  *(undefined4 *)(this + 4) = 0;
  return p_Var1;
}


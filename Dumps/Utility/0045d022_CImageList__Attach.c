// Address: 0x0045d022
// Name: CImageList::Attach
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CImageList::Attach(struct _IMAGELIST *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CImageList::Attach(CImageList *this,_IMAGELIST *param_1)

{
  CHandleMap *pCVar1;
  void **ppvVar2;
  
  if (param_1 != (_IMAGELIST *)0x0) {
    pCVar1 = afxMapHIMAGELIST(1);
    *(_IMAGELIST **)(this + 4) = param_1;
    ppvVar2 = CMapPtrToPtr::operator[]((CMapPtrToPtr *)(pCVar1 + 0x1c),param_1);
    *ppvVar2 = this;
  }
  return (uint)(param_1 != (_IMAGELIST *)0x0);
}


// Address: 0x0045cfff
// Name: CImageList::DeleteImageList
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CImageList::DeleteImageList(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall CImageList::DeleteImageList(CImageList *this)

{
  _IMAGELIST *p_Var1;
  int iVar2;
  
  if (*(int *)(this + 4) == 0) {
    return 0;
  }
  p_Var1 = Detach(this);
  iVar2 = AfxImageList_Destroy(p_Var1);
  return iVar2;
}


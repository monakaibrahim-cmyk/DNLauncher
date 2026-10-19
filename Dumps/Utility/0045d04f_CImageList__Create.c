// Address: 0x0045d04f
// Name: CImageList::Create
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CImageList::Create(int,int,unsigned int,int,int)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CImageList::Create(CImageList *this,int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  _IMAGELIST *p_Var1;
  int iVar2;
  
  p_Var1 = AfxImageList_Create(param_1,param_2,param_3,param_4,param_5);
  iVar2 = Attach(this,p_Var1);
  return iVar2;
}


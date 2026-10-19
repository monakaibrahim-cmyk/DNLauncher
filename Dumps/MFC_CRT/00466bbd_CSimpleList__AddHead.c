// Address: 0x00466bbd
// Name: CSimpleList::AddHead
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CSimpleList::AddHead(void *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CSimpleList::AddHead(CSimpleList *this,void *param_1)

{
  void **ppvVar1;
  
  ppvVar1 = GetNextPtr(this,param_1);
  *ppvVar1 = *(void **)this;
  *(void **)this = param_1;
  return;
}


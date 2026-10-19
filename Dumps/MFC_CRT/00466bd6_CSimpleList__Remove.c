// Address: 0x00466bd6
// Name: CSimpleList::Remove
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CSimpleList::Remove(void *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CSimpleList::Remove(CSimpleList *this,void *param_1)

{
  int iVar1;
  void **ppvVar2;
  void **ppvVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)this;
  if (pvVar4 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    if (pvVar4 == param_1) {
      ppvVar2 = GetNextPtr(this,param_1);
      *(void **)this = *ppvVar2;
    }
    else {
      do {
        ppvVar2 = GetNextPtr(this,pvVar4);
        if (*ppvVar2 == param_1) break;
        ppvVar2 = GetNextPtr(this,pvVar4);
        pvVar4 = *ppvVar2;
      } while (pvVar4 != (void *)0x0);
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
      ppvVar2 = GetNextPtr(this,param_1);
      ppvVar3 = GetNextPtr(this,pvVar4);
      *ppvVar3 = *ppvVar2;
    }
    iVar1 = 1;
  }
  return iVar1;
}


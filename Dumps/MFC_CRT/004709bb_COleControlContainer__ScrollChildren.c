// Address: 0x004709bb
// Name: COleControlContainer::ScrollChildren
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall COleControlContainer::ScrollChildren(int,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
COleControlContainer::ScrollChildren(COleControlContainer *this,int param_1,int param_2)

{
  void *pvVar1;
  int *piVar2;
  void **ppvVar3;
  int iVar4;
  __POSITION *local_8;
  
  local_8 = *(__POSITION **)(this + 0x44);
  if (local_8 != (__POSITION *)0x0) {
    do {
      ppvVar3 = CPtrList::GetNext((CPtrList *)(this + 0x40),&local_8);
      pvVar1 = *ppvVar3;
      iVar4 = *(int *)((int)pvVar1 + 4);
      if (iVar4 != 0) {
        OffsetRect((LPRECT)(iVar4 + 0x30),param_1,param_2);
        iVar4 = *(int *)((int)pvVar1 + 4);
        piVar2 = *(int **)(iVar4 + 0x54);
        iVar4 = iVar4 + 0x30;
        (**(code **)(*piVar2 + 0x1c))(piVar2,iVar4,iVar4);
      }
    } while (local_8 != (__POSITION *)0x0);
  }
  return;
}


// Address: 0x0047092e
// Name: COleControlContainer::FindItem
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual class COleControlSite * __thiscall COleControlContainer::FindItem(unsigned
   int)const 
   
   Library: Visual Studio 2005 Release */

COleControlSite * __thiscall COleControlContainer::FindItem(COleControlContainer *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  __POSITION *local_8;
  
  local_8 = *(__POSITION **)(this + 0x44);
  if (local_8 != (__POSITION *)0x0) {
    do {
      pvVar1 = CPtrList::GetNext((CPtrList *)(this + 0x40),&local_8);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_004529e8();
      }
      if ((*(int *)((int)pvVar1 + 4) != 0) &&
         (uVar2 = (**(code **)(**(int **)((int)pvVar1 + 4) + 0x90))(), uVar2 == param_1)) {
        return *(COleControlSite **)((int)pvVar1 + 4);
      }
    } while (local_8 != (__POSITION *)0x0);
  }
  return (COleControlSite *)0x0;
}


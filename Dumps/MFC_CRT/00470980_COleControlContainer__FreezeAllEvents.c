// Address: 0x00470980
// Name: COleControlContainer::FreezeAllEvents
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall COleControlContainer::FreezeAllEvents(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall COleControlContainer::FreezeAllEvents(COleControlContainer *this,int param_1)

{
  void **ppvVar1;
  __POSITION *local_8;
  
  local_8 = *(__POSITION **)(this + 0x44);
  if (local_8 != (__POSITION *)0x0) {
    do {
      ppvVar1 = CPtrList::GetNext((CPtrList *)(this + 0x40),&local_8);
      if (*(COleControlSite **)((int)*ppvVar1 + 4) != (COleControlSite *)0x0) {
        COleControlSite::FreezeEvents(*(COleControlSite **)((int)*ppvVar1 + 4),param_1);
      }
    } while (local_8 != (__POSITION *)0x0);
  }
  return;
}


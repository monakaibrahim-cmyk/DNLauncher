// Address: 0x00470864
// Name: COleControlContainer::BroadcastAmbientPropertyChange
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall COleControlContainer::BroadcastAmbientPropertyChange(long)
   
   Library: Visual Studio 2005 Release */

void __thiscall
COleControlContainer::BroadcastAmbientPropertyChange(COleControlContainer *this,long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  __POSITION *local_c;
  COleControlContainer *local_8;
  
  local_c = *(__POSITION **)(this + 0x44);
  if (local_c != (__POSITION *)0x0) {
    local_8 = this;
    do {
      ppvVar3 = CPtrList::GetNext((CPtrList *)(this + 0x40),&local_c);
      iVar1 = *(int *)((int)*ppvVar3 + 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x50) != 0)) {
        local_8 = (COleControlContainer *)0x0;
        puVar2 = *(undefined4 **)(*(int *)((int)*ppvVar3 + 4) + 0x50);
        (**(code **)*puVar2)(puVar2,&DAT_004ab80c,&local_8);
        if (local_8 != (COleControlContainer *)0x0) {
          (**(code **)(*(int *)local_8 + 0x14))(local_8,param_1);
          (**(code **)(*(int *)local_8 + 8))(local_8);
        }
      }
    } while (local_c != (__POSITION *)0x0);
  }
  return;
}


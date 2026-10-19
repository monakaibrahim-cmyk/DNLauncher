// Address: 0x0045ac7e
// Name: COleControlContainer::AttachControlSite
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall COleControlContainer::AttachControlSite(class CWnd *,unsigned
   int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
COleControlContainer::AttachControlSite(COleControlContainer *this,CWnd *param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (param_2 == 0) {
    pvVar2 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(this + 0x24),*(void **)(param_1 + 0x20));
  }
  else {
    pvVar2 = (void *)(**(code **)(*(int *)this + 0x54))(param_2);
  }
  if (pvVar2 != (void *)0x0) {
    iVar1 = *(int *)((int)pvVar2 + 0x28);
    if ((iVar1 != 0) && (*(void **)(iVar1 + 0x50) == pvVar2)) {
      *(undefined4 *)(iVar1 + 0x50) = 0;
    }
    *(void **)(param_1 + 0x50) = pvVar2;
    *(CWnd **)((int)pvVar2 + 0x28) = param_1;
  }
  return;
}


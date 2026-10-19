// Address: 0x0045ad7d
// Name: CWnd::AttachControlSite
// Category: Utility


/* Library Function - Single Match
    protected: void __thiscall CWnd::AttachControlSite(class CHandleMap *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::AttachControlSite(CWnd *this,CHandleMap *param_1)

{
  HWND pHVar1;
  void *pvVar2;
  
  if ((this != (CWnd *)0x0) && (*(int *)(this + 0x50) == 0)) {
    pHVar1 = GetParent(*(HWND *)(this + 0x20));
    pvVar2 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(param_1 + 0x1c),pHVar1);
    if ((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 0x4c) != 0)) {
      (**(code **)(**(int **)((int)pvVar2 + 0x4c) + 0x9c))(this,0);
    }
  }
  return;
}


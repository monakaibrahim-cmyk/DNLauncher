// Address: 0x0045beb1
// Name: Detach
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    public: void * __thiscall CGdiObject::Detach(void)
    public: struct HMENU__ * __thiscall CMenu::Detach(void)
   
   Library: Visual Studio 2005 Release */

int __fastcall Detach(int param_1)

{
  int iVar1;
  CHandleMap *pCVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    pCVar2 = afxMapHGDIOBJ(0);
    if (pCVar2 != (CHandleMap *)0x0) {
      CMapPtrToPtr::RemoveKey((CMapPtrToPtr *)(pCVar2 + 0x1c),*(void **)(param_1 + 4));
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar1;
}


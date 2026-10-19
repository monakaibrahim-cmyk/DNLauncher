// Address: 0x00468a4b
// Name: Detach
// Category: MFC_CRT


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
    pCVar2 = afxMapHMENU(0);
    if (pCVar2 != (CHandleMap *)0x0) {
      CMapPtrToPtr::RemoveKey((CMapPtrToPtr *)(pCVar2 + 0x1c),*(void **)(param_1 + 4));
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar1;
}


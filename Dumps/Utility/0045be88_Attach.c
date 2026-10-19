// Address: 0x0045be88
// Name: Attach
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CGdiObject::Attach(void *)
    public: int __thiscall CMenu::Attach(struct HMENU__ *)
   
   Library: Visual Studio 2005 Release */

bool __thiscall Attach(void *this,int param_1)

{
  CHandleMap *pCVar1;
  void **ppvVar2;
  
  if (param_1 != 0) {
    *(int *)((int)this + 4) = param_1;
    pCVar1 = afxMapHGDIOBJ(1);
    ppvVar2 = CMapPtrToPtr::operator[]((CMapPtrToPtr *)(pCVar1 + 0x1c),*(void **)((int)this + 4));
    *ppvVar2 = this;
  }
  return param_1 != 0;
}


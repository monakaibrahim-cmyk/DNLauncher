// Address: 0x004667e2
// Name: CCmdTarget::ExternalAddRef
// Category: MFC_CRT


/* Library Function - Single Match
    public: unsigned long __thiscall CCmdTarget::ExternalAddRef(void)
   
   Library: Visual Studio 2005 Release */

ulong __thiscall CCmdTarget::ExternalAddRef(CCmdTarget *this)

{
  ulong uVar1;
  
  if (*(int *)(this + 8) != 0) {
    uVar1 = (**(code **)(**(int **)(this + 8) + 4))(*(int **)(this + 8));
    return uVar1;
  }
  uVar1 = InterlockedIncrement((LONG *)(this + 4));
  return uVar1;
}


// Address: 0x00466853
// Name: CCmdTarget::ExternalRelease
// Category: MFC_CRT


/* Library Function - Single Match
    public: unsigned long __thiscall CCmdTarget::ExternalRelease(void)
   
   Library: Visual Studio 2005 Release */

ulong __thiscall CCmdTarget::ExternalRelease(CCmdTarget *this)

{
  ulong uVar1;
  
  if (*(int *)(this + 8) != 0) {
    uVar1 = (**(code **)(**(int **)(this + 8) + 8))(*(int **)(this + 8));
    return uVar1;
  }
  uVar1 = InternalRelease(this);
  return uVar1;
}


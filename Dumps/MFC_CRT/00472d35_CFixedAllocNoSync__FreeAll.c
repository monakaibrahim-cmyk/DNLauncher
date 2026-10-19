// Address: 0x00472d35
// Name: CFixedAllocNoSync::FreeAll
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CFixedAllocNoSync::FreeAll(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CFixedAllocNoSync::FreeAll(CFixedAllocNoSync *this)

{
  FUN_00471658(*(void **)(this + 8));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


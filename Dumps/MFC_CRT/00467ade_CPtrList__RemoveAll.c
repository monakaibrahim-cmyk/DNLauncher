// Address: 0x00467ade
// Name: CPtrList::RemoveAll
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CPtrList::RemoveAll(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CPtrList::RemoveAll(CPtrList *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  FUN_00471658(*(void **)(this + 0x14));
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


// Address: 0x00467bb6
// Name: CPtrList::CPtrList
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CPtrList::CPtrList(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CPtrList::CPtrList(CPtrList *this,int param_1)

{
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = vftable;
  *(int *)(this + 0x18) = param_1;
  return;
}


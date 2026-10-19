// Address: 0x004679e0
// Name: CMapPtrToPtr::CMapPtrToPtr
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CMapPtrToPtr::CMapPtrToPtr(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CMapPtrToPtr::CMapPtrToPtr(CMapPtrToPtr *this,int param_1)

{
  *(undefined ***)this = vftable;
  if (param_1 < 1) {
    param_1 = 10;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0x11;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(int *)(this + 0x18) = param_1;
  return;
}


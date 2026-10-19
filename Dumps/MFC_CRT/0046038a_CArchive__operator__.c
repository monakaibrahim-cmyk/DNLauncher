// Address: 0x0046038a
// Name: CArchive::operator>>
// Category: MFC_CRT


/* Library Function - Single Match
    public: class CArchive & __thiscall CArchive::operator>>(unsigned long &)
   
   Library: Visual Studio 2005 Release */

CArchive * __thiscall CArchive::operator>>(CArchive *this,ulong *param_1)

{
  if (((byte)this[0x18] & 1) == 0) {
    FUN_0046864a(4,*(short **)(this + 0x14));
  }
  if (*(uint *)(this + 0x2c) < *(int *)(this + 0x28) + 4U) {
    FillBuffer(this,(*(int *)(this + 0x28) - *(uint *)(this + 0x2c)) + 4);
  }
  *param_1 = **(ulong **)(this + 0x28);
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 4;
  return this;
}


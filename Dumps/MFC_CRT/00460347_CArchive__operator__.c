// Address: 0x00460347
// Name: CArchive::operator>>
// Category: MFC_CRT


/* Library Function - Single Match
    public: class CArchive & __thiscall CArchive::operator>>(unsigned short &)
   
   Library: Visual Studio 2005 Release */

CArchive * __thiscall CArchive::operator>>(CArchive *this,ushort *param_1)

{
  if (((byte)this[0x18] & 1) == 0) {
    FUN_0046864a(4,*(short **)(this + 0x14));
  }
  if (*(uint *)(this + 0x2c) < *(int *)(this + 0x28) + 2U) {
    FillBuffer(this,(*(int *)(this + 0x28) - *(uint *)(this + 0x2c)) + 2);
  }
  *param_1 = **(ushort **)(this + 0x28);
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 2;
  return this;
}


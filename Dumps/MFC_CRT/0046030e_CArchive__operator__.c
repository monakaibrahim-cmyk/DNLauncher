// Address: 0x0046030e
// Name: CArchive::operator<<
// Category: MFC_CRT


/* Library Function - Single Match
    public: class CArchive & __thiscall CArchive::operator<<(unsigned long)
   
   Library: Visual Studio 2005 Release */

CArchive * __thiscall CArchive::operator<<(CArchive *this,ulong param_1)

{
  CArchive *extraout_ECX;
  CArchive *this_00;
  
  this_00 = this;
  if ((~*(uint *)(this + 0x18) & 1) == 0) {
    FUN_0046864a(2,*(short **)(this + 0x14));
    this_00 = extraout_ECX;
  }
  if (*(uint *)(this + 0x2c) < *(int *)(this + 0x28) + 4U) {
    Flush(this_00);
  }
  **(ulong **)(this + 0x28) = param_1;
  *(int *)(this + 0x28) = *(int *)(this + 0x28) + 4;
  return this;
}


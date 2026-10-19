// Address: 0x00468349
// Name: CArchive::WriteCount
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CArchive::WriteCount(unsigned long)
   
   Library: Visual Studio 2005 Release */

void __thiscall CArchive::WriteCount(CArchive *this,ulong param_1)

{
  if (param_1 < 0xffff) {
    operator<<(this,(ushort)param_1);
  }
  else {
    operator<<(this,0xffff);
    operator<<(this,param_1);
  }
  return;
}


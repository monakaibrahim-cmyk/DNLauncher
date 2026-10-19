// Address: 0x00468375
// Name: CArchive::ReadCount
// Category: MFC_CRT


/* Library Function - Single Match
    public: unsigned long __thiscall CArchive::ReadCount(void)
   
   Library: Visual Studio 2005 Release */

ulong __thiscall CArchive::ReadCount(CArchive *this)

{
  CArchive *local_8;
  
  local_8 = this;
  operator>>(this,(ushort *)&local_8);
  if ((short)local_8 == -1) {
    operator>>(this,(ulong *)&local_8);
  }
  else {
    local_8 = (CArchive *)((uint)local_8 & 0xffff);
  }
  return (ulong)local_8;
}


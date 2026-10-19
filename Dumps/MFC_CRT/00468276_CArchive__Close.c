// Address: 0x00468276
// Name: CArchive::Close
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CArchive::Close(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CArchive::Close(CArchive *this)

{
  Flush(this);
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


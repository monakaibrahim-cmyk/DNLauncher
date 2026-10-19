// Address: 0x004728e1
// Name: CMemFile::Close
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CMemFile::Close(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CMemFile::Close(CMemFile *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  if ((*(int *)(this + 0x20) != 0) && (*(int *)(this + 0x24) != 0)) {
    (**(code **)(*(int *)this + 0x60))(*(int *)(this + 0x20));
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


// Address: 0x0047276b
// Name: CMemFile::SetLength
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CMemFile::SetLength(unsigned __int64)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CMemFile::SetLength(CMemFile *this,__uint64 param_1)

{
  if (param_1._4_4_ == 0) {
    if (*(uint *)(this + 0x18) < (uint)param_1) {
      (**(code **)(*(int *)this + 100))((uint)param_1);
    }
    if ((uint)param_1 < *(uint *)(this + 0x14)) {
      *(uint *)(this + 0x14) = (uint)param_1;
    }
    *(uint *)(this + 0x1c) = (uint)param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529b4();
}


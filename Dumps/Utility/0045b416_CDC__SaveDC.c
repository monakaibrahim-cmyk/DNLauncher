// Address: 0x0045b416
// Name: CDC::SaveDC
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CDC::SaveDC(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CDC::SaveDC(CDC *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(HDC *)(this + 8) != (HDC)0x0) {
    iVar2 = ::SaveDC(*(HDC *)(this + 8));
  }
  if (*(HDC *)(this + 4) != *(HDC *)(this + 8)) {
    iVar1 = ::SaveDC(*(HDC *)(this + 4));
    if (iVar1 != 0) {
      iVar2 = -1;
    }
  }
  return iVar2;
}


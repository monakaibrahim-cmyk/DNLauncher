// Address: 0x0045b447
// Name: CDC::RestoreDC
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CDC::RestoreDC(int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CDC::RestoreDC(CDC *this,int param_1)

{
  int iVar1;
  BOOL BVar2;
  
  iVar1 = 1;
  if (*(HDC *)(this + 4) != *(HDC *)(this + 8)) {
    iVar1 = ::RestoreDC(*(HDC *)(this + 4),param_1);
  }
  if (*(HDC *)(this + 8) != (HDC)0x0) {
    if ((iVar1 != 0) && (BVar2 = ::RestoreDC(*(HDC *)(this + 8),param_1), BVar2 != 0)) {
      return 1;
    }
    iVar1 = 0;
  }
  return iVar1;
}


// Address: 0x0045b53f
// Name: CDC::SetMapMode
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CDC::SetMapMode(int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CDC::SetMapMode(CDC *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(HDC *)(this + 4) != *(HDC *)(this + 8)) {
    iVar1 = ::SetMapMode(*(HDC *)(this + 4),param_1);
  }
  if (*(HDC *)(this + 8) != (HDC)0x0) {
    iVar1 = ::SetMapMode(*(HDC *)(this + 8),param_1);
  }
  return iVar1;
}


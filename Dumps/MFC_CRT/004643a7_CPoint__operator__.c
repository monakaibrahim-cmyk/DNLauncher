// Address: 0x004643a7
// Name: CPoint::operator==
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CPoint::operator==(struct tagPOINT)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CPoint::operator==(CPoint *this,tagPOINT param_1)

{
  int iVar1;
  
  if ((*(int *)this == param_1.x) && (*(int *)(this + 4) == param_1.y)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


// Address: 0x0045bf6d
// Name: CDC::SelectStockObject
// Category: Utility


/* Library Function - Single Match
    public: virtual class CGdiObject * __thiscall CDC::SelectStockObject(int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

CGdiObject * __thiscall CDC::SelectStockObject(CDC *this,int param_1)

{
  HGDIOBJ h;
  void *pvVar1;
  CGdiObject *pCVar2;
  
  h = GetStockObject(param_1);
  pvVar1 = (HGDIOBJ)0x0;
  if (*(HDC *)(this + 4) != *(HDC *)(this + 8)) {
    pvVar1 = SelectObject(*(HDC *)(this + 4),h);
  }
  if (*(HDC *)(this + 8) != (HDC)0x0) {
    pvVar1 = SelectObject(*(HDC *)(this + 8),h);
  }
  pCVar2 = CGdiObject::FromHandle(pvVar1);
  return pCVar2;
}


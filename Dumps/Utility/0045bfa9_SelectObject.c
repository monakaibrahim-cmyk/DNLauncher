// Address: 0x0045bfa9
// Name: SelectObject
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    public: class CBrush * __thiscall CDC::SelectObject(class CBrush *)
    public: class CPen * __thiscall CDC::SelectObject(class CPen *)
    public: virtual class CFont * __thiscall CDC::SelectObject(class CFont *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

HGDIOBJ SelectObject(HDC hdc,HGDIOBJ h)

{
  HGDIOBJ pvVar1;
  CGdiObject *pCVar2;
  int in_ECX;
  
  pvVar1 = (HGDIOBJ)0x0;
  if (*(HDC *)(in_ECX + 4) != *(HDC *)(in_ECX + 8)) {
    if (hdc != (HDC)0x0) {
      pvVar1 = (HGDIOBJ)hdc[1].unused;
    }
    pvVar1 = SelectObject(*(HDC *)(in_ECX + 4),pvVar1);
  }
  if (*(HDC *)(in_ECX + 8) != (HDC)0x0) {
    if (hdc == (HDC)0x0) {
      pvVar1 = (HGDIOBJ)0x0;
    }
    else {
      pvVar1 = (HGDIOBJ)hdc[1].unused;
    }
    pvVar1 = SelectObject(*(HDC *)(in_ECX + 8),pvVar1);
  }
  pCVar2 = CGdiObject::FromHandle(pvVar1);
  return pCVar2;
}


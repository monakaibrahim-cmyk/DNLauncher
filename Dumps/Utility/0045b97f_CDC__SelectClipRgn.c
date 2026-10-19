// Address: 0x0045b97f
// Name: CDC::SelectClipRgn
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CDC::SelectClipRgn(class CRgn *,int)
   
   Library: Visual Studio 2005 Release */

int __thiscall CDC::SelectClipRgn(CDC *this,CRgn *param_1,int param_2)

{
  HRGN pHVar1;
  
  pHVar1 = (HRGN)0x0;
  if (*(HDC *)(this + 4) != *(HDC *)(this + 8)) {
    if (param_1 != (CRgn *)0x0) {
      pHVar1 = *(HRGN *)(param_1 + 4);
    }
    pHVar1 = (HRGN)ExtSelectClipRgn(*(HDC *)(this + 4),pHVar1,param_2);
  }
  if (*(HDC *)(this + 8) != (HDC)0x0) {
    if (param_1 == (CRgn *)0x0) {
      pHVar1 = (HRGN)0x0;
    }
    else {
      pHVar1 = *(HRGN *)(param_1 + 4);
    }
    pHVar1 = (HRGN)ExtSelectClipRgn(*(HDC *)(this + 8),pHVar1,param_2);
  }
  return (int)pHVar1;
}


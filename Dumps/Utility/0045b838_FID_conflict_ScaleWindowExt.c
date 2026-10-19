// Address: 0x0045b838
// Name: FID_conflict:ScaleWindowExt
// Category: Utility


/* Library Function - Multiple Matches With Different Base Names
    public: virtual class CSize __thiscall CDC::ScaleViewportExt(int,int,int,int)
    public: virtual class CSize __thiscall CDC::ScaleWindowExt(int,int,int,int)
   
   Library: Visual Studio 2005 Release */

LPSIZE __thiscall
FID_conflict_ScaleWindowExt
          (void *this,LPSIZE param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    ScaleViewportExtEx(*(HDC *)((int)this + 4),param_2,param_3,param_4,param_5,param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    ScaleViewportExtEx(*(HDC *)((int)this + 8),param_2,param_3,param_4,param_5,param_1);
  }
  return param_1;
}


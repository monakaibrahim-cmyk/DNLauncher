// Address: 0x0045b7be
// Name: FID_conflict:OffsetWindowOrg
// Category: Utility


/* Library Function - Multiple Matches With Different Base Names
    public: class CPoint __thiscall CDC::MoveTo(int,int)
    public: virtual class CPoint __thiscall CDC::OffsetViewportOrg(int,int)
    public: class CPoint __thiscall CDC::OffsetWindowOrg(int,int)
    public: virtual class CSize __thiscall CDC::SetViewportExt(int,int)
     7 names - too many to list
   
   Library: Visual Studio 2005 Release */

LPPOINT __thiscall FID_conflict_OffsetWindowOrg(void *this,LPPOINT param_1,int param_2,int param_3)

{
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    OffsetViewportOrgEx(*(HDC *)((int)this + 4),param_2,param_3,param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    OffsetViewportOrgEx(*(HDC *)((int)this + 8),param_2,param_3,param_1);
  }
  return param_1;
}


// Address: 0x0045b625
// Name: FID_conflict:GetWindowExt
// Category: Utility


/* Library Function - Multiple Matches With Different Base Names
    public: class CSize __thiscall CDC::GetViewportExt(void)const 
    public: class CSize __thiscall CDC::GetWindowExt(void)const 
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall FID_conflict_GetWindowExt(void *this,int *param_1)

{
  tagSIZE local_c;
  
  local_c.cx = (LONG)this;
  local_c.cy = (LONG)this;
  GetWindowExtEx(*(HDC *)((int)this + 8),&local_c);
  *param_1 = local_c.cx;
  param_1[1] = local_c.cy;
  return;
}


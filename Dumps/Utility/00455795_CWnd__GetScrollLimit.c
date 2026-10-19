// Address: 0x00455795
// Name: CWnd::GetScrollLimit
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::GetScrollLimit(int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall CWnd::GetScrollLimit(CWnd *this,int param_1)

{
  int iVar1;
  tagSCROLLINFO local_28;
  int local_c;
  int local_8;
  
  GetScrollRange(this,param_1,&local_c,&local_8);
  iVar1 = GetScrollInfo(this,param_1,&local_28,2);
  if (iVar1 != 0) {
    local_8 = local_8 - (-(uint)(local_28.nPage != 1) & local_28.nPage - 1);
  }
  return local_8;
}


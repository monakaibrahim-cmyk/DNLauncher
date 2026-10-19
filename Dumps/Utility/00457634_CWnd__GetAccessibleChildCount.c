// Address: 0x00457634
// Name: CWnd::GetAccessibleChildCount
// Category: Utility


/* Library Function - Single Match
    public: long __thiscall CWnd::GetAccessibleChildCount(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long __thiscall CWnd::GetAccessibleChildCount(CWnd *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = GetWindowLessChildCount(this);
  lVar2 = GetWindowedChildCount(this);
  return lVar2 + lVar1;
}


// Address: 0x0045628d
// Name: CWnd::GetWindowLessChildCount
// Category: Utility


/* Library Function - Single Match
    public: long __thiscall CWnd::GetWindowLessChildCount(void)
   
   Library: Visual Studio 2005 Release */

long __thiscall CWnd::GetWindowLessChildCount(CWnd *this)

{
  void **ppvVar1;
  int iVar2;
  __POSITION *local_8;
  
  iVar2 = 0;
  if (*(int *)(this + 0x4c) != 0) {
    local_8 = *(__POSITION **)(*(int *)(this + 0x4c) + 0x44);
    while (local_8 != (__POSITION *)0x0) {
      ppvVar1 = CPtrList::GetNext((CPtrList *)(*(int *)(this + 0x4c) + 0x40),&local_8);
      if ((*(int *)((int)*ppvVar1 + 4) != 0) && (*(int *)(*(int *)((int)*ppvVar1 + 4) + 0x74) != 0))
      {
        iVar2 = iVar2 + 1;
      }
    }
  }
  return iVar2;
}


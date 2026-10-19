// Address: 0x0045a942
// Name: CWnd::GetControlUnknown
// Category: Utility


/* Library Function - Single Match
    public: struct IUnknown * __thiscall CWnd::GetControlUnknown(void)
   
   Library: Visual Studio 2005 Release */

IUnknown * __thiscall CWnd::GetControlUnknown(CWnd *this)

{
  if (*(int *)(this + 0x50) == 0) {
    return (IUnknown *)0x0;
  }
  return *(IUnknown **)(*(int *)(this + 0x50) + 0x50);
}


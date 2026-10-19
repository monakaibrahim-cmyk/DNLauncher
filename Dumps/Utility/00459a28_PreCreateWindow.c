// Address: 0x00459a28
// Name: PreCreateWindow
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CWnd::PreCreateWindow(struct tagCREATESTRUCTA &)
    public: virtual int __thiscall CWnd::PreCreateWindow(struct tagCREATESTRUCTW &)
   
   Library: Visual Studio 2005 Release */

undefined4 PreCreateWindow(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    AfxEndDeferRegisterClass(1);
    *(wchar_t **)(param_1 + 0x28) = L"AfxWnd80su";
  }
  return 1;
}


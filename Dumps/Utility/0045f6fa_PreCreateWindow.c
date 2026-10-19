// Address: 0x0045f6fa
// Name: PreCreateWindow
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall CView::PreCreateWindow(struct tagCREATESTRUCTA &)
    protected: virtual int __thiscall CView::PreCreateWindow(struct tagCREATESTRUCTW &)
   
   Library: Visual Studio 2005 Release */

undefined4 PreCreateWindow(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    AfxEndDeferRegisterClass(8);
    *(wchar_t **)(param_1 + 0x28) = L"AfxFrameOrView80su";
  }
  if ((*(uint *)(param_1 + 0x20) & 0x800000) != 0) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x200;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xff7fffff;
  }
  return 1;
}


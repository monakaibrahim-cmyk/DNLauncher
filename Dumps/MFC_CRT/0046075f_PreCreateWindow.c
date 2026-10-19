// Address: 0x0046075f
// Name: PreCreateWindow
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall CFrameWnd::PreCreateWindow(struct tagCREATESTRUCTA &)
    protected: virtual int __thiscall CFrameWnd::PreCreateWindow(struct tagCREATESTRUCTW &)
   
   Library: Visual Studio 2005 Release */

undefined4 PreCreateWindow(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    AfxEndDeferRegisterClass(8);
    *(wchar_t **)(param_1 + 0x28) = L"AfxFrameOrView80su";
  }
  if ((short)*(uint *)(param_1 + 0x20) < 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x4000;
  }
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x200;
  return 1;
}


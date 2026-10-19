// Address: 0x0045d1b3
// Name: PreCreateWindow
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CHtmlView::PreCreateWindow(struct tagCREATESTRUCTA &)
    public: virtual int __thiscall CHtmlView::PreCreateWindow(struct tagCREATESTRUCTW &)
   
   Library: Visual Studio 2005 Release */

void PreCreateWindow(int param_1)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x2000000;
  PreCreateWindow(param_1);
  return;
}


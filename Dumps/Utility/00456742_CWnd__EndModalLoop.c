// Address: 0x00456742
// Name: CWnd::EndModalLoop
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CWnd::EndModalLoop(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::EndModalLoop(CWnd *this,int param_1)

{
  *(int *)(this + 0x44) = param_1;
  if ((*(uint *)(this + 0x3c) & 0x10) != 0) {
    *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) & 0xffffffef;
    PostMessageW(*(HWND *)(this + 0x20),0,0,0);
  }
  return;
}


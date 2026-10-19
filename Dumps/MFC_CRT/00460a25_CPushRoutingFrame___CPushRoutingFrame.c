// Address: 0x00460a25
// Name: CPushRoutingFrame::~CPushRoutingFrame
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CPushRoutingFrame::~CPushRoutingFrame(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall CPushRoutingFrame::~CPushRoutingFrame(CPushRoutingFrame *this)

{
  if (*(int *)(this + 4) != 0) {
    *(undefined4 *)(*(int *)(this + 4) + 0x14c) = *(undefined4 *)this;
    *(undefined4 *)(*(int *)(this + 4) + 0x150) = *(undefined4 *)(this + 8);
  }
  return;
}


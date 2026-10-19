// Address: 0x0045f8a8
// Name: CPushRoutingView::~CPushRoutingView
// Category: Utility


/* Library Function - Single Match
    public: __thiscall CPushRoutingView::~CPushRoutingView(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2010 Release */

void __thiscall CPushRoutingView::~CPushRoutingView(CPushRoutingView *this)

{
  if (*(int *)(this + 4) != 0) {
    *(undefined4 *)(*(int *)(this + 4) + 0x144) = *(undefined4 *)this;
    *(undefined4 *)(*(int *)(this + 4) + 0x148) = *(undefined4 *)(this + 8);
  }
  return;
}


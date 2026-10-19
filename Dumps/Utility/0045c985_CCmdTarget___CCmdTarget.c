// Address: 0x0045c985
// Name: CCmdTarget::~CCmdTarget
// Category: Utility


/* Library Function - Single Match
    public: virtual __thiscall CCmdTarget::~CCmdTarget(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CCmdTarget::~CCmdTarget(CCmdTarget *this)

{
  if (*(int *)(this + 0x10) != 0) {
    (**(code **)(*(int *)(this + 0x10) + 0x1c))();
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


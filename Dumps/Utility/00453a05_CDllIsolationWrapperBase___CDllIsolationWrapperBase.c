// Address: 0x00453a05
// Name: CDllIsolationWrapperBase::~CDllIsolationWrapperBase
// Category: Utility


/* Library Function - Single Match
    public: virtual __thiscall CDllIsolationWrapperBase::~CDllIsolationWrapperBase(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDllIsolationWrapperBase::~CDllIsolationWrapperBase(CDllIsolationWrapperBase *this)

{
  *(undefined ***)this = vftable;
  if (this[8] != (CDllIsolationWrapperBase)0x0) {
    FreeLibrary(*(HMODULE *)(this + 4));
  }
  FUN_004031b0((undefined4 *)(*(int *)(this + 0xc) + -0x10));
  return;
}


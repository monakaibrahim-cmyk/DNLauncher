// Address: 0x0045c873
// Name: CCmdTarget::OnFinalRelease
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CCmdTarget::OnFinalRelease(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CCmdTarget::OnFinalRelease(CCmdTarget *this)

{
  CTypeLibCache *this_00;
  
  AfxLockGlobals(0xd);
  this_00 = (CTypeLibCache *)(**(code **)(*(int *)this + 0x20))();
  if (this_00 != (CTypeLibCache *)0x0) {
    CTypeLibCache::Unlock(this_00);
  }
  AfxUnlockGlobals(0xd);
  (**(code **)(*(int *)this + 4))(1);
  return;
}


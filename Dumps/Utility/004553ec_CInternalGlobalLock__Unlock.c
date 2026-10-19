// Address: 0x004553ec
// Name: CInternalGlobalLock::Unlock
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CInternalGlobalLock::Unlock(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CInternalGlobalLock::Unlock(CInternalGlobalLock *this)

{
  if (*(int *)this != 0x7fffffff) {
    AfxUnlockGlobals(*(int *)this);
    *(undefined4 *)this = 0x7fffffff;
  }
  return;
}


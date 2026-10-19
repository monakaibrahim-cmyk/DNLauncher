// Address: 0x00456944
// Name: CInternalGlobalLock::Unlock
// Category: Utility


void __thiscall CInternalGlobalLock::Unlock(CInternalGlobalLock *this)

{
  if (*(int *)this != 0x7fffffff) {
    AfxUnlockGlobals(*(int *)this);
    *(undefined4 *)this = 0x7fffffff;
  }
  return;
}


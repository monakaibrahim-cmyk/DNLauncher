// Address: 0x004553bd
// Name: CInternalGlobalLock::Lock
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CInternalGlobalLock::Lock(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CInternalGlobalLock::Lock(CInternalGlobalLock *this,int param_1)

{
  if (param_1 != 0x7fffffff) {
    if ((*(int *)this != 0x7fffffff) && (*(int *)this != param_1)) goto LAB_004553d5;
    *(int *)this = param_1;
  }
  if (*(int *)this != 0x7fffffff) {
    AfxLockGlobals(*(int *)this);
    return;
  }
LAB_004553d5:
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}


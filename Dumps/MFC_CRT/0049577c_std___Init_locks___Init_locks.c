// Address: 0x0049577c
// Name: std::_Init_locks::_Init_locks
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall std::_Init_locks::_Init_locks(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this)

{
  LONG LVar1;
  LPCRITICAL_SECTION p_Var2;
  
  LVar1 = InterlockedIncrement((LONG *)&lpAddend_004c4ef0);
  if (LVar1 == 0) {
    p_Var2 = (LPCRITICAL_SECTION)&DAT_004cba78;
    do {
      FUN_0049588f(p_Var2);
      p_Var2 = p_Var2 + 1;
    } while ((int)p_Var2 < 0x4cbad8);
  }
  return this;
}


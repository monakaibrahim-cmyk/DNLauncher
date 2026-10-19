// Address: 0x00454c45
// Name: CPtrList::GetNext
// Category: Utility


/* Library Function - Single Match
    public: void * & __thiscall CPtrList::GetNext(struct __POSITION * &)
   
   Library: Visual Studio 2005 Release */

void ** __thiscall CPtrList::GetNext(CPtrList *this,__POSITION **param_1)

{
  __POSITION *p_Var1;
  
  p_Var1 = *param_1;
  if (p_Var1 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  *param_1 = *(__POSITION **)p_Var1;
  return (void **)(p_Var1 + 8);
}


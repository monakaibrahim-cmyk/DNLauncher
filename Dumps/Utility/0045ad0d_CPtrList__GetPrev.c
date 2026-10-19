// Address: 0x0045ad0d
// Name: CPtrList::GetPrev
// Category: Utility


/* Library Function - Single Match
    public: void * & __thiscall CPtrList::GetPrev(struct __POSITION * &)
   
   Library: Visual Studio 2005 Release */

void ** __thiscall CPtrList::GetPrev(CPtrList *this,__POSITION **param_1)

{
  __POSITION *p_Var1;
  
  p_Var1 = *param_1;
  if (p_Var1 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  *param_1 = *(__POSITION **)(p_Var1 + 4);
  return (void **)(p_Var1 + 8);
}


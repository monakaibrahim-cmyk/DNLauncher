// Address: 0x00467c90
// Name: CPtrList::InsertBefore
// Category: MFC_CRT


/* Library Function - Single Match
    public: struct __POSITION * __thiscall CPtrList::InsertBefore(struct __POSITION *,void *)
   
   Library: Visual Studio 2005 Release */

__POSITION * __thiscall CPtrList::InsertBefore(CPtrList *this,__POSITION *param_1,void *param_2)

{
  __POSITION *p_Var1;
  
  if (param_1 == (__POSITION *)0x0) {
    p_Var1 = (__POSITION *)AddHead(this,param_2);
  }
  else {
    p_Var1 = (__POSITION *)NewNode(this,*(undefined4 *)(param_1 + 4),param_1);
    *(void **)(p_Var1 + 8) = param_2;
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      *(__POSITION **)(this + 4) = p_Var1;
    }
    else {
      **(int **)(param_1 + 4) = (int)p_Var1;
    }
    *(__POSITION **)(param_1 + 4) = p_Var1;
  }
  return p_Var1;
}


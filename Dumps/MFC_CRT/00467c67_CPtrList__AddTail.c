// Address: 0x00467c67
// Name: CPtrList::AddTail
// Category: MFC_CRT


/* Library Function - Single Match
    public: struct __POSITION * __thiscall CPtrList::AddTail(void *)
   
   Library: Visual Studio 2005 Release */

__POSITION * __thiscall CPtrList::AddTail(CPtrList *this,void *param_1)

{
  __POSITION *p_Var1;
  
  p_Var1 = (__POSITION *)NewNode(this,*(undefined4 *)(this + 8),0);
  *(void **)(p_Var1 + 8) = param_1;
  if (*(undefined4 **)(this + 8) == (undefined4 *)0x0) {
    *(__POSITION **)(this + 4) = p_Var1;
  }
  else {
    **(undefined4 **)(this + 8) = p_Var1;
  }
  *(__POSITION **)(this + 8) = p_Var1;
  return p_Var1;
}


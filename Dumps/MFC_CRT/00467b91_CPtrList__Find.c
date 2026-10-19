// Address: 0x00467b91
// Name: CPtrList::Find
// Category: MFC_CRT


/* Library Function - Single Match
    public: struct __POSITION * __thiscall CPtrList::Find(void *,struct __POSITION *)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

__POSITION * __thiscall CPtrList::Find(CPtrList *this,void *param_1,__POSITION *param_2)

{
  if (param_2 != (__POSITION *)0x0) goto LAB_00467ba7;
  for (param_2 = *(__POSITION **)(this + 4);
      (param_2 != (__POSITION *)0x0 && (*(void **)(param_2 + 8) != param_1));
      param_2 = *(__POSITION **)param_2) {
LAB_00467ba7:
  }
  return param_2;
}


// Address: 0x00467b51
// Name: CPtrList::RemoveAt
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CPtrList::RemoveAt(struct __POSITION *)
   
   Library: Visual Studio 2005 Release */

void __thiscall CPtrList::RemoveAt(CPtrList *this,__POSITION *param_1)

{
  if (param_1 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (param_1 == *(__POSITION **)(this + 4)) {
    *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  }
  else {
    **(undefined4 **)(param_1 + 4) = *(undefined4 *)param_1;
  }
  if (param_1 == *(__POSITION **)(this + 8)) {
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 4);
  }
  else {
    *(undefined4 *)(*(int *)param_1 + 4) = *(undefined4 *)(param_1 + 4);
  }
  FreeNode(this,(undefined4 *)param_1);
  return;
}


// Address: 0x00467afe
// Name: FreeNode
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CObList::FreeNode(struct CObList::CNode *)
    protected: void __thiscall CPtrList::FreeNode(struct CPtrList::CNode *)
   
   Library: Visual Studio 2005 Release */

void __thiscall FreeNode(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  *param_1 = *(undefined4 *)((int)this + 0x10);
  piVar1 = (int *)((int)this + 0xc);
  *piVar1 = *piVar1 + -1;
  *(undefined4 **)((int)this + 0x10) = param_1;
  if (*piVar1 == 0) {
    CPtrList::RemoveAll(this);
  }
  return;
}


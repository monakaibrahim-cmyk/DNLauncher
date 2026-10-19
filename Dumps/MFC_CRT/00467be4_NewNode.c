// Address: 0x00467be4
// Name: NewNode
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    protected: struct CObList::CNode * __thiscall CObList::NewNode(struct CObList::CNode *,struct
   CObList::CNode *)
    protected: struct CPtrList::CNode * __thiscall CPtrList::NewNode(struct CPtrList::CNode *,struct
   CPtrList::CNode *)
   
   Library: Visual Studio 2005 Release */

void __thiscall NewNode(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)((int)this + 0x10) == 0) {
    iVar2 = FUN_00471627((undefined4 *)((int)this + 0x14),*(int *)((int)this + 0x18),0xc);
    iVar1 = *(int *)((int)this + 0x18);
    puVar3 = (undefined4 *)(iVar2 + -8 + iVar1 * 0xc);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      *puVar3 = *(undefined4 *)((int)this + 0x10);
      *(undefined4 **)((int)this + 0x10) = puVar3;
      puVar3 = puVar3 + -3;
    }
  }
  puVar3 = *(undefined4 **)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x10) = *puVar3;
  puVar3[1] = param_1;
  *puVar3 = param_2;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  puVar3[2] = 0;
  return;
}


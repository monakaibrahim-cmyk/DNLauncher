// Address: 0x00467c3d
// Name: AddHead
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: struct __POSITION * __thiscall CObList::AddHead(class CObject *)
    public: struct __POSITION * __thiscall CPtrList::AddHead(void *)
   
   Library: Visual Studio 2005 Release */

void __thiscall AddHead(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = NewNode(this,0,*(undefined4 *)((int)this + 4));
  *(undefined4 *)(iVar1 + 8) = param_1;
  if (*(int *)((int)this + 4) == 0) {
    *(int *)((int)this + 8) = iVar1;
  }
  else {
    *(int *)(*(int *)((int)this + 4) + 4) = iVar1;
  }
  *(int *)((int)this + 4) = iVar1;
  return;
}


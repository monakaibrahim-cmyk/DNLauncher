// Address: 0x00472d4f
// Name: CFixedAllocNoSync::Alloc
// Category: MFC_CRT


/* Library Function - Single Match
    public: void * __thiscall CFixedAllocNoSync::Alloc(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall CFixedAllocNoSync::Alloc(CFixedAllocNoSync *this)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(this + 0xc) == 0) {
    iVar1 = FUN_00471627((undefined4 *)(this + 8),*(int *)(this + 4),*(int *)this);
    iVar3 = *(int *)(this + 4) + -1;
    puVar2 = (undefined4 *)(iVar1 + 4 + *(int *)this * iVar3);
    for (; -1 < iVar3; iVar3 = iVar3 + -1) {
      *puVar2 = *(undefined4 *)(this + 0xc);
      *(undefined4 **)(this + 0xc) = puVar2;
      puVar2 = (undefined4 *)((int)puVar2 - *(int *)this);
    }
  }
  puVar2 = *(undefined4 **)(this + 0xc);
  *(undefined4 *)(this + 0xc) = *puVar2;
  return puVar2;
}


// Address: 0x00467864
// Name: FreeAssoc
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CMapPtrToPtr::FreeAssoc(struct CMapPtrToPtr::CAssoc *)
    protected: void __thiscall CMapPtrToWord::FreeAssoc(struct CMapPtrToWord::CAssoc *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall FreeAssoc(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0x10);
  piVar1 = (int *)((int)this + 0xc);
  *piVar1 = *piVar1 + -1;
  *(undefined4 **)((int)this + 0x10) = param_1;
  if (*piVar1 == 0) {
    FUN_00467839((int)this);
  }
  return;
}


// Address: 0x00467b20
// Name: RemoveHead
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: class CObject * __thiscall CObList::RemoveHead(void)
    public: void * __thiscall CPtrList::RemoveHead(void)
   
   Library: Visual Studio 2005 Release */

int __fastcall RemoveHead(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (void *)0x0) && (piVar1 = *(int **)((int)param_1 + 4), piVar1 != (int *)0x0)) {
    iVar2 = *piVar1;
    iVar3 = piVar1[2];
    *(int *)((int)param_1 + 4) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((int)param_1 + 8) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    FreeNode(param_1,piVar1);
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}


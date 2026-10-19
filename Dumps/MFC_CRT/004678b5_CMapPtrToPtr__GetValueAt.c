// Address: 0x004678b5
// Name: CMapPtrToPtr::GetValueAt
// Category: MFC_CRT


/* Library Function - Single Match
    public: void * __thiscall CMapPtrToPtr::GetValueAt(void *)const 
   
   Library: Visual Studio 2005 Release */

void * __thiscall CMapPtrToPtr::GetValueAt(CMapPtrToPtr *this,void *param_1)

{
  undefined4 *puVar1;
  
  if (this == (CMapPtrToPtr *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (*(int *)(this + 4) != 0) {
    for (puVar1 = *(undefined4 **)
                   (*(int *)(this + 4) + (((uint)param_1 >> 4) % *(uint *)(this + 8)) * 4);
        puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if ((void *)puVar1[1] == param_1) {
        return (void *)puVar1[2];
      }
    }
  }
  return (void *)0x0;
}


// Address: 0x0045b1ab
// Name: FUN_0045b1ab
// Category: Utility


int __thiscall FUN_0045b1ab(void *this,int param_1)

{
  int iVar1;
  __POSITION *local_8;
  
  iVar1 = *(int *)((int)this + 0x4c);
  if (iVar1 != 0) {
    local_8 = *(__POSITION **)(iVar1 + 0x44);
    while (local_8 != (__POSITION *)0x0) {
      if (local_8 == (__POSITION *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_004529e8();
      }
      if (*(int *)(local_8 + 8) == param_1) {
        return (int)local_8;
      }
      CPtrList::GetNext((CPtrList *)(iVar1 + 0x40),&local_8);
    }
  }
  return 0;
}


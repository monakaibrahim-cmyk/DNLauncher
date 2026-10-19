// Address: 0x004031d0
// Name: FUN_004031d0
// Category: Launcher


int * __thiscall FUN_004031d0(void *this,int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar1 = (**(code **)(*param_1 + 0xc))();
  *(int *)this = iVar1 + 0x10;
  return this;
}


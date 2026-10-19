// Address: 0x00437a30
// Name: FUN_00437a30
// Category: Utility


int __thiscall FUN_00437a30(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2 + -1) {
    do {
      iVar1 = (**(code **)(*(int *)this + 0x2c))();
      if (iVar1 == -1) {
        return 0;
      }
      *(char *)(iVar2 + param_1) = (char)iVar1;
      iVar2 = iVar2 + 1;
    } while ((iVar1 != 10) && (iVar2 < param_2 + -1));
  }
  *(undefined1 *)(iVar2 + param_1) = 0;
  return param_1;
}


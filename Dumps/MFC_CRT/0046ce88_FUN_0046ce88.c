// Address: 0x0046ce88
// Name: FUN_0046ce88
// Category: MFC_CRT


undefined4 __thiscall FUN_0046ce88(void *this,int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = param_1;
  if (param_1 == (int *)0x0) {
    return 0x80004005;
  }
  if (*(int *)((int)this + 4) != 0) {
    puVar1 = (undefined4 *)*param_1;
    param_1 = (int *)0x0;
    iVar3 = (*(code *)*puVar1)(piVar2,&DAT_004a3fbc,&param_1);
    if (-1 < iVar3) {
      if (*(int *)this == 0) {
        if (param_1 == (int *)0x0) {
          return 0x80004005;
        }
        (**(code **)(*param_1 + 8))(param_1);
        return 0x80004005;
      }
      uVar4 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          (**(code **)(*param_1 + 0x18))(param_1,*(undefined4 *)(*(int *)this + uVar4 * 8),0);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)((int)this + 4));
      }
    }
    *(undefined4 *)((int)this + 4) = 0;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)this);
  }
  return 0;
}


// Address: 0x00406ee0
// Name: FUN_00406ee0
// Category: Launcher


int * __thiscall FUN_00406ee0(void *this,byte param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(*(int *)this + -0x10);
  piVar1 = (int *)(*(int *)this + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


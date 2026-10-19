// Address: 0x0042c320
// Name: FUN_0042c320
// Category: Launcher


void FUN_0042c320(int *param_1)

{
  rsize_t _DstSize;
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *_Dst;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00497ab6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 1;
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1,DAT_004c3750 ^ (uint)&stack0xffffffe4);
    *param_1 = 0;
  }
  puVar1 = (undefined4 *)param_1[6];
  if ((undefined4 *)param_1[7] < puVar1) {
    FUN_00475b26();
  }
  puVar2 = (undefined4 *)param_1[7];
  if (puVar2 < (undefined4 *)param_1[6]) {
    FUN_00475b26();
  }
  if (param_1 == (int *)0xffffffec) {
    FUN_00475b26();
  }
  if (puVar1 != puVar2) {
    if (param_1 == (int *)0xffffffec) {
      FUN_00475b26();
    }
    if ((undefined4 *)param_1[7] <= puVar1) {
      FUN_00475b26();
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)*puVar1);
  }
  pvVar3 = (void *)param_1[7];
  if (pvVar3 < (void *)param_1[6]) {
    FUN_00475b26();
  }
  _Dst = (void *)param_1[6];
  if ((void *)param_1[7] < _Dst) {
    FUN_00475b26();
  }
  if (_Dst != pvVar3) {
    iVar4 = param_1[7] - (int)pvVar3 >> 2;
    _DstSize = iVar4 * 4;
    if (0 < iVar4) {
      _memmove_s(_Dst,_DstSize,pvVar3,_DstSize);
    }
    param_1[7] = (int)(_DstSize + (int)_Dst);
  }
  if ((void *)param_1[6] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[6]);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar1 = (undefined4 *)param_1[3];
  pvVar3 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(param_1[3] + 4) = param_1[3];
  param_1[4] = 0;
  if (pvVar3 != (void *)param_1[3]) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[3]);
}


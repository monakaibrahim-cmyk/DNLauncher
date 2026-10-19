// Address: 0x00415640
// Name: FUN_00415640
// Category: Launcher


int * FUN_00415640(int *param_1,int param_2,void *param_3,int param_4,void *param_5)

{
  rsize_t _DstSize;
  int iVar1;
  int unaff_EBX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00475b26();
  }
  if (param_3 != param_5) {
    iVar1 = *(int *)(unaff_EBX + 8) - (int)param_5 >> 2;
    _DstSize = iVar1 * 4;
    if (0 < iVar1) {
      _memmove_s(param_3,_DstSize,param_5,_DstSize);
    }
    *(void **)(unaff_EBX + 8) = (void *)(_DstSize + (int)param_3);
  }
  *param_1 = param_2;
  param_1[1] = (int)param_3;
  return param_1;
}


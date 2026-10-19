// Address: 0x00402710
// Name: FUN_00402710
// Category: Launcher


void * __fastcall FUN_00402710(void *param_1,void *param_2)

{
  rsize_t _DstSize;
  int in_EAX;
  int iVar1;
  
  iVar1 = in_EAX - (int)param_2 >> 2;
  _DstSize = iVar1 * 4;
  if (iVar1 != 0) {
    _memmove_s(param_1,_DstSize,param_2,_DstSize);
  }
  return (void *)(_DstSize + (int)param_1);
}


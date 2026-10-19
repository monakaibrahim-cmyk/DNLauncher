// Address: 0x004525e0
// Name: FUN_004525e0
// Category: Utility


void __cdecl FUN_004525e0(int *param_1,int param_2,int param_3,int param_4)

{
  size_t *psVar1;
  void *_Dst;
  void *_Dst_00;
  int iVar2;
  size_t *psVar3;
  
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_4 != 0)) {
    _Dst = FUN_0044d9e0(param_1,(*(int *)(param_2 + 0xc0) + param_4) * 0x14);
    if (_Dst == (void *)0x0) {
      FUN_004451d0((int)param_1,"Out of memory while processing unknown chunk.");
      return;
    }
    _memcpy(_Dst,*(void **)(param_2 + 0xbc),*(int *)(param_2 + 0xc0) * 0x14);
    FUN_0044d9b0((int)param_1,*(void **)(param_2 + 0xbc));
    iVar2 = 0;
    *(undefined4 *)(param_2 + 0xbc) = 0;
    if (0 < param_4) {
      psVar3 = (size_t *)(param_3 + 0xc);
      do {
        psVar1 = (size_t *)((int)_Dst + (*(int *)(param_2 + 0xc0) + iVar2) * 0x14);
        *psVar1 = psVar3[-3];
        *(undefined1 *)(psVar1 + 1) = 0;
        _Dst_00 = FUN_0044d9e0(param_1,*psVar3);
        psVar1[2] = (size_t)_Dst_00;
        if (_Dst_00 == (void *)0x0) {
          FUN_004451d0((int)param_1,"Out of memory while processing unknown chunk.");
        }
        else {
          _memcpy(_Dst_00,(void *)psVar3[-1],*psVar3);
          psVar1[3] = *psVar3;
          *(char *)(psVar1 + 4) = (char)param_1[0x1a];
        }
        iVar2 = iVar2 + 1;
        psVar3 = psVar3 + 5;
      } while (iVar2 < param_4);
    }
    *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0xc0) + param_4;
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x200;
    *(void **)(param_2 + 0xbc) = _Dst;
  }
  return;
}


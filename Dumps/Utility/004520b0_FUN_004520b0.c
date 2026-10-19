// Address: 0x004520b0
// Name: FUN_004520b0
// Category: Utility


void __cdecl
FUN_004520b0(int *param_1,int param_2,char *param_3,undefined1 param_4,void *param_5,size_t param_6)

{
  char cVar1;
  char *pcVar2;
  void *_Dst;
  void *_Dst_00;
  
  if ((((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != (char *)0x0)) &&
     (param_5 != (void *)0x0)) {
    pcVar2 = param_3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    _Dst = FUN_0044d9e0(param_1,(size_t)(pcVar2 + (1 - (int)(param_3 + 1))));
    if (_Dst == (void *)0x0) {
      FUN_004451d0((int)param_1,"Insufficient memory to process iCCP chunk.");
      return;
    }
    _memcpy(_Dst,param_3,(size_t)(pcVar2 + (1 - (int)(param_3 + 1))));
    _Dst_00 = FUN_0044d9e0(param_1,param_6);
    if (_Dst_00 == (void *)0x0) {
      FUN_0044d9b0((int)param_1,_Dst);
      FUN_004451d0((int)param_1,"Insufficient memory to process iCCP profile.");
      return;
    }
    _memcpy(_Dst_00,param_5,param_6);
    FUN_00445510((int)param_1,param_2,0x10,0);
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x10;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000;
    *(void **)(param_2 + 0xc4) = _Dst;
    *(size_t *)(param_2 + 0xcc) = param_6;
    *(void **)(param_2 + 200) = _Dst_00;
    *(undefined1 *)(param_2 + 0xd0) = param_4;
  }
  return;
}


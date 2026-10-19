// Address: 0x004454d0
// Name: FUN_004454d0
// Category: Utility


void __cdecl FUN_004454d0(undefined4 *param_1,uint param_2)

{
  void *_Dst;
  
  _Dst = (void *)*param_1;
  if (_Dst != (void *)0x0) {
    if (param_2 < 0x120) {
      FUN_0044d940(_Dst);
      _Dst = (void *)FUN_0044d920(2);
      *param_1 = _Dst;
    }
    _memset(_Dst,0,0x120);
  }
  return;
}


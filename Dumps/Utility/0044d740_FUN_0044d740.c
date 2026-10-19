// Address: 0x0044d740
// Name: FUN_0044d740
// Category: Utility


void __cdecl FUN_0044d740(int param_1,undefined *param_2,undefined4 param_3)

{
  void *_Dst;
  size_t _Size;
  undefined1 local_284 [580];
  undefined4 local_40;
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)local_284;
  if (param_1 == 2) {
    _Size = 0x120;
  }
  else {
    if (param_1 != 1) {
      __security_check_cookie(local_4 ^ (uint)local_284);
      return;
    }
    _Size = 0x280;
  }
  if (param_2 == (undefined *)0x0) {
    _Dst = _malloc(_Size);
  }
  else {
    local_40 = param_3;
    _Dst = (void *)(*(code *)param_2)(local_284);
  }
  if (_Dst != (void *)0x0) {
    _memset(_Dst,0,_Size);
  }
  __security_check_cookie(local_4 ^ (uint)local_284);
  return;
}


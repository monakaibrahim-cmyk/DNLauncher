// Address: 0x0044db00
// Name: FUN_0044db00
// Category: Utility


void __cdecl
FUN_0044db00(int *param_1,int param_2,void *param_3,int param_4,size_t param_5,uint *param_6)

{
  int iVar1;
  size_t _Size;
  void *_Dst;
  char *pcVar2;
  void *local_48;
  int local_44;
  void *local_40;
  uint *local_3c;
  char local_38 [52];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_48;
  local_3c = param_6;
  local_48 = param_3;
  if (param_2 != 0) {
    __snprintf(local_38,0x32,"Unknown zTXt compression type %d",param_2);
    FUN_004451d0((int)param_1,local_38);
    *(undefined1 *)(param_5 + (int)local_48) = 0;
    *local_3c = param_5;
    __security_check_cookie(local_4 ^ (uint)&local_48);
    return;
  }
  param_1[0x1e] = param_4 - param_5;
  _Size = 0;
  param_1[0x1d] = param_5 + (int)param_3;
  param_1[0x20] = param_1[0x2b];
  param_1[0x21] = param_1[0x2c];
  _Dst = (void *)0x0;
  if (param_4 - param_5 == 0) {
LAB_0044ddaa:
    pcVar2 = "Incomplete compressed datastream in %s chunk";
  }
  else {
    do {
      local_44 = FUN_00426ac0(param_1 + 0x1d,1);
      if ((local_44 != 0) && (local_44 != 1)) {
        pcVar2 = (char *)param_1[0x23];
        if (pcVar2 == (char *)0x0) {
          pcVar2 = "Error decoding compressed text";
        }
        FUN_004451d0((int)param_1,pcVar2);
        FUN_004268a0((int)(param_1 + 0x1d));
        param_1[0x1e] = 0;
        if (_Dst == (void *)0x0) {
          _Size = param_5 + 0x20;
          _Dst = FUN_0044d9e0(param_1,_Size);
          if (_Dst == (void *)0x0) {
            FUN_0044d9b0((int)param_1,local_48);
            FUN_00445110(param_1,"Not enough memory to decompress chunk");
          }
          _memcpy(_Dst,local_48,param_5);
        }
        *(undefined1 *)((int)_Dst + (_Size - 1)) = 0;
        _Size = (int)local_48 + param_4 + (-1 - (int)_Dst);
        if (0x1e < _Size) {
          _Size = 0x1f;
        }
        _memcpy((void *)(param_5 + (int)_Dst),"Error decoding compressed text",_Size + 1);
        break;
      }
      iVar1 = param_1[0x21];
      if ((iVar1 == 0) || (local_44 == 1)) {
        if (_Dst == (void *)0x0) {
          _Size = (param_5 - iVar1) + param_1[0x2c];
          _Dst = FUN_0044d9e0(param_1,_Size + 1);
          if (_Dst == (void *)0x0) {
            FUN_0044d9b0((int)param_1,local_48);
            FUN_00445110(param_1,"Not enough memory to decompress chunk.");
          }
          _memcpy((void *)(param_5 + (int)_Dst),(void *)param_1[0x2b],_Size - param_5);
          _memcpy(_Dst,local_48,param_5);
        }
        else {
          local_40 = _Dst;
          _Dst = FUN_0044d9e0(param_1,(_Size - iVar1) + 1 + param_1[0x2c]);
          if (_Dst == (void *)0x0) {
            FUN_0044d9b0((int)param_1,local_40);
            FUN_0044d9b0((int)param_1,local_48);
            FUN_00445110(param_1,"Not enough memory to decompress chunk..");
          }
          _memcpy(_Dst,local_40,_Size);
          FUN_0044d9b0((int)param_1,local_40);
          _memcpy((void *)((int)_Dst + _Size),(void *)param_1[0x2b],param_1[0x2c] - param_1[0x21]);
          _Size = _Size + (param_1[0x2c] - param_1[0x21]);
        }
        *(undefined1 *)((int)_Dst + _Size) = 0;
        if (local_44 == 1) goto LAB_0044de18;
        param_1[0x20] = param_1[0x2b];
        param_1[0x21] = param_1[0x2c];
      }
    } while (param_1[0x1e] != 0);
    if (local_44 == 1) goto LAB_0044de18;
    if (local_44 == -5) {
      pcVar2 = "Buffer error in compressed datastream in %s chunk";
    }
    else {
      if (local_44 != -3) goto LAB_0044ddaa;
      pcVar2 = "Data error in compressed datastream in %s chunk";
    }
  }
  __snprintf(local_38,0x34,pcVar2,param_1 + 0x47);
  FUN_004451d0((int)param_1,local_38);
  if (_Dst == (void *)0x0) {
    _Dst = FUN_0044d9e0(param_1,param_5 + 1);
    if (_Dst == (void *)0x0) {
      FUN_0044d9b0((int)param_1,local_48);
      FUN_00445110(param_1,"Not enough memory for text.");
    }
    _memcpy(_Dst,local_48,param_5);
  }
  *(undefined1 *)(param_5 + (int)_Dst) = 0;
  _Size = param_5;
LAB_0044de18:
  FUN_004268a0((int)(param_1 + 0x1d));
  param_1[0x1e] = 0;
  FUN_0044d9b0((int)param_1,local_48);
  *local_3c = _Size;
  __security_check_cookie(local_4 ^ (uint)&local_48);
  return;
}


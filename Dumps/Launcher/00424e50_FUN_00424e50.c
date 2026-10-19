// Address: 0x00424e50
// Name: FUN_00424e50
// Category: Launcher


int FUN_00424e50(int param_1,byte *param_2)

{
  byte *_MaxCount;
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *_Buf;
  
  pbVar1 = param_2;
  _MaxCount = *(byte **)(param_1 + 0x14);
  if ((_MaxCount != (byte *)0x0) && (_MaxCount != (byte *)0x0)) {
    if (*(uint *)(param_1 + 0x18) < 0x10) {
      _Buf = (byte *)(param_1 + 4);
    }
    else {
      _Buf = *(byte **)(param_1 + 4);
    }
    param_2 = (byte *)(param_1 + 4);
    pbVar2 = _memchr(_Buf,(int)(char)*pbVar1,(size_t)_MaxCount);
    while (pbVar2 != (byte *)0x0) {
      iVar3 = FUN_00425a70(pbVar1,pbVar2);
      if (iVar3 == 0) {
        if (*(uint *)(param_1 + 0x18) < 0x10) {
          return (int)pbVar2 - (int)param_2;
        }
        return (int)pbVar2 - *(int *)param_2;
      }
      _MaxCount = _Buf + (int)(_MaxCount + (-1 - (int)pbVar2));
      _Buf = pbVar2 + 1;
      pbVar2 = _memchr(_Buf,(int)(char)*pbVar1,(size_t)_MaxCount);
    }
  }
  return -1;
}


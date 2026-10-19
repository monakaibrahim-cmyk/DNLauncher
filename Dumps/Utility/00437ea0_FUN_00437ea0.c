// Address: 0x00437ea0
// Name: FUN_00437ea0
// Category: Utility


void __thiscall FUN_00437ea0(void *this,int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint _C;
  int iVar5;
  int iVar6;
  int *local_3f4;
  byte local_3f0 [1004];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_3f4;
  iVar6 = 0;
  if (1000 < param_2) {
    param_2 = 1000;
  }
  iVar5 = 2;
  local_3f4 = this;
  if (2 < param_2) {
    do {
      bVar1 = *(byte *)(iVar5 + param_1);
      _C = (uint)bVar1;
      if ((_C != 0xd) || (*(char *)(iVar5 + 1 + param_1) != '\n')) {
        iVar2 = _isprint(_C);
        if ((iVar2 == 0) && ((_C != 10 && (_C != 9)))) {
          local_3f0[iVar6] = 0x3f;
        }
        else {
          local_3f0[iVar6] = bVar1;
        }
        iVar6 = iVar6 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  iVar5 = *local_3f4;
  local_3f0[iVar6] = 0;
  pbVar4 = local_3f0;
  pbVar3 = (byte *)(iVar5 + 0xc4);
  do {
    bVar1 = *pbVar4;
    *pbVar3 = bVar1;
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  __security_check_cookie(local_4 ^ (uint)&local_3f4);
  return;
}


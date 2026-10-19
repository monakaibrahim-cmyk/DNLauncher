// Address: 0x0042ec00
// Name: FUN_0042ec00
// Category: Launcher


void __fastcall FUN_0042ec00(int param_1,int *param_2)

{
  int iVar1;
  uint in_EAX;
  byte *pbVar2;
  byte local_1c [4];
  byte local_18 [24];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[4] = 0xc0;
  local_18[5] = 0;
  local_18[6] = 0;
  local_18[7] = 0;
  local_18[8] = 0xe0;
  local_18[9] = 0;
  local_18[10] = 0;
  local_18[0xb] = 0;
  local_18[0xc] = 0xf0;
  local_18[0xd] = 0;
  local_18[0xe] = 0;
  local_18[0xf] = 0;
  if (in_EAX < 0x80) {
    *param_2 = 1;
  }
  else if (in_EAX < 0x800) {
    *param_2 = 2;
  }
  else if (in_EAX < 0x10000) {
    *param_2 = 3;
  }
  else {
    if (0x1fffff < in_EAX) {
      *param_2 = 0;
      return;
    }
    *param_2 = 4;
  }
  iVar1 = *param_2;
  pbVar2 = (byte *)(param_1 + iVar1);
  switch(iVar1) {
  case 4:
    pbVar2 = pbVar2 + -1;
    *pbVar2 = (byte)in_EAX & 0x3f | 0x80;
    in_EAX = in_EAX >> 6;
  case 3:
    pbVar2 = pbVar2 + -1;
    *pbVar2 = (byte)in_EAX & 0x3f | 0x80;
    in_EAX = in_EAX >> 6;
  case 2:
    pbVar2 = pbVar2 + -1;
    *pbVar2 = (byte)in_EAX & 0x3f | 0x80;
    in_EAX = in_EAX >> 6;
  case 1:
    pbVar2[-1] = local_1c[iVar1 * 4] | (byte)in_EAX;
    return;
  default:
    return;
  }
}


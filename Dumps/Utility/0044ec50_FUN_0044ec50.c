// Address: 0x0044ec50
// Name: FUN_0044ec50
// Category: Utility


void __cdecl FUN_0044ec50(int *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20;
  uint local_1c;
  uint *local_18;
  uint local_14;
  undefined1 local_10 [4];
  byte local_c;
  byte local_b;
  byte local_a;
  byte local_9;
  byte local_8;
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_20;
  local_18 = param_2;
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    FUN_00445110(param_1,"Out of place IHDR");
  }
  if (param_3 != 0xd) {
    FUN_00445110(param_1,"Invalid IHDR chunk");
  }
  param_1[0x1a] = param_1[0x1a] | 1;
  FUN_0044da60(param_1,&local_14,0xd);
  FUN_0044eb90(param_1,0);
  uVar2 = FUN_0044eb60(param_1,(undefined1 *)&local_14);
  uVar3 = FUN_0044eb60(param_1,local_10);
  local_20 = (uint)local_9;
  local_1c = (uint)local_8;
  *(byte *)((int)param_1 + 0x123) = local_8;
  *(byte *)(param_1 + 0x8e) = local_9;
  param_1[0x32] = uVar2;
  param_1[0x33] = uVar3;
  *(byte *)((int)param_1 + 0x127) = local_c;
  *(byte *)((int)param_1 + 0x126) = local_b;
  *(byte *)(param_1 + 0x98) = local_a;
  switch((uint)local_b) {
  case 0:
  case 3:
    *(undefined1 *)((int)param_1 + 0x12a) = 1;
    break;
  case 2:
    *(undefined1 *)((int)param_1 + 0x12a) = 3;
    break;
  case 4:
    *(undefined1 *)((int)param_1 + 0x12a) = 2;
    break;
  case 6:
    *(undefined1 *)((int)param_1 + 0x12a) = 4;
  }
  bVar1 = *(char *)((int)param_1 + 0x12a) * local_c;
  *(byte *)((int)param_1 + 0x129) = bVar1;
  if (bVar1 < 8) {
    uVar4 = bVar1 * uVar2 + 7 >> 3;
  }
  else {
    uVar4 = (bVar1 >> 3) * uVar2;
  }
  param_1[0x36] = uVar4;
  FUN_00451a50(param_1,local_18,uVar2,uVar3,(uint)local_c,(uint)local_b,local_1c,(uint)local_a,
               local_20);
  __security_check_cookie(local_4 ^ (uint)&local_20);
  return;
}


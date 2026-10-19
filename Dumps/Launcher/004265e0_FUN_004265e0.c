// Address: 0x004265e0
// Name: FUN_004265e0
// Category: Launcher


uint __cdecl FUN_004265e0(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  if (param_2 != (uint *)0x0) {
    uVar1 = ~param_1;
    for (; (param_3 != 0 && (((uint)param_2 & 3) != 0)); param_2 = (uint *)((int)param_2 + 1)) {
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_004ae250 + (((byte)*param_2 ^ uVar1) & 0xff) * 4);
      param_3 = param_3 - 1;
    }
    if (0x1f < param_3) {
      uVar3 = param_3 >> 5;
      puVar2 = param_2;
      do {
        uVar1 = uVar1 ^ *puVar2;
        uVar1 = *(uint *)(&DAT_004ae650 + (uVar1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_004aea50 + (uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_004ae250 + (uVar1 >> 0x18) * 4) ^
                *(uint *)(&DAT_004aee50 + (uVar1 & 0xff) * 4) ^ puVar2[1];
        uVar1 = *(uint *)(&DAT_004ae650 + (uVar1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_004aea50 + (uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_004ae250 + (uVar1 >> 0x18) * 4) ^
                *(uint *)(&DAT_004aee50 + (uVar1 & 0xff) * 4) ^ puVar2[2];
        uVar1 = *(uint *)(&DAT_004ae650 + (uVar1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_004aea50 + (uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_004ae250 + (uVar1 >> 0x18) * 4) ^
                *(uint *)(&DAT_004aee50 + (uVar1 & 0xff) * 4) ^ puVar2[3];
        uVar1 = *(uint *)(&DAT_004ae650 + (uVar1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_004aea50 + (uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_004ae250 + (uVar1 >> 0x18) * 4) ^
                *(uint *)(&DAT_004aee50 + (uVar1 & 0xff) * 4) ^ puVar2[4];
        uVar1 = *(uint *)(&DAT_004ae650 + (uVar1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_004aea50 + (uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_004ae250 + (uVar1 >> 0x18) * 4) ^
                *(uint *)(&DAT_004aee50 + (uVar1 & 0xff) * 4) ^ puVar2[5];
        uVar1 = *(uint *)(&DAT_004ae650 + (uVar1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_004aea50 + (uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_004ae250 + (uVar1 >> 0x18) * 4) ^
                *(uint *)(&DAT_004aee50 + (uVar1 & 0xff) * 4) ^ puVar2[6];
        param_2 = puVar2 + 8;
        param_3 = param_3 - 0x20;
        uVar1 = *(uint *)(&DAT_004ae650 + (uVar1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_004aea50 + (uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_004ae250 + (uVar1 >> 0x18) * 4) ^
                *(uint *)(&DAT_004aee50 + (uVar1 & 0xff) * 4) ^ puVar2[7];
        uVar1 = *(uint *)(&DAT_004ae650 + (uVar1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_004aea50 + (uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_004ae250 + (uVar1 >> 0x18) * 4) ^
                *(uint *)(&DAT_004aee50 + (uVar1 & 0xff) * 4);
        uVar3 = uVar3 - 1;
        puVar2 = param_2;
      } while (uVar3 != 0);
    }
    if (3 < param_3) {
      uVar3 = param_3 >> 2;
      do {
        uVar1 = uVar1 ^ *param_2;
        param_2 = param_2 + 1;
        uVar1 = *(uint *)(&DAT_004ae650 + (uVar1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_004aea50 + (uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_004ae250 + (uVar1 >> 0x18) * 4) ^
                *(uint *)(&DAT_004aee50 + (uVar1 & 0xff) * 4);
        param_3 = param_3 - 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_004ae250 + (((byte)*param_2 ^ uVar1) & 0xff) * 4);
      param_2 = (uint *)((int)param_2 + 1);
    }
    return ~uVar1;
  }
  return 0;
}


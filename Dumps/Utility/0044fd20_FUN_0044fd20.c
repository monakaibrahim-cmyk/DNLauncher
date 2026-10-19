// Address: 0x0044fd20
// Name: FUN_0044fd20
// Category: Utility


void __cdecl FUN_0044fd20(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  char *pcVar5;
  uint local_114;
  int local_110;
  undefined4 local_10c;
  byte local_108 [4];
  uint local_104 [64];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_114;
  local_110 = param_2;
  uVar4 = (short)(1 << (*(byte *)((int)param_1 + 0x127) & 0x1f)) - 1;
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_00445110(param_1,"Missing IHDR before tRNS");
LAB_0044fd6e:
    cVar1 = *(char *)((int)param_1 + 0x126);
    if (cVar1 == '\0') {
      if (param_3 == 2) {
        FUN_0044da60(param_1,&local_114,2);
        *(undefined2 *)((int)param_1 + 0x11a) = 1;
        uVar2 = FUN_0044da40((byte *)&local_114);
        *(ushort *)(param_1 + 0x65) = uVar2 & uVar4;
        param_2 = local_110;
LAB_0044fed6:
        iVar3 = FUN_0044eb90(param_1,0);
        if (iVar3 != 0) {
          *(undefined2 *)((int)param_1 + 0x11a) = 0;
          __security_check_cookie(local_4 ^ (uint)&local_114);
          return;
        }
        FUN_004523b0(param_1,param_2,local_104,(uint)*(ushort *)((int)param_1 + 0x11a),param_1 + 99)
        ;
        __security_check_cookie(local_4 ^ (uint)&local_114);
        return;
      }
    }
    else {
      if (cVar1 != '\x02') {
        if (cVar1 == '\x03') {
          if ((*(byte *)(param_1 + 0x1a) & 2) == 0) {
            FUN_004451d0((int)param_1,"Missing PLTE before tRNS");
          }
          if ((*(ushort *)(param_1 + 0x46) < param_3) || (0x100 < param_3)) {
            FUN_004451d0((int)param_1,"Incorrect tRNS chunk length");
          }
          else {
            if (param_3 != 0) {
              FUN_0044da60(param_1,local_104,param_3);
              *(short *)((int)param_1 + 0x11a) = (short)param_3;
              goto LAB_0044fed6;
            }
            FUN_004451d0((int)param_1,"Zero length tRNS chunk");
          }
          goto LAB_0044ff5d;
        }
        pcVar5 = "tRNS chunk not allowed with alpha channel";
        goto LAB_0044ff4f;
      }
      if (param_3 == 6) {
        FUN_0044da60(param_1,&local_10c,6);
        *(undefined2 *)((int)param_1 + 0x11a) = 1;
        uVar2 = FUN_0044da40((byte *)&local_10c);
        *(ushort *)((int)param_1 + 0x18e) = uVar2 & uVar4;
        uVar2 = FUN_0044da40((byte *)((int)&local_10c + 2));
        *(ushort *)(param_1 + 100) = uVar2 & uVar4;
        uVar2 = FUN_0044da40(local_108);
        *(ushort *)((int)param_1 + 0x192) = uVar2 & uVar4;
        param_2 = local_110;
        goto LAB_0044fed6;
      }
    }
    FUN_004451d0((int)param_1,"Incorrect tRNS chunk length");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004451d0((int)param_1,"Invalid tRNS after IDAT");
      goto LAB_0044ff5d;
    }
    if ((param_2 == 0) || ((*(byte *)(param_2 + 8) & 0x10) == 0)) goto LAB_0044fd6e;
    pcVar5 = "Duplicate tRNS chunk";
LAB_0044ff4f:
    FUN_004451d0((int)param_1,pcVar5);
  }
LAB_0044ff5d:
  FUN_0044eb90(param_1,param_3);
  __security_check_cookie(local_4 ^ (uint)&local_114);
  return;
}


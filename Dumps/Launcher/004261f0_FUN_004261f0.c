// Address: 0x004261f0
// Name: FUN_004261f0
// Category: Launcher


undefined8 __cdecl FUN_004261f0(char *param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  longlong lVar8;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar6 = 0;
  local_10 = 0;
  local_c = 0;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0;
  lVar8 = 0;
  local_8 = 0;
  lVar2 = 0;
  if (pcVar3 != param_1 + 1) {
    do {
      uVar4 = (int)param_1[uVar6] * (int)param_1[uVar6];
      bVar7 = CARRY4(local_10,uVar4);
      local_10 = local_10 + uVar4;
      local_c = local_c + ((int)uVar4 >> 0x1f) + (uint)bVar7;
      lVar8 = __allrem((uint)(lVar8 << 8) | uVar4,
                       (uint)((ulonglong)lVar8 >> 0x18) | (int)uVar4 >> 0x1f,0xfffffffd,0xffffff);
      uVar5 = (uint)lVar8;
      local_8 = local_8 ^ uVar4;
      uVar6 = uVar6 + 1;
      lVar2 = lVar8;
    } while (uVar6 < (uint)((int)pcVar3 - (int)(param_1 + 1)));
  }
  return CONCAT44((local_8 << 0x10 | (uint)((ulonglong)lVar2 >> 0x20)) + local_c +
                  (uint)CARRY4(uVar5,local_10),uVar5 + local_10);
}


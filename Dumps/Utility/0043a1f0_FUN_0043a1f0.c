// Address: 0x0043a1f0
// Name: FUN_0043a1f0
// Category: Utility


void __cdecl FUN_0043a1f0(int *param_1)

{
  byte bVar1;
  char cVar2;
  void *this;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  void *pvStack_24;
  int *local_20;
  void *pvStack_1c;
  undefined4 *local_18;
  byte abStack_14 [16];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&pvStack_24;
  puVar7 = (undefined4 *)param_1[6];
  iVar4 = puVar7[1];
  pbVar3 = (byte *)*puVar7;
  local_20 = param_1;
  local_18 = puVar7;
  if (iVar4 == 0) {
    cVar2 = (*(code *)puVar7[3])(param_1);
    if (cVar2 == '\0') {
      __security_check_cookie(local_4 ^ (uint)&pvStack_24);
      return;
    }
    pbVar3 = (byte *)*puVar7;
    iVar4 = puVar7[1];
  }
  bVar1 = *pbVar3;
  iVar4 = iVar4 + -1;
  pbVar3 = pbVar3 + 1;
  if (iVar4 == 0) {
    cVar2 = (*(code *)puVar7[3])(local_20);
    if (cVar2 == '\0') {
LAB_0043a318:
      __security_check_cookie(local_4 ^ (uint)&pvStack_24);
      return;
    }
    pbVar3 = (byte *)*puVar7;
    iVar4 = puVar7[1];
  }
  uVar5 = ((uint)bVar1 * 0x100 + (uint)*pbVar3) - 2;
  iVar4 = iVar4 + -1;
  pbVar3 = pbVar3 + 1;
  if ((int)uVar5 < 0xe) {
    pvStack_1c = (void *)(((int)uVar5 < 1) - 1 & uVar5);
  }
  else {
    pvStack_1c = (void *)0xe;
  }
  pvStack_24 = (void *)0x0;
  this = pvStack_1c;
  if (pvStack_1c != (void *)0x0) {
    do {
      if (iVar4 == 0) {
        cVar2 = (*(code *)puVar7[3])(local_20);
        if (cVar2 == '\0') goto LAB_0043a318;
        pbVar3 = (byte *)*puVar7;
        iVar4 = puVar7[1];
        this = pvStack_1c;
      }
      abStack_14[(int)pvStack_24] = *pbVar3;
      pvStack_24 = (void *)((int)pvStack_24 + 1);
      iVar4 = iVar4 + -1;
      pbVar3 = pbVar3 + 1;
    } while (pvStack_24 < this);
  }
  pvVar6 = (void *)(uVar5 - (int)this);
  pvStack_24 = pvVar6;
  if (local_20[0x5f] == 0xe0) {
    FUN_00439ee0((int)pvVar6);
    pvVar6 = pvStack_24;
    puVar7 = local_18;
  }
  else if (local_20[0x5f] == 0xee) {
    FUN_0043a140(this,(int)pvVar6);
    pvVar6 = pvStack_24;
  }
  else {
    *(undefined4 *)(*local_20 + 0x14) = 0x44;
    *(int *)(*local_20 + 0x18) = local_20[0x5f];
    (**(code **)*local_20)(local_20);
  }
  *puVar7 = pbVar3;
  puVar7[1] = iVar4;
  if (0 < (int)pvVar6) {
    (**(code **)(local_20[6] + 0x10))(local_20,pvVar6);
  }
  __security_check_cookie(local_4 ^ (uint)&pvStack_24);
  return;
}


// Address: 0x004485d0
// Name: FUN_004485d0
// Category: Utility


void __cdecl FUN_004485d0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_40 [16];
  
  if (param_2 != 0) {
    FUN_004458d0((int)param_1,param_2);
  }
  if (param_3 != 0) {
    FUN_004458d0((int)param_1,param_3);
  }
  FUN_0044d9b0((int)param_1,(void *)param_1[0x2b]);
  FUN_0044d9b0((int)param_1,(void *)param_1[0x94]);
  FUN_0044d9b0((int)param_1,(void *)param_1[0x3a]);
  FUN_0044d9b0((int)param_1,(void *)param_1[0x7b]);
  FUN_0044d9b0((int)param_1,(void *)param_1[0x7c]);
  FUN_0044d9b0((int)param_1,(void *)param_1[0x59]);
  FUN_0044d9b0((int)param_1,(void *)param_1[0x5a]);
  FUN_0044d9b0((int)param_1,(void *)param_1[0x5b]);
  if ((param_1[0x85] & 0x1000) != 0) {
    thunk_FUN_0044d9b0((int)param_1,(void *)param_1[0x45]);
  }
  param_1[0x85] = param_1[0x85] & 0xffffefff;
  if ((param_1[0x85] & 0x2000) != 0) {
    FUN_0044d9b0((int)param_1,(void *)param_1[0x62]);
  }
  param_1[0x85] = param_1[0x85] & 0xffffdfff;
  if ((param_1[0x85] & 8) != 0) {
    FUN_0044d9b0((int)param_1,(void *)param_1[0x7d]);
  }
  param_1[0x85] = param_1[0x85] & 0xfffffff7;
  if (param_1[0x5c] != 0) {
    iVar5 = 1 << (8U - (char)param_1[0x56] & 0x1f);
    iVar7 = 0;
    if (0 < iVar5) {
      do {
        FUN_0044d9b0((int)param_1,*(void **)(param_1[0x5c] + iVar7 * 4));
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar5);
    }
    FUN_0044d9b0((int)param_1,(void *)param_1[0x5c]);
  }
  if (param_1[0x5d] != 0) {
    iVar5 = 1 << (8U - (char)param_1[0x56] & 0x1f);
    iVar7 = 0;
    if (0 < iVar5) {
      do {
        FUN_0044d9b0((int)param_1,*(void **)(param_1[0x5d] + iVar7 * 4));
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar5);
    }
    FUN_0044d9b0((int)param_1,(void *)param_1[0x5d]);
  }
  if (param_1[0x5e] != 0) {
    iVar5 = 1 << (8U - (char)param_1[0x56] & 0x1f);
    iVar7 = 0;
    if (0 < iVar5) {
      do {
        FUN_0044d9b0((int)param_1,*(void **)(param_1[0x5e] + iVar7 * 4));
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar5);
    }
    FUN_0044d9b0((int)param_1,(void *)param_1[0x5e]);
  }
  FUN_0044d9b0((int)param_1,(void *)param_1[0x84]);
  FUN_004280b0((int)(param_1 + 0x1d));
  FUN_0044d9b0((int)param_1,(void *)param_1[0x6c]);
  FUN_0044d9b0((int)param_1,(void *)param_1[0x79]);
  uVar1 = param_1[0x93];
  uVar2 = param_1[0x12];
  puVar6 = param_1;
  puVar8 = local_40;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar3 = param_1[0x10];
  uVar4 = param_1[0x11];
  _memset(param_1,0,0x280);
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar4;
  param_1[0x93] = uVar1;
  puVar6 = local_40;
  puVar8 = param_1;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  param_1[0x12] = uVar2;
  return;
}


// Address: 0x00450d60
// Name: FUN_00450d60
// Category: Utility


void __cdecl FUN_00450d60(int *param_1,int param_2,size_t param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var;
  uint *puVar5;
  undefined3 extraout_var_00;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint local_14;
  int local_10;
  byte local_c [8];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_14;
  local_10 = param_2;
  local_14 = 0;
  if ((param_1[0x1a] & 4U) == 0) goto LAB_00450e41;
  local_c[0] = 0x49;
  local_c[1] = 0x44;
  local_c[2] = 0x41;
  local_c[3] = 0x54;
  local_c[4] = 0;
  uVar3 = 4;
  pbVar6 = local_c;
  pbVar7 = (byte *)(param_1 + 0x47);
  do {
    if (*(int *)pbVar7 != *(int *)pbVar6) goto LAB_00450dd8;
    uVar3 = uVar3 - 4;
    pbVar6 = pbVar6 + 4;
    pbVar7 = pbVar7 + 4;
  } while (3 < uVar3);
  if (uVar3 == 0) {
LAB_00450e35:
    iVar4 = 0;
  }
  else {
LAB_00450dd8:
    iVar8 = (uint)*pbVar7 - (uint)*pbVar6;
    if (iVar8 == 0) {
      if (uVar3 == 1) goto LAB_00450e35;
      iVar8 = (uint)pbVar7[1] - (uint)pbVar6[1];
      if (iVar8 == 0) {
        if (uVar3 == 2) goto LAB_00450e35;
        iVar8 = (uint)pbVar7[2] - (uint)pbVar6[2];
        if (iVar8 == 0) {
          if ((uVar3 == 3) || (iVar8 = (uint)pbVar7[3] - (uint)pbVar6[3], iVar8 == 0))
          goto LAB_00450e35;
        }
      }
    }
    iVar4 = 1;
    if (iVar8 < 1) {
      iVar4 = -1;
    }
  }
  if (iVar4 != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
LAB_00450e41:
  pbVar7 = (byte *)(param_1 + 0x47);
  FUN_0044de90(param_1,pbVar7);
  if ((((*pbVar7 & 0x20) == 0) &&
      (bVar2 = FUN_00445950((int)param_1,pbVar7), CONCAT31(extraout_var,bVar2) != 3)) &&
     (param_1[0x87] == 0)) {
    FUN_00445230(param_1,"unknown critical chunk");
  }
  if (((param_1[0x1b] & 0x8000U) != 0) || (param_1[0x87] != 0)) {
    piVar1 = param_1 + 0x9b;
    *piVar1 = *(int *)pbVar7;
    *(char *)(param_1 + 0x9c) = (char)param_1[0x48];
    *(undefined1 *)(param_1 + 0x9c) = 0;
    puVar5 = FUN_0044d960(param_1,param_3);
    param_1[0x9d] = (int)puVar5;
    param_1[0x9e] = param_3;
    FUN_0044da60(param_1,puVar5,param_3);
    if ((code *)param_1[0x87] != (code *)0x0) {
      iVar8 = (*(code *)param_1[0x87])(param_1,piVar1);
      if (iVar8 < 0) {
        FUN_00445230(param_1,"error in user chunk");
      }
      if (iVar8 == 0) {
        if (((*pbVar7 & 0x20) == 0) &&
           (bVar2 = FUN_00445950((int)param_1,pbVar7), CONCAT31(extraout_var_00,bVar2) != 3)) {
          FUN_00445230(param_1,"unknown critical chunk");
        }
        FUN_004525e0(param_1,local_10,(int)piVar1,1);
      }
    }
    FUN_0044d9b0((int)param_1,(void *)param_1[0x9d]);
    param_1[0x9d] = 0;
    param_3 = local_14;
  }
  FUN_0044eb90(param_1,param_3);
  __security_check_cookie(local_4 ^ (uint)&local_14);
  return;
}


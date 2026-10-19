// Address: 0x004912da
// Name: __handle_exc
// Category: MFC_CRT


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_exc
   
   Library: Visual Studio 2005 Release */

bool __cdecl __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  ulonglong uVar4;
  double dVar5;
  uint uVar6;
  bool bVar7;
  float10 fVar8;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  uVar6 = param_1 & 0x1f;
  bVar3 = true;
  local_8 = uVar6;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_0049183e();
    uVar6 = param_1 & 0x17;
    goto LAB_00491499;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_0049183e();
    uVar6 = param_1 & 0x1b;
    goto LAB_00491499;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar7 = (param_1 & 0x10) != 0;
      if (*param_2 != 0.0) {
        fVar8 = (float10)FUN_00491751(SUB84(*param_2,0),(uint)((ulonglong)*param_2 >> 0x20),&local_c
                                     );
        dVar2 = (double)fVar8;
        local_c = local_c + -0x600;
        if (local_c < -0x432) {
          local_14 = dVar2 * _DAT_004b4730;
          bVar7 = bVar3;
        }
        else {
          local_14 = (double)((ulonglong)dVar2 & 0xfffffffffffff | 0x10000000000000);
          if (local_c < -0x3fd) {
            local_c = -0x3fd - local_c;
            do {
              if ((((ulonglong)local_14 & 1) != 0) && (!bVar7)) {
                bVar7 = bVar3;
              }
              uVar6 = (uint)local_14 >> 1;
              uVar4 = (ulonglong)local_14 & 0x100000000;
              local_14._0_4_ = uVar6;
              if (uVar4 != 0) {
                local_14._0_4_ = uVar6 | 0x80000000;
              }
              local_14 = (double)CONCAT44(local_14._4_4_ >> 1,(uint)local_14);
              local_c = local_c + -1;
            } while (local_c != 0);
          }
          if (dVar2 < 0.0) {
            local_14 = -local_14;
          }
        }
        *param_2 = local_14;
        bVar3 = bVar7;
      }
      if (bVar3) {
        FUN_0049183e();
      }
      uVar6 = local_8 & 0xfffffffd;
      local_8 = uVar6;
    }
    goto LAB_00491499;
  }
  FUN_0049183e();
  uVar6 = param_3 & 0xc00;
  dVar2 = _DAT_004c4a60;
  dVar5 = _DAT_004c4a60;
  if (uVar6 == 0) {
    dVar1 = *param_2;
joined_r0x0049137c:
    if (dVar1 <= 0.0) {
      dVar2 = -dVar5;
    }
    *param_2 = dVar2;
  }
  else {
    if (uVar6 == 0x400) {
      dVar1 = *param_2;
      dVar2 = _DAT_004c4a70;
      goto joined_r0x0049137c;
    }
    dVar5 = _DAT_004c4a70;
    if (uVar6 == 0x800) {
      dVar1 = *param_2;
      goto joined_r0x0049137c;
    }
    if (uVar6 == 0xc00) {
      dVar1 = *param_2;
      dVar2 = _DAT_004c4a70;
      goto joined_r0x0049137c;
    }
  }
  uVar6 = param_1 & 0x1e;
LAB_00491499:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_0049183e();
    uVar6 = uVar6 & 0xffffffef;
  }
  return uVar6 == 0;
}


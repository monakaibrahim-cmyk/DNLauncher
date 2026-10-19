// Address: 0x0047d57b
// Name: __make__time64_t
// Category: MFC_CRT


/* Library Function - Single Match
    __make__time64_t
   
   Library: Visual Studio 2005 Release */

undefined8 __cdecl __make__time64_t(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  DWORD *pDVar3;
  uint uVar4;
  errno_t eVar5;
  int iVar6;
  uint uVar7;
  tm *ptVar8;
  bool bVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  tm local_4c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  undefined8 local_18;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  if (in_EAX == (int *)0x0) {
    pDVar3 = FUN_0047b849();
    *pDVar3 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    local_18._4_4_ = 0xffffffff;
    local_18._0_4_ = 0xffffffff;
    goto LAB_0047d82a;
  }
  uVar7 = in_EAX[5];
  local_18 = (longlong)(int)uVar7;
  if ((((int)uVar7 >> 0x1f) + -1 + (uint)(0x44 < uVar7) == 0) && (uVar7 - 0x45 < 0x409)) {
    iVar6 = in_EAX[4];
    if ((iVar6 < 0) || (0xb < iVar6)) {
      uVar4 = iVar6 / 0xc;
      iVar6 = iVar6 % 0xc;
      iVar1 = uVar7 + uVar4;
      in_EAX[4] = iVar6;
      iVar2 = ((int)uVar7 >> 0x1f) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar7,uVar4);
      local_18 = CONCAT44(iVar2,iVar1);
      if (iVar6 < 0) {
        in_EAX[4] = iVar6 + 0xc;
        local_18 = CONCAT44(iVar2 + -1 + (uint)(iVar1 != 0),iVar1 + -1);
      }
      if ((local_18._4_4_ + -1 + (uint)(0x44 < (uint)local_18) != 0) ||
         (0x408 < (uint)local_18 - 0x45)) goto LAB_0047d819;
    }
    iVar6 = in_EAX[4];
    local_20 = *(uint *)(&DAT_004c4838 + iVar6 * 4);
    local_1c = (int)local_20 >> 0x1f;
    lVar10 = __allrem((uint)local_18,(uint)((ulonglong)local_18 >> 0x20),4,0);
    if (lVar10 == 0) {
      lVar10 = __allrem((uint)local_18,(uint)((ulonglong)local_18 >> 0x20),100,0);
      if (lVar10 == 0) goto LAB_0047d66b;
LAB_0047d687:
      if (1 < iVar6) {
        bVar9 = 0xfffffffe < local_20;
        local_20 = local_20 + 1;
        local_1c = local_1c + (uint)bVar9;
      }
    }
    else {
LAB_0047d66b:
      lVar10 = __allrem((uint)local_18 + 0x76c,local_18._4_4_ + (uint)(0xfffff893 < (uint)local_18),
                        400,0);
      if (lVar10 == 0) goto LAB_0047d687;
    }
    uVar4 = (uint)local_18 - 1;
    local_24 = local_18._4_4_ - (uint)((uint)local_18 == 0);
    local_28 = uVar4;
    lVar10 = __alldiv((uint)local_18 + 299,local_18._4_4_ + (uint)(0xfffffed4 < (uint)local_18),400,
                      0);
    uVar7 = (uint)(lVar10 + in_EAX[3]);
    local_10 = (int)((ulonglong)(lVar10 + in_EAX[3]) >> 0x20);
    uVar11 = __alldiv(uVar4,local_24,100,0);
    local_10 = (local_10 - (int)((ulonglong)uVar11 >> 0x20)) - (uint)(uVar7 < (uint)uVar11);
    lVar10 = __alldiv(uVar4,local_24,4,0);
    lVar10 = lVar10 + CONCAT44(local_10,uVar7 - (uint)uVar11);
    local_10 = (int)((ulonglong)lVar10 >> 0x20);
    lVar12 = __allmul((uint)local_18,(int)((ulonglong)local_18 >> 0x20),0x16d,0);
    lVar10 = lVar12 + CONCAT44(local_10,(int)lVar10) + CONCAT44(local_1c,local_20);
    uVar7 = (uint)lVar10;
    lVar10 = __allmul(uVar7 - 0x63df,(int)((ulonglong)lVar10 >> 0x20) - (uint)(uVar7 < 0x63df),0x18,
                      0);
    lVar10 = __allmul((uint)(lVar10 + in_EAX[2]),(int)((ulonglong)(lVar10 + in_EAX[2]) >> 0x20),0x3c
                      ,0);
    local_18 = __allmul((uint)(lVar10 + in_EAX[1]),(int)((ulonglong)(lVar10 + in_EAX[1]) >> 0x20),
                        0x3c,0);
    local_18 = local_18 + *in_EAX;
    if (param_1 == 0) {
      iVar6 = __gmtime64_s(&local_4c,&local_18);
LAB_0047d803:
      if (iVar6 != 0) goto LAB_0047d819;
    }
    else {
      ___tzset();
      eVar5 = __get_dstbias((long *)&local_c);
      if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar5 = __get_timezone((long *)&local_8);
      if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      local_18 = CONCAT44(local_18._4_4_ + ((int)local_8 >> 0x1f) +
                          (uint)CARRY4((uint)local_18,local_8),(uint)local_18 + local_8);
      eVar5 = FUN_00476e2d(&local_4c,(uint *)&local_18);
      if (eVar5 != 0) goto LAB_0047d819;
      if ((0 < in_EAX[8]) || ((in_EAX[8] < 0 && (0 < local_4c.tm_isdst)))) {
        local_18 = CONCAT44(local_18._4_4_ + ((int)local_c >> 0x1f) +
                            (uint)CARRY4((uint)local_18,local_c),(uint)local_18 + local_c);
        iVar6 = FUN_00476e2d(&local_4c,(uint *)&local_18);
        goto LAB_0047d803;
      }
    }
    ptVar8 = &local_4c;
    for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
      *in_EAX = ptVar8->tm_sec;
      ptVar8 = (tm *)&ptVar8->tm_min;
      in_EAX = in_EAX + 1;
    }
  }
  else {
LAB_0047d819:
    pDVar3 = FUN_0047b849();
    local_18._4_4_ = 0xffffffff;
    *pDVar3 = 0x16;
    local_18._0_4_ = 0xffffffff;
  }
LAB_0047d82a:
  return CONCAT44(local_18._4_4_,(uint)local_18);
}


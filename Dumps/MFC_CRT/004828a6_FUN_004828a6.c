// Address: 0x004828a6
// Name: FUN_004828a6
// Category: MFC_CRT


bool FUN_004828a6(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *unaff_EDI;
  uint uVar6;
  uint uVar7;
  int local_c;
  int local_8;
  
  local_8 = 0;
  iVar2 = FUN_00482d48(&local_8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_8 == 0) {
    return false;
  }
  uVar6 = unaff_EDI[5];
  if ((uVar6 != DAT_004c4520) || (uVar6 != DAT_004c452c)) {
    if (DAT_004cb954 == 0) {
      iVar2 = 2;
      local_c = 1;
      if ((int)uVar6 < 0x6b) {
        iVar2 = 1;
        local_c = 5;
      }
      cvtdate(1,1,uVar6,iVar2,0,0,0,0,0);
      cvtdate(0,1,unaff_EDI[5],local_c,0,0,0,0,0);
    }
    else {
      if (DAT_004cb940 != 0) {
        uVar7 = (uint)DAT_004cb946;
        uVar3 = 0;
        uVar4 = 0;
      }
      else {
        uVar3 = (uint)DAT_004cb944;
        uVar7 = 0;
        uVar4 = (uint)DAT_004cb946;
      }
      cvtdate(1,(uint)(DAT_004cb940 == 0),uVar6,uVar4,uVar3,uVar7,(uint)DAT_004cb94a,
              (uint)DAT_004cb94c,(uint)DAT_004cb94e);
      if (DAT_004cb8ec != 0) {
        uVar7 = (uint)DAT_004cb8f2;
        uVar3 = 0;
        uVar4 = 0;
        uVar6 = unaff_EDI[5];
      }
      else {
        uVar3 = (uint)DAT_004cb8f0;
        uVar7 = 0;
        uVar4 = (uint)DAT_004cb8f2;
        uVar6 = unaff_EDI[5];
      }
      cvtdate(0,(uint)(DAT_004cb8ec == 0),uVar6,uVar4,uVar3,uVar7,(uint)DAT_004cb8f6,
              (uint)DAT_004cb8f8,(uint)DAT_004cb8fa);
    }
  }
  iVar2 = unaff_EDI[7];
  if (DAT_004c4524 < DAT_004c4530) {
    if ((iVar2 < DAT_004c4524) || (DAT_004c4530 < iVar2)) {
      return false;
    }
    if ((DAT_004c4524 < iVar2) && (iVar2 < DAT_004c4530)) {
      return true;
    }
  }
  else {
    if (iVar2 < DAT_004c4530) {
      return true;
    }
    if (DAT_004c4524 < iVar2) {
      return true;
    }
    if ((DAT_004c4530 < iVar2) && (iVar2 < DAT_004c4524)) {
      return false;
    }
  }
  iVar5 = ((unaff_EDI[2] * 0x3c + unaff_EDI[1]) * 0x3c + *unaff_EDI) * 1000;
  if (iVar2 == DAT_004c4524) {
    bVar1 = DAT_004c4528 <= iVar5;
  }
  else {
    bVar1 = iVar5 < DAT_004c4534;
  }
  return bVar1;
}


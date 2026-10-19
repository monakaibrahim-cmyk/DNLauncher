// Address: 0x00430a30
// Name: FUN_00430a30
// Category: Utility


byte * __thiscall FUN_00430a30(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pbVar3 = FUN_0042ef30(param_3);
  if ((pbVar3 == (byte *)0x0) || (*pbVar3 == 0)) {
    return (byte *)0x0;
  }
  if (param_2 != (undefined4 *)0x0) {
    FUN_0042ed20(pbVar3,param_3);
    *(undefined4 *)((int)this + 4) = *param_2;
    *(undefined4 *)((int)this + 8) = param_2[1];
  }
  pcVar4 = FUN_0042f1d0();
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    iVar2 = *(int *)((int)this + 0x10);
  }
  else {
    pbVar3 = FUN_0042ef30(param_3);
    if (((pbVar3 == (byte *)0x0) || (*pbVar3 == 0)) || (*pbVar3 != 0x3d)) {
      iVar2 = *(int *)((int)this + 0x10);
    }
    else {
      pbVar3 = FUN_0042ef30(param_3);
      if ((pbVar3 != (byte *)0x0) && (bVar1 = *pbVar3, bVar1 != 0)) {
        if (bVar1 == 0x27) {
          pcVar4 = "\'";
LAB_00430aef:
          pbVar3 = FUN_0042f570((void *)((int)this + 0x30),0,pcVar4,param_3);
          return pbVar3;
        }
        if (bVar1 == 0x22) {
          pcVar4 = "\"";
          goto LAB_00430aef;
        }
        FUN_004085a0((void *)((int)this + 0x30),(char *)&PTR_004b2d68);
        while( true ) {
          if (*pbVar3 == 0) {
            return pbVar3;
          }
          uVar5 = FUN_0042eb50();
          if ((char)uVar5 != '\0') {
            return pbVar3;
          }
          bVar1 = *pbVar3;
          if (bVar1 == 10) {
            return pbVar3;
          }
          if (bVar1 == 0xd) {
            return pbVar3;
          }
          if (bVar1 == 0x2f) {
            return pbVar3;
          }
          if (bVar1 == 0x3e) {
            return pbVar3;
          }
          if ((bVar1 == 0x27) || (bVar1 == 0x22)) break;
          FUN_00424db0();
          pbVar3 = pbVar3 + 1;
          if (pbVar3 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
      }
      iVar2 = *(int *)((int)this + 0x10);
    }
  }
  if (iVar2 != 0) {
    FUN_0042fa80(param_2,pbVar3,param_3);
  }
  return (byte *)0x0;
}


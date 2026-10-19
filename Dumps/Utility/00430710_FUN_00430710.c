// Address: 0x00430710
// Name: FUN_00430710
// Category: Utility


byte * __thiscall FUN_00430710(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = FUN_0042d8f0();
  pbVar3 = FUN_0042ef30(param_3);
  if (param_2 != (undefined4 *)0x0) {
    FUN_0042ed20(pbVar3,param_3);
    *(undefined4 *)((int)this + 4) = *param_2;
    *(undefined4 *)((int)this + 8) = param_2[1];
  }
  if (((pbVar3 == (byte *)0x0) || (*pbVar3 == 0)) || (*pbVar3 != 0x3c)) {
    if (iVar2 != 0) {
      FUN_0042fa80(param_2,pbVar3,param_3);
    }
    return (byte *)0x0;
  }
  FUN_00402d00((void *)((int)this + 0x20),&PTR_004b2d68,0);
  while (pbVar1 = pbVar3 + 1, pbVar1 != (byte *)0x0) {
    if (*pbVar1 == 0) goto LAB_004307a6;
    if (*pbVar1 == 0x3e) goto LAB_004307ab;
    FUN_00424db0();
    pbVar3 = pbVar1;
  }
  if (iVar2 != 0) {
    FUN_0042fa80((void *)0x0,(byte *)0x0,param_3);
  }
LAB_004307a6:
  if (*pbVar1 != 0x3e) {
    return pbVar1;
  }
LAB_004307ab:
  return pbVar3 + 2;
}


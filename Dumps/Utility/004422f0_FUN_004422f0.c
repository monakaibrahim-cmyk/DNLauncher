// Address: 0x004422f0
// Name: FUN_004422f0
// Category: Utility


void __thiscall FUN_004422f0(void *this,int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  short *psVar3;
  byte *pbVar4;
  void *this_00;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_18c;
  int local_188;
  byte local_184 [128];
  undefined1 local_104 [256];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_18c;
  local_188 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
  iVar5 = (param_3 >> 2) * 0x20 + 4;
  iVar6 = (param_2 >> 2) * 0x20 + 4;
  this_00 = (void *)(((int)this >> 3) * 0x20 + 2);
  local_18c = param_1;
  iVar2 = FUN_00441fa0(this_00,iVar6,iVar5,(int)local_104);
  FUN_00442170(local_18c,iVar6,(int)this_00,iVar5,iVar2,(int)local_104,local_184);
  local_18c = (((int)this >> 3) * 0x100 + (param_3 >> 2) * 4) * 2;
  pbVar4 = local_184;
  piVar7 = (int *)(local_188 + (param_2 >> 2) * 0x10);
  iVar2 = 4;
  do {
    iVar6 = 8;
    iVar5 = local_18c;
    do {
      psVar3 = (short *)(*piVar7 + iVar5);
      *psVar3 = *pbVar4 + 1;
      psVar3[1] = pbVar4[1] + 1;
      psVar3[2] = pbVar4[2] + 1;
      pbVar1 = pbVar4 + 3;
      pbVar4 = pbVar4 + 4;
      iVar5 = iVar5 + 0x40;
      iVar6 = iVar6 + -1;
      psVar3[3] = *pbVar1 + 1;
    } while (iVar6 != 0);
    piVar7 = piVar7 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  __security_check_cookie(local_4 ^ (uint)&local_18c);
  return;
}


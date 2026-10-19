// Address: 0x00430920
// Name: FUN_00430920
// Category: Utility


byte * __thiscall FUN_00430920(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  char *pcVar4;
  byte *pbVar5;
  
  FUN_0042d8f0();
  FUN_00402d00((void *)((int)this + 0x20),&PTR_004b2d68,0);
  pbVar2 = FUN_0042ef30(param_3);
  if (param_2 != (undefined4 *)0x0) {
    FUN_0042ed20(pbVar2,param_3);
    *(undefined4 *)((int)this + 4) = *param_2;
    *(undefined4 *)((int)this + 8) = param_2[1];
  }
  uVar3 = FUN_0042f4d0(pbVar2,'\0',param_3);
  if ((char)uVar3 == '\0') {
    FUN_0042fa80(param_2,pbVar2,param_3);
    return (byte *)0x0;
  }
  pcVar1 = "<!--";
  do {
    pcVar4 = pcVar1;
    pcVar1 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  pbVar2 = pbVar2 + (int)(pcVar4 + -0x4b4260);
  FUN_00402d00((void *)((int)this + 0x20),&PTR_004b2d68,0);
  pbVar5 = (byte *)0x0;
  if (pbVar2 != (byte *)0x0) {
    while (*pbVar2 != 0) {
      uVar3 = FUN_0042f4d0(pbVar2,'\0',param_3);
      if ((char)uVar3 != '\0') break;
      FUN_004262b0((undefined4 *)pbVar2,1);
      pbVar2 = pbVar2 + 1;
      if (pbVar2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
    pcVar1 = "-->";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    pbVar5 = pbVar2 + (int)(pcVar4 + -0x4b4268);
  }
  return pbVar5;
}


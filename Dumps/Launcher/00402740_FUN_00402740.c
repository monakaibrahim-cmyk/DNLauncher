// Address: 0x00402740
// Name: FUN_00402740
// Category: Launcher


int __fastcall FUN_00402740(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = (int)param_2 - (int)unaff_EBX;
  if (unaff_EBX != param_2) {
    iVar3 = param_3 - (int)param_2;
    do {
      param_2 = param_2 + -8;
      puVar4 = param_2;
      puVar5 = (undefined4 *)((int)param_2 + iVar3);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    } while (param_2 != unaff_EBX);
  }
  return param_3 + (iVar1 >> 5) * -0x20;
}


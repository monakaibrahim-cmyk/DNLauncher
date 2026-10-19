// Address: 0x00442f10
// Name: FUN_00442f10
// Category: Utility


int * __fastcall FUN_00442f10(int param_1)

{
  byte *pbVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  
  piVar2 = (int *)(*(code *)**(undefined4 **)(in_EAX + 4))();
  puVar6 = &DAT_0049e4a8;
  piVar4 = piVar2;
  do {
    iVar3 = 0;
    piVar5 = piVar4;
    do {
      pbVar1 = puVar6 + iVar3;
      iVar3 = iVar3 + 1;
      piVar4 = piVar5 + 1;
      *piVar5 = (int)((uint)*pbVar1 * -0x1fe + 0xfe01) / (param_1 * 0x200 + -0x200);
      piVar5 = piVar4;
    } while (iVar3 < 0x10);
    puVar6 = puVar6 + 0x10;
  } while ((int)puVar6 < 0x49e5a8);
  return piVar2;
}


// Address: 0x00440b50
// Name: FUN_00440b50
// Category: Utility


void FUN_00440b50(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(in_EAX + 0x1a4);
  uVar2 = (*(code *)**(undefined4 **)(in_EAX + 4))();
  *(undefined4 *)(iVar1 + 8) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(in_EAX + 4))();
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(in_EAX + 4))();
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(in_EAX + 4))();
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  iVar3 = 0;
  uStack_4 = 0x5b6900;
  iVar6 = -0xe25100;
  iVar5 = -0xb2f480;
  iVar4 = 0x2c8d00;
  do {
    *(int *)(iVar3 + *(int *)(iVar1 + 8)) = iVar5 >> 0x10;
    *(int *)(iVar3 + *(int *)(iVar1 + 0xc)) = iVar6 >> 0x10;
    *(int *)(iVar3 + *(int *)(iVar1 + 0x10)) = uStack_4;
    *(int *)(iVar3 + *(int *)(iVar1 + 0x14)) = iVar4;
    uStack_4 = uStack_4 + -0xb6d2;
    iVar4 = iVar4 + -0x581a;
    iVar5 = iVar5 + 0x166e9;
    iVar6 = iVar6 + 0x1c5a2;
    iVar3 = iVar3 + 4;
  } while (-0x2b34e7 < iVar4);
  return;
}


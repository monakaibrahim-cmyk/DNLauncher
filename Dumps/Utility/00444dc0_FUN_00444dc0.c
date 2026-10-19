// Address: 0x00444dc0
// Name: FUN_00444dc0
// Category: Utility


void __fastcall FUN_00444dc0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar2 = 0;
  iVar6 = 0;
  do {
    bVar1 = *(byte *)(param_1 + 0x11c + iVar6);
    uVar5 = (uint)bVar1;
    iVar6 = iVar6 + 1;
    if ((uVar5 - 0x41 < 0x3a) && ((uVar5 < 0x5b || (0x60 < uVar5)))) {
      *(byte *)(iVar2 + in_EAX) = bVar1;
      iVar3 = iVar2;
    }
    else {
      *(undefined1 *)(iVar2 + in_EAX) = 0x5b;
      *(char *)(iVar2 + 1 + in_EAX) = "?0123456789ABCDEFlibpng error: %s\n"[((int)uVar5 >> 4) + 1];
      *(char *)(iVar2 + 2 + in_EAX) = "?0123456789ABCDEFlibpng error: %s\n"[(uVar5 & 0xf) + 1];
      iVar3 = iVar2 + 3;
      *(undefined1 *)(iVar3 + in_EAX) = 0x5d;
    }
    iVar2 = iVar3 + 1;
  } while (iVar6 < 4);
  if (param_2 == (undefined4 *)0x0) {
    *(undefined1 *)(iVar2 + in_EAX) = 0;
    return;
  }
  *(undefined1 *)(iVar2 + in_EAX) = 0x3a;
  *(undefined1 *)(iVar3 + 2 + in_EAX) = 0x20;
  puVar4 = (undefined4 *)(iVar3 + 3 + in_EAX);
  puVar7 = puVar4;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)((int)puVar4 + 0x3f) = 0;
  return;
}


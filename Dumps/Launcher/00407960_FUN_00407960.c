// Address: 0x00407960
// Name: FUN_00407960
// Category: Launcher


undefined4 __fastcall FUN_00407960(int param_1,FILE *param_2)

{
  char *in_EAX;
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if (in_EAX != (char *)0x0) {
    iVar2 = 6;
    bVar5 = true;
    pcVar3 = "Width";
    pcVar4 = in_EAX;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      FUN_004776e5(param_2,0x4b065c);
      return 1;
    }
    iVar2 = 7;
    bVar5 = true;
    pcVar3 = "Height";
    pcVar4 = in_EAX;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      FUN_004776e5(param_2,0x4b065c);
      return 1;
    }
    iVar2 = 0xf;
    bVar5 = true;
    pcVar3 = "GraphicQuality";
    pcVar4 = in_EAX;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      FUN_004776e5(param_2,0x4b065c);
      return 1;
    }
    iVar2 = 0xf;
    bVar5 = true;
    pcVar3 = "TextureQuality";
    pcVar4 = in_EAX;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      FUN_004776e5(param_2,0x4b065c);
      return 1;
    }
    iVar2 = 0xb;
    bVar5 = true;
    pcVar3 = "WindowMode";
    pcVar4 = in_EAX;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      FUN_004776e5(param_2,0x4b065c);
      return 1;
    }
    iVar2 = 6;
    bVar5 = true;
    pcVar3 = "VSync";
    pcVar4 = in_EAX;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      FUN_004776e5(param_2,0x4b065c);
      *(undefined4 *)(param_1 + 0x18) = 0;
      return 1;
    }
    iVar2 = 0xb;
    bVar5 = true;
    pcVar3 = "LanguageID";
    pcVar4 = in_EAX;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      FUN_004776e5(param_2,0x4b065c);
      FUN_0040a2b0();
      FUN_0040a580(*(int *)(param_1 + 0x20));
      puVar1 = FUN_0040a2b0();
      FUN_0040a6e0((int)puVar1);
      return 1;
    }
    iVar2 = 8;
    bVar5 = true;
    pcVar3 = "UseDX11";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *in_EAX;
      pcVar3 = pcVar3 + 1;
      in_EAX = in_EAX + 1;
    } while (bVar5);
    if (bVar5) {
      FUN_004776e5(param_2,0x4b065c);
      return 1;
    }
    if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 8) == 0)) {
      FUN_00407b20();
    }
  }
  return 0;
}


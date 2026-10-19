// Address: 0x004348a0
// Name: FUN_004348a0
// Category: Utility


void __fastcall FUN_004348a0(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = FUN_00434820();
  *(undefined4 *)(iVar2 + 0x16b4) = 8;
  *(byte *)(*(int *)(iVar2 + 0x14) + *(int *)(iVar2 + 8)) = (byte)param_1;
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
  bVar3 = (byte)((uint)param_1 >> 8);
  *(byte *)(*(int *)(iVar2 + 0x14) + *(int *)(iVar2 + 8)) = bVar3;
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
  *(byte *)(*(int *)(iVar2 + 0x14) + *(int *)(iVar2 + 8)) = ~(byte)param_1;
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
  *(byte *)(*(int *)(iVar2 + 0x14) + *(int *)(iVar2 + 8)) = ~bVar3;
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
  iVar1 = *(int *)(iVar2 + 0x14);
  for (; param_1 != 0; param_1 = param_1 + -1) {
    *(undefined1 *)(iVar1 + *(int *)(iVar2 + 8)) = *param_2;
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
    iVar1 = *(int *)(iVar2 + 0x14);
    param_2 = param_2 + 1;
  }
  return;
}


// Address: 0x004416e0
// Name: FUN_004416e0
// Category: Utility


void __cdecl FUN_004416e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x30);
  *(undefined4 **)(param_1 + 0x1a0) = puVar1;
  *puVar1 = &LAB_00441240;
  *(undefined1 *)(puVar1 + 2) = 0;
  iVar3 = *(int *)(param_1 + 100) * *(int *)(param_1 + 0x5c);
  puVar1[10] = iVar3;
  if (*(int *)(param_1 + 0x114) == 2) {
    puVar1[1] = &LAB_00441260;
    puVar1[3] = &LAB_004414c0;
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,iVar3);
    puVar1[8] = uVar2;
    FUN_00441170();
    return;
  }
  puVar1[8] = 0;
  puVar1[1] = &LAB_00441330;
  puVar1[3] = FUN_00441370;
  FUN_00441170();
  return;
}


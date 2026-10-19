// Address: 0x0043da70
// Name: FUN_0043da70
// Category: Utility


int __cdecl FUN_0043da70(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar1 = *(int *)(param_1 + 0x11c);
  iVar4 = *(int *)(param_1 + 0x188);
  while ((*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x84) ||
         ((*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x84) &&
          (*(uint *)(param_1 + 0x80) <= *(uint *)(param_1 + 0x88)))))) {
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 400))(param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar3 = *(int *)(param_1 + 0xc4);
  iStack_14 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    puVar7 = (undefined4 *)(iVar4 + 0x48);
    do {
      if (*(char *)(iVar3 + 0x30) != '\0') {
        iVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                          (param_1,*puVar7,*(int *)(param_1 + 0x88) * *(int *)(iVar3 + 0xc),
                           *(int *)(iVar3 + 0xc),0);
        if (*(uint *)(param_1 + 0x88) < iVar1 - 1U) {
          uStack_20 = *(uint *)(iVar3 + 0xc);
        }
        else {
          uStack_20 = *(uint *)(iVar3 + 0x20) % *(uint *)(iVar3 + 0xc);
          if (uStack_20 == 0) {
            uStack_20 = *(uint *)(iVar3 + 0xc);
          }
        }
        pcVar2 = *(code **)(*(int *)(param_1 + 0x19c) + 4 + iStack_14 * 4);
        iStack_1c = *(int *)(param_2 + iStack_14 * 4);
        iStack_18 = 0;
        if (0 < (int)uStack_20) {
          uVar5 = *(uint *)(iVar3 + 0x1c);
          do {
            iVar6 = *(int *)(iVar4 + iStack_18 * 4);
            iVar9 = 0;
            uVar8 = 0;
            if (uVar5 != 0) {
              do {
                (*pcVar2)(param_1,iVar3,iVar6,iStack_1c,iVar9);
                uVar5 = *(uint *)(iVar3 + 0x1c);
                iVar9 = iVar9 + *(int *)(iVar3 + 0x24);
                uVar8 = uVar8 + 1;
                iVar6 = iVar6 + 0x80;
              } while (uVar8 < uVar5);
            }
            iStack_18 = iStack_18 + 1;
            iStack_1c = iStack_1c + *(int *)(iVar3 + 0x24) * 4;
          } while (iStack_18 < (int)uStack_20);
        }
      }
      iStack_14 = iStack_14 + 1;
      puVar7 = puVar7 + 1;
      iVar3 = iVar3 + 0x54;
    } while (iStack_14 < *(int *)(param_1 + 0x24));
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  return 4 - (uint)(*(uint *)(param_1 + 0x88) < *(uint *)(param_1 + 0x11c));
}


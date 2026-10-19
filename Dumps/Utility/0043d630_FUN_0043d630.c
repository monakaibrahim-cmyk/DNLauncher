// Address: 0x0043d630
// Name: FUN_0043d630
// Category: Utility


undefined4 __cdecl FUN_0043d630(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  int iStack_28;
  int *piStack_24;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar1 = *(int *)(param_1 + 0x11c);
  iVar2 = *(int *)(param_1 + 0x188);
  iVar7 = *(int *)(iVar2 + 0x18);
  uVar10 = *(int *)(param_1 + 0x138) - 1;
  if (iVar7 < *(int *)(iVar2 + 0x1c)) {
    do {
      for (uVar14 = *(uint *)(iVar2 + 0x14); uVar14 <= uVar10; uVar14 = uVar14 + 1) {
        FUN_0043bca0(*(void **)(iVar2 + 0x20),*(int *)(param_1 + 0x140) << 7);
        cVar6 = (**(code **)(*(int *)(param_1 + 0x198) + 4))(param_1,iVar2 + 0x20);
        if (cVar6 == '\0') {
          *(uint *)(iVar2 + 0x14) = uVar14;
          *(int *)(iVar2 + 0x18) = iVar7;
          return 0;
        }
        iVar8 = 0;
        iStack_28 = 0;
        iStack_14 = 0;
        if (0 < *(int *)(param_1 + 0x124)) {
          piStack_24 = (int *)(param_1 + 0x128);
          do {
            iVar3 = *piStack_24;
            if (*(char *)(iVar3 + 0x30) == '\0') {
              iVar8 = iVar8 + *(int *)(iVar3 + 0x3c);
              iStack_28 = iVar8;
            }
            else {
              iVar11 = *(int *)(iVar3 + 4) * 4;
              pcVar4 = *(code **)(*(int *)(param_1 + 0x19c) + 4 + iVar11);
              if (uVar14 < uVar10) {
                iVar9 = *(int *)(iVar3 + 0x34);
              }
              else {
                iVar9 = *(int *)(iVar3 + 0x44);
              }
              iVar5 = *(int *)(iVar3 + 0x40);
              iVar11 = *(int *)(iVar11 + param_2) + *(int *)(iVar3 + 0x24) * iVar7 * 4;
              iStack_18 = 0;
              if (0 < *(int *)(iVar3 + 0x38)) {
                do {
                  if (((*(uint *)(param_1 + 0x80) < iVar1 - 1U) ||
                      (iVar7 + iStack_18 < *(int *)(iVar3 + 0x48))) && (0 < iVar9)) {
                    puVar12 = (undefined4 *)(iVar2 + 0x20 + iVar8 * 4);
                    iVar13 = iVar5 * uVar14;
                    iStack_1c = iVar9;
                    do {
                      (*pcVar4)(param_1,iVar3,*puVar12,iVar11,iVar13);
                      iVar13 = iVar13 + *(int *)(iVar3 + 0x24);
                      puVar12 = puVar12 + 1;
                      iStack_1c = iStack_1c + -1;
                      iVar8 = iStack_28;
                    } while (iStack_1c != 0);
                  }
                  iVar8 = iVar8 + *(int *)(iVar3 + 0x34);
                  iStack_18 = iStack_18 + 1;
                  iVar11 = iVar11 + *(int *)(iVar3 + 0x24) * 4;
                  iStack_28 = iVar8;
                } while (iStack_18 < *(int *)(iVar3 + 0x38));
              }
            }
            piStack_24 = piStack_24 + 1;
            iStack_14 = iStack_14 + 1;
          } while (iStack_14 < *(int *)(param_1 + 0x124));
        }
      }
      iVar7 = iVar7 + 1;
      *(undefined4 *)(iVar2 + 0x14) = 0;
    } while (iVar7 < *(int *)(iVar2 + 0x1c));
  }
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  if (*(uint *)(param_1 + 0x80) < *(uint *)(param_1 + 0x11c)) {
    FUN_0043d5c0(param_1);
    return 3;
  }
  (**(code **)(*(int *)(param_1 + 400) + 0xc))(param_1);
  return 4;
}


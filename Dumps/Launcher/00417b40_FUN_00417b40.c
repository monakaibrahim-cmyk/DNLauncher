// Address: 0x00417b40
// Name: FUN_00417b40
// Category: Launcher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00417b40(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  uint uVar5;
  int *unaff_EDI;
  int *piStack_5e4;
  int iStack_5e0;
  int iStack_5dc;
  undefined1 *puStack_5d8;
  int *piStack_5d4;
  undefined1 *puStack_5d0;
  int iStack_5cc;
  undefined1 *puStack_5c8;
  undefined1 auStack_5b4 [40];
  undefined1 local_58c [288];
  undefined1 auStack_46c [1076];
  uint uStack_38;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)auStack_5b4;
  puStack_5c8 = (undefined1 *)0x20;
  iStack_5cc = 0x417b61;
  piVar4 = (int *)Direct3DCreate9();
  puStack_5c8 = local_58c;
  iStack_5cc = 1;
  puStack_5d0 = (undefined1 *)0x0;
  puStack_5d8 = (undefined1 *)0x417b74;
  piStack_5d4 = piVar4;
  (**(code **)(*piVar4 + 0x38))();
  puStack_5d8 = auStack_46c;
  iStack_5dc = 0;
  iStack_5e0 = 0;
  piStack_5e4 = piVar4;
  (**(code **)(*piVar4 + 0x14))();
  FUN_00418150();
  iStack_5cc = (**(code **)(*piVar4 + 0x18))(piVar4,0,0x16);
  iStack_5dc = 0;
  if (0 < iStack_5cc) {
    uVar5 = 0xffffffff;
    iStack_5e0 = -8;
    do {
      (**(code **)(*piVar4 + 0x1c))(piVar4,0,0x16,iStack_5dc,&puStack_5c8);
      fVar2 = (float)(int)unaff_EDI;
      if ((int)unaff_EDI < 0) {
        fVar2 = fVar2 + _DAT_004b4720;
      }
      puStack_5d0 = puStack_5c8;
      fVar3 = (float)(int)puStack_5c8;
      if ((int)puStack_5c8 < 0) {
        fVar3 = fVar3 + _DAT_004b4720;
      }
      if ((((float)_DAT_004b4728 < fVar2 / fVar3) && ((undefined1 *)0x3ff < puStack_5c8)) &&
         ((int *)0x2cf < unaff_EDI)) {
        puStack_5d8 = puStack_5c8;
        piStack_5d4 = unaff_EDI;
        if (0 < (int)(uVar5 + 1)) {
          if ((*(int *)(param_1 + 4) == 0) ||
             ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3) <= uVar5)) {
            FUN_00475b26();
          }
          iVar1 = *(int *)(param_1 + 4);
          if (*(undefined1 **)(iStack_5e0 + iVar1) == puStack_5d8) {
            if ((iVar1 == 0) || ((uint)(*(int *)(param_1 + 8) - iVar1 >> 3) <= uVar5)) {
              FUN_00475b26();
            }
            if (*(int **)(*(int *)(param_1 + 4) + 4 + iStack_5e0) == piStack_5d4) goto LAB_00417c86;
          }
        }
        FUN_004180d0();
        iStack_5e0 = iStack_5e0 + 8;
        uVar5 = uVar5 + 1;
      }
LAB_00417c86:
      iStack_5dc = iStack_5dc + 1;
    } while (iStack_5dc < iStack_5cc);
  }
  (**(code **)(*piVar4 + 8))(piVar4);
  __security_check_cookie(uStack_38 ^ (uint)&piStack_5e4);
  return;
}


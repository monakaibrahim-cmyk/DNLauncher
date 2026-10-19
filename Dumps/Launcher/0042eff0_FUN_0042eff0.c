// Address: 0x0042eff0
// Name: FUN_0042eff0
// Category: Launcher


uint __cdecl FUN_0042eff0(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *unaff_ESI;
  
  uVar4 = *param_1;
  iVar1 = *(int *)(*(int *)(uVar4 + 4) + 8 + (int)param_1);
  do {
    if (iVar1 != 0) {
      return uVar4 & 0xffffff00;
    }
    uVar3 = FUN_00431500(param_1);
    uVar4 = uVar3;
    if (((0xff < (int)uVar3) ||
        (((uVar4 = _isspace(uVar3 & 0xff), uVar4 == 0 && ((char)uVar3 != '\n')) &&
         ((char)uVar3 != '\r')))) || ((int)uVar3 < 1)) {
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
    uVar2 = FUN_004313b0(param_1);
    if (-*(int *)((int)unaff_ESI + 0x14) - 1U < 2) {
      FUN_004956fe();
    }
    uVar4 = *(int *)((int)unaff_ESI + 0x14) + 1;
    if (uVar4 == 0xffffffff) {
      FUN_004956fe();
    }
    if (*(uint *)((int)unaff_ESI + 0x18) < uVar4) {
      FUN_00402af0(unaff_ESI,uVar4);
LAB_0042f080:
      if (uVar4 != 0) {
        puVar5 = (undefined4 *)((int)unaff_ESI + 4);
        puVar6 = puVar5;
        if (0xf < *(uint *)((int)unaff_ESI + 0x18)) {
          puVar6 = (undefined4 *)*puVar5;
        }
        *(undefined1 *)((int)puVar6 + *(int *)((int)unaff_ESI + 0x14)) = uVar2;
        *(uint *)((int)unaff_ESI + 0x14) = uVar4;
        if (0xf < *(uint *)((int)unaff_ESI + 0x18)) {
          puVar5 = (undefined4 *)*puVar5;
        }
        *(undefined1 *)((int)puVar5 + uVar4) = 0;
      }
    }
    else {
      if (uVar4 != 0) goto LAB_0042f080;
      *(undefined4 *)((int)unaff_ESI + 0x14) = 0;
      if (*(uint *)((int)unaff_ESI + 0x18) < 0x10) {
        *(undefined1 *)((int)unaff_ESI + 4) = 0;
      }
      else {
        **(undefined1 **)((int)unaff_ESI + 4) = 0;
      }
    }
    uVar4 = *(uint *)(*param_1 + 4);
    iVar1 = *(int *)(uVar4 + 8 + (int)param_1);
  } while( true );
}


// Address: 0x0042fd20
// Name: FUN_0042fd20
// Category: Launcher


void __thiscall FUN_0042fd20(void *this,int *param_1,void *param_2)

{
  void **ppvVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  bool bVar10;
  undefined1 auStack_7c [2];
  char cStack_7a;
  char cStack_79;
  uint uStack_78;
  int *local_74;
  void *local_70;
  int iStack_6c;
  undefined **appuStack_68 [19];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_004994b8;
  local_1c = DAT_004c3750 ^ (uint)auStack_7c;
  iVar2 = *(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1);
  ppvVar1 = &local_14;
  local_70 = this;
  local_14 = ExceptionList;
  local_74 = param_1;
  while (ExceptionList = ppvVar1, iVar2 == 0) {
    uStack_78 = FUN_004313b0(param_1);
    if ((int)uStack_78 < 1) goto LAB_0042fe41;
    if (-*(int *)((int)param_2 + 0x14) - 1U < 2) {
      FUN_004956fe();
    }
    uVar6 = *(int *)((int)param_2 + 0x14) + 1;
    if (uVar6 == 0xffffffff) {
      FUN_004956fe();
    }
    if (*(uint *)((int)param_2 + 0x18) < uVar6) {
      FUN_00402af0(param_2,uVar6);
LAB_0042fdbd:
      if (uVar6 != 0) {
        puVar3 = (undefined4 *)((int)param_2 + 4);
        puVar8 = puVar3;
        if (0xf < *(uint *)((int)param_2 + 0x18)) {
          puVar8 = (undefined4 *)*puVar3;
        }
        *(char *)((int)puVar8 + *(int *)((int)param_2 + 0x14)) = (char)uStack_78;
        *(uint *)((int)param_2 + 0x14) = uVar6;
        if (0xf < *(uint *)((int)param_2 + 0x18)) {
          puVar3 = (undefined4 *)*puVar3;
        }
        *(undefined1 *)((int)puVar3 + uVar6) = 0;
        param_1 = local_74;
      }
    }
    else {
      if (uVar6 != 0) goto LAB_0042fdbd;
      *(undefined4 *)((int)param_2 + 0x14) = 0;
      if (*(uint *)((int)param_2 + 0x18) < 0x10) {
        *(undefined1 *)((int)param_2 + 4) = 0;
      }
      else {
        **(undefined1 **)((int)param_2 + 4) = 0;
      }
    }
    if (uStack_78 == 0x3e) break;
    ppvVar1 = ExceptionList;
    iVar2 = *(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1);
  }
  uVar6 = *(uint *)((int)param_2 + 0x14);
  if (2 < uVar6) {
    if (uVar6 <= uVar6 - 1) {
      FUN_0049573d();
    }
    if (*(uint *)((int)param_2 + 0x18) < 0x10) {
      iVar2 = (int)param_2 + 4;
    }
    else {
      iVar2 = *(int *)((int)param_2 + 4);
    }
    if (*(char *)(iVar2 + (uVar6 - 1)) == '>') {
      uVar6 = *(uint *)((int)param_2 + 0x14) - 2;
      if (*(uint *)((int)param_2 + 0x14) <= uVar6) {
        FUN_0049573d();
      }
      if (*(uint *)((int)param_2 + 0x18) < 0x10) {
        iVar2 = (int)param_2 + 4;
      }
      else {
        iVar2 = *(int *)((int)param_2 + 4);
      }
      if (*(char *)(iVar2 + uVar6) == '/') goto LAB_004300ea;
    }
    uVar6 = *(uint *)((int)param_2 + 0x14) - 1;
    if (*(uint *)((int)param_2 + 0x14) <= uVar6) {
      FUN_0049573d();
    }
    if (*(uint *)((int)param_2 + 0x18) < 0x10) {
      iVar2 = (int)param_2 + 4;
    }
    else {
      iVar2 = *(int *)((int)param_2 + 4);
    }
    if (*(char *)(iVar2 + uVar6) == '>') {
      while( true ) {
        while ((FUN_0042eff0(param_1), *(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0 &&
               (iVar2 = FUN_00431500(param_1), iVar2 != 0x3c))) {
          FUN_0042d1a0(appuStack_68,appuStack_68);
          uStack_c = 0;
          FUN_00430bc0(appuStack_68,param_1,param_2);
          uStack_c = 0xffffffff;
          appuStack_68[0] = TiXmlText::vftable;
          FUN_0042d670(appuStack_68);
        }
        if (*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) != 0) break;
        iStack_6c = *(int *)((int)param_2 + 0x14);
        cStack_7a = '\0';
        cStack_79 = '\0';
        while( true ) {
          if (*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) != 0) goto LAB_004300ea;
          uStack_78 = FUN_00431500(param_1);
          if ((int)uStack_78 < 1) goto LAB_0042fe41;
          if (uStack_78 == 0x3e) break;
          if (-*(int *)((int)param_2 + 0x14) - 1U < 2) {
            FUN_004956fe();
          }
          uVar6 = *(int *)((int)param_2 + 0x14) + 1;
          if (uVar6 == 0xffffffff) {
            FUN_004956fe();
          }
          if (*(uint *)((int)param_2 + 0x18) < uVar6) {
            FUN_00402af0(param_2,uVar6);
LAB_0042ffa1:
            if (uVar6 != 0) {
              puVar3 = (undefined4 *)((int)param_2 + 4);
              puVar8 = puVar3;
              if (0xf < *(uint *)((int)param_2 + 0x18)) {
                puVar8 = (undefined4 *)*puVar3;
              }
              *(char *)((int)puVar8 + *(int *)((int)param_2 + 0x14)) = (char)uStack_78;
              *(uint *)((int)param_2 + 0x14) = uVar6;
              if (0xf < *(uint *)((int)param_2 + 0x18)) {
                puVar3 = (undefined4 *)*puVar3;
              }
              *(undefined1 *)((int)puVar3 + uVar6) = 0;
              param_1 = local_74;
            }
          }
          else {
            if (uVar6 != 0) goto LAB_0042ffa1;
            *(undefined4 *)((int)param_2 + 0x14) = 0;
            if (*(uint *)((int)param_2 + 0x18) < 0x10) {
              *(undefined1 *)((int)param_2 + 4) = 0;
            }
            else {
              **(undefined1 **)((int)param_2 + 4) = 0;
            }
          }
          FUN_004313b0(param_1);
          if ((uStack_78 == 0x5b) && (uVar6 = *(uint *)((int)param_2 + 0x14), 8 < uVar6)) {
            iVar2 = FUN_004028d0((int)param_2);
            iVar5 = 10;
            bVar10 = true;
            pcVar7 = (char *)(iVar2 + -9 + uVar6);
            pcVar9 = "<![CDATA[";
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar10 = *pcVar7 == *pcVar9;
              pcVar7 = pcVar7 + 1;
              pcVar9 = pcVar9 + 1;
            } while (bVar10);
            param_1 = local_74;
            if (bVar10) break;
          }
          if ((((cStack_79 == '\0') && (uStack_78 != 0x3c)) &&
              ((0xff < (int)uStack_78 ||
               (((iVar2 = _isspace(uStack_78 & 0xff), iVar2 == 0 && ((char)uStack_78 != '\n')) &&
                ((char)uStack_78 != '\r')))))) && (cStack_79 = '\x01', uStack_78 == 0x2f)) {
            cStack_7a = '\x01';
          }
        }
        if (cStack_7a != '\0') goto LAB_004300c3;
        iVar2 = FUN_004028d0((int)param_2);
        piVar4 = FUN_0042faf0(local_70,iVar2 + iStack_6c,0);
        if (piVar4 == (int *)0x0) break;
        (**(code **)(*piVar4 + 0x44))(param_1,param_2);
        (**(code **)*piVar4)(1);
      }
    }
  }
LAB_004300ea:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_7c);
  return;
LAB_004300c3:
  if (*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0) {
    iVar2 = FUN_004313b0(param_1);
    if (iVar2 < 1) {
LAB_0042fe41:
      iVar2 = FUN_0042d8f0();
      if (iVar2 != 0) {
        FUN_0042fa80((void *)0x0,(byte *)0x0,0);
      }
    }
    else {
      FUN_00424db0();
    }
  }
  goto LAB_004300ea;
}


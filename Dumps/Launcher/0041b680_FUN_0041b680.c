// Address: 0x0041b680
// Name: FUN_0041b680
// Category: Launcher


void __fastcall FUN_0041b680(CWnd *param_1)

{
  uint uVar1;
  undefined4 *this;
  HBITMAP pHVar2;
  HDC pHVar3;
  AFX_MODULE_STATE *pAVar4;
  HGDIOBJ pvVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  CDC local_a4 [4];
  HDC pHStack_a0;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int iStack_7c;
  CPaintDC local_78 [4];
  HDC local_74;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004989d3;
  local_14 = ExceptionList;
  local_1c = DAT_004c3750 ^ (uint)local_a4;
  uVar1 = DAT_004c3750 ^ (uint)&stack0xffffff50;
  ExceptionList = &local_14;
  CPaintDC::CPaintDC(local_78,param_1);
  local_c = 0;
  FUN_0045b649((undefined4 *)local_a4);
  local_c = CONCAT31(local_c._1_3_,1);
  FUN_0041b4e0();
  if (*(int *)(param_1 + 0x54) == 0) {
    iVar10 = *(int *)(param_1 + 0xa8);
  }
  else {
    iVar10 = *(int *)(param_1 + 0xac);
  }
  local_94 = local_84 - local_8c;
  if ((local_94 != *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc0)) ||
     (local_90 = local_80 - local_88,
     local_90 != *(int *)(param_1 + 0xcc) - *(int *)(param_1 + 0xc4))) {
    if (*(int **)(param_1 + 0xe4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xe4) + 4))(1,uVar1);
    }
    this = FUN_00452728(8);
    if (this == (undefined4 *)0x0) {
      this = (undefined4 *)0x0;
    }
    else {
      this[1] = 0;
      *this = CBitmap::vftable;
    }
    local_90 = local_80 - local_88;
    *(undefined4 **)(param_1 + 0xe4) = this;
    pHVar2 = CreateCompatibleBitmap(local_74,local_94,local_90);
    Attach(this,(int)pHVar2);
  }
  iVar7 = local_94;
  pHVar3 = CreateCompatibleDC(local_74);
  CDC::Attach(local_a4,pHVar3);
  pvVar5 = (HGDIOBJ)0x0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    pvVar5 = *(HGDIOBJ *)(*(int *)(param_1 + 0xe4) + 4);
  }
  iStack_7c = FUN_0045bf56(pHStack_a0,pvVar5);
  if ((iVar7 == *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc0)) &&
     (local_90 == *(int *)(param_1 + 0xcc) - *(int *)(param_1 + 0xc4))) {
    iVar7 = *(int *)(param_1 + 0x8c);
    if (*(int *)(param_1 + 0x90) != iVar7) {
      if (*(int *)(param_1 + 0x90) < iVar7) {
        FUN_0041c240(param_1 + 0xdc,(int)local_a4,7,iVar7,0,0);
        iVar7 = iVar7 - iVar7 % iVar10;
        if (*(int *)(param_1 + 0x90) < iVar7) {
          do {
            uVar16 = *(undefined4 *)(param_1 + 0xe0);
            uVar14 = 0;
            pHVar3 = pHStack_a0;
            if (*(int *)(param_1 + 0x54) == 0) {
              iVar11 = 0;
              uVar8 = 7;
              iVar12 = iVar7;
              pAVar4 = AfxGetModuleState();
              pvVar6 = (void *)**(undefined4 **)(pAVar4 + 0x78);
            }
            else {
              iVar12 = 0;
              uVar8 = 7;
              iVar11 = iVar7;
              pAVar4 = AfxGetModuleState();
              pvVar6 = (void *)**(undefined4 **)(pAVar4 + 0x78);
            }
            FUN_0041c280(pvVar6,uVar16,uVar8,pHVar3,iVar12,iVar11,uVar14);
            iVar7 = iVar7 - iVar10;
          } while (*(int *)(param_1 + 0x90) < iVar7);
        }
      }
      else {
        FUN_0041c240(param_1 + 0xdc,(int)local_a4,4,iVar7,0,0);
        iVar7 = (iVar7 + iVar10) - (iVar7 + iVar10) % iVar10;
        if (iVar7 < *(int *)(param_1 + 0x90)) {
          do {
            uVar16 = *(undefined4 *)(param_1 + 0xe0);
            uVar14 = 0;
            if (*(int *)(param_1 + 0x54) == 0) {
              iVar12 = iVar7;
              iVar11 = 0;
            }
            else {
              iVar12 = 0;
              iVar11 = iVar7;
            }
            uVar8 = 4;
            pHVar3 = pHStack_a0;
            pAVar4 = AfxGetModuleState();
            FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar16,uVar8,pHVar3,iVar12,iVar11,
                         uVar14);
            iVar7 = iVar7 + iVar10;
          } while (iVar7 < *(int *)(param_1 + 0x90));
        }
      }
    }
    iVar7 = *(int *)(param_1 + 0x7c);
    if (*(int *)(param_1 + 0x80) != iVar7) {
      uVar16 = *(undefined4 *)(param_1 + 0xe0);
      uVar8 = 0;
      uVar14 = 0;
      if (*(int *)(param_1 + 0x80) < iVar7) {
        uVar9 = 4;
        pHVar3 = pHStack_a0;
        iVar12 = iVar7;
        pAVar4 = AfxGetModuleState();
        FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar16,uVar9,pHVar3,iVar12,uVar14,
                     uVar8);
        iVar7 = iVar7 - iVar7 % iVar10;
        if (*(int *)(param_1 + 0x80) < iVar7) {
          do {
            uVar16 = *(undefined4 *)(param_1 + 0xe0);
            uVar14 = 0;
            if (*(int *)(param_1 + 0x54) == 0) {
              iVar12 = iVar7;
              iVar11 = 0;
            }
            else {
              iVar12 = 0;
              iVar11 = iVar7;
            }
            uVar8 = 4;
            pHVar3 = pHStack_a0;
            pAVar4 = AfxGetModuleState();
            FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar16,uVar8,pHVar3,iVar12,iVar11,
                         uVar14);
            iVar7 = iVar7 - iVar10;
          } while (*(int *)(param_1 + 0x80) < iVar7);
        }
      }
      else {
        uVar9 = 7;
        pHVar3 = pHStack_a0;
        iVar12 = iVar7;
        pAVar4 = AfxGetModuleState();
        FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar16,uVar9,pHVar3,iVar12,uVar14,
                     uVar8);
        iVar7 = (iVar7 + iVar10) - (iVar7 + iVar10) % iVar10;
        if (iVar7 < *(int *)(param_1 + 0x80)) {
          do {
            uVar16 = *(undefined4 *)(param_1 + 0xe0);
            uVar14 = 0;
            if (*(int *)(param_1 + 0x54) == 0) {
              iVar12 = iVar7;
              iVar11 = 0;
            }
            else {
              iVar12 = 0;
              iVar11 = iVar7;
            }
            uVar8 = 7;
            pHVar3 = pHStack_a0;
            pAVar4 = AfxGetModuleState();
            FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar16,uVar8,pHVar3,iVar12,iVar11,
                         uVar14);
            iVar7 = iVar7 + iVar10;
          } while (iVar7 < *(int *)(param_1 + 0x80));
        }
      }
    }
    if ((*(int *)(param_1 + 0x8c) != *(int *)(param_1 + 0x90)) ||
       (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x80))) {
      uVar16 = *(undefined4 *)(param_1 + 0xe0);
      iVar7 = *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x90) >> 1;
      uVar14 = 0;
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar12 = iVar7;
        iVar7 = 0;
      }
      else {
        iVar12 = 0;
      }
      uVar8 = 3;
      pHVar3 = pHStack_a0;
      pAVar4 = AfxGetModuleState();
      FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar16,uVar8,pHVar3,iVar12,iVar7,uVar14)
      ;
    }
    iVar7 = *(int *)(param_1 + 0x80);
    if ((*(int *)(param_1 + 0x7c) != iVar7) && (iVar10 < iVar7)) {
      uVar16 = *(undefined4 *)(param_1 + 0xe0);
      iVar7 = iVar7 - iVar10;
      uVar14 = 0;
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar12 = iVar7;
        iVar7 = 0;
      }
      else {
        iVar12 = 0;
      }
      uVar8 = 1;
      pHVar3 = pHStack_a0;
      pAVar4 = AfxGetModuleState();
      FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar16,uVar8,pHVar3,iVar12,iVar7,uVar14)
      ;
    }
    iVar7 = *(int *)(param_1 + 0x90);
    if ((iVar7 != *(int *)(param_1 + 0x8c)) && (iVar7 < *(int *)(param_1 + 0xa0) - iVar10)) {
      uVar16 = *(undefined4 *)(param_1 + 0xe0);
      iVar7 = iVar7 + iVar10;
      uVar14 = 0;
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar12 = iVar7;
        iVar7 = 0;
      }
      else {
        iVar12 = 0;
      }
      uVar8 = 6;
      pHVar3 = pHStack_a0;
      pAVar4 = AfxGetModuleState();
      FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar16,uVar8,pHVar3,iVar12,iVar7,uVar14)
      ;
    }
    if ((*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x80)) &&
       (*(int *)(param_1 + 0x80) < iVar10 * 2)) {
      uVar16 = *(undefined4 *)(param_1 + 0xe0);
      uVar15 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar14 = 0;
      pHVar3 = pHStack_a0;
      pAVar4 = AfxGetModuleState();
      FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar16,uVar14,pHVar3,uVar8,uVar9,uVar15)
      ;
    }
    if ((*(int *)(param_1 + 0x8c) != *(int *)(param_1 + 0x90)) &&
       (iVar7 = *(int *)(param_1 + 0xa0), iVar7 + iVar10 * -2 < *(int *)(param_1 + 0x90))) {
      uVar16 = *(undefined4 *)(param_1 + 0xe0);
      uVar14 = 0;
      pHVar3 = pHStack_a0;
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar11 = 0;
        uVar8 = 8;
        pAVar4 = AfxGetModuleState();
        pvVar6 = (void *)**(undefined4 **)(pAVar4 + 0x78);
        iVar12 = iVar7;
        iVar7 = iVar11;
      }
      else {
        iVar12 = 0;
        uVar8 = 8;
        pAVar4 = AfxGetModuleState();
        pvVar6 = (void *)**(undefined4 **)(pAVar4 + 0x78);
      }
      FUN_0041c280(pvVar6,uVar16,uVar8,pHVar3,iVar12,iVar7,uVar14);
    }
    iVar7 = *(int *)(param_1 + 0x80);
    if ((*(int *)(param_1 + 0x7c) != iVar7) || (*(int *)(param_1 + 0x90) < iVar7 + iVar10 * 2)) {
      uVar16 = *(undefined4 *)(param_1 + 0xe0);
      *(int *)(param_1 + 0x7c) = iVar7;
      uVar14 = 0;
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar12 = iVar7;
        iVar7 = 0;
      }
      else {
        iVar12 = 0;
      }
      uVar8 = 2;
      pHVar3 = pHStack_a0;
      pAVar4 = AfxGetModuleState();
      FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar16,uVar8,pHVar3,iVar12,iVar7,uVar14)
      ;
    }
    iVar7 = *(int *)(param_1 + 0x90);
    if ((*(int *)(param_1 + 0x8c) != iVar7) || (iVar7 + iVar10 * -2 < *(int *)(param_1 + 0x80))) {
      uVar16 = *(undefined4 *)(param_1 + 0xe0);
      *(int *)(param_1 + 0x8c) = iVar7;
      uVar14 = 0;
      pHVar3 = pHStack_a0;
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar12 = 0;
        uVar8 = 5;
        pAVar4 = AfxGetModuleState();
        pvVar6 = (void *)**(undefined4 **)(pAVar4 + 0x78);
        iVar10 = iVar7;
        iVar7 = iVar12;
      }
      else {
        iVar10 = 0;
        uVar8 = 5;
        pAVar4 = AfxGetModuleState();
        pvVar6 = (void *)**(undefined4 **)(pAVar4 + 0x78);
      }
      FUN_0041c280(pvVar6,uVar16,uVar8,pHVar3,iVar10,iVar7,uVar14);
    }
    if (*(int *)(param_1 + 0x9c) != *(int *)(param_1 + 0xa0)) {
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0xa0);
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0xa0) % iVar10;
    if (*(int *)(param_1 + 0x90) < iVar7) {
      do {
        uVar16 = *(undefined4 *)(param_1 + 0xe0);
        uVar14 = 0;
        if (*(int *)(param_1 + 0x54) == 0) {
          iVar12 = iVar7;
          iVar11 = 0;
        }
        else {
          iVar12 = 0;
          iVar11 = iVar7;
        }
        uVar8 = 7;
        pHVar3 = pHStack_a0;
        pAVar4 = AfxGetModuleState();
        FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar16,uVar8,pHVar3,iVar12,iVar11,
                     uVar14);
        iVar7 = iVar7 - iVar10;
      } while (*(int *)(param_1 + 0x90) < iVar7);
    }
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x90);
    iVar7 = iVar7 - iVar7 % iVar10;
    if (*(int *)(param_1 + 0x80) <= iVar7) {
      do {
        uVar16 = *(undefined4 *)(param_1 + 0xe0);
        uVar14 = 0;
        if (*(int *)(param_1 + 0x54) == 0) {
          iVar12 = iVar7;
          iVar11 = 0;
        }
        else {
          iVar12 = 0;
          iVar11 = iVar7;
        }
        uVar8 = 4;
        pHVar3 = pHStack_a0;
        pAVar4 = AfxGetModuleState();
        FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar16,uVar8,pHVar3,iVar12,iVar11,
                     uVar14);
        iVar7 = iVar7 - iVar10;
      } while (*(int *)(param_1 + 0x80) <= iVar7);
    }
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x80);
    pHVar3 = pHStack_a0;
    for (iVar7 = iVar7 - iVar7 % iVar10; pHStack_a0 = pHVar3, iVar10 <= iVar7;
        iVar7 = iVar7 - iVar10) {
      uVar16 = *(undefined4 *)(param_1 + 0xe0);
      uVar14 = 0;
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar12 = iVar7;
        iVar11 = 0;
      }
      else {
        iVar12 = 0;
        iVar11 = iVar7;
      }
      uVar8 = 7;
      pAVar4 = AfxGetModuleState();
      FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar16,uVar8,pHVar3,iVar12,iVar11,uVar14
                  );
      pHVar3 = pHStack_a0;
    }
    uVar16 = *(undefined4 *)(param_1 + 0xe0);
    iVar7 = *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x90) >> 1;
    uVar14 = 0;
    if (*(int *)(param_1 + 0x54) == 0) {
      iVar11 = 0;
      uVar8 = 3;
      pAVar4 = AfxGetModuleState();
      pvVar6 = (void *)**(undefined4 **)(pAVar4 + 0x78);
      iVar12 = iVar7;
      iVar7 = iVar11;
    }
    else {
      iVar12 = 0;
      uVar8 = 3;
      pAVar4 = AfxGetModuleState();
      pvVar6 = (void *)**(undefined4 **)(pAVar4 + 0x78);
    }
    FUN_0041c280(pvVar6,uVar16,uVar8,pHVar3,iVar12,iVar7,uVar14);
    iVar7 = *(int *)(param_1 + 0x80);
    if (iVar10 < iVar7) {
      uVar16 = *(undefined4 *)(param_1 + 0xe0);
      uVar14 = 0;
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar7 = iVar7 - *(int *)(param_1 + 0xa8);
        iVar12 = 0;
      }
      else {
        iVar12 = iVar7 - *(int *)(param_1 + 0xac);
        iVar7 = 0;
      }
      uVar8 = 1;
      pHVar3 = pHStack_a0;
      pAVar4 = AfxGetModuleState();
      FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar16,uVar8,pHVar3,iVar7,iVar12,uVar14)
      ;
    }
    iVar7 = *(int *)(param_1 + 0x90);
    if (iVar7 < *(int *)(param_1 + 0xa0) - iVar10) {
      uVar16 = 0;
      pHVar3 = pHStack_a0;
      if (*(int *)(param_1 + 0x54) == 0) {
        iVar10 = 0;
        iVar7 = *(int *)(param_1 + 0xa8) + iVar7;
        uVar14 = *(undefined4 *)(param_1 + 0xe0);
        uVar8 = 6;
        pAVar4 = AfxGetModuleState();
        pvVar6 = (void *)**(undefined4 **)(pAVar4 + 0x78);
      }
      else {
        iVar10 = *(int *)(param_1 + 0xac) + iVar7;
        uVar14 = *(undefined4 *)(param_1 + 0xe0);
        iVar7 = 0;
        uVar8 = 6;
        pAVar4 = AfxGetModuleState();
        pvVar6 = (void *)**(undefined4 **)(pAVar4 + 0x78);
      }
      FUN_0041c280(pvVar6,uVar14,uVar8,pHVar3,iVar7,iVar10,uVar16);
    }
    uVar16 = *(undefined4 *)(param_1 + 0xe0);
    uVar15 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar14 = 0;
    pHVar3 = pHStack_a0;
    pAVar4 = AfxGetModuleState();
    FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar16,uVar14,pHVar3,uVar8,uVar9,uVar15);
    uVar16 = *(undefined4 *)(param_1 + 0xa0);
    uVar14 = *(undefined4 *)(param_1 + 0xe0);
    uVar8 = 0;
    pHVar3 = pHStack_a0;
    if (*(int *)(param_1 + 0x54) == 0) {
      uVar13 = 0;
      uVar15 = 8;
      pAVar4 = AfxGetModuleState();
      pvVar6 = (void *)**(undefined4 **)(pAVar4 + 0x78);
      uVar9 = uVar16;
      uVar16 = uVar13;
    }
    else {
      uVar9 = 0;
      uVar15 = 8;
      pAVar4 = AfxGetModuleState();
      pvVar6 = (void *)**(undefined4 **)(pAVar4 + 0x78);
    }
    FUN_0041c280(pvVar6,uVar14,uVar15,pHVar3,uVar9,uVar16,uVar8);
    uVar16 = *(undefined4 *)(param_1 + 0x80);
    uVar14 = *(undefined4 *)(param_1 + 0xe0);
    uVar8 = 0;
    if (*(int *)(param_1 + 0x54) == 0) {
      uVar9 = uVar16;
      uVar16 = 0;
    }
    else {
      uVar9 = 0;
    }
    uVar15 = 2;
    pHVar3 = pHStack_a0;
    pAVar4 = AfxGetModuleState();
    FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar14,uVar15,pHVar3,uVar9,uVar16,uVar8);
    uVar16 = *(undefined4 *)(param_1 + 0x90);
    uVar14 = *(undefined4 *)(param_1 + 0xe0);
    uVar8 = 0;
    if (*(int *)(param_1 + 0x54) == 0) {
      uVar9 = uVar16;
      uVar16 = 0;
    }
    else {
      uVar9 = 0;
    }
    uVar15 = 5;
    pHVar3 = pHStack_a0;
    pAVar4 = AfxGetModuleState();
    FUN_0041c280((void *)**(undefined4 **)(pAVar4 + 0x78),uVar14,uVar15,pHVar3,uVar9,uVar16,uVar8);
    *(int *)(param_1 + 0xc0) = local_8c;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xc4) = local_88;
    *(int *)(param_1 + 200) = local_84;
    *(int *)(param_1 + 0xcc) = local_80;
  }
  BitBlt(local_74,0,0,local_94,local_90,pHStack_a0,0,0,0xcc0020);
  pvVar5 = (HGDIOBJ)0x0;
  if (iStack_7c != 0) {
    pvVar5 = *(HGDIOBJ *)(iStack_7c + 4);
  }
  FUN_0045bf56(pHStack_a0,pvVar5);
  CDC::DeleteDC(local_a4);
  local_c = local_c & 0xffffff00;
  CDC::~CDC(local_a4);
  local_c = 0xffffffff;
  CPaintDC::~CPaintDC(local_78);
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)local_a4);
  return;
}


// Address: 0x0041a4f0
// Name: FUN_0041a4f0
// Category: Launcher


undefined4 __fastcall FUN_0041a4f0(CWnd *param_1)

{
  CObject *pCVar1;
  int iVar2;
  bool bVar3;
  LPCWSTR lpString;
  int *piVar4;
  int iVar5;
  BOOL BVar6;
  CWnd *this;
  void *pvVar7;
  CGdiObject *hdc;
  uint uVar8;
  CSimpleStringT<char,0> *pCVar9;
  uint *puVar10;
  undefined4 uVar11;
  longlong lVar12;
  HWND pHVar13;
  HWND pHStack_9c;
  int iStack_98;
  char cStack_91;
  int iStack_90;
  uint uStack_8c;
  int iStack_88;
  int iStack_84;
  uint auStack_80 [2];
  CObject *pCStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  RECT RStack_68;
  tagRECT tStack_58;
  CSimpleStringT<char,0> aCStack_48 [8];
  CClientDC aCStack_40 [20];
  CObject *pCStack_2c;
  uint local_28;
  HDC pHStack_24;
  LONG aLStack_20 [3];
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00498487;
  local_14 = ExceptionList;
  lpString = (LPCWSTR)(DAT_004c3750 ^ (uint)&stack0xffffff58);
  ExceptionList = &local_14;
  local_28 = 0;
  piVar4 = (int *)FUN_00453ed1();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  pHStack_9c = (HWND)(iVar5 + 0x10);
  iStack_c = 0;
  piVar4 = (int *)FUN_00453ed1();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iStack_98 = (**(code **)(*piVar4 + 0xc))();
  iStack_98 = iStack_98 + 0x10;
  iStack_c._0_1_ = 1;
  piVar4 = (int *)FUN_00453ed1();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iStack_88 = (**(code **)(*piVar4 + 0xc))();
  iStack_88 = iStack_88 + 0x10;
  iStack_c = CONCAT31(iStack_c._1_3_,2);
  iStack_70 = *(int *)(param_1 + 0x6c);
  pCStack_2c = (CObject *)0x0;
  pCStack_78 = (CObject *)0x0;
  auStack_80[0] = 0;
  iStack_6c = 0;
  uStack_8c = 0;
  if (iStack_70 < 0) {
    iStack_70 = -iStack_70;
  }
  BVar6 = IsWindow(*(HWND *)(param_1 + 0x20));
  if (BVar6 == 0) {
LAB_0041acbe:
    iStack_c._0_1_ = 1;
    piVar4 = (int *)(iStack_88 + -4);
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 + -1 < 1) {
      (**(code **)(**(int **)(iStack_88 + -0x10) + 4))((undefined4 *)(iStack_88 + -0x10));
    }
    iStack_c = (uint)iStack_c._1_3_ << 8;
    piVar4 = (int *)(iStack_98 + -4);
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 + -1 < 1) {
      (**(code **)(**(int **)(iStack_98 + -0x10) + 4))((undefined4 *)(iStack_98 + -0x10));
    }
    iStack_c = 0xffffffff;
    pHVar13 = pHStack_9c + -1;
    LOCK();
    iVar5 = pHVar13->unused;
    pHVar13->unused = pHVar13->unused + -1;
    UNLOCK();
    if (iVar5 == 1 || iVar5 + -1 < 0) {
      (**(code **)(*(int *)pHStack_9c[-4].unused + 4))(pHStack_9c + -4);
    }
    ExceptionList = local_14;
    return 0;
  }
  if (*(int *)(param_1 + 0xe8) == 0) {
    this = (CWnd *)FUN_00419bd0();
    pCStack_2c = (CObject *)this;
    if (this == (CWnd *)0x0) goto LAB_0041acbe;
    pCStack_78 = (CObject *)this;
    FUN_0046602c(this,0,&tStack_58);
  }
  else {
    pCVar1 = *(CObject **)(param_1 + 0xec);
    this = (CWnd *)0x0;
    if (pCVar1 != (CObject *)0x0) {
      pCStack_78 = pCVar1;
      GetWindowRect(*(HWND *)(pCVar1 + 0x20),&tStack_58);
      this = (CWnd *)pCVar1;
    }
  }
  iVar5 = FUN_00419c40();
  if (iVar5 == 0) goto LAB_0041acbe;
  iStack_74 = RStack_68.right - RStack_68.left;
  if (this != (CWnd *)0x0) {
    CClientDC::CClientDC(aCStack_40,this);
    iStack_c._0_1_ = 3;
    pvVar7 = (void *)SendMessageW(*(HWND *)(this + 0x20),0x31,0,0);
    hdc = CGdiObject::FromHandle(pvVar7);
    pHStack_24 = SelectObject((HDC)hdc,lpString);
    if (*(int *)(param_1 + 0xe8) == 0) {
      if ((*(int *)(param_1 + 0x5c) == 0) && (iVar5 = *(int *)(param_1 + 0x58), iVar5 != 0)) {
        if (iVar5 < 1) {
          iStack_74 = (iVar5 - tStack_58.left) + tStack_58.right;
          iStack_90 = (tStack_58.right - tStack_58.left) + -3;
        }
        else {
          iStack_90 = ((tStack_58.right - iVar5) - tStack_58.left) + 3;
          iStack_74 = iStack_90;
        }
      }
      else {
        iStack_74 = 0;
        iStack_90 = (tStack_58.right - tStack_58.left) + -3;
      }
    }
    else {
      iStack_90 = tStack_58.right - tStack_58.left;
    }
    BVar6 = IsWindowVisible(*(HWND *)(this + 0x20));
    iVar5 = iStack_70;
    if (BVar6 != 0) {
      if (iStack_70 != 0) {
        iVar2 = *(int *)(param_1 + 0x70);
        uVar8 = *(int *)(param_1 + 0x98) - iVar2;
        lVar12 = __allmul(uVar8,(int)uVar8 >> 0x1f,100,0);
        auStack_80[0] = (uint)((ulonglong)lVar12 >> 0x20);
        uVar8 = *(int *)(param_1 + 0x74) - iVar2;
        __alldiv((uint)lVar12,auStack_80[0],uVar8,(int)uVar8 >> 0x1f);
        FUN_00403f30(&iStack_98,L"%d%%");
        if (0 < *(int *)(param_1 + 0x6c)) {
          pCVar9 = FUN_00404790(&iStack_98,aCStack_48,(short *)&DAT_004b2d7c);
          iStack_c._0_1_ = 4;
          pCVar9 = FUN_00401ae0((CSimpleStringT<char,0> *)auStack_80,(int *)pCVar9,
                                (short *)&DAT_004b2d78);
          iStack_c._0_1_ = 5;
          FID_conflict_operator_(&iStack_98,(undefined4 *)pCVar9);
          FUN_00410090((int *)auStack_80);
          iStack_c._0_1_ = 3;
          FUN_00410090((int *)aCStack_48);
        }
        pCVar9 = FUN_00404790(&iStack_98,(CSimpleStringT<char,0> *)auStack_80,(short *)&DAT_004b0380
                             );
        iStack_c._0_1_ = 6;
        FID_conflict_operator_(&iStack_98,(undefined4 *)pCVar9);
        iStack_c._0_1_ = 3;
        FUN_00410090((int *)auStack_80);
        puVar10 = (uint *)FUN_0041c430(aCStack_40,(LONG *)auStack_80,&iStack_98);
        auStack_80[0] = *puVar10;
        if (1 < iVar5) {
          FUN_0041b000();
          piVar4 = (int *)FUN_0041c430(aCStack_40,(LONG *)aCStack_48,&iStack_88);
          iStack_6c = *piVar4;
        }
      }
      FID_conflict_operator_(&pHStack_9c,(undefined4 *)(param_1 + 0x60));
      FUN_0041c430(aCStack_40,(LONG *)aCStack_48,&pHStack_9c);
      FUN_004035c0(aCStack_48,(short *)&DAT_004b0380);
      piVar4 = (int *)FUN_0041c430(aCStack_40,aLStack_20,(undefined4 *)aCStack_48);
      iStack_84 = *piVar4 * 2;
      FUN_00410090((int *)aCStack_48);
      switch(iStack_70) {
      default:
        iVar5 = iStack_84;
        break;
      case 1:
        iVar5 = iStack_84 + auStack_80[0];
        break;
      case 2:
        iVar5 = iStack_84 + iStack_6c;
        break;
      case 3:
        iVar5 = FUN_0041ad70(param_1,aCStack_40,iStack_90,iStack_84 + iStack_6c);
        if ((iVar5 == 0) || (iVar5 == pHStack_9c[-3].unused)) {
          uStack_8c = 8;
        }
        else {
          FID_conflict_operator_(&pHStack_9c,(undefined4 *)(param_1 + 0x60));
          FUN_004019b0("...");
          piVar4 = (int *)FUN_0041c430(aCStack_40,aLStack_20,&iStack_98);
          iVar5 = FUN_0041ad70(param_1,aCStack_40,iStack_90,iStack_84 + *piVar4);
          uStack_8c = 4;
        }
        goto LAB_0041a986;
      }
      iVar5 = FUN_0041ad70(param_1,aCStack_40,iStack_90,iVar5);
LAB_0041a986:
      if (*(int *)(param_1 + 0xe8) == 0) {
        if (iVar5 < 0) {
LAB_0041a9de:
          cStack_91 = '\x01';
        }
        else {
          if (pHStack_9c[-3].unused < 5) {
            FUN_0041c0b0(&pHStack_9c,(CSimpleStringT<wchar_t,0> *)auStack_80,3);
            iStack_c = CONCAT31(iStack_c._1_3_,7);
            local_28 = 1;
            bVar3 = FUN_0041c130("...");
            if (bVar3) goto LAB_0041a9de;
          }
          cStack_91 = '\0';
        }
        iStack_c._0_1_ = 3;
        iStack_c._1_3_ = 0;
        if ((local_28 & 1) != 0) {
          FUN_00410090((int *)auStack_80);
        }
        if (cStack_91 != '\0') {
          uStack_8c = uStack_8c | 1;
        }
        bVar3 = FUN_0041c130((LPCSTR)&PTR_004b2d68);
        if (bVar3) {
          uStack_8c = uStack_8c | 2;
        }
      }
      if (iStack_70 == 1) {
LAB_0041aa4f:
        piVar4 = &iStack_98;
LAB_0041aa54:
        FUN_00403360(&pHStack_9c,piVar4);
      }
      else {
        if (iStack_70 == 2) {
          piVar4 = &iStack_88;
          goto LAB_0041aa54;
        }
        if (iStack_70 == 3) {
          if ((uStack_8c & 4) != 0) goto LAB_0041aa4f;
          piVar4 = &iStack_88;
          goto LAB_0041aa54;
        }
      }
      FUN_0041c010();
      this = (CWnd *)pCStack_78;
      if ((*(int *)(param_1 + 0xe8) == 0) && (*(int *)(param_1 + 0x5c) == 0)) {
        piVar4 = (int *)FUN_0041c430(aCStack_40,aLStack_20,&pHStack_9c);
        iVar5 = *piVar4;
        if ((((iStack_74 < iStack_84 + iVar5) &&
             ((*(int *)(param_1 + 0x58) < 1 || ((0 < iVar5 && ((uStack_8c & 2) != 0)))))) ||
            (RStack_68.left = iStack_74, (uStack_8c & 1) != 0)) &&
           (RStack_68.left = iVar5, 0 < iVar5)) {
          RStack_68.left = iStack_84 + iVar5;
        }
        if (tStack_58.right - tStack_58.left < RStack_68.left) {
          RStack_68.left = tStack_58.right - tStack_58.left;
        }
        if (RStack_68.left < 2) {
          RStack_68.left = 2;
        }
        RStack_68.right = tStack_58.right;
        RStack_68.top = tStack_58.top;
        RStack_68.bottom = tStack_58.bottom;
        this = (CWnd *)pCStack_78;
        tStack_58.right = RStack_68.left;
      }
    }
    bVar3 = FUN_0041c130((LPCSTR)&PTR_004b2d68);
    if (bVar3) {
      FUN_00402e90(&pHStack_9c," ");
    }
    SelectObject(pHStack_24,lpString);
    iStack_c = CONCAT31(iStack_c._1_3_,2);
    CClientDC::~CClientDC(aCStack_40);
  }
  BVar6 = IsWindowVisible(*(HWND *)(param_1 + 0x20));
  if (BVar6 != 0) {
    BVar6 = EqualRect((RECT *)(param_1 + 0xb0),&RStack_68);
    if (((BVar6 == 0) && (2 < RStack_68.right - RStack_68.left)) &&
       (2 < RStack_68.bottom - RStack_68.top)) {
      ((RECT *)(param_1 + 0xb0))->left = RStack_68.left;
      *(LONG *)(param_1 + 0xb4) = RStack_68.top;
      *(LONG *)(param_1 + 0xb8) = RStack_68.right;
      *(LONG *)(param_1 + 0xbc) = RStack_68.bottom;
      FUN_00403f50(param_1);
      pHVar13 = *(HWND *)(param_1 + 0x20);
    }
    else {
      iVar5 = FUN_0041b4e0();
      if (iVar5 == 0) goto LAB_0041abc9;
      pHVar13 = *(HWND *)(param_1 + 0x20);
    }
    InvalidateRect(pHVar13,(RECT *)0x0,1);
  }
LAB_0041abc9:
  if (this != (CWnd *)0x0) {
    uVar11 = FUN_0041c1a0((undefined4 *)(param_1 + 100));
    if ((char)uVar11 != '\0') {
      if (*(int *)(param_1 + 0xe8) == 0) {
        CStatusBar::SetPaneText((CStatusBar *)pCStack_2c,0,(wchar_t *)pHStack_9c,1);
      }
      else {
        if (*(int *)(param_1 + 0xec) == 0) goto LAB_0041ac28;
        FID_conflict_SetWindowTextW(pHStack_9c,lpString);
      }
      FID_conflict_operator_(param_1 + 100,&pHStack_9c);
    }
  }
LAB_0041ac28:
  iStack_c._0_1_ = 1;
  piVar4 = (int *)(iStack_88 + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 + -1 < 1) {
    (**(code **)(**(int **)(iStack_88 + -0x10) + 4))((undefined4 *)(iStack_88 + -0x10));
  }
  iStack_c = (uint)iStack_c._1_3_ << 8;
  piVar4 = (int *)(iStack_98 + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 + -1 < 1) {
    (**(code **)(**(int **)(iStack_98 + -0x10) + 4))((undefined4 *)(iStack_98 + -0x10));
  }
  iStack_c = 0xffffffff;
  pHVar13 = pHStack_9c + -1;
  LOCK();
  iVar5 = pHVar13->unused;
  pHVar13->unused = pHVar13->unused + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(*(int *)pHStack_9c[-4].unused + 4))(pHStack_9c + -4);
  }
  ExceptionList = local_14;
  return 1;
}


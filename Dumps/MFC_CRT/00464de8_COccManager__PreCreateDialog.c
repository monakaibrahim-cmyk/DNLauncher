// Address: 0x00464de8
// Name: COccManager::PreCreateDialog
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual struct DLGTEMPLATE const * __thiscall COccManager::PreCreateDialog(struct
   _AFX_OCC_DIALOG_INFO *,struct DLGTEMPLATE const *)
   
   Library: Visual Studio 2005 Release */

DLGTEMPLATE * __thiscall
COccManager::PreCreateDialog(COccManager *this,_AFX_OCC_DIALOG_INFO *param_1,DLGTEMPLATE *param_2)

{
  _AFX_OCC_DIALOG_INFO *p_Var1;
  int iVar2;
  void *pvVar3;
  DLGTEMPLATE *pDVar4;
  DLGITEMTEMPLATE *pDVar5;
  int iVar6;
  WORD *pWVar7;
  DLGITEMTEMPLATE *pDVar8;
  DLGITEMTEMPLATE *pDVar9;
  undefined4 uVar10;
  uint uVar11;
  byte bVar12;
  DLGTEMPLATE *unaff_EDI;
  DLGTEMPLATE *pDVar13;
  
  p_Var1 = param_1;
  iVar2 = IsDialogEx(unaff_EDI);
  pWVar7 = (WORD *)&param_2->cy;
  if (iVar2 == 0) {
    pWVar7 = &param_2->cdit;
  }
  pvVar3 = _calloc(4,*pWVar7 + 1);
  *(void **)(param_1 + 4) = pvVar3;
  pDVar4 = (DLGTEMPLATE *)0x0;
  if (pvVar3 != (void *)0x0) {
    pDVar13 = param_2;
    pDVar4 = (DLGTEMPLATE *)(**(code **)(*(int *)this + 0x1c))(param_2,pvVar3);
    *(DLGTEMPLATE **)param_1 = pDVar4;
    pDVar5 = _AfxFindFirstDlgItem(param_2);
    iVar2 = IsDialogEx(pDVar13);
    iVar6 = IsDialogEx(pDVar13);
    pWVar7 = (WORD *)&param_2->cy;
    if (iVar6 == 0) {
      pWVar7 = &param_2->cdit;
    }
    uVar11 = (uint)*pWVar7;
    pvVar3 = FUN_00452728(uVar11 * 8);
    *(void **)(param_1 + 0xc) = pvVar3;
    _memset(pvVar3,0,uVar11 << 3);
    param_1 = (_AFX_OCC_DIALOG_INFO *)0x0;
    *(uint *)(p_Var1 + 8) = uVar11;
    if (uVar11 != 0) {
      do {
        pDVar8 = _AfxFindNextDlgItem(pDVar5,iVar2);
        iVar6 = (int)param_1 * 8;
        if (iVar2 == 0) {
          *(uint *)(iVar6 + *(int *)(p_Var1 + 0xc)) = (uint)*(ushort *)(pDVar5 + 0x10);
          pDVar9 = pDVar5 + 0x12;
          bVar12 = (byte)*(undefined4 *)pDVar5;
        }
        else {
          *(undefined4 *)(iVar6 + *(int *)(p_Var1 + 0xc)) = *(undefined4 *)(pDVar5 + 0x14);
          pDVar9 = pDVar5 + 0x18;
          bVar12 = (byte)*(undefined4 *)(pDVar5 + 8);
        }
        if (((*(short *)pDVar9 == -1) && (*(short *)(pDVar9 + 2) == 0x80)) && ((bVar12 & 0xf) == 9))
        {
          uVar10 = 1;
        }
        else {
          uVar10 = 0;
        }
        param_1 = param_1 + 1;
        *(undefined4 *)(*(int *)(p_Var1 + 0xc) + 4 + iVar6) = uVar10;
        pDVar5 = pDVar8;
      } while ((int)param_1 < (int)uVar11);
    }
    if (pDVar4 == (DLGTEMPLATE *)0x0) {
      pDVar4 = param_2;
    }
  }
  return pDVar4;
}


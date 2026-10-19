// Address: 0x00464f34
// Name: COccManager::SplitDialogTemplate
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual struct DLGTEMPLATE * __thiscall COccManager::SplitDialogTemplate(struct
   DLGTEMPLATE const *,struct DLGITEMTEMPLATE * *)
   
   Library: Visual Studio 2005 Release */

DLGTEMPLATE * __thiscall
COccManager::SplitDialogTemplate(COccManager *this,DLGTEMPLATE *param_1,DLGITEMTEMPLATE **param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  DLGITEMTEMPLATE *pDVar5;
  DLGTEMPLATE *pDVar6;
  int iVar7;
  WORD *pWVar8;
  short *psVar9;
  int extraout_EDX;
  DLGITEMTEMPLATE *extraout_EDX_00;
  DLGITEMTEMPLATE *pDVar10;
  rsize_t rVar11;
  DLGTEMPLATE *unaff_EDI;
  uint uVar12;
  DLGITEMTEMPLATE *local_10;
  DLGITEMTEMPLATE *local_8;
  
  local_10 = _AfxFindFirstDlgItem(param_1);
  pDVar10 = local_10 + -(int)param_1;
  iVar2 = IsDialogEx(unaff_EDI);
  iVar3 = IsDialogEx(unaff_EDI);
  pWVar8 = (WORD *)&param_1->cy;
  if (iVar3 == 0) {
    pWVar8 = &param_1->cdit;
  }
  uVar4 = (uint)*pWVar8;
  bVar1 = false;
  pDVar5 = local_10;
  uVar12 = uVar4;
  local_8 = pDVar10;
  if (uVar4 != 0) {
    do {
      pDVar5 = _AfxFindNextDlgItem(pDVar5,iVar2);
      psVar9 = (short *)(extraout_EDX + 0x18);
      if (iVar2 == 0) {
        psVar9 = (short *)(extraout_EDX + 0x12);
      }
      if (*psVar9 == 0x7b) {
        bVar1 = true;
      }
      else {
        local_8 = pDVar5 + ((int)local_8 - extraout_EDX);
      }
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (bVar1) {
      pDVar6 = GlobalAlloc(0,(SIZE_T)local_8);
      if (pDVar6 != (DLGTEMPLATE *)0x0) {
        FUN_004527b0(pDVar6,(rsize_t)local_8,param_1,(rsize_t)pDVar10);
        param_1 = (DLGTEMPLATE *)(pDVar10 + (int)&pDVar6->style);
        iVar3 = IsDialogEx(unaff_EDI);
        pWVar8 = (WORD *)&pDVar6->cy;
        if (iVar3 == 0) {
          pWVar8 = &pDVar6->cdit;
        }
        iVar3 = 0;
        *pWVar8 = 0;
        do {
          local_10 = _AfxFindNextDlgItem(local_10,iVar2);
          pDVar10 = extraout_EDX_00 + 0x18;
          if (iVar2 == 0) {
            pDVar10 = extraout_EDX_00 + 0x12;
          }
          if (*(short *)pDVar10 == 0x7b) {
            param_2[iVar3] = extraout_EDX_00;
          }
          else {
            rVar11 = (int)local_10 - (int)extraout_EDX_00;
            FUN_004527b0(param_1,rVar11,extraout_EDX_00,rVar11);
            param_1 = (DLGTEMPLATE *)((int)param_1 + rVar11);
            iVar7 = IsDialogEx(unaff_EDI);
            pWVar8 = (WORD *)&pDVar6->cy;
            if (iVar7 == 0) {
              pWVar8 = &pDVar6->cdit;
            }
            *pWVar8 = *pWVar8 + 1;
            param_2[iVar3] = (DLGITEMTEMPLATE *)0x0;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)uVar4);
        param_2[uVar4] = (DLGITEMTEMPLATE *)0xffffffff;
        return pDVar6;
      }
                    /* WARNING: Subroutine does not return */
      FUN_004529b4();
    }
  }
  *param_2 = (DLGITEMTEMPLATE *)0xffffffff;
  return (DLGTEMPLATE *)0x0;
}


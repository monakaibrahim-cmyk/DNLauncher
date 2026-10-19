// Address: 0x00464cee
// Name: _AfxFindFirstDlgItem
// Category: MFC_CRT


/* Library Function - Single Match
    struct DLGITEMTEMPLATE * __stdcall _AfxFindFirstDlgItem(struct DLGTEMPLATE const *)
   
   Library: Visual Studio 2005 Release */

DLGITEMTEMPLATE * _AfxFindFirstDlgItem(DLGTEMPLATE *param_1)

{
  DWORD *pDVar1;
  int iVar2;
  DLGTEMPLATE *pDVar3;
  uint uVar4;
  DLGTEMPLATE *unaff_ESI;
  
  uVar4 = param_1->style;
  iVar2 = IsDialogEx(unaff_ESI);
  if (iVar2 == 0) {
    pDVar3 = param_1 + 1;
  }
  else {
    uVar4._0_2_ = param_1->y;
    uVar4._2_2_ = param_1->cx;
    pDVar3 = (DLGTEMPLATE *)&param_1[1].cdit;
  }
  if ((WORD)pDVar3->style == 0xffff) {
    pDVar3 = (DLGTEMPLATE *)&pDVar3->dwExtendedStyle;
  }
  else {
    do {
      pDVar1 = &pDVar3->style;
      pDVar3 = (DLGTEMPLATE *)((int)&pDVar3->style + 2);
    } while ((WORD)*pDVar1 != 0);
  }
  if ((WORD)pDVar3->style == 0xffff) {
    pDVar3 = (DLGTEMPLATE *)&pDVar3->dwExtendedStyle;
  }
  else {
    do {
      pDVar1 = &pDVar3->style;
      pDVar3 = (DLGTEMPLATE *)((int)&pDVar3->style + 2);
    } while ((WORD)*pDVar1 != 0);
  }
  do {
    pDVar1 = &pDVar3->style;
    pDVar3 = (DLGTEMPLATE *)((int)&pDVar3->style + 2);
  } while ((WORD)*pDVar1 != 0);
  if ((uVar4 & 0x40) != 0) {
    pDVar3 = (DLGTEMPLATE *)((int)&pDVar3->style + (uint)(iVar2 != 0) * 4 + 2);
    do {
      pDVar1 = &pDVar3->style;
      pDVar3 = (DLGTEMPLATE *)((int)&pDVar3->style + 2);
    } while ((WORD)*pDVar1 != 0);
  }
  return (DLGITEMTEMPLATE *)((uint)((int)&pDVar3->style + 3U) & 0xfffffffc);
}


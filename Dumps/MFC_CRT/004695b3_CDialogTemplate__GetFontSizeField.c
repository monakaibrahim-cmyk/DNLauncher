// Address: 0x004695b3
// Name: CDialogTemplate::GetFontSizeField
// Category: MFC_CRT


/* Library Function - Single Match
    protected: static unsigned char * __cdecl CDialogTemplate::GetFontSizeField(struct DLGTEMPLATE
   const *)
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl CDialogTemplate::GetFontSizeField(DLGTEMPLATE *param_1)

{
  DWORD *pDVar1;
  DLGTEMPLATE *pDVar2;
  
  if (*(short *)((int)&param_1->style + 2) == -1) {
    pDVar2 = (DLGTEMPLATE *)&param_1[1].cdit;
  }
  else {
    pDVar2 = param_1 + 1;
  }
  if ((WORD)pDVar2->style == 0xffff) {
    pDVar2 = (DLGTEMPLATE *)&pDVar2->dwExtendedStyle;
  }
  else {
    do {
      pDVar1 = &pDVar2->style;
      pDVar2 = (DLGTEMPLATE *)((int)&pDVar2->style + 2);
    } while ((WORD)*pDVar1 != 0);
  }
  if ((WORD)pDVar2->style == 0xffff) {
    pDVar2 = (DLGTEMPLATE *)&pDVar2->dwExtendedStyle;
  }
  else {
    do {
      pDVar1 = &pDVar2->style;
      pDVar2 = (DLGTEMPLATE *)((int)&pDVar2->style + 2);
    } while ((WORD)*pDVar1 != 0);
  }
  do {
    pDVar1 = &pDVar2->style;
    pDVar2 = (DLGTEMPLATE *)((int)&pDVar2->style + 2);
  } while ((WORD)*pDVar1 != 0);
  return (uchar *)pDVar2;
}


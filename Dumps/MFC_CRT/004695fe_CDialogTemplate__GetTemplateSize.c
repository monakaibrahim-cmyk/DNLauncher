// Address: 0x004695fe
// Name: CDialogTemplate::GetTemplateSize
// Category: MFC_CRT


/* Library Function - Single Match
    protected: static unsigned int __cdecl CDialogTemplate::GetTemplateSize(struct DLGTEMPLATE const
   *)
   
   Library: Visual Studio 2005 Release */

uint __cdecl CDialogTemplate::GetTemplateSize(DLGTEMPLATE *param_1)

{
  short *psVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  WORD WVar5;
  bool bVar6;
  
  bVar6 = *(short *)((int)&param_1->style + 2) == -1;
  psVar1 = (short *)GetFontSizeField(param_1);
  iVar2 = HasFont(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_0047b6a4(psVar1 + (uint)bVar6 * 2 + 1);
    psVar1 = psVar1 + (uint)bVar6 * 2 + 1 + iVar2 + 1;
  }
  if (bVar6) {
    WVar5 = param_1->cy;
  }
  else {
    WVar5 = param_1->cdit;
  }
  if (WVar5 != 0) {
    do {
      puVar3 = (ushort *)(((int)psVar1 + 3U & 0xfffffffc) + (-(uint)bVar6 & 6) + 0x12);
      if (*puVar3 == 0xffff) {
        puVar3 = puVar3 + 2;
      }
      else {
        do {
          uVar4 = *puVar3;
          puVar3 = puVar3 + 1;
        } while (uVar4 != 0);
      }
      if (*puVar3 == 0xffff) {
        puVar3 = puVar3 + 2;
      }
      else {
        do {
          uVar4 = *puVar3;
          puVar3 = puVar3 + 1;
        } while (uVar4 != 0);
      }
      uVar4 = *puVar3;
      if ((uVar4 != 0) && (!bVar6)) {
        uVar4 = uVar4 - 2;
      }
      WVar5 = WVar5 - 1;
      psVar1 = (short *)((int)puVar3 + uVar4 + 2);
    } while (WVar5 != 0);
  }
  return (int)psVar1 - (int)param_1;
}


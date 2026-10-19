// Address: 0x00469726
// Name: CDialogTemplate::SetFont
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CDialogTemplate::SetFont(wchar_t const *,unsigned short)
   
   Library: Visual Studio 2005 Release */

int __thiscall CDialogTemplate::SetFont(CDialogTemplate *this,wchar_t *param_1,ushort param_2)

{
  int iVar1;
  DLGTEMPLATE *pDVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  void *pvVar6;
  int iVar7;
  rsize_t rVar8;
  int iVar9;
  uint uVar10;
  WORD WVar11;
  int extraout_EDX;
  int iVar12;
  void *pvVar13;
  bool bVar14;
  
  if (*(int *)(this + 4) == 0) {
    return 0;
  }
  pDVar2 = GlobalLock(*(HGLOBAL *)this);
  bVar14 = *(short *)((int)&pDVar2->style + 2) == -1;
  iVar3 = HasFont(pDVar2);
  iVar7 = (uint)bVar14 * 2 + 1;
  iVar1 = iVar7 * 2;
  if (bVar14) {
    uVar10._0_2_ = pDVar2->y;
    uVar10._2_2_ = pDVar2->cx;
    pDVar2->y = (short)(uVar10 | 0x40);
    pDVar2->cx = (short)((uVar10 | 0x40) >> 0x10);
  }
  else {
    pDVar2->style = pDVar2->style | 0x40;
  }
  iVar4 = lstrlenW(param_1);
  if ((iVar4 < 0x20) && (iVar4 = iVar1 + 2 + iVar4 * 2, iVar1 <= iVar4)) {
    puVar5 = (ushort *)GetFontSizeField(pDVar2);
    iVar9 = 0;
    iVar12 = extraout_EDX;
    if (iVar3 != 0) {
      iVar3 = FUN_0047b6a4((short *)(puVar5 + iVar7));
      iVar9 = iVar1 + 2 + iVar3 * 2;
      iVar12 = iVar4;
    }
    pvVar6 = (void *)((uint)(iVar9 + 3 + (int)puVar5) & 0xfffffffc);
    pvVar13 = (void *)((uint)((int)puVar5 + iVar12 + 3) & 0xfffffffc);
    if (bVar14) {
      WVar11 = pDVar2->cy;
    }
    else {
      WVar11 = pDVar2->cdit;
    }
    if ((iVar4 != iVar9) && (WVar11 != 0)) {
      uVar10 = (*(uint *)(this + 4) - (int)pvVar6) + (int)pDVar2;
      if (*(uint *)(this + 4) < uVar10) goto LAB_004697fb;
      FUN_004070b0(pvVar13,uVar10,pvVar6,uVar10);
    }
    *puVar5 = param_2;
    rVar8 = iVar4 + iVar7 * -2;
    FUN_004070b0(puVar5 + iVar7,rVar8,param_1,rVar8);
    *(int *)(this + 4) = (int)pvVar13 + (*(int *)(this + 4) - (int)pvVar6);
    GlobalUnlock(*(HGLOBAL *)this);
    *(undefined4 *)(this + 8) = 0;
    iVar7 = 1;
  }
  else {
LAB_004697fb:
    iVar7 = 0;
  }
  return iVar7;
}


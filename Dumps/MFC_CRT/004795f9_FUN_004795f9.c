// Address: 0x004795f9
// Name: FUN_004795f9
// Category: MFC_CRT


int __cdecl FUN_004795f9(FILE *param_1)

{
  uint uVar1;
  char *pcVar2;
  DWORD *pDVar3;
  uint uVar4;
  FILE *pFVar5;
  DWORD DVar6;
  char *pcVar7;
  FILE *pFVar8;
  char *pcVar9;
  int iVar10;
  bool bVar11;
  int local_10;
  DWORD local_c;
  
  pFVar8 = param_1;
  if (param_1 == (FILE *)0x0) {
    pDVar3 = FUN_0047b849();
    *pDVar3 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  uVar4 = __fileno(param_1);
  if (param_1->_cnt < 0) {
    param_1->_cnt = 0;
  }
  local_c = FUN_00483439(uVar4,0,1);
  if ((int)local_c < 0) {
    return -1;
  }
  uVar1 = param_1->_flag;
  if ((uVar1 & 0x108) == 0) {
    return local_c - param_1->_cnt;
  }
  pcVar7 = param_1->_ptr;
  pcVar9 = param_1->_base;
  local_10 = (int)pcVar7 - (int)pcVar9;
  if ((uVar1 & 3) == 0) {
    if (-1 < (char)uVar1) {
      pDVar3 = FUN_0047b849();
      *pDVar3 = 0x16;
      return -1;
    }
  }
  else {
    pcVar2 = pcVar9;
    if ((*(byte *)((&DAT_004cc260)[(int)uVar4 >> 5] + 4 + (uVar4 & 0x1f) * 0x40) & 0x80) != 0) {
      for (; pcVar2 < pcVar7; pcVar2 = pcVar2 + 1) {
        if (*pcVar2 == '\n') {
          local_10 = local_10 + 1;
        }
      }
    }
  }
  if (local_c != 0) {
    if ((param_1->_flag & 1) != 0) {
      if (param_1->_cnt == 0) {
        local_10 = 0;
      }
      else {
        pFVar5 = (FILE *)(pcVar7 + (param_1->_cnt - (int)pcVar9));
        iVar10 = (uVar4 & 0x1f) * 0x40;
        if ((*(byte *)((&DAT_004cc260)[(int)uVar4 >> 5] + 4 + iVar10) & 0x80) != 0) {
          DVar6 = FUN_00483439(uVar4,0,2);
          if (DVar6 == local_c) {
            pcVar7 = param_1->_base;
            pcVar9 = pcVar7 + (int)&pFVar5->_ptr;
            param_1 = pFVar5;
            for (; pcVar7 < pcVar9; pcVar7 = pcVar7 + 1) {
              if (*pcVar7 == '\n') {
                param_1 = (FILE *)((int)&param_1->_ptr + 1);
              }
            }
            bVar11 = (pFVar8->_flag & 0x2000) == 0;
          }
          else {
            DVar6 = FUN_00483439(uVar4,local_c,0);
            if ((int)DVar6 < 0) {
              return -1;
            }
            pFVar8 = (FILE *)0x200;
            if ((((FILE *)0x200 < pFVar5) || ((param_1->_flag & 8U) == 0)) ||
               ((param_1->_flag & 0x400U) != 0)) {
              pFVar8 = (FILE *)param_1->_bufsiz;
            }
            bVar11 = (*(byte *)((&DAT_004cc260)[(int)uVar4 >> 5] + 4 + iVar10) & 4) == 0;
            param_1 = pFVar8;
          }
          pFVar5 = param_1;
          if (!bVar11) {
            pFVar5 = (FILE *)((int)&param_1->_ptr + 1);
          }
        }
        param_1 = pFVar5;
        local_c = local_c - (int)param_1;
      }
    }
    return local_10 + local_c;
  }
  return local_10;
}


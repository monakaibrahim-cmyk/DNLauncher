// Address: 0x00464d6d
// Name: _AfxFindNextDlgItem
// Category: MFC_CRT


/* Library Function - Single Match
    struct DLGITEMTEMPLATE * __stdcall _AfxFindNextDlgItem(struct DLGITEMTEMPLATE *,int)
   
   Library: Visual Studio 2005 Release */

DLGITEMTEMPLATE * _AfxFindNextDlgItem(DLGITEMTEMPLATE *param_1,int param_2)

{
  DLGITEMTEMPLATE *pDVar1;
  ushort uVar2;
  
  if (param_2 == 0) {
    pDVar1 = param_1 + 0x12;
  }
  else {
    pDVar1 = param_1 + 0x18;
  }
  if (*(ushort *)pDVar1 == 0xffff) {
    pDVar1 = pDVar1 + 4;
  }
  else {
    do {
      uVar2 = *(ushort *)pDVar1;
      pDVar1 = pDVar1 + 2;
    } while (uVar2 != 0);
  }
  if (*(ushort *)pDVar1 == 0xffff) {
    pDVar1 = pDVar1 + 4;
  }
  else {
    do {
      uVar2 = *(ushort *)pDVar1;
      pDVar1 = pDVar1 + 2;
    } while (uVar2 != 0);
  }
  uVar2 = *(ushort *)pDVar1;
  if ((uVar2 != 0) && (param_2 == 0)) {
    uVar2 = uVar2 - 2;
  }
  return (DLGITEMTEMPLATE *)((uint)(pDVar1 + uVar2 + 5) & 0xfffffffc);
}


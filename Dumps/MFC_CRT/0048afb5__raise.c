// Address: 0x0048afb5
// Name: _raise
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2005 Release */

int __cdecl _raise(int _SigNum)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  DWORD *pDVar6;
  DWORD local_34;
  DWORD local_30;
  int local_28;
  int local_20;
  
  pDVar6 = (DWORD *)0x0;
  local_20 = 0;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar5 = &DAT_004cb974;
        iVar3 = DAT_004cb974;
        goto LAB_0048b06a;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_0048b048;
        if (_SigNum != 8) goto LAB_0048b02c;
      }
    }
    pDVar6 = FUN_0047e982();
    if (pDVar6 == (DWORD *)0x0) {
      return -1;
    }
    uVar1 = siglookup(pDVar6[0x17]);
    puVar5 = (undefined4 *)(uVar1 + 8);
    pcVar2 = (code *)*puVar5;
  }
  else {
    if (_SigNum == 0xf) {
      puVar5 = &DAT_004cb980;
      iVar3 = DAT_004cb980;
    }
    else if (_SigNum == 0x15) {
      puVar5 = &DAT_004cb978;
      iVar3 = DAT_004cb978;
    }
    else {
      if (_SigNum != 0x16) {
LAB_0048b02c:
        pDVar6 = FUN_0047b849();
        *pDVar6 = 0x16;
        FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_0048b048:
      puVar5 = &DAT_004cb97c;
      iVar3 = DAT_004cb97c;
    }
LAB_0048b06a:
    local_20 = 1;
    pcVar2 = (code *)FUN_0047e7dd(iVar3);
  }
  iVar3 = 0;
  if (pcVar2 == (code *)&DAT_00000001) {
    return 0;
  }
  if (pcVar2 == (code *)0x0) {
    iVar3 = __exit(3);
  }
  if (local_20 != iVar3) {
    __lock(iVar3);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = pDVar6[0x18];
    pDVar6[0x18] = 0;
    if (_SigNum == 8) {
      local_34 = pDVar6[0x19];
      pDVar6[0x19] = 0x8c;
      goto LAB_0048b0ce;
    }
  }
  else {
LAB_0048b0ce:
    if (_SigNum == 8) {
      for (local_28 = DAT_004c3d60; local_28 < DAT_004c3d64 + DAT_004c3d60; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar6[0x17]) = 0;
      }
      goto LAB_0048b108;
    }
  }
  uVar4 = __encoded_null();
  *puVar5 = uVar4;
LAB_0048b108:
  FUN_0048b129();
  if (_SigNum == 8) {
    (*pcVar2)(8,pDVar6[0x19]);
  }
  else {
    (*pcVar2)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  pDVar6[0x18] = local_30;
  if (_SigNum == 8) {
    pDVar6[0x19] = local_34;
  }
  return 0;
}


// Address: 0x00477353
// Name: FUN_00477353
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int __cdecl FUN_00477353(FILE *param_1,byte *param_2)

{
  DWORD *pDVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int local_20;
  
  local_20 = 0;
  if ((param_1 == (FILE *)0x0) || (param_2 == (byte *)0x0)) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  FUN_0047a953((uint)param_1);
  if ((param_1->_flag & 0x40) == 0) {
    iVar2 = __fileno(param_1);
    if ((iVar2 == -1) || (iVar2 = __fileno(param_1), iVar2 == -2)) {
      puVar4 = &DAT_004c3d70;
    }
    else {
      iVar2 = __fileno(param_1);
      uVar3 = __fileno(param_1);
      puVar4 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_004cc260)[iVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x7f) == 0) {
      iVar2 = __fileno(param_1);
      if ((iVar2 == -1) || (iVar2 = __fileno(param_1), iVar2 == -2)) {
        puVar4 = &DAT_004c3d70;
      }
      else {
        iVar2 = __fileno(param_1);
        uVar3 = __fileno(param_1);
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_004cc260)[iVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_0047745b;
    }
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    local_20 = -1;
  }
LAB_0047745b:
  if (local_20 == 0) {
    iVar2 = __stbuf(param_1);
    local_20 = FUN_004836a8(param_1,param_2,(localeinfo_struct *)0x0,(wchar_t *)&stack0x0000000c);
    __ftbuf(iVar2,param_1);
  }
  FUN_00477498();
  return local_20;
}


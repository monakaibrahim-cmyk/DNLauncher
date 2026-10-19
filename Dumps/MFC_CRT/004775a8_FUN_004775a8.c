// Address: 0x004775a8
// Name: FUN_004775a8
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int __cdecl
FUN_004775a8(undefined *param_1,FILE *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  DWORD *pDVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int local_20;
  
  local_20 = 0;
  if ((param_2 == (FILE *)0x0) || (param_3 == 0)) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  FUN_0047a953((uint)param_2);
  if ((param_2->_flag & 0x40) == 0) {
    iVar2 = __fileno(param_2);
    if ((iVar2 == -1) || (iVar2 = __fileno(param_2), iVar2 == -2)) {
      puVar4 = &DAT_004c3d70;
    }
    else {
      iVar2 = __fileno(param_2);
      uVar3 = __fileno(param_2);
      puVar4 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_004cc260)[iVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x7f) == 0) {
      iVar2 = __fileno(param_2);
      if ((iVar2 == -1) || (iVar2 = __fileno(param_2), iVar2 == -2)) {
        puVar4 = &DAT_004c3d70;
      }
      else {
        iVar2 = __fileno(param_2);
        uVar3 = __fileno(param_2);
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x40 + (&DAT_004cc260)[iVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_004776ad;
    }
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    local_20 = -1;
  }
LAB_004776ad:
  if (local_20 == 0) {
    local_20 = (*(code *)param_1)(param_2,param_3,param_4,param_5);
  }
  FUN_004776dd();
  return local_20;
}


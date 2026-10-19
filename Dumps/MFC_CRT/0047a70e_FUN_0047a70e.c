// Address: 0x0047a70e
// Name: FUN_0047a70e
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x0047a7e1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0047a70e(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_004cae7c != 1) {
    _DAT_004cae78 = 1;
    DAT_004cae74 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_0047e7dd(DAT_004cd38c);
      piVar3 = (int *)FUN_0047e7dd(DAT_004cd388);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_0047e7dd(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_0047a5d1((undefined4 *)&DAT_0049c828);
    }
    FUN_0047a5d1((undefined4 *)&DAT_0049c830);
  }
  FUN_0047a7db();
  if (param_3 != 0) {
    return;
  }
  DAT_004cae7c = 1;
  FUN_0047efa9(8);
  ___crtExitProcess(param_1);
  return;
}


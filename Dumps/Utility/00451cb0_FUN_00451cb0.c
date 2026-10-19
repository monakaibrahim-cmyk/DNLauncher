// Address: 0x00451cb0
// Name: FUN_00451cb0
// Category: Utility


void __cdecl
FUN_00451cb0(int *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
            undefined1 param_6,int param_7,char *param_8,int param_9)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  int iVar6;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    pcVar3 = param_3;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    pvVar4 = FUN_0044d9e0(param_1,(size_t)(pcVar3 + (1 - (int)(param_3 + 1))));
    *(void **)(param_2 + 0xa0) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      FUN_004451d0((int)param_1,"Insufficient memory for pCAL purpose.");
      return;
    }
    _memcpy(pvVar4,param_3,(size_t)(pcVar3 + (1 - (int)(param_3 + 1))));
    *(undefined4 *)(param_2 + 0xa4) = param_4;
    *(undefined1 *)(param_2 + 0xb5) = (undefined1)param_7;
    *(undefined4 *)(param_2 + 0xa8) = param_5;
    *(undefined1 *)(param_2 + 0xb4) = param_6;
    pcVar3 = param_8;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    pvVar4 = FUN_0044d9e0(param_1,(size_t)(pcVar3 + (1 - (int)(param_8 + 1))));
    *(void **)(param_2 + 0xac) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      FUN_004451d0((int)param_1,"Insufficient memory for pCAL units.");
      return;
    }
    _memcpy(pvVar4,param_8,(size_t)(pcVar3 + (1 - (int)(param_8 + 1))));
    pvVar4 = FUN_0044d9e0(param_1,param_7 * 4 + 4);
    *(void **)(param_2 + 0xb0) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      FUN_004451d0((int)param_1,"Insufficient memory for pCAL params.");
      return;
    }
    iVar6 = 0;
    *(undefined4 *)((int)pvVar4 + param_7 * 4) = 0;
    if (0 < param_7) {
      do {
        pcVar5 = *(char **)(param_9 + iVar6 * 4);
        pcVar3 = pcVar5 + 1;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        pvVar4 = FUN_0044d9e0(param_1,(size_t)(pcVar5 + (1 - (int)pcVar3)));
        *(void **)(*(int *)(param_2 + 0xb0) + iVar6 * 4) = pvVar4;
        piVar1 = (int *)(*(int *)(param_2 + 0xb0) + iVar6 * 4);
        if (*piVar1 == 0) {
          FUN_004451d0((int)param_1,"Insufficient memory for pCAL parameter.");
          return;
        }
        _memcpy((void *)*piVar1,*(void **)(param_9 + iVar6 * 4),(size_t)(pcVar5 + (1 - (int)pcVar3))
               );
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_7);
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x80;
  }
  return;
}


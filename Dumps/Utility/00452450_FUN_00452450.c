// Address: 0x00452450
// Name: FUN_00452450
// Category: Utility


void __cdecl FUN_00452450(int *param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  void *_Dst;
  char *pcVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  piVar3 = param_1;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    _Dst = FUN_0044d9e0(param_1,(*(int *)(param_2 + 0xd8) + param_4) * 0x10);
    if (_Dst == (void *)0x0) {
      FUN_004451d0((int)param_1,"No memory for sPLT palettes.");
      return;
    }
    _memcpy(_Dst,*(void **)(param_2 + 0xd4),*(int *)(param_2 + 0xd8) << 4);
    FUN_0044d9b0((int)param_1,*(void **)(param_2 + 0xd4));
    *(undefined4 *)(param_2 + 0xd4) = 0;
    param_1 = (int *)0x0;
    if (0 < param_4) {
      piVar7 = (int *)(param_3 + 0xc);
      do {
        pcVar4 = (char *)piVar7[-3];
        puVar6 = (undefined4 *)((*(int *)(param_2 + 0xd8) + (int)param_1) * 0x10 + (int)_Dst);
        pcVar1 = pcVar4 + 1;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        pvVar5 = FUN_0044d9e0(piVar3,(size_t)(pcVar4 + (1 - (int)pcVar1)));
        *puVar6 = pvVar5;
        if (pvVar5 == (void *)0x0) {
          FUN_004451d0((int)piVar3,"Out of memory while processing sPLT chunk");
        }
        _memcpy((void *)*puVar6,(void *)piVar7[-3],(size_t)(pcVar4 + (1 - (int)pcVar1)));
        pvVar5 = FUN_0044d9e0(piVar3,*piVar7 * 10);
        puVar6[2] = pvVar5;
        if (pvVar5 == (void *)0x0) {
          FUN_004451d0((int)piVar3,"Out of memory while processing sPLT chunk");
          FUN_0044d9b0((int)piVar3,(void *)*puVar6);
          *puVar6 = 0;
        }
        _memcpy((void *)puVar6[2],(void *)piVar7[-1],*piVar7 * 10);
        puVar6[3] = *piVar7;
        *(char *)(puVar6 + 1) = (char)piVar7[-2];
        param_1 = (int *)((int)param_1 + 1);
        piVar7 = piVar7 + 4;
      } while ((int)param_1 < param_4);
    }
    *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 0xd8) + param_4;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
    *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x20;
    *(void **)(param_2 + 0xd4) = _Dst;
  }
  return;
}


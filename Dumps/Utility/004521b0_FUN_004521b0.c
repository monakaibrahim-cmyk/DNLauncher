// Address: 0x004521b0
// Name: FUN_004521b0
// Category: Utility


undefined4 __cdecl FUN_004521b0(int *param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  char *pcVar5;
  size_t _Size;
  void *pvVar6;
  undefined4 *puVar7;
  int *piVar8;
  size_t _Size_00;
  int local_4;
  
  if (((param_1 == (int *)0x0) || (param_2 == 0)) || (param_4 == 0)) {
    return 0;
  }
  iVar3 = *(int *)(param_2 + 0x34);
  iVar4 = *(int *)(param_2 + 0x30) + param_4;
  if (iVar3 < iVar4) {
    pvVar6 = *(void **)(param_2 + 0x38);
    if (pvVar6 == (void *)0x0) {
      *(int *)(param_2 + 0x34) = param_4 + 8;
      *(undefined4 *)(param_2 + 0x30) = 0;
      pvVar6 = FUN_0044d9e0(param_1,(param_4 + 8) * 0x10);
      *(void **)(param_2 + 0x38) = pvVar6;
      if (pvVar6 != (void *)0x0) {
        *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x4000;
        goto LAB_00452261;
      }
    }
    else {
      iVar4 = iVar4 + 8;
      *(int *)(param_2 + 0x34) = iVar4;
      _Dst = FUN_0044d9e0(param_1,iVar4 * 0x10);
      *(void **)(param_2 + 0x38) = _Dst;
      if (_Dst != (void *)0x0) {
        _memcpy(_Dst,pvVar6,iVar3 << 4);
        FUN_0044d9b0((int)param_1,pvVar6);
        goto LAB_00452261;
      }
      FUN_0044d9b0((int)param_1,pvVar6);
    }
    return 1;
  }
LAB_00452261:
  local_4 = 0;
  if (0 < param_4) {
    puVar7 = (undefined4 *)(param_3 + 8);
    do {
      pcVar5 = (char *)puVar7[-1];
      piVar8 = (int *)(*(int *)(param_2 + 0x30) * 0x10 + *(int *)(param_2 + 0x38));
      if (pcVar5 != (char *)0x0) {
        pcVar1 = pcVar5 + 1;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        _Size = (int)pcVar5 - (int)pcVar1;
        if ((int)puVar7[-2] < 1) {
          pcVar5 = (char *)*puVar7;
          if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
            _Size_00 = 0;
            *piVar8 = -1;
          }
          else {
            pcVar1 = pcVar5 + 1;
            do {
              cVar2 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar2 != '\0');
            _Size_00 = (int)pcVar5 - (int)pcVar1;
            *piVar8 = puVar7[-2];
          }
          pvVar6 = FUN_0044d9e0(param_1,_Size_00 + 4 + _Size);
          piVar8[1] = (int)pvVar6;
          if (pvVar6 == (void *)0x0) {
            return 1;
          }
          _memcpy(pvVar6,(void *)puVar7[-1],_Size);
          *(undefined1 *)(_Size + piVar8[1]) = 0;
          pvVar6 = (void *)(_Size + 1 + piVar8[1]);
          piVar8[2] = (int)pvVar6;
          if (_Size_00 != 0) {
            _memcpy(pvVar6,(void *)*puVar7,_Size_00);
          }
          *(undefined1 *)(_Size_00 + piVar8[2]) = 0;
          piVar8[3] = _Size_00;
          *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
        }
        else {
          FUN_004451d0((int)param_1,"iTXt chunk not supported.");
        }
      }
      local_4 = local_4 + 1;
      puVar7 = puVar7 + 4;
    } while (local_4 < param_4);
  }
  return 0;
}


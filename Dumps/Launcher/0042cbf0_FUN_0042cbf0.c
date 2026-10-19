// Address: 0x0042cbf0
// Name: FUN_0042cbf0
// Category: Launcher


void __thiscall FUN_0042cbf0(void *this,undefined4 param_1,undefined4 *param_2)

{
  rsize_t _DstSize;
  undefined4 uVar1;
  rsize_t _DstSize_00;
  undefined4 *in_EAX;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  uint local_8;
  
  uVar1 = *in_EAX;
  iVar5 = *(int *)((int)this + 4);
  if (iVar5 == 0) {
    iVar6 = 0;
    iVar4 = 0;
  }
  else {
    iVar6 = *(int *)((int)this + 0xc) - iVar5 >> 2;
    iVar4 = *(int *)((int)this + 8) - iVar5 >> 2;
  }
  uVar8 = CONCAT44(iVar6,iVar5);
  if (iVar4 == 0x3fffffff) {
    uVar8 = FUN_004065a0();
  }
  local_8 = (uint)((ulonglong)uVar8 >> 0x20);
  iVar5 = (int)uVar8;
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)((int)this + 8) - iVar5 >> 2;
  }
  if (iVar6 + 1U <= local_8) {
    pvVar2 = *(void **)((int)this + 8);
    if ((int)pvVar2 - (int)param_2 >> 2 == 0) {
      FUN_00402710(param_2 + 1,param_2);
      puVar7 = *(undefined4 **)((int)this + 8);
      iVar5 = 1 - ((int)puVar7 - (int)param_2 >> 2);
      if (iVar5 != 0) {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = uVar1;
          puVar7 = puVar7 + 1;
        }
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 4;
      puVar7 = (undefined4 *)(*(int *)((int)this + 8) + -4);
      if (param_2 != puVar7) {
        do {
          *param_2 = uVar1;
          param_2 = param_2 + 1;
        } while (param_2 != puVar7);
        return;
      }
    }
    else {
      pvVar3 = FUN_00402710(pvVar2,(void *)((int)pvVar2 + -4));
      iVar5 = ((int)pvVar2 + -4) - (int)param_2 >> 2;
      *(void **)((int)this + 8) = pvVar3;
      if (0 < iVar5) {
        _memmove_s((void *)((int)pvVar2 + iVar5 * -4),iVar5 * 4,param_2,iVar5 * 4);
      }
      puVar7 = param_2 + 1;
      for (; param_2 != puVar7; param_2 = param_2 + 1) {
        *param_2 = uVar1;
      }
    }
    return;
  }
  if (0x3fffffff - (local_8 >> 1) < local_8) {
    local_8 = 0;
  }
  else {
    local_8 = local_8 + (local_8 >> 1);
  }
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)((int)this + 8) - iVar5 >> 2;
  }
  if (local_8 < iVar6 + 1U) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 8) - iVar5 >> 2;
    }
    local_8 = iVar5 + 1;
  }
  pvVar2 = (void *)FUN_00402340(local_8);
  iVar5 = (int)param_2 - (int)*(void **)((int)this + 4) >> 2;
  _DstSize = iVar5 * 4;
  if (iVar5 != 0) {
    _memmove_s(pvVar2,_DstSize,*(void **)((int)this + 4),_DstSize);
  }
  *(undefined4 *)(_DstSize + (int)pvVar2) = uVar1;
  iVar5 = *(int *)((int)this + 8) - (int)param_2 >> 2;
  if (iVar5 != 0) {
    _DstSize_00 = iVar5 * 4;
    _memmove_s((void *)(_DstSize + 4 + (int)pvVar2),_DstSize_00,param_2,_DstSize_00);
  }
  if (*(void **)((int)this + 4) == (void *)0x0) {
    *(void **)((int)this + 0xc) = (void *)((int)pvVar2 + local_8 * 4);
    *(int *)((int)this + 8) = (int)pvVar2 + 4;
    *(void **)((int)this + 4) = pvVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}


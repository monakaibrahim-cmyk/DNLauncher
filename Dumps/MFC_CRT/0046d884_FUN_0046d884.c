// Address: 0x0046d884
// Name: FUN_0046d884
// Category: MFC_CRT


void __fastcall FUN_0046d884(CDataSourceControl *param_1)

{
  longlong lVar1;
  int *piVar2;
  void *pvVar3;
  void **ppvVar4;
  int iVar5;
  int iVar6;
  __POSITION *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x38)) {
        local_c = 0;
        do {
          VariantClear((VARIANTARG *)(*(int *)(param_1 + 0x40) + local_c));
          local_c = local_c + 0x10;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x38));
        if (0 < *(int *)(param_1 + 0x38)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(param_1 + 0x40));
        }
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    iVar5 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      piVar2 = (int *)(*(int *)(param_1 + 0x14) + 0x24);
      do {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(*piVar2 + 0xc);
        iVar5 = iVar5 + 1;
        piVar2 = piVar2 + 10;
      } while (iVar5 < *(int *)(param_1 + 0x10));
    }
    if (0 < (int)*(uint *)(param_1 + 0x38)) {
      lVar1 = (ulonglong)*(uint *)(param_1 + 0x38) * 0x30;
      pvVar3 = FUN_00452728(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
      *(void **)(param_1 + 0x3c) = pvVar3;
    }
    local_c = 0;
    local_10 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      local_8 = 0;
      do {
        local_14 = *(__POSITION **)(*(int *)(*(int *)(param_1 + 0x14) + 0x24 + local_8) + 4);
        if (local_14 != (__POSITION *)0x0) {
          iVar5 = local_c * 0x30;
          do {
            ppvVar4 = CPtrList::GetNext(*(CPtrList **)(*(int *)(param_1 + 0x14) + 0x24 + local_8),
                                        &local_14);
            pvVar3 = *ppvVar4;
            CDataSourceControl::CopyColumnID
                      (param_1,(tagDBCOLUMNID *)(*(int *)(param_1 + 0x3c) + iVar5),
                       (tagDBCOLUMNID *)(*(int *)(param_1 + 0x14) + local_8));
            *(int *)(iVar5 + 0x18 + *(int *)(param_1 + 0x3c)) = local_c << 4;
            *(undefined4 *)(iVar5 + 0x1c + *(int *)(param_1 + 0x3c)) = 0;
            *(undefined4 *)(iVar5 + 0x24 + *(int *)(param_1 + 0x3c)) = 0xffffffff;
            *(undefined4 *)(iVar5 + 0x20 + *(int *)(param_1 + 0x3c)) = 0xffffffff;
            local_c = local_c + 1;
            *(undefined4 *)(iVar5 + 0x28 + *(int *)(param_1 + 0x3c)) = 1;
            *(undefined4 *)(iVar5 + 0x2c + *(int *)(param_1 + 0x3c)) =
                 *(undefined4 *)((int)pvVar3 + 0xa0);
            iVar5 = iVar5 + 0x30;
          } while (local_14 != (__POSITION *)0x0);
        }
        local_10 = local_10 + 1;
        local_8 = local_8 + 0x28;
      } while (local_10 < *(int *)(param_1 + 0x10));
    }
    iVar5 = 0;
    (**(code **)(**(int **)(param_1 + 8) + 0x10))
              (*(int **)(param_1 + 8),*(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
               *(int *)(param_1 + 0x38) << 4,0);
    if (*(uint *)(param_1 + 0x38) != 0) {
      lVar1 = (ulonglong)*(uint *)(param_1 + 0x38) * 0x10;
      pvVar3 = FUN_00452728(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
      *(void **)(param_1 + 0x40) = pvVar3;
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      iVar6 = 0;
      do {
        _memset((void *)(*(int *)(param_1 + 0x40) + iVar6),0,0x10);
        *(undefined2 *)(iVar6 + *(int *)(param_1 + 0x40)) = 0;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar5 < *(int *)(param_1 + 0x38));
    }
    CDataSourceControl::GetBoundClientRow(param_1);
    (**(code **)(*(int *)param_1 + 0x10))();
  }
  else {
    CDataSourceControl::GetBoundClientRow(param_1);
    (**(code **)(*(int *)param_1 + 0x10))();
  }
  return;
}


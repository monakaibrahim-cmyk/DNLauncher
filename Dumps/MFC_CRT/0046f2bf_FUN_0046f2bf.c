// Address: 0x0046f2bf
// Name: FUN_0046f2bf
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_0046f2bf(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *_Memory;
  CRowset<ATL::CAccessorBase> *this;
  int iVar3;
  void **ppvVar4;
  int iVar5;
  __POSITION *local_18;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  *param_1 = CDataSourceControl::vftable;
  local_8 = 0;
  if ((((param_1[0x16] != 0) && ((undefined4 *)param_1[0x14] != (undefined4 *)0x0)) &&
      (puVar1 = *(undefined4 **)param_1[0x14],
      iVar3 = (**(code **)*puVar1)(puVar1,&DAT_004ab84c,&local_18), -1 < iVar3)) &&
     (local_18 != (__POSITION *)0x0)) {
    local_14[0] = (int *)0x0;
    iVar3 = (**(code **)(*(int *)local_18 + 0x10))(local_18,&DAT_004ab98c,local_14);
    if ((-1 < iVar3) && (local_14[0] != (int *)0x0)) {
      (**(code **)(*local_14[0] + 0x18))(local_14[0],param_1[0x16]);
      (**(code **)(*local_14[0] + 8))(local_14[0]);
    }
    (**(code **)(*(int *)local_18 + 8))(local_18);
  }
  while (((param_1[9] != 0 && (piVar2 = *(int **)(param_1[7] + 8), piVar2 != (int *)0x0)) &&
         ((int *)*piVar2 != (int *)0x0))) {
    (**(code **)(*(int *)*piVar2 + 0xbc))(piVar2[2],0);
    *(undefined4 *)(*piVar2 + 0x98) = 0;
  }
  CPtrList::RemoveAll((CPtrList *)(param_1 + 6));
  if (param_1[0x10] != 0) {
    iVar5 = 0;
    iVar3 = param_1[0xe];
    if (0 < iVar3) {
      local_14[0] = (int *)0x0;
      do {
        VariantClear((VARIANTARG *)(param_1[0x10] + (int)local_14[0]));
        local_14[0] = local_14[0] + 4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_1[0xe]);
      iVar3 = param_1[0xe];
    }
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0xf]);
    }
  }
  piVar2 = (int *)param_1[2];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)param_1[3];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if (param_1[5] != 0) {
    local_14[0] = (int *)0x0;
    if (0 < (int)param_1[4]) {
      iVar3 = 0;
      do {
        local_18 = *(__POSITION **)(*(int *)(param_1[5] + 0x24 + iVar3) + 4);
        while (local_18 != (__POSITION *)0x0) {
          ppvVar4 = CPtrList::GetNext(*(CPtrList **)(param_1[5] + 0x24 + iVar3),&local_18);
          *(undefined4 *)((int)*ppvVar4 + 0x98) = 0;
        }
        CPtrList::RemoveAll(*(CPtrList **)(param_1[5] + 0x24 + iVar3));
        piVar2 = *(int **)(param_1[5] + 0x24 + iVar3);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))(1);
        }
        local_14[0] = (int *)((int)local_14[0] + 1);
        iVar3 = iVar3 + 0x28;
      } while ((int)local_14[0] < (int)param_1[4]);
    }
    CoTaskMemFree((LPVOID)param_1[5]);
  }
  if ((LPVOID)param_1[0xd] != (LPVOID)0x0) {
    CoTaskMemFree((LPVOID)param_1[0xd]);
  }
  if ((CDynamicAccessor *)param_1[0x15] != (CDynamicAccessor *)0x0) {
    ATL::CDynamicAccessor::ReleaseAccessors
              ((CDynamicAccessor *)param_1[0x15],*(IUnknown **)param_1[0x14]);
    FUN_00469de6(param_1[0x15]);
  }
  _Memory = (void *)param_1[0x15];
  if (_Memory == (void *)0x0) {
    this = (CRowset<ATL::CAccessorBase> *)param_1[0x14];
    if (this == (CRowset<ATL::CAccessorBase> *)0x0) {
      piVar2 = (int *)param_1[0x13];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar2 = (int *)param_1[0x12];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      local_8 = 0xffffffff;
      FUN_00467bd9((CPtrList *)(param_1 + 6));
      return;
    }
    ATL::CRowset<ATL::CAccessorBase>::~CRowset<ATL::CAccessorBase>(this);
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  FUN_00469de6((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


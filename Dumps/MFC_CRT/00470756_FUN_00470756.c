// Address: 0x00470756
// Name: FUN_00470756
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __fastcall FUN_00470756(CCmdTarget *param_1)

{
  __POSITION *p_Var1;
  void **ppvVar2;
  void *pvVar3;
  ulong uVar4;
  __POSITION *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  *(undefined ***)param_1 = COleControlContainer::vftable;
  local_14[0] = *(__POSITION **)(param_1 + 0x44);
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  if (local_14[0] != (__POSITION *)0x0) {
    do {
      p_Var1 = local_14[0];
      ppvVar2 = CPtrList::GetNext((CPtrList *)(param_1 + 0x40),local_14);
      pvVar3 = *ppvVar2;
      if (((pvVar3 != (void *)0x0) && (*(int *)((int)pvVar3 + 4) != 0)) &&
         (*(int *)(*(int *)((int)pvVar3 + 4) + 0x90) == 0)) {
        CPtrList::RemoveAt((CPtrList *)(param_1 + 0x40),p_Var1);
        FUN_0046fed9((int)pvVar3);
                    /* WARNING: Subroutine does not return */
        _free(pvVar3);
      }
    } while (local_14[0] != (__POSITION *)0x0);
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    do {
      pvVar3 = (void *)RemoveHead(param_1 + 0x40);
      if (pvVar3 != (void *)0x0) {
        FUN_0046fed9((int)pvVar3);
                    /* WARNING: Subroutine does not return */
        _free(pvVar3);
      }
    } while (*(int *)(param_1 + 0x4c) != 0);
  }
  FUN_00467839((int)(param_1 + 0x24));
  _AfxRelease((IUnknown **)(param_1 + 100));
  if (0 < *(int *)(param_1 + 4)) {
    local_14[0] = (__POSITION *)0x0;
    local_8 = CONCAT31(local_8._1_3_,3);
    uVar4 = CCmdTarget::InternalQueryInterface(param_1,&DAT_004ab6fc,local_14);
    if (-1 < (int)uVar4) {
      _AfxReleaseManagedRefs((IUnknown *)local_14[0]);
    }
    local_8._0_1_ = 2;
    if (local_14[0] != (__POSITION *)0x0) {
      (**(code **)(*(int *)local_14[0] + 8))(local_14[0]);
    }
  }
  local_8._0_1_ = 1;
  FUN_00467bd9((CPtrList *)(param_1 + 0x40));
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00467a0e((undefined4 *)(param_1 + 0x24));
  local_8 = 0xffffffff;
  CCmdTarget::~CCmdTarget(param_1);
  return;
}


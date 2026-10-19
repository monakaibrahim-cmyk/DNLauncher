// Address: 0x00470d1b
// Name: FUN_00470d1b
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_00470d1b(uint param_1,__POSITION *param_2,undefined4 *param_3)

{
  void *pvVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  void **ppvVar5;
  void *pvVar6;
  
  uVar4 = param_1;
  pvVar6 = (void *)0x0;
  *param_3 = 0;
  param_1 = 0;
  if (((uint)param_2 & 1) != 0) {
    lVar3 = (ulonglong)*(uint *)(uVar4 - 0x30) * 4;
    pvVar6 = FUN_00452728(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
    param_2 = *(__POSITION **)(uVar4 - 0x38);
    while (param_2 != (__POSITION *)0x0) {
      ppvVar5 = CPtrList::GetNext((CPtrList *)(uVar4 - 0x3c),&param_2);
      pvVar1 = *ppvVar5;
      if (*(int *)((int)pvVar1 + 4) != 0) {
        piVar2 = *(int **)(*(int *)((int)pvVar1 + 4) + 0x50);
        (**(code **)(*piVar2 + 4))(piVar2);
        *(undefined4 *)((int)pvVar6 + param_1 * 4) =
             *(undefined4 *)(*(int *)((int)pvVar1 + 4) + 0x50);
        param_1 = param_1 + 1;
      }
    }
  }
  param_2 = FUN_00452728(0x3c);
  if (param_2 != (__POSITION *)0x0) {
    CEnumUnknown::CEnumUnknown((CEnumUnknown *)param_2,pvVar6,param_1);
  }
  FUN_00470de2();
  return;
}


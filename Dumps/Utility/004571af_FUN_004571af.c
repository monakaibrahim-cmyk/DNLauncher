// Address: 0x004571af
// Name: FUN_004571af
// Category: Utility


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4
FUN_004571af(CWnd *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  CWnd *pCVar1;
  CNoTrackObject *pCVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  CNoTrackObject *pCVar6;
  undefined4 *puVar7;
  undefined4 local_48 [7];
  tagRECT local_2c;
  CNoTrackObject *local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x4571bb;
  pCVar2 = CThreadLocalObject::GetData((CThreadLocalObject *)&DAT_004c8efc,FUN_00452a02);
  iVar5 = param_3;
  pCVar1 = param_1;
  local_1c = pCVar2;
  if (pCVar2 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  pCVar6 = pCVar2 + 0x58;
  puVar7 = local_48;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(pCVar2 + 0x58) = param_2;
  *(undefined4 *)(pCVar2 + 0x60) = param_4;
  *(int *)(pCVar2 + 0x5c) = param_3;
  *(undefined4 *)(pCVar2 + 100) = param_5;
  local_8 = 0;
  if ((param_3 == 2) && (*(int *)(param_1 + 0x4c) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x60))(0);
  }
  param_1 = (CWnd *)0x0;
  if (iVar5 == 0x110) {
    FUN_00455449(pCVar1,&local_2c,(ulong *)&param_1);
  }
  param_5 = (**(code **)(*(int *)pCVar1 + 0x108))(iVar5,param_4,param_5);
  if (iVar5 == 0x110) {
    _AfxPostInitDialog(pCVar1,&local_2c,(ulong)param_1);
    uVar3 = FUN_0045728c();
    return uVar3;
  }
  puVar7 = local_48;
  pCVar2 = pCVar2 + 0x58;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    pCVar2 = pCVar2 + 4;
  }
  return param_5;
}


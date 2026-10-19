// Address: 0x0040a4b0
// Name: FUN_0040a4b0
// Category: Launcher


void FUN_0040a4b0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  CStringData *pCVar3;
  undefined4 uVar4;
  undefined4 *this;
  CStringData *pCVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00498d90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FID_conflict_operator_((int *)(param_1 + 0x78),&param_2);
  iVar2 = param_2;
  pCVar5 = (CStringData *)(param_2 + -0x10);
  pCVar3 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar5);
  uVar4 = FUN_00431890((ushort *)(pCVar3 + 0x10));
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  pCVar3 = ATL::CSimpleStringT<wchar_t,0>::CloneData
                     ((CStringData *)(*(int *)(param_1 + 0x78) + -0x10));
  pCVar3 = pCVar3 + 0x10;
  local_4._0_1_ = 1;
  this = FUN_004037b0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00409ce0(this,(int)pCVar3);
  local_4 = 0xffffffff;
  piVar1 = (int *)(iVar2 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)pCVar5 + 4))();
  }
  ExceptionList = local_c;
  return;
}


// Address: 0x0046e21a
// Name: CDataSourceControl::GetMetaData
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: long __thiscall CDataSourceControl::GetMetaData(void)
   
   Library: Visual Studio 2005 Release */

long __thiscall CDataSourceControl::GetMetaData(CDataSourceControl *this)

{
  uint uVar1;
  int iVar2;
  CRowset<ATL::CAccessorBase> *this_00;
  undefined4 uVar3;
  CDynamicAccessor *this_01;
  void *this_02;
  LPVOID _Dst;
  void **ppvVar4;
  long lVar5;
  int *piVar6;
  CPtrList *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  CPtrList *local_90;
  LPVOID local_8c;
  void *local_88;
  undefined4 local_80;
  int local_7c;
  IRowset *local_78;
  CPtrList *local_74;
  int *local_70;
  IRowset *local_6c;
  tagDBCOLUMNID local_68 [24];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  tagDBCOLUMNID local_38 [24];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&local_7c;
  local_7c = 0x1c;
  local_80 = 0x46e238;
  local_8c = *(LPVOID *)(this + 0x14);
  local_78 = *(IRowset **)(this + 0x10);
  if (*(int *)(this + 0x48) == 0) {
    piVar6 = *(int **)(this + 8);
    if ((piVar6 == (int *)0x0) ||
       (iVar2 = (**(code **)(*piVar6 + 0xc))(piVar6,&DAT_004ab60c,&local_70,&local_74), iVar2 < 0))
    goto LAB_0046e558;
    CopyColumnID(this,local_68,(tagDBCOLUMNID *)&DAT_004abd88);
    local_48 = 0xffffffff;
    local_50 = 0;
    local_4c = 0;
    local_44 = 0x18;
    local_40 = 0;
    local_3c = 0x1fb;
    CopyColumnID(this,local_38,(tagDBCOLUMNID *)&DAT_004abd70);
    local_18 = 0xffffffff;
    local_20 = 0x1c;
    local_1c = 0;
    local_14 = 0x20;
    local_10 = 0;
    local_c = 0x1e;
    iVar2 = (**(code **)(*local_70 + 0x10))(local_70,2,local_68,0x28,0);
    if (iVar2 < 0) {
      (**(code **)(*local_70 + 8))(local_70);
      goto LAB_0046e558;
    }
    local_a4 = local_74;
    local_a0 = 1;
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    local_7c = (**(code **)(*local_70 + 0x18))(local_70,0,0,&local_a4);
    if (local_7c < 0) {
      (**(code **)(*local_70 + 8))(local_70);
      goto LAB_0046e558;
    }
    *(undefined4 *)(this + 0x14) = local_9c;
    local_74 = local_90;
    *(CPtrList **)(this + 0x10) = local_90;
    *(undefined4 *)(this + 0x34) = local_98;
    (**(code **)(*local_70 + 8))(local_70);
  }
  else {
    local_7c = (**(code **)(**(int **)(this + 0x4c) + 0x14))
                         (*(int **)(this + 0x4c),&DAT_004ab86c,&local_6c);
    if (local_7c < 0) goto LAB_0046e558;
    iVar2 = (*(code *)**(undefined4 **)local_6c)(local_6c,&DAT_004ab84c,&local_74);
    if (-1 < iVar2) {
      local_70 = (int *)0x0;
      iVar2 = (**(code **)(*(int *)local_74 + 0x10))(local_74,&DAT_004ab98c,&local_70);
      if (-1 < iVar2) {
        (**(code **)(*local_70 + 0x14))(local_70,*(int *)(this + 4) + 0xe8,this + 0x58);
        (**(code **)(*local_70 + 8))(local_70);
      }
      (**(code **)(*(int *)local_74 + 8))(local_74);
    }
    this_00 = FUN_00452728(0x14);
    if (this_00 == (CRowset<ATL::CAccessorBase> *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = ATL::CRowset<ATL::CAccessorBase>::CRowset<ATL::CAccessorBase>(this_00,local_6c);
    }
    *(undefined4 *)(this + 0x50) = uVar3;
    (**(code **)(*(int *)local_6c + 8))(local_6c);
    if ((IRowsetChange **)**(undefined4 **)(this + 0x50) != (IRowsetChange **)0x0) {
      IUnknown::QueryInterface<IRowsetChange>((IRowsetChange **)**(undefined4 **)(this + 0x50));
    }
    this_01 = FUN_00452728(0x28);
    if (this_01 == (CDynamicAccessor *)0x0) {
      this_02 = (void *)0x0;
    }
    else {
      this_02 = (void *)ATL::CDynamicAccessor::CDynamicAccessor(this_01,0,8000);
    }
    *(void **)(this + 0x54) = this_02;
    FUN_0046dbc4(this_02,(undefined4 *)**(undefined4 **)(this + 0x50));
    *(undefined4 *)(*(int *)(this + 0x50) + 8) = *(undefined4 *)(this + 0x54);
    uVar1 = *(uint *)(*(int *)(this + 0x54) + 0xc);
    *(uint *)(this + 0x10) = uVar1;
    if (0x3333333 < uVar1) goto LAB_0046e558;
    _Dst = CoTaskMemAlloc(uVar1 * 0x28);
    *(LPVOID *)(this + 0x14) = _Dst;
    if (_Dst == (LPVOID)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529b4();
    }
    _memset(_Dst,0,*(int *)(this + 0x10) * 0x28);
    ATL::CRowset<ATL::CAccessorBase>::MoveFirst(*(CRowset<ATL::CAccessorBase> **)(this + 0x50));
    ATL::CRowset<ATL::CAccessorBase>::ReleaseRows(*(CRowset<ATL::CAccessorBase> **)(this + 0x50));
  }
  local_6c = (IRowset *)0x0;
  if (0 < *(int *)(this + 0x10)) {
    iVar2 = 0;
    do {
      local_74 = FUN_00452728(0x1c);
      local_80 = 0;
      if (local_74 == (CPtrList *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = CPtrList::CPtrList(local_74,10);
      }
      local_80 = 0xffffffff;
      local_6c = local_6c + 1;
      *(undefined4 *)(iVar2 + 0x24 + *(int *)(this + 0x14)) = uVar3;
      iVar2 = iVar2 + 0x28;
    } while ((int)local_6c < *(int *)(this + 0x10));
  }
  if (local_8c != (LPVOID)0x0) {
    if (0 < (int)local_78) {
      piVar6 = (int *)((int)local_8c + 0x24);
      local_74 = (CPtrList *)(-0x24 - (int)local_8c);
      local_6c = local_78;
      do {
        local_78 = *(IRowset **)(*piVar6 + 4);
        while (local_78 != (IRowset *)0x0) {
          ppvVar4 = CPtrList::GetNext(*(CPtrList **)
                                       (local_74 + (int)piVar6 + *(int *)(this + 0x14) + 0x24),
                                      (__POSITION **)&local_78);
          (**(code **)(*(int *)this + 8))(*ppvVar4,1);
        }
        CPtrList::RemoveAll((CPtrList *)*piVar6);
        if ((int *)*piVar6 != (int *)0x0) {
          (**(code **)(*(int *)*piVar6 + 4))(1);
        }
        piVar6 = piVar6 + 10;
        local_6c = local_6c + -1;
      } while (local_6c != (IRowset *)0x0);
    }
    CoTaskMemFree(local_8c);
  }
LAB_0046e558:
  ExceptionList = local_88;
  lVar5 = __security_check_cookie(local_8 ^ (uint)&local_7c);
  return lVar5;
}


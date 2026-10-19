// Address: 0x0046009c
// Name: ATL::CFixedStringMgr::Reallocate
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual struct ATL::CStringData * __thiscall ATL::CFixedStringMgr::Reallocate(struct
   ATL::CStringData *,int,int)
   
   Library: Visual Studio 2005 Release */

CStringData * __thiscall
ATL::CFixedStringMgr::Reallocate(CFixedStringMgr *this,CStringData *param_1,int param_2,int param_3)

{
  CStringData *pCVar1;
  
  if (param_1 == *(CStringData **)(this + 8)) {
    pCVar1 = param_1;
    if (*(int *)(param_1 + 8) < param_2) {
      if (DAT_004cc110 != (int *)0x0) {
        (**(code **)(*DAT_004cc110 + 4))(param_2,*(int *)(param_1 + 8),param_1);
      }
      pCVar1 = (CStringData *)(**(code **)**(undefined4 **)(this + 4))(param_2,param_3);
      if (pCVar1 != (CStringData *)0x0) {
        FUN_004527b0(pCVar1 + 0x10,param_2 * param_3,param_1 + 0x10,
                     (*(int *)(param_1 + 8) + 1) * param_3);
        *(undefined4 *)(pCVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
        *(CFixedStringMgr **)pCVar1 = this;
        *(undefined4 *)(pCVar1 + 4) = *(undefined4 *)(param_1 + 4);
      }
    }
  }
  else {
    *(undefined4 *)param_1 = *(undefined4 *)(this + 4);
    pCVar1 = (CStringData *)(**(code **)(**(int **)(this + 4) + 8))(param_1,param_2,param_3);
    if (pCVar1 == (CStringData *)0x0) {
      *(CFixedStringMgr **)param_1 = this;
    }
    else {
      *(CFixedStringMgr **)pCVar1 = this;
    }
  }
  return pCVar1;
}


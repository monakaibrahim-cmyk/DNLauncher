// Address: 0x0046f4ba
// Name: CDataSourceControl::BindProp
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CDataSourceControl::BindProp(class COleControlSite *,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CDataSourceControl::BindProp(CDataSourceControl *this,COleControlSite *param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  bool bVar3;
  wchar_t *pwVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *pCVar5;
  void **ppvVar6;
  int iVar7;
  ulong uVar8;
  CDataSourceControl *local_8;
  
  uVar8 = 0;
  local_8 = this;
  if (param_2 == 0) {
    (**(code **)(*(int *)this + 0x14))();
    iVar7 = 0;
    if (0 < *(int *)(this + 0x10)) {
      do {
        param_2 = *(int *)(*(int *)(*(int *)(this + 0x14) + 0x24 + uVar8) + 4);
        while (param_2 != 0) {
          local_8 = (CDataSourceControl *)param_2;
          ppvVar6 = CPtrList::GetNext(*(CPtrList **)(*(int *)(this + 0x14) + 0x24 + uVar8),
                                      (__POSITION **)&param_2);
          if (*ppvVar6 == param_1) {
            CPtrList::RemoveAt(*(CPtrList **)(iVar7 * 0x28 + 0x24 + *(int *)(this + 0x14)),
                               (__POSITION *)local_8);
            return;
          }
        }
        iVar7 = iVar7 + 1;
        uVar8 = uVar8 + 0x28;
      } while (iVar7 < *(int *)(this + 0x10));
    }
  }
  else {
    (**(code **)(*(int *)this + 8))(param_1,0);
    if (*(int *)(this + 0x48) == 0) {
      if (0 < *(int *)(this + 0x10)) {
        param_2 = 0;
        do {
          piVar2 = (int *)(*(int *)(this + 0x14) + 0x1c + param_2);
          if (*piVar2 != 0) {
            pCVar5 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
                     FUN_00416180(&local_8,(LPCSTR)*piVar2);
            bVar3 = ATL::operator==((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
                                     *)(param_1 + 0xa4),pCVar5);
            FUN_004031b0((undefined4 *)(local_8 + -0x10));
            if (bVar3) goto LAB_0046f528;
          }
          param_2 = param_2 + 0x28;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < *(int *)(this + 0x10));
      }
    }
    else if (0 < *(int *)(this + 0x10)) {
      do {
        uVar1 = uVar8 + 1;
        pwVar4 = ATL::CDynamicAccessor::GetColumnName(*(CDynamicAccessor **)(this + 0x54),uVar1);
        pCVar5 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
                 FUN_004035c0(&local_8,pwVar4);
        bVar3 = ATL::operator==((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *
                                )(param_1 + 0xa4),pCVar5);
        param_2 = CONCAT13(bVar3,(undefined3)param_2);
        FUN_004031b0((undefined4 *)(local_8 + -0x10));
        if (param_2._3_1_ != '\0') {
LAB_0046f528:
          CPtrList::AddTail(*(CPtrList **)(uVar8 * 0x28 + 0x24 + *(int *)(this + 0x14)),param_1);
          return;
        }
        uVar8 = uVar1;
      } while ((int)uVar1 < *(int *)(this + 0x10));
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  return;
}


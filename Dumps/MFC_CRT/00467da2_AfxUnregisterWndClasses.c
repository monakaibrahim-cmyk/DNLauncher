// Address: 0x00467da2
// Name: AfxUnregisterWndClasses
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall AfxUnregisterWndClasses(void)
   
   Library: Visual Studio 2005 Release */

void AfxUnregisterWndClasses(void)

{
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  AFX_MODULE_STATE *pAVar1;
  undefined4 *puVar2;
  int local_1c [2];
  LPCWSTR local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x467dae;
  pAVar1 = AfxGetModuleState();
  AfxLockGlobals(1);
  this = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(pAVar1 + 0x34);
  local_1c[1] = 0;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Tokenize
            (this,(wchar_t *)local_14,(int *)&DAT_004a3dd0);
  local_8 = 0;
  while (*(int *)(local_14[0] + -6) != 0) {
    pAVar1 = AfxGetModuleState();
    UnregisterClassW(local_14[0],*(HINSTANCE *)(pAVar1 + 8));
    puVar2 = (undefined4 *)
             ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Tokenize
                       (this,(wchar_t *)local_1c,(int *)&DAT_004a3dd0);
    local_8._0_1_ = 1;
    FID_conflict_operator_(local_14,puVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004031b0((undefined4 *)(local_1c[0] + -0x10));
  }
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)this);
  AfxUnlockGlobals(1);
  FUN_004031b0((undefined4 *)(local_14[0] + -8));
  return;
}


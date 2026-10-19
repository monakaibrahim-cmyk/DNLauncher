// Address: 0x0045dbb2
// Name: CHtmlView::Navigate
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CHtmlView::Navigate(wchar_t const *,unsigned long,wchar_t const
   *,wchar_t const *,void *,unsigned long)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CHtmlView::Navigate(CHtmlView *this,wchar_t *param_1,ulong param_2,wchar_t *param_3,wchar_t *param_4
                   ,void *param_5,ulong param_6)

{
  int *piVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _union_2683 local_5c;
  VARIANTARG local_44;
  VARIANTARG local_34;
  VARIANTARG local_24;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x45dbbe;
  FUN_004035c0(local_14,param_1);
  param_1 = (wchar_t *)0x0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  pwVar2 = (wchar_t *)FUN_00404770(local_14);
  ATL::CComBSTR::Attach((CComBSTR *)&param_1,pwVar2);
  AfxSafeArrayInit((COleSafeArray *)&local_5c.n2);
  local_5c.n2.vt = 0;
  local_8._0_1_ = 2;
  if (param_5 != (void *)0x0) {
    uVar3 = param_6;
    if (param_6 == 0) {
      uVar3 = lstrlenW(param_5);
    }
    COleSafeArray::CreateOneDim((COleSafeArray *)&local_5c.n2,0x11,uVar3,param_5,0);
  }
  piVar1 = *(int **)(this + 0xec);
  uVar4 = COleVariant::COleVariant((COleVariant *)&local_44,param_4,8);
  local_8._0_1_ = 3;
  uVar5 = COleVariant::COleVariant((COleVariant *)&local_34,param_3,8);
  local_8._0_1_ = 4;
  uVar6 = COleVariant::COleVariant((COleVariant *)&local_24,param_2,3);
  local_8 = CONCAT31(local_8._1_3_,5);
  (**(code **)(*piVar1 + 0x2c))(piVar1,param_1,uVar6,uVar5,&local_5c,uVar4);
  VariantClear(&local_24);
  VariantClear(&local_34);
  VariantClear(&local_44);
  VariantClear((VARIANTARG *)&local_5c.n2);
  SysFreeString(param_1);
  FUN_004031b0((undefined4 *)(local_14[0] + -0x10));
  return;
}


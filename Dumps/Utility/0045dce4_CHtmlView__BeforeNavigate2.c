// Address: 0x0045dce4
// Name: CHtmlView::BeforeNavigate2
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CHtmlView::BeforeNavigate2(struct IDispatch *,struct
   tagVARIANT *,struct tagVARIANT *,struct tagVARIANT *,struct tagVARIANT *,struct tagVARIANT
   *,short *)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CHtmlView::BeforeNavigate2
          (CHtmlView *this,IDispatch *param_1,tagVARIANT *param_2,tagVARIANT *param_3,
          tagVARIANT *param_4,tagVARIANT *param_5,tagVARIANT *param_6,short *param_7)

{
  ushort uVar1;
  tagVARIANT *ptVar2;
  ulong uVar3;
  VARIANTARG local_4c;
  CByteArray local_34 [4];
  void *local_30;
  void *local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x45dcf0;
  ptVar2 = *(tagVARIANT **)((int)&param_5->n1 + 8);
  CByteArray::CByteArray(local_34);
  uVar1 = (ptVar2->n1).n2.vt;
  local_8 = 0;
  if ((uVar1 & 0x2000) != 0) {
    (ptVar2->n1).n2.vt = uVar1 | 0x11;
    COleSafeArray::COleSafeArray((COleSafeArray *)&local_4c,ptVar2);
    local_8._0_1_ = 1;
    uVar3 = COleSafeArray::GetOneDimSize((COleSafeArray *)&local_4c);
    COleSafeArray::AccessData((COleSafeArray *)&local_4c,&local_20);
    FUN_00471252(local_34,uVar3,-1);
    FUN_004527b0(local_30,uVar3,local_20,uVar3);
    COleSafeArray::UnaccessData((COleSafeArray *)&local_4c);
    local_8 = (uint)local_8._1_3_ << 8;
    VariantClear(&local_4c);
  }
  FUN_004035c0(&local_1c,*(short **)((int)&param_4->n1 + 8));
  local_8._0_1_ = 2;
  FUN_004035c0(&local_18,*(short **)((int)&param_2->n1 + 8));
  local_8._0_1_ = 3;
  FUN_004035c0(local_14,*(short **)((int)&param_6->n1 + 8));
  param_5 = (tagVARIANT *)0x0;
  local_8 = CONCAT31(local_8._1_3_,4);
  (**(code **)(*(int *)this + 0x1c8))
            (local_18,*(undefined4 *)((int)&param_3->n1 + 8),local_1c,local_34,local_14[0],&param_5)
  ;
  *param_7 = -(ushort)(param_5 != (tagVARIANT *)0x0);
  FUN_004031b0((undefined4 *)(local_14[0] + -0x10));
  FUN_004031b0((undefined4 *)(local_18 + -0x10));
  FUN_004031b0((undefined4 *)(local_1c + -0x10));
  local_8 = 0xffffffff;
  FUN_00471242((undefined4 *)local_34);
  return;
}


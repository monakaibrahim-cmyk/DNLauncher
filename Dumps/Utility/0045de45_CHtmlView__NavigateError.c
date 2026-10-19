// Address: 0x0045de45
// Name: CHtmlView::NavigateError
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CHtmlView::NavigateError(struct IDispatch *,struct tagVARIANT
   *,struct tagVARIANT *,struct tagVARIANT *,short *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall
CHtmlView::NavigateError
          (CHtmlView *this,IDispatch *param_1,tagVARIANT *param_2,tagVARIANT *param_3,
          tagVARIANT *param_4,short *param_5)

{
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x45de51;
  FUN_004035c0(&local_18,*(short **)((int)&param_2->n1 + 8));
  local_8 = 0;
  FUN_004035c0(local_14,*(short **)((int)&param_3->n1 + 8));
  param_2 = (tagVARIANT *)0x0;
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(*(int *)this + 0x20c))
            (local_18,local_14[0],*(undefined4 *)((int)&param_4->n1 + 8),&param_2);
  if (param_5 != (short *)0x0) {
    *param_5 = -(ushort)(param_2 != (tagVARIANT *)0x0);
  }
  FUN_004031b0((undefined4 *)(local_14[0] + -0x10));
  FUN_004031b0((undefined4 *)(local_18 + -0x10));
  return;
}


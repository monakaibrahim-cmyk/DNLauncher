// Address: 0x0046c4bd
// Name: COleControlSite::XOleControlSite::TransformCoords
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleControlSite::TransformCoords(struct _POINTL
   *,struct tagPOINTF *,unsigned long)
   
   Library: Visual Studio 2005 Release */

long COleControlSite::XOleControlSite::TransformCoords
               (_POINTL *param_1,tagPOINTF *param_2,ulong param_3)

{
  HDC pHVar1;
  long lVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  long lVar3;
  ulonglong uVar4;
  byte in_stack_00000010;
  CDC local_28 [16];
  tagSIZE local_18 [2];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x46c4c9;
  lVar3 = 0;
  FUN_0045b649((undefined4 *)local_28);
  local_8 = 0;
  pHVar1 = GetDC((HWND)param_1[-0x16].y);
  CDC::Attach(local_28,pHVar1);
  if ((in_stack_00000010 & 4) == 0) {
    if ((in_stack_00000010 & 8) != 0) {
      uVar4 = FUN_00478f90(extraout_ECX,extraout_EDX);
      local_18[0].cx = (LONG)uVar4;
      uVar4 = FUN_00478f90(extraout_ECX_00,(int)(uVar4 >> 0x20));
      local_18[0].cy = (LONG)uVar4;
      CDC::DPtoHIMETRIC(local_28,local_18);
      if ((in_stack_00000010 & 2) != 0) {
        lVar2 = _labs(local_18[0].cx);
        *(long *)param_2 = lVar2;
        lVar2 = _labs(local_18[0].cy);
        *(long *)(param_2 + 4) = lVar2;
        goto LAB_0046c5b6;
      }
      if ((in_stack_00000010 & 1) != 0) {
        *(LONG *)param_2 = local_18[0].cx;
        *(LONG *)(param_2 + 4) = local_18[0].cy;
        goto LAB_0046c5b6;
      }
    }
  }
  else {
    local_18[0].cx = *(LONG *)param_2;
    local_18[0].cy = *(LONG *)(param_2 + 4);
    CDC::HIMETRICtoDP(local_28,local_18);
    if ((in_stack_00000010 & 2) != 0) {
      lVar2 = _labs(local_18[0].cx);
      *(float *)param_3 = (float)lVar2;
      lVar2 = _labs(local_18[0].cy);
      *(float *)(param_3 + 4) = (float)lVar2;
      goto LAB_0046c5b6;
    }
    if ((in_stack_00000010 & 1) != 0) {
      *(float *)param_3 = (float)local_18[0].cx;
      *(float *)(param_3 + 4) = (float)local_18[0].cy;
      goto LAB_0046c5b6;
    }
  }
  lVar3 = -0x7ff8ffa9;
LAB_0046c5b6:
  local_8 = 0xffffffff;
  CDC::~CDC(local_28);
  return lVar3;
}


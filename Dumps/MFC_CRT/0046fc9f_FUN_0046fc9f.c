// Address: 0x0046fc9f
// Name: FUN_0046fc9f
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x0046fd9f) */

void __fastcall FUN_0046fc9f(COleControlSite *param_1)

{
  undefined4 *_Memory;
  void *_Memory_00;
  int *piVar1;
  int iVar2;
  IUnknown *local_1c;
  IUnknown *local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  *(undefined ***)param_1 = COleControlSite::vftable;
  iVar2 = *(int *)(param_1 + 0x20);
  local_8 = 2;
  if ((iVar2 != 0) && (*(COleControlSite **)(iVar2 + 0x6c) == param_1)) {
    *(undefined4 *)(iVar2 + 0x6c) = 0;
  }
  _Memory = *(undefined4 **)(param_1 + 0x90);
  if (_Memory == (undefined4 *)0x0) {
    COleControlSite::DetachWindow(param_1);
    COleControlSite::DisconnectSink(param_1,(_GUID *)(param_1 + 0x40),*(ulong *)(param_1 + 0x60));
    COleControlSite::DisconnectSink(param_1,(_GUID *)&DAT_004ab7ec,*(ulong *)(param_1 + 100));
    COleControlSite::DisconnectSink(param_1,(_GUID *)&DAT_004ab5dc,*(ulong *)(param_1 + 0x8c));
    piVar1 = *(int **)(param_1 + 0x5c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x54);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(piVar1);
      (**(code **)(**(int **)(param_1 + 0x54) + 8))(*(int **)(param_1 + 0x54));
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x58);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x50);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,0);
      (**(code **)(**(int **)(param_1 + 0x50) + 0x18))(*(int **)(param_1 + 0x50),1);
      (**(code **)(**(int **)(param_1 + 0x50) + 8))(*(int **)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    VariantClear((VARIANTARG *)(param_1 + 0xac));
    _Memory_00 = *(void **)(param_1 + 0x94);
    local_14 = 0;
    if (_Memory_00 != (void *)0x0) {
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)((int)_Memory_00 + 0x18);
      iVar2 = *(int *)((int)_Memory_00 + 0xc);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x90) != 0)) {
        (**(code **)(**(int **)(iVar2 + 0x90) + 4))(_Memory_00,0);
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory_00);
    }
    if (((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(param_1 + 0x98) != 0)) &&
       (piVar1 = (int *)(*(int *)(param_1 + 0x98) + 0x90), *piVar1 != 0)) {
      (**(code **)(*(int *)*piVar1 + 8))(param_1,0);
    }
    if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x74) != 0)) {
      piVar1 = (int *)(*(int *)(param_1 + 0x20) + 0x74);
      *piVar1 = *piVar1 + -1;
    }
    local_1c = (IUnknown *)0x0;
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar2 = (*(code *)**(undefined4 **)(param_1 + 0xd8))(param_1 + 0xd8,&DAT_004ab6fc,&local_1c);
    if (-1 < iVar2) {
      _AfxReleaseManagedRefs(local_1c);
    }
    local_18 = (IUnknown *)0x0;
    local_8 = CONCAT31(local_8._1_3_,4);
    iVar2 = (*(code *)**(undefined4 **)(param_1 + 0xdc))(param_1 + 0xdc,&DAT_004ab6fc,&local_18);
    if (-1 < iVar2) {
      _AfxReleaseManagedRefs(local_18);
    }
    local_8._0_1_ = 3;
    if (local_18 != (IUnknown *)0x0) {
      (*local_18->lpVtbl->Release)(local_18);
    }
    local_8._0_1_ = 2;
    if (local_1c != (IUnknown *)0x0) {
      (*local_1c->lpVtbl->Release)(local_1c);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    COleDispatchDriver::ReleaseDispatch((COleDispatchDriver *)(param_1 + 0xbc));
    FUN_004031b0((undefined4 *)(*(int *)(param_1 + 0xa4) + -0x10));
    local_8 = 0xffffffff;
    CCmdTarget::~CCmdTarget((CCmdTarget *)param_1);
    return;
  }
  FUN_0046f2bf(_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


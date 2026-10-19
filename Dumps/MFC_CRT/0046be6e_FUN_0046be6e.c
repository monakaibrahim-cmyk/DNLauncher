// Address: 0x0046be6e
// Name: FUN_0046be6e
// Category: MFC_CRT


void __thiscall FUN_0046be6e(void *this,int param_1,int param_2)

{
  void *pvVar1;
  void *_Memory;
  CDataBoundProperty *this_00;
  int iVar2;
  int local_8;
  
  if ((param_2 == 0) || (param_1 == -1)) {
    local_8 = 0;
    _Memory = *(void **)((int)this + 0x94);
    while (_Memory != (void *)0x0) {
      pvVar1 = *(void **)((int)_Memory + 0x18);
      if (((param_1 == -1) || (*(int *)((int)_Memory + 8) == param_1)) &&
         ((param_2 == 0 || (*(int *)(param_2 + 0x50) == *(int *)((int)_Memory + 0xc))))) {
        if (local_8 == 0) {
          *(void **)((int)this + 0x94) = pvVar1;
        }
        else {
          *(void **)(local_8 + 0x18) = pvVar1;
        }
        iVar2 = *(int *)((int)_Memory + 0xc);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x90) != 0)) {
          (**(code **)(**(int **)(iVar2 + 0x90) + 4))(_Memory,0);
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory = pvVar1;
      if (local_8 != 0) {
        local_8 = *(int *)(local_8 + 0x18);
      }
    }
  }
  else {
    this_00 = FUN_00452728(0x1c);
    if (this_00 == (CDataBoundProperty *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = CDataBoundProperty::CDataBoundProperty
                        (this_00,*(CDataBoundProperty **)((int)this + 0x94),param_1,0);
    }
    *(int *)((int)this + 0x94) = iVar2;
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 0x50);
    **(undefined4 **)((int)this + 0x94) = this;
    (**(code **)(**(int **)(*(int *)((int)this + 0x94) + 0xc) + 0xb4))();
    (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x94) + 0xc) + 0x90) + 4))
              (*(int *)((int)this + 0x94),1);
  }
  return;
}


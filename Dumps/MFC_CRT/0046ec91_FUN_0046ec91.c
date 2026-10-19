// Address: 0x0046ec91
// Name: FUN_0046ec91
// Category: MFC_CRT


void __fastcall FUN_0046ec91(CRowset<ATL::CAccessorBase> *param_1)

{
  void *_Memory;
  int *piVar1;
  
  if (*(CDynamicAccessor **)(param_1 + 0x10) != (CDynamicAccessor *)0x0) {
    if (*(IUnknown **)param_1 != (IUnknown *)0x0) {
      ATL::CDynamicAccessor::ReleaseAccessors
                (*(CDynamicAccessor **)(param_1 + 0x10),*(IUnknown **)param_1);
    }
    _Memory = *(void **)(param_1 + 0x10);
    if (_Memory != (void *)0x0) {
      FUN_00469de6((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)param_1 != 0) {
    ATL::CRowset<ATL::CAccessorBase>::ReleaseRows(param_1);
    piVar1 = *(int **)param_1;
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)param_1 = 0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 4);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  return;
}


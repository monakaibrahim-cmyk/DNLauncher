// Address: 0x0046cf6a
// Name: ATL::CManualAccessor::BindColumns
// Category: MFC_CRT


/* Library Function - Single Match
    public: long __thiscall ATL::CManualAccessor::BindColumns(struct IUnknown *)
   
   Library: Visual Studio 2005 Release */

long __thiscall ATL::CManualAccessor::BindColumns(CManualAccessor *this,IUnknown *param_1)

{
  IUnknownVtbl **ppIVar1;
  IUnknown *This;
  long lVar2;
  
  This = param_1;
  if (param_1 == (IUnknown *)0x0) {
    return -0x7fffbffb;
  }
  ppIVar1 = &param_1->lpVtbl;
  param_1 = (IUnknown *)0x0;
  lVar2 = (*(*ppIVar1)->QueryInterface)(This,(IID *)&DAT_004a3fbc,&param_1);
  if (lVar2 < 0) {
LAB_0046cfab:
    if (param_1 != (IUnknown *)0x0) {
      (*param_1->lpVtbl->Release)(param_1);
    }
  }
  else {
    if (*(int *)this == 0) {
      lVar2 = FUN_00469cfd(this,1);
      if (lVar2 < 0) goto LAB_0046cfab;
      *(undefined1 *)(*(int *)this + 4) = 1;
    }
    lVar2 = FUN_00469d5e(*(int *)(this + 0xc),*(int *)(this + 0x10),*(int *)this,
                         *(undefined4 *)(this + 0x18),(int *)param_1);
    if (param_1 != (IUnknown *)0x0) {
      (*param_1->lpVtbl->Release)(param_1);
    }
  }
  return lVar2;
}


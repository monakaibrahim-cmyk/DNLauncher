// Address: 0x004666d4
// Name: CCmdTarget::GetInterface
// Category: MFC_CRT


/* Library Function - Single Match
    public: struct IUnknown * __thiscall CCmdTarget::GetInterface(void const *)
   
   Library: Visual Studio 2005 Release */

IUnknown * __thiscall CCmdTarget::GetInterface(CCmdTarget *this,void *param_1)

{
  IUnknown *pIVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  pIVar1 = (IUnknown *)(**(code **)(*(int *)this + 0x44))(param_1);
  if (pIVar1 == (IUnknown *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)this + 0x38))();
    if ((((DAT_004ab6fc == *(int *)param_1) && (*(int *)((int)param_1 + 4) == DAT_004ab700)) &&
        (*(int *)((int)param_1 + 8) == DAT_004ab704)) &&
       (*(int *)((int)param_1 + 0xc) == DAT_004ab708)) {
      do {
        for (piVar3 = (int *)piVar2[1]; *piVar3 != 0; piVar3 = piVar3 + 2) {
          if (*(IUnknownVtbl **)(this + piVar3[1]) != (IUnknownVtbl *)0x0) {
            return (IUnknown *)(this + piVar3[1]);
          }
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
    else {
      do {
        for (puVar4 = (undefined4 *)piVar2[1]; piVar3 = (int *)*puVar4, piVar3 != (int *)0x0;
            puVar4 = puVar4 + 2) {
          if (((*piVar3 == *(int *)param_1) && (piVar3[1] == *(int *)((int)param_1 + 4))) &&
             ((piVar3[2] == *(int *)((int)param_1 + 8) &&
              ((piVar3[3] == *(int *)((int)param_1 + 0xc) &&
               (*(IUnknownVtbl **)(this + puVar4[1]) != (IUnknownVtbl *)0x0)))))) {
            return (IUnknown *)(this + puVar4[1]);
          }
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
    pIVar1 = (IUnknown *)0x0;
  }
  return pIVar1;
}


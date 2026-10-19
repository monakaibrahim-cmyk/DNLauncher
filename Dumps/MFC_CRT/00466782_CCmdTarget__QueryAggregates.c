// Address: 0x00466782
// Name: CCmdTarget::QueryAggregates
// Category: MFC_CRT


/* Library Function - Single Match
    public: struct IUnknown * __thiscall CCmdTarget::QueryAggregates(void const *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

IUnknown * __thiscall CCmdTarget::QueryAggregates(CCmdTarget *this,void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  CCmdTarget *local_8;
  
  local_8 = this;
  piVar2 = (int *)(**(code **)(*(int *)this + 0x38))();
  do {
    for (piVar3 = (int *)piVar2[1]; *piVar3 != 0; piVar3 = piVar3 + 2) {
    }
    for (piVar3 = piVar3 + 1; *piVar3 != -1; piVar3 = piVar3 + 2) {
      puVar1 = *(undefined4 **)(this + *piVar3);
      if (puVar1 != (undefined4 *)0x0) {
        local_8 = (CCmdTarget *)0x0;
        iVar4 = (**(code **)*puVar1)(puVar1,param_1,&local_8);
        if ((iVar4 == 0) && (local_8 != (CCmdTarget *)0x0)) {
          return (IUnknown *)local_8;
        }
      }
    }
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
      return (IUnknown *)0x0;
    }
  } while( true );
}


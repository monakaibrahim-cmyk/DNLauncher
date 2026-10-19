// Address: 0x0040f9e0
// Name: FUN_0040f9e0
// Category: Launcher


void __thiscall FUN_0040f9e0(void *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *in_EAX;
  CStringData *pCVar4;
  CStringData *pCVar5;
  undefined4 *this_00;
  
  while ((void *)param_1 != this) {
    pvVar2 = *(void **)((int)this + -0x14);
    iVar3 = in_EAX[-5];
    this_00 = in_EAX + -5;
    pCVar4 = (CStringData *)((int)pvVar2 + -0x10);
    pCVar5 = (CStringData *)(iVar3 + -0x10);
    if (pCVar4 != pCVar5) {
      piVar1 = (int *)(iVar3 + -4);
      if ((*(int *)(iVar3 + -4) < 0) || (*(int *)pCVar4 != *(int *)pCVar5)) {
        FUN_00403520(this_00,pvVar2,*(int *)((int)pvVar2 + -0xc));
      }
      else {
        pCVar4 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar4);
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1 || iVar3 + -1 < 0) {
          (**(code **)(**(int **)pCVar5 + 4))(pCVar5);
        }
        *this_00 = pCVar4 + 0x10;
      }
    }
    FUN_0040f460((int)(in_EAX + -4),(int)this + -0x10);
    this = (void *)((int)this + -0x14);
    in_EAX = this_00;
  }
  return;
}


// Address: 0x00406f20
// Name: FUN_00406f20
// Category: Launcher


void __cdecl FUN_00406f20(int param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *in_EAX;
  CStringData *pCVar4;
  CStringData *pCVar5;
  
  while (param_1 != param_2) {
    pvVar2 = *(void **)(param_2 + -4);
    iVar3 = in_EAX[-1];
    param_2 = param_2 + -4;
    in_EAX = in_EAX + -1;
    pCVar4 = (CStringData *)((int)pvVar2 + -0x10);
    pCVar5 = (CStringData *)(iVar3 + -0x10);
    if (pCVar4 != pCVar5) {
      piVar1 = (int *)(iVar3 + -4);
      if ((*(int *)(iVar3 + -4) < 0) || (*(int *)pCVar4 != *(int *)pCVar5)) {
        FUN_00403520(in_EAX,pvVar2,*(int *)((int)pvVar2 + -0xc));
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
        *in_EAX = pCVar4 + 0x10;
      }
    }
  }
  return;
}


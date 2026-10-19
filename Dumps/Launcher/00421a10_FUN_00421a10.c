// Address: 0x00421a10
// Name: FUN_00421a10
// Category: Launcher


void FUN_00421a10(void)

{
  CWnd *pCVar1;
  undefined4 uVar2;
  int in_EAX;
  BOOL BVar3;
  HWND pHVar4;
  int iVar5;
  
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(in_EAX + 0x412c));
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(in_EAX + 0x4130));
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(in_EAX + 0x4134));
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(in_EAX + 0x4138));
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(in_EAX + 0x413c));
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(in_EAX + 0x4140));
  pCVar1 = *(CWnd **)(in_EAX + 0xb8);
  if (pCVar1 != (CWnd *)0x0) {
    BVar3 = IsWindow(*(HWND *)(pCVar1 + 0x20));
    if (BVar3 != 0) {
      *(undefined4 *)(pCVar1 + 0x70) = 0;
      *(undefined4 *)(pCVar1 + 0x74) = 100;
      *(undefined4 *)(pCVar1 + 0x78) = 1;
      FUN_0041a4f0(pCVar1);
    }
    pCVar1 = *(CWnd **)(in_EAX + 0xb8);
    if (pCVar1 == (CWnd *)0x0) {
      pHVar4 = (HWND)0x0;
    }
    else {
      pHVar4 = *(HWND *)(pCVar1 + 0x20);
    }
    BVar3 = IsWindow(pHVar4);
    if (BVar3 != 0) {
      iVar5 = 0;
      if (*(int *)(pCVar1 + 0x74) < 0) {
        iVar5 = *(int *)(pCVar1 + 0x74);
      }
      if (iVar5 < *(int *)(pCVar1 + 0x70)) {
        iVar5 = *(int *)(pCVar1 + 0x70);
      }
      if (iVar5 < *(int *)(pCVar1 + 0x88)) {
        iVar5 = *(int *)(pCVar1 + 0x88);
      }
      *(undefined4 *)(pCVar1 + 0x94) = *(undefined4 *)(pCVar1 + 0x98);
      *(int *)(pCVar1 + 0x98) = iVar5;
      FUN_0041a4f0(pCVar1);
    }
  }
  pCVar1 = *(CWnd **)(in_EAX + 0xbc);
  if (pCVar1 != (CWnd *)0x0) {
    BVar3 = IsWindow(*(HWND *)(pCVar1 + 0x20));
    if (BVar3 != 0) {
      *(undefined4 *)(pCVar1 + 0x70) = 0;
      *(undefined4 *)(pCVar1 + 0x74) = 100;
      *(undefined4 *)(pCVar1 + 0x78) = 1;
      FUN_0041a4f0(pCVar1);
    }
    pCVar1 = *(CWnd **)(in_EAX + 0xbc);
    if (pCVar1 == (CWnd *)0x0) {
      pHVar4 = (HWND)0x0;
    }
    else {
      pHVar4 = *(HWND *)(pCVar1 + 0x20);
    }
    BVar3 = IsWindow(pHVar4);
    if (BVar3 != 0) {
      iVar5 = 0;
      if (*(int *)(pCVar1 + 0x74) < 0) {
        iVar5 = *(int *)(pCVar1 + 0x74);
      }
      if (iVar5 < *(int *)(pCVar1 + 0x70)) {
        iVar5 = *(int *)(pCVar1 + 0x70);
      }
      if (iVar5 < *(int *)(pCVar1 + 0x88)) {
        iVar5 = *(int *)(pCVar1 + 0x88);
      }
      uVar2 = *(undefined4 *)(pCVar1 + 0x98);
      *(int *)(pCVar1 + 0x98) = iVar5;
      *(undefined4 *)(pCVar1 + 0x94) = uVar2;
      FUN_0041a4f0(pCVar1);
      return;
    }
  }
  return;
}


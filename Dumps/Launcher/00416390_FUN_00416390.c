// Address: 0x00416390
// Name: FUN_00416390
// Category: Launcher


void FUN_00416390(void)

{
  int in_EAX;
  CStringData *pCVar1;
  undefined4 *unaff_ESI;
  
  pCVar1 = ATL::CSimpleStringT<wchar_t,0>::CloneData
                     ((CStringData *)(*(int *)(in_EAX + 0x74) + -0x10));
  *unaff_ESI = pCVar1 + 0x10;
  return;
}


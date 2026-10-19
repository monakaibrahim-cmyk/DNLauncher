// Address: 0x004070e0
// Name: FUN_004070e0
// Category: Launcher


void FUN_004070e0(void)

{
  int in_EAX;
  CStringData *pCVar1;
  undefined4 *unaff_ESI;
  
  pCVar1 = ATL::CSimpleStringT<wchar_t,0>::CloneData
                     ((CStringData *)(*(int *)(in_EAX + 0x78) + -0x10));
  *unaff_ESI = pCVar1 + 0x10;
  return;
}


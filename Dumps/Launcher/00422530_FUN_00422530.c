// Address: 0x00422530
// Name: FUN_00422530
// Category: Launcher


void FUN_00422530(void)

{
  int in_EAX;
  CStringData *pCVar1;
  undefined4 *unaff_ESI;
  
  pCVar1 = ATL::CSimpleStringT<wchar_t,0>::CloneData
                     ((CStringData *)(*(int *)(in_EAX + 0x28) + -0x10));
  *unaff_ESI = pCVar1 + 0x10;
  return;
}


// Address: 0x0040c7f0
// Name: FUN_0040c7f0
// Category: Launcher


void FUN_0040c7f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_ESI;
  
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(unaff_ESI + 0x28));
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(unaff_ESI + 0x2c));
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(unaff_ESI + 0x30));
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(unaff_ESI + 0x34));
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(unaff_ESI + 0x38));
  *(undefined4 *)(unaff_ESI + 0x4c) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x50) = 0xffffffff;
  *(undefined2 *)(unaff_ESI + 0x60) = 0;
  puVar1 = *(undefined4 **)(unaff_ESI + 0x44);
  if (puVar1 < *(undefined4 **)(unaff_ESI + 0x40)) {
    FUN_00475b26();
  }
  puVar2 = *(undefined4 **)(unaff_ESI + 0x40);
  if (*(undefined4 **)(unaff_ESI + 0x44) < puVar2) {
    FUN_00475b26();
  }
  if (puVar2 != puVar1) {
    iVar3 = FUN_0040fd00(puVar1);
    FUN_0040ff60();
    *(int *)(unaff_ESI + 0x44) = iVar3;
  }
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(unaff_ESI + 0x68));
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(unaff_ESI + 0x6c));
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(unaff_ESI + 0x70));
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(unaff_ESI + 0x74));
  return;
}


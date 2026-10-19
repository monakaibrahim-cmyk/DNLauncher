// Address: 0x00452f4e
// Name: FUN_00452f4e
// Category: Utility


void __fastcall FUN_00452f4e(int param_1)

{
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(param_1 + 0xc));
  return;
}


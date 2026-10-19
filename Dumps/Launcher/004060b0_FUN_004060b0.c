// Address: 0x004060b0
// Name: FUN_004060b0
// Category: Launcher


undefined4 __fastcall FUN_004060b0(CSimpleStringT<wchar_t,0> *param_1)

{
  if (1 < *(int *)(*(int *)param_1 + -4)) {
    ATL::CSimpleStringT<wchar_t,0>::Fork(param_1,*(int *)(*(int *)param_1 + -0xc));
  }
  return *(undefined4 *)param_1;
}


// Address: 0x00454cb3
// Name: FUN_00454cb3
// Category: Utility


HRESULT __fastcall FUN_00454cb3(int param_1)

{
  HRESULT HVar1;
  
  if ((*(void **)(param_1 + 0x28) == (void *)0x0) &&
     (HVar1 = CreateStdAccessibleObject
                        (*(HWND *)(param_1 + 0x20),-4,(IID *)&riid_004a09c4,
                         (void **)(param_1 + 0x28)), HVar1 < 0)) {
    return HVar1;
  }
  return 0;
}


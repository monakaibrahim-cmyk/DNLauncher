// Address: 0x00420740
// Name: FUN_00420740
// Category: Launcher


void __fastcall FUN_00420740(int param_1)

{
  LRESULT LVar1;
  undefined *puVar2;
  
  LVar1 = SendMessageW(*(HWND *)(param_1 + 0x1b0),0xf0,0,0);
  puVar2 = FUN_00407210();
  if (LVar1 != *(int *)(puVar2 + 0x1c)) {
    LVar1 = SendMessageW(*(HWND *)(param_1 + 0x1b0),0xf0,0,0);
    puVar2 = FUN_00407210();
    *(LRESULT *)(puVar2 + 0x1c) = LVar1;
    puVar2 = FUN_00407210();
    FUN_00407280((int)puVar2,*(HWND *)(param_1 + 0x20));
    return;
  }
  return;
}


// Address: 0x0041de70
// Name: FUN_0041de70
// Category: Launcher


void __fastcall FUN_0041de70(undefined4 *param_1)

{
  int in_EAX;
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0x10;
  puVar1 = (undefined2 *)(in_EAX + 2);
  do {
    iVar2 = iVar2 + -1;
    *param_1 = CONCAT31(CONCAT21(*puVar1,*(undefined1 *)((int)puVar1 + -1)),
                        *(undefined1 *)(puVar1 + -1));
    puVar1 = puVar1 + 2;
    param_1 = param_1 + 1;
  } while (iVar2 != 0);
  return;
}


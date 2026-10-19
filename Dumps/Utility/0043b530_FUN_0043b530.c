// Address: 0x0043b530
// Name: FUN_0043b530
// Category: Utility


void FUN_0043b530(void)

{
  void *_Dst;
  int iVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  _Dst = (void *)(*(code *)**(undefined4 **)(unaff_EBX + 4))();
  *(int *)(unaff_EBX + 0x120) = (int)_Dst + 0x100;
  _memset(_Dst,0,0x100);
  iVar1 = 0;
  do {
    *(char *)(iVar1 + (int)_Dst + 0x100) = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  _memset((void *)((int)_Dst + 0x200),0xff,0x180);
  _memset((void *)((int)_Dst + 0x380),0,0x180);
  puVar2 = *(undefined4 **)(unaff_EBX + 0x120);
  puVar3 = (undefined4 *)((int)_Dst + 0x500);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


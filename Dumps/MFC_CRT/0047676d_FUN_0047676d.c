// Address: 0x0047676d
// Name: FUN_0047676d
// Category: MFC_CRT


int __cdecl FUN_0047676d(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_0047e7dd(DAT_004cd38c);
  piVar2 = (int *)FUN_0047e7dd(DAT_004cd388);
  if (_Memory <= piVar2) {
    uVar1 = ((int)piVar2 - (int)_Memory) + 4;
    if (3 < uVar1) {
      sVar3 = __msize(_Memory);
      if (sVar3 < uVar1) {
        sVar4 = 0x800;
        if (sVar3 < 0x800) {
          sVar4 = sVar3;
        }
        if ((sVar4 + sVar3 < sVar3) ||
           (pvVar5 = __realloc_crt(_Memory,sVar4 + sVar3), pvVar5 == (void *)0x0)) {
          if (sVar3 + 0x10 < sVar3) {
            return 0;
          }
          pvVar5 = __realloc_crt(_Memory,sVar3 + 0x10);
          if (pvVar5 == (void *)0x0) {
            return 0;
          }
        }
        piVar2 = (int *)((int)pvVar5 + ((int)piVar2 - (int)_Memory >> 2) * 4);
        DAT_004cd38c = FUN_0047e766((int)pvVar5);
      }
      iVar6 = FUN_0047e766(param_1);
      *piVar2 = iVar6;
      DAT_004cd388 = FUN_0047e766((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}


// Address: 0x00475f5f
// Name: FUN_00475f5f
// Category: MFC_CRT


int * __cdecl FUN_00475f5f(int *param_1,uint param_2,uint param_3)

{
  DWORD *pDVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar4 = (uint *)0x0;
  if ((param_2 == 0) || (param_3 <= 0xffffffe0 / param_2)) {
    puVar3 = (uint *)(param_2 * param_3);
    if (param_1 != (int *)0x0) {
      puVar4 = (uint *)__msize(param_1);
    }
    piVar2 = FUN_00475d44(param_1,puVar3);
    if ((piVar2 != (int *)0x0) && (puVar4 < puVar3)) {
      _memset((void *)((int)puVar4 + (int)piVar2),0,(int)puVar3 - (int)puVar4);
    }
  }
  else {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0xc;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    piVar2 = (int *)0x0;
  }
  return piVar2;
}


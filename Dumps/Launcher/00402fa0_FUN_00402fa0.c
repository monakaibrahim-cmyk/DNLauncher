// Address: 0x00402fa0
// Name: FUN_00402fa0
// Category: Launcher


undefined4 __thiscall FUN_00402fa0(void *this,HMODULE param_1,uint param_2)

{
  ushort uVar1;
  HRSRC pHVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  errno_t eVar6;
  uint uVar7;
  
  pHVar2 = FindResourceW(param_1,(LPCWSTR)((param_2 >> 4) + 1 & 0xffff),(LPCWSTR)0x6);
  if ((pHVar2 == (HRSRC)0x0) ||
     (puVar3 = (ushort *)FUN_004030b0(param_1,pHVar2,param_2), puVar3 == (ushort *)0x0)) {
    return 0;
  }
  uVar7 = (uint)*puVar3;
  if ((int)(1U - *(int *)(*(int *)this + -4) | *(int *)(*(int *)this + -8) - uVar7) < 0) {
    ATL::CSimpleStringT<char,0>::PrepareWrite2(this,uVar7);
  }
  uVar4 = (uint)*puVar3;
  if (uVar4 == 0xffffffff) {
    puVar5 = puVar3 + 1;
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (uVar1 != 0);
    uVar4 = ((int)puVar5 - (int)(puVar3 + 2) >> 1) + 1;
  }
  eVar6 = _memcpy_s(*(void **)this,uVar7 * 2,puVar3 + 1,uVar4 * 2);
  FUN_00403120(eVar6);
  if (*(int *)(*(int *)this + -8) < (int)uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80070057);
  }
  *(uint *)(*(int *)this + -0xc) = uVar7;
  *(undefined2 *)(uVar7 * 2 + *(int *)this) = 0;
  return 1;
}


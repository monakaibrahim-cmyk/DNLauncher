// Address: 0x0041d570
// Name: FUN_0041d570
// Category: Launcher


void FUN_0041d570(uint param_1,uint param_2,uint param_3)

{
  HRSRC pHVar1;
  int unaff_ESI;
  int iVar2;
  HMODULE pHVar3;
  
  FUN_004349e0(unaff_ESI + 0x100);
  FUN_004349e0(unaff_ESI + 0x2fc);
  FUN_004349e0(unaff_ESI + 0x4f8);
  FUN_004349e0(unaff_ESI + 0x6f4);
  if (param_1 != 0) {
    pHVar3 = (HMODULE)0x0;
    iVar2 = 3;
    pHVar1 = FindResourceW((HMODULE)0x0,(LPCWSTR)(param_1 & 0xffff),(LPCWSTR)&lpType_004b2fec);
    FUN_00435440((void *)(unaff_ESI + 0x100),pHVar1,iVar2,pHVar3);
  }
  if (param_2 != 0) {
    pHVar3 = (HMODULE)0x0;
    iVar2 = 3;
    pHVar1 = FindResourceW((HMODULE)0x0,(LPCWSTR)(param_2 & 0xffff),(LPCWSTR)&lpType_004b2fec);
    FUN_00435440((void *)(unaff_ESI + 0x2fc),pHVar1,iVar2,pHVar3);
  }
  if (param_3 != 0) {
    pHVar3 = (HMODULE)0x0;
    iVar2 = 3;
    pHVar1 = FindResourceW((HMODULE)0x0,(LPCWSTR)(param_3 & 0xffff),(LPCWSTR)&lpType_004b2fec);
    FUN_00435440((void *)(unaff_ESI + 0x4f8),pHVar1,iVar2,pHVar3);
  }
  if (param_1 != 0) {
    pHVar3 = (HMODULE)0x0;
    iVar2 = 3;
    pHVar1 = FindResourceW((HMODULE)0x0,(LPCWSTR)(param_1 & 0xffff),(LPCWSTR)&lpType_004b2fec);
    FUN_00435440((void *)(unaff_ESI + 0x6f4),pHVar1,iVar2,pHVar3);
  }
  *(undefined2 *)(unaff_ESI + 0x904) = 0;
  *(undefined4 *)(unaff_ESI + 0x900) = 0;
  *(undefined2 *)(unaff_ESI + 0x8f4) = 0;
  *(undefined4 *)(unaff_ESI + 0x8f0) = 1;
  return;
}


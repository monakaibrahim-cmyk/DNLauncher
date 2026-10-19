// Address: 0x0047b504
// Name: vscan_fn
// Category: MFC_CRT


/* Library Function - Single Match
    _vscan_fn
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl vscan_fn(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  short *unaff_ESI;
  
  FUN_0047b6a4(unaff_ESI);
  if ((unaff_ESI == (short *)0x0) || (param_2 == 0)) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (*(code *)param_1)(&stack0xffffffdc,param_2,param_3,param_4);
  }
  return uVar2;
}


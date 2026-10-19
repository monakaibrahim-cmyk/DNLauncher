// Address: 0x0047a67c
// Name: __cinit
// Category: MFC_CRT


/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((PTR___fpmath_004a5248 != (undefined *)0x0) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_004a5248), BVar1 != 0)) {
    (*(code *)PTR___fpmath_004a5248)(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_0049c7f8,(undefined4 *)&DAT_0049c818);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_0047e6d6);
    puVar3 = &DAT_0049c760;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_0049c7f4);
    if ((DAT_004cd394 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_004cd394), BVar1 != 0)) {
      (*DAT_004cd394)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}


// Address: 0x0048bff0
// Name: __d_inttype
// Category: MFC_CRT


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __d_inttype
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __d_inttype(double param_1)

{
  double dVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = __fpclass(param_1);
  if ((uVar2 & 0x90) == 0) {
    fVar3 = __frnd(param_1);
    if (fVar3 == (float10)param_1) {
      dVar1 = param_1 * _DAT_004b4728;
      fVar3 = __frnd(dVar1);
      if (fVar3 == (float10)dVar1) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}


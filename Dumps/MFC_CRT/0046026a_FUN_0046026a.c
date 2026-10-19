// Address: 0x0046026a
// Name: FUN_0046026a
// Category: MFC_CRT


void __thiscall FUN_0046026a(void *this,ushort param_1,UINT param_2,SAFEARRAYBOUND *param_3)

{
  SAFEARRAY *psa;
  UINT UVar1;
  
  if ((param_2 != 0) && (param_3 != (SAFEARRAYBOUND *)0x0)) {
    if (((param_1 & 0x7000) == 0) && ((param_1 != 0 && (param_1 != 1)))) {
      VariantClear(this);
      psa = SafeArrayCreate(param_1,param_2,param_3);
      *(SAFEARRAY **)((int)this + 8) = psa;
      if (psa == (SAFEARRAY *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_004529b4();
      }
      *(ushort *)this = param_1 | 0x2000;
      *(UINT *)((int)this + 0x14) = param_2;
      UVar1 = SafeArrayGetElemsize(psa);
      *(UINT *)((int)this + 0x10) = UVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}


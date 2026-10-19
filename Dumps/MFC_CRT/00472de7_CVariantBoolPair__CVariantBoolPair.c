// Address: 0x00472de7
// Name: CVariantBoolPair::CVariantBoolPair
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CVariantBoolPair::CVariantBoolPair(int *,short *,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CVariantBoolPair::CVariantBoolPair(CVariantBoolPair *this,int *param_1,short *param_2,int param_3)

{
  *(int *)(this + 8) = param_3;
  *(int **)this = param_1;
  *(short **)(this + 4) = param_2;
  if ((param_1 != (int *)0x0) && (param_2 != (short *)0x0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}


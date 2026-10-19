// Address: 0x00473060
// Name: SerializeElements<CVariantBoolPair>
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall SerializeElements<class CVariantBoolPair>(class CArchive &,class CVariantBoolPair
   *,int)
   
   Library: Visual Studio 2005 Release */

void SerializeElements<CVariantBoolPair>(CArchive *param_1,CVariantBoolPair *param_2,int param_3)

{
  uint uVar1;
  
  if ((param_3 != 0) && (param_2 == (CVariantBoolPair *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    for (; param_3 != 0; param_3 = param_3 - uVar1) {
      uVar1 = 0xaaaaaaa;
      if ((uint)param_3 < 0xaaaaaaa) {
        uVar1 = param_3;
      }
      CArchive::EnsureRead(param_1,param_2,uVar1 * 0xc);
      param_2 = param_2 + uVar1 * 0xc;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - uVar1) {
      uVar1 = 0xaaaaaaa;
      if ((uint)param_3 < 0xaaaaaaa) {
        uVar1 = param_3;
      }
      CArchive::Write(param_1,param_2,uVar1 * 0xc);
      param_2 = param_2 + uVar1 * 0xc;
    }
  }
  return;
}


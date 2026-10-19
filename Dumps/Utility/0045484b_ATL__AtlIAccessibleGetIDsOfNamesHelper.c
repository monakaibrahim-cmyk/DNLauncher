// Address: 0x0045484b
// Name: ATL::AtlIAccessibleGetIDsOfNamesHelper
// Category: Utility


/* Library Function - Single Match
    long __stdcall ATL::AtlIAccessibleGetIDsOfNamesHelper(struct _GUID const &,wchar_t * *,unsigned
   int,unsigned long,long *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long ATL::AtlIAccessibleGetIDsOfNamesHelper
               (_GUID *param_1,wchar_t **param_2,uint param_3,ulong param_4,long *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      bVar1 = false;
      uVar4 = 0;
      do {
        iVar2 = lstrcmpW(param_2[uVar3],*(LPCWSTR *)((int)&lpString2_004c26c0 + uVar4));
        if (iVar2 == 0) {
          bVar1 = true;
          param_5[uVar3] = *(long *)((int)&DAT_004c2670 + uVar4);
        }
        uVar4 = uVar4 + 4;
      } while (uVar4 < 0x4c);
      if (!bVar1) {
        return -0x7ffdfffa;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return 0;
}


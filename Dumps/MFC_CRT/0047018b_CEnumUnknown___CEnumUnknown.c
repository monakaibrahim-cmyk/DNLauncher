// Address: 0x0047018b
// Name: CEnumUnknown::~CEnumUnknown
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CEnumUnknown::~CEnumUnknown(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CEnumUnknown::~CEnumUnknown(CEnumUnknown *this)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  *(undefined ***)this = vftable;
  uVar3 = 0;
  if ((*(int *)(this + 0x24) == 0) && (iVar1 = *(int *)(this + 0x28), *(int *)(this + 0x30) != 0)) {
    do {
      piVar2 = *(int **)(iVar1 + uVar3 * 4);
      (**(code **)(*piVar2 + 8))(piVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(this + 0x30));
  }
  FUN_00473978((CCmdTarget *)this);
  return;
}


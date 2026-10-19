// Address: 0x0047310c
// Name: CVariantBoolConverter::CopyVarBoolsIntoBOOLs
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CVariantBoolConverter::CopyVarBoolsIntoBOOLs(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CVariantBoolConverter::CopyVarBoolsIntoBOOLs(CVariantBoolConverter *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(this + 8)) {
    do {
      piVar1 = (int *)FUN_00472dcb(this,iVar4);
      if ((*piVar1 == 0) || (iVar2 = FUN_00472dcb(this,iVar4), *(int *)(iVar2 + 4) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_004529e8();
      }
      iVar2 = FUN_00472dcb(this,iVar4);
      puVar3 = (undefined4 *)FUN_00472dcb(this,iVar4);
      iVar4 = iVar4 + 1;
      *(uint *)*puVar3 = (uint)(**(short **)(iVar2 + 4) != 0);
    } while (iVar4 < *(int *)(this + 8));
  }
  return;
}


// Address: 0x0047271e
// Name: CMemFile::GrowFile
// Category: MFC_CRT


/* Library Function - Single Match
    protected: virtual void __thiscall CMemFile::GrowFile(unsigned long)
   
   Library: Visual Studio 2005 Release */

void __thiscall CMemFile::GrowFile(CMemFile *this,ulong param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x18);
  if (param_1 <= uVar2) {
    return;
  }
  if (*(int *)(this + 0x10) != 0) {
    for (; uVar2 < param_1; uVar2 = uVar2 + *(int *)(this + 0x10)) {
    }
    if (*(int *)(this + 0x20) == 0) {
      iVar1 = (**(code **)(*(int *)this + 0x54))();
    }
    else {
      iVar1 = (**(code **)(*(int *)this + 0x58))(*(int *)(this + 0x20),uVar2);
    }
    if (iVar1 != 0) {
      *(int *)(this + 0x20) = iVar1;
      *(uint *)(this + 0x18) = uVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529b4();
}

